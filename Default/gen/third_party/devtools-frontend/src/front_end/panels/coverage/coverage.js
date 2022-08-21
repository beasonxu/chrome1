import*as e from"../../core/common/common.js";import*as t from"../../core/platform/platform.js";import*as o from"../../core/sdk/sdk.js";import*as s from"../../models/text_utils/text_utils.js";import*as i from"../../core/i18n/i18n.js";import*as r from"../../models/formatter/formatter.js";import*as n from"../../models/workspace/workspace.js";import*as a from"../../ui/legacy/components/data_grid/data_grid.js";import*as l from"../../ui/legacy/legacy.js";import*as c from"../../core/host/host.js";import*as d from"../../models/bindings/bindings.js";var h;!function(e){e.CoverageUpdated="CoverageUpdated",e.CoverageReset="CoverageReset"}(h||(h={}));class g extends o.SDKModel.SDKModel{cpuProfilerModel;cssModel;debuggerModel;coverageByURL;coverageByContentProvider;coverageUpdateTimes;suspensionState;pollTimer;currentPollPromise;shouldResumePollingOnResume;jsBacklog;cssBacklog;performanceTraceRecording;constructor(e){super(e),this.cpuProfilerModel=e.model(o.CPUProfilerModel.CPUProfilerModel),this.cssModel=e.model(o.CSSModel.CSSModel),this.debuggerModel=e.model(o.DebuggerModel.DebuggerModel),this.coverageByURL=new Map,this.coverageByContentProvider=new Map,this.coverageUpdateTimes=new Set,this.suspensionState="Active",this.pollTimer=null,this.currentPollPromise=null,this.shouldResumePollingOnResume=!1,this.jsBacklog=[],this.cssBacklog=[],this.performanceTraceRecording=!1}async start(e){if("Active"!==this.suspensionState)throw Error("Cannot start CoverageModel while it is not active.");const t=[];return this.cssModel&&(this.clearCSS(),this.cssModel.addEventListener(o.CSSModel.Events.StyleSheetAdded,this.handleStyleSheetAdded,this),t.push(this.cssModel.startCoverage())),this.cpuProfilerModel&&t.push(this.cpuProfilerModel.startPreciseCoverage(e,this.preciseCoverageDeltaUpdate.bind(this))),await Promise.all(t),Boolean(this.cssModel||this.cpuProfilerModel)}preciseCoverageDeltaUpdate(e,t,o){this.coverageUpdateTimes.add(e),this.backlogOrProcessJSCoverage(o,e)}async stop(){await this.stopPolling();const e=[];this.cpuProfilerModel&&e.push(this.cpuProfilerModel.stopPreciseCoverage()),this.cssModel&&(e.push(this.cssModel.stopCoverage()),this.cssModel.removeEventListener(o.CSSModel.Events.StyleSheetAdded,this.handleStyleSheetAdded,this)),await Promise.all(e)}reset(){this.coverageByURL=new Map,this.coverageByContentProvider=new Map,this.coverageUpdateTimes=new Set,this.dispatchEventToListeners(h.CoverageReset)}async startPolling(){this.currentPollPromise||"Active"!==this.suspensionState||await this.pollLoop()}async pollLoop(){this.clearTimer(),this.currentPollPromise=this.pollAndCallback(),await this.currentPollPromise,("Active"===this.suspensionState||this.performanceTraceRecording)&&(this.pollTimer=window.setTimeout((()=>this.pollLoop()),200))}async stopPolling(){this.clearTimer(),await this.currentPollPromise,this.currentPollPromise=null,await this.pollAndCallback()}async pollAndCallback(){if("Suspended"===this.suspensionState&&!this.performanceTraceRecording)return;const e=await this.takeAllCoverage();console.assert("Suspended"!==this.suspensionState||Boolean(this.performanceTraceRecording),"CoverageModel was suspended while polling."),e.length&&this.dispatchEventToListeners(h.CoverageUpdated,e)}clearTimer(){this.pollTimer&&(clearTimeout(this.pollTimer),this.pollTimer=null)}async preSuspendModel(e){"Active"===this.suspensionState&&(this.suspensionState="Suspending","performance-timeline"!==e?this.currentPollPromise&&(await this.stopPolling(),this.shouldResumePollingOnResume=!0):this.performanceTraceRecording=!0)}async suspendModel(e){this.suspensionState="Suspended"}async resumeModel(){}async postResumeModel(){this.suspensionState="Active",this.performanceTraceRecording=!1,this.shouldResumePollingOnResume&&(this.shouldResumePollingOnResume=!1,await this.startPolling())}entries(){return Array.from(this.coverageByURL.values())}getCoverageForUrl(e){return this.coverageByURL.get(e)||null}usageForRange(e,t,o){const s=this.coverageByContentProvider.get(e);return s&&s.usageForRange(t,o)}clearCSS(){for(const e of this.coverageByContentProvider.values()){if(1!==e.type())continue;const t=e.getContentProvider();this.coverageByContentProvider.delete(t);const o=this.coverageByURL.get(e.url());if(!o)continue;const s=`${t.startLine}:${t.startColumn}`;o.removeCoverageEntry(s,e),0===o.numberOfEntries()&&this.coverageByURL.delete(e.url())}if(this.cssModel)for(const e of this.cssModel.getAllStyleSheetHeaders())this.addStyleSheetToCSSCoverage(e)}async takeAllCoverage(){const[e,t]=await Promise.all([this.takeCSSCoverage(),this.takeJSCoverage()]);return[...e,...t]}async takeJSCoverage(){if(!this.cpuProfilerModel)return[];const{coverage:e,timestamp:t}=await this.cpuProfilerModel.takePreciseCoverage();return this.coverageUpdateTimes.add(t),this.backlogOrProcessJSCoverage(e,t)}getCoverageUpdateTimes(){return this.coverageUpdateTimes}async backlogOrProcessJSCoverage(e,t){if(e.length>0&&this.jsBacklog.push({rawCoverageData:e,stamp:t}),"Active"!==this.suspensionState)return[];const o=(e,t)=>e.stamp-t.stamp,s=[];for(const{rawCoverageData:e,stamp:t}of this.jsBacklog.sort(o))s.push(this.processJSCoverage(e,t));return this.jsBacklog=[],s.flat()}async processJSBacklog(){this.backlogOrProcessJSCoverage([],0)}processJSCoverage(e,t){if(!this.debuggerModel)return[];const o=[];for(const s of e){const e=this.debuggerModel.scriptForId(s.scriptId);if(!e)continue;const i=[];let r=2;for(const e of s.functions){!1!==e.isBlockCoverage||1===e.ranges.length&&!e.ranges[0].count||(r|=4);for(const t of e.ranges)i.push(t)}const n=this.addCoverage(e,e.contentLength,e.lineOffset,e.columnOffset,i,r,t);n&&o.push(n)}return o}handleStyleSheetAdded(e){this.addStyleSheetToCSSCoverage(e.data)}async takeCSSCoverage(){if(!this.cssModel||"Active"!==this.suspensionState)return[];const{coverage:e,timestamp:t}=await this.cssModel.takeCoverageDelta();return this.coverageUpdateTimes.add(t),this.backlogOrProcessCSSCoverage(e,t)}async backlogOrProcessCSSCoverage(e,t){if(e.length>0&&this.cssBacklog.push({rawCoverageData:e,stamp:t}),"Active"!==this.suspensionState)return[];const o=(e,t)=>e.stamp-t.stamp,s=[];for(const{rawCoverageData:e,stamp:t}of this.cssBacklog.sort(o))s.push(this.processCSSCoverage(e,t));return this.cssBacklog=[],s.flat()}processCSSCoverage(e,t){if(!this.cssModel)return[];const o=[],s=new Map;for(const t of e){const e=this.cssModel.styleSheetHeaderForId(t.styleSheetId);if(!e)continue;let o=s.get(e);o||(o=[],s.set(e,o)),o.push({startOffset:t.startOffset,endOffset:t.endOffset,count:Number(t.used)})}for(const e of s){const s=e[0],i=e[1],r=this.addCoverage(s,s.contentLength,s.startLine,s.startColumn,i,1,t);r&&o.push(r)}return o}static convertToDisjointSegments(e,t){e.sort(((e,t)=>e.startOffset-t.startOffset));const o=[],s=[];for(const t of e){let e=s[s.length-1];for(;e&&e.endOffset<=t.startOffset;)i(e.endOffset,e.count),s.pop(),e=s[s.length-1];i(t.startOffset,e?e.count:0),s.push(t)}for(let e=s.pop();e;e=s.pop())i(e.endOffset,e.count);function i(e,s){const i=o[o.length-1];if(i){if(i.end===e)return;if(i.count===s)return void(i.end=e)}o.push({end:e,count:s,stamp:t})}return o}addStyleSheetToCSSCoverage(e){this.addCoverage(e,e.contentLength,e.startLine,e.startColumn,[],1,Date.now())}addCoverage(e,t,o,s,i,r,n){const a=e.contentURL();if(!a)return null;let l=this.coverageByURL.get(a),c=!1;l||(c=!0,l=new p(a),this.coverageByURL.set(a,l));const d=l.ensureEntry(e,t,o,s,r);this.coverageByContentProvider.set(e,d);const h=g.convertToDisjointSegments(i,n),u=h[h.length-1];u&&u.end<t&&h.push({end:t,stamp:n,count:0});const v=d.mergeCoverage(h);return c||0!==v?(l.addToSizes(v,0),d):null}async exportReport(e){const t=[],o=Array.from(this.coverageByURL.keys()).sort();for(const e of o){const o=this.coverageByURL.get(e);if(!o)continue;const s=o.url();s.startsWith("extensions::")||s.startsWith("chrome-extension://")||t.push(...await o.entriesForExport())}await e.write(JSON.stringify(t,void 0,2)),e.close()}}function u(e,t){const[o,s]=e.split(":"),[i,r]=t.split(":");return Number.parseInt(o,10)-Number.parseInt(i,10)||Number.parseInt(s,10)-Number.parseInt(r,10)}o.SDKModel.SDKModel.register(g,{capabilities:o.Target.Capability.None,autostart:!1});class p extends e.ObjectWrapper.ObjectWrapper{urlInternal;coverageInfoByLocation;sizeInternal;usedSizeInternal;typeInternal;isContentScriptInternal;constructor(e){super(),this.urlInternal=e,this.coverageInfoByLocation=new Map,this.sizeInternal=0,this.usedSizeInternal=0,this.isContentScriptInternal=!1}url(){return this.urlInternal}type(){return this.typeInternal}size(){return this.sizeInternal}usedSize(){return this.usedSizeInternal}unusedSize(){return this.sizeInternal-this.usedSizeInternal}usedPercentage(){return 0===this.sizeInternal?0:this.usedSize()/this.size()}unusedPercentage(){return 0===this.sizeInternal?100:this.unusedSize()/this.size()}isContentScript(){return this.isContentScriptInternal}entries(){return this.coverageInfoByLocation.values()}numberOfEntries(){return this.coverageInfoByLocation.size}removeCoverageEntry(e,t){this.coverageInfoByLocation.delete(e)&&this.addToSizes(-t.getUsedSize(),-t.getSize())}addToSizes(e,t){this.usedSizeInternal+=e,this.sizeInternal+=t,0===e&&0===t||this.dispatchEventToListeners(p.Events.SizesChanged)}ensureEntry(e,t,o,s,i){const r=`${o}:${s}`;let n=this.coverageInfoByLocation.get(r);return 2&i&&!this.coverageInfoByLocation.size&&(this.isContentScriptInternal=e.isContentScript()),this.typeInternal|=i,n?(n.addCoverageType(i),n):(2&i&&!this.coverageInfoByLocation.size&&(this.isContentScriptInternal=e.isContentScript()),n=new f(e,t,o,s,i),this.coverageInfoByLocation.set(r,n),this.addToSizes(0,t),n)}async getFullText(){let e=!1;const t=this.url();for(const o of this.coverageInfoByLocation.values()){const{lineOffset:s,columnOffset:i}=o.getOffsets();if(s||i){e=Boolean(t);break}}if(!e)return null;const i=o.ResourceTreeModel.ResourceTreeModel.resourceForURL(t);if(!i)return null;const r=(await i.requestContent()).content;return new s.Text.Text(r||"")}entriesForExportBasedOnFullText(e){const t=Array.from(this.coverageInfoByLocation.keys()).sort(u),o={url:this.url(),ranges:[],text:e.value()};for(const s of t){const t=this.coverageInfoByLocation.get(s);if(!t)continue;const{lineOffset:i,columnOffset:r}=t.getOffsets(),n=e?e.offsetFromPosition(i,r):0;o.ranges.push(...t.rangesForExport(n))}return o}async entriesForExportBasedOnContent(){const e=Array.from(this.coverageInfoByLocation.keys()).sort(u),t=[];for(const o of e){const e=this.coverageInfoByLocation.get(o);if(!e)continue;const s={url:this.url(),ranges:e.rangesForExport(),text:(await e.getContentProvider().requestContent()).content};t.push(s)}return t}async entriesForExport(){const e=await this.getFullText();return e?[await this.entriesForExportBasedOnFullText(e)]:this.entriesForExportBasedOnContent()}}!function(e){let t;!function(e){e.SizesChanged="SizesChanged"}(t=e.Events||(e.Events={}))}(p||(p={}));const v=(e,t)=>{const o=[];let s=0,i=0;for(;s<e.length&&i<t.length;){const r=e[s],n=t[i],a=(r.count||0)+(n.count||0),l=Math.min(r.end,n.end),c=o[o.length-1],d=Math.min(r.stamp,n.stamp);c&&c.count===a&&c.stamp===d?c.end=l:o.push({end:l,count:a,stamp:d}),r.end<=n.end&&s++,r.end>=n.end&&i++}for(;s<e.length;s++)o.push(e[s]);for(;i<t.length;i++)o.push(t[i]);return o};class f{contentProvider;size;usedSize;statsByTimestamp;lineOffset;columnOffset;coverageType;segments;constructor(e,t,o,s,i){this.contentProvider=e,this.size=t,this.usedSize=0,this.statsByTimestamp=new Map,this.lineOffset=o,this.columnOffset=s,this.coverageType=i,this.segments=[]}getContentProvider(){return this.contentProvider}url(){return this.contentProvider.contentURL()}type(){return this.coverageType}addCoverageType(e){this.coverageType|=e}getOffsets(){return{lineOffset:this.lineOffset,columnOffset:this.columnOffset}}mergeCoverage(e){const t=this.usedSize;return this.segments=v(this.segments,e),this.updateStats(),this.usedSize-t}usedByTimestamp(){return this.statsByTimestamp}getSize(){return this.size}getUsedSize(){return this.usedSize}usageForRange(e,o){let s=t.ArrayUtilities.upperBound(this.segments,e,((e,t)=>e-t.end));for(;s<this.segments.length&&this.segments[s].end<o;++s)if(this.segments[s].count)return!0;return s<this.segments.length&&Boolean(this.segments[s].count)}updateStats(){this.statsByTimestamp=new Map,this.usedSize=0;let e=0;for(const t of this.segments){let o=this.statsByTimestamp.get(t.stamp);if(void 0===o&&(o=0),t.count){const s=t.end-e;this.usedSize+=s,this.statsByTimestamp.set(t.stamp,o+s)}e=t.end}}rangesForExport(e=0){const t=[];let o=0;for(const s of this.segments){if(s.count){const i=t.length>0?t[t.length-1]:null;i&&i.end===o+e?i.end=s.end+e:t.push({start:o+e,end:s.end+e})}o=s.end}return t}}var m=Object.freeze({__proto__:null,get Events(){return h},CoverageModel:g,get URLCoverageInfo(){return p},mergeSegments:v,CoverageInfo:f});const S=new CSSStyleSheet;S.replaceSync(".data-grid{border:none}.data-grid td .url-outer{width:100%;display:inline-flex;justify-content:flex-start}.data-grid td .url-outer .filter-highlight{font-weight:700}.data-grid td .url-prefix{overflow-x:hidden;text-overflow:ellipsis}.data-grid td .url-suffix{flex:none}.data-grid td .bar{display:inline-block;height:8px;border:1px solid transparent}.data-grid .selected td .bar{border-top:1px var(--color-background) solid;border-bottom:1px var(--color-background) solid}.data-grid .selected td .bar:last-child{border-right:1px var(--color-background) solid}.data-grid .selected td .bar:first-child{border-left:1px var(--color-background) solid}.data-grid td .bar-unused-size{background-color:var(--color-red)}.data-grid td .bar-used-size{background-color:var(--color-green)}.data-grid td .percent-value{width:6ex;display:inline-block}.data-grid tr:not(.selected) td .percent-value{color:var(--color-text-secondary)}@media (forced-colors:active){.data-grid td .bar-container{forced-color-adjust:none}.data-grid td .bar-unused-size{background-color:ButtonText}.data-grid td .bar-used-size{background-color:ButtonFace}.data-grid td .bar{border-color:ButtonText}.data-grid .selected td .bar{border-top-color:HighlightText;border-bottom-color:HighlightText}.data-grid .selected td .bar:last-child{border-right-color:HighlightText}.data-grid .selected td .bar:first-child{border-left-color:HighlightText}.data-grid:focus tr.selected span.percent-value{color:HighlightText}}\n/*# sourceURL=coverageListView.css */\n");const C={css:"CSS",jsPerFunction:"JS (per function)",jsPerBlock:"JS (per block)",url:"URL",type:"Type",totalBytes:"Total Bytes",unusedBytes:"Unused Bytes",usageVisualization:"Usage Visualization",codeCoverage:"Code Coverage",jsCoverageWithPerFunction:"JS coverage with per function granularity: Once a function was executed, the whole function is marked as covered.",jsCoverageWithPerBlock:"JS coverage with per block granularity: Once a block of JavaScript was executed, that block is marked as covered.",sBytes:"{n, plural, =1 {# byte} other {# bytes}}",sBytesS:"{n, plural, =1 {# byte, {percentage}} other {# bytes, {percentage}}}",sBytesSBelongToFunctionsThatHave:"{PH1} bytes ({PH2}) belong to functions that have not (yet) been executed.",sBytesSBelongToBlocksOf:"{PH1} bytes ({PH2}) belong to blocks of JavaScript that have not (yet) been executed.",sBytesSBelongToFunctionsThatHaveExecuted:"{PH1} bytes ({PH2}) belong to functions that have executed at least once.",sBytesSBelongToBlocksOfJavascript:"{PH1} bytes ({PH2}) belong to blocks of JavaScript that have executed at least once.",sOfFileUnusedSOfFileUsed:"{PH1} % of file unused, {PH2} % of file used"},b=i.i18n.registerUIStrings("panels/coverage/CoverageListView.ts",C),y=i.i18n.getLocalizedString.bind(void 0,b);function B(e){const t=[];return 1&e&&t.push(y(C.css)),4&e?t.push(y(C.jsPerFunction)):2&e&&t.push(y(C.jsPerBlock)),t.join("+")}class T extends l.Widget.VBox{nodeForCoverageInfo;isVisibleFilter;highlightRegExp;dataGrid;constructor(e){super(!0),this.nodeForCoverageInfo=new Map,this.isVisibleFilter=e,this.highlightRegExp=null;const t=[{id:"url",title:y(C.url),width:"250px",weight:3,fixedWidth:!1,sortable:!0},{id:"type",title:y(C.type),width:"45px",weight:1,fixedWidth:!0,sortable:!0},{id:"size",title:y(C.totalBytes),width:"60px",fixedWidth:!0,sortable:!0,align:a.DataGrid.Align.Right,weight:1},{id:"unusedSize",title:y(C.unusedBytes),width:"100px",fixedWidth:!0,sortable:!0,align:a.DataGrid.Align.Right,sort:a.DataGrid.Order.Descending,weight:1},{id:"bars",title:y(C.usageVisualization),width:"250px",fixedWidth:!1,sortable:!0,weight:1}];this.dataGrid=new a.SortableDataGrid.SortableDataGrid({displayName:y(C.codeCoverage),columns:t,editCallback:void 0,refreshCallback:void 0,deleteCallback:void 0}),this.dataGrid.setResizeMethod(a.DataGrid.ResizeMethod.Last),this.dataGrid.element.classList.add("flex-auto"),this.dataGrid.element.addEventListener("keydown",this.onKeyDown.bind(this),!1),this.dataGrid.addEventListener(a.DataGrid.Events.OpenedNode,this.onOpenedNode,this),this.dataGrid.addEventListener(a.DataGrid.Events.SortingChanged,this.sortingChanged,this);const o=this.dataGrid.asWidget();o.show(this.contentElement),this.setDefaultFocusedChild(o)}update(e){let t=!1;const o=e.reduce(((e,t)=>Math.max(e,t.size())),0),s=this.dataGrid.rootNode();for(const i of e){let e=this.nodeForCoverageInfo.get(i);e?this.isVisibleFilter(e.coverageInfo)&&(t=e.refreshIfNeeded(o)||t):(e=new P(i,o),this.nodeForCoverageInfo.set(i,e),this.isVisibleFilter(e.coverageInfo)&&(s.appendChild(e),t=!0))}t&&this.sortingChanged()}reset(){this.nodeForCoverageInfo.clear(),this.dataGrid.rootNode().removeChildren()}updateFilterAndHighlight(e){this.highlightRegExp=e;let t=!1;for(const e of this.nodeForCoverageInfo.values()){const o=this.isVisibleFilter(e.coverageInfo),s=Boolean(e.parent);o&&e.setHighlight(this.highlightRegExp),o!==s&&(t=!0,o?this.dataGrid.rootNode().appendChild(e):e.remove())}t&&this.sortingChanged()}selectByUrl(e){for(const[t,o]of this.nodeForCoverageInfo.entries())if(t.url()===e){o.revealAndSelect();break}}onOpenedNode(){this.revealSourceForSelectedNode()}onKeyDown(e){"Enter"===e.key&&(e.consume(!0),this.revealSourceForSelectedNode())}async revealSourceForSelectedNode(){const t=this.dataGrid.selectedNode;if(!t)return;const o=t.coverageInfo;let s=n.Workspace.WorkspaceImpl.instance().uiSourceCodeForURL(o.url());if(!s)return;s=(await r.SourceFormatter.SourceFormatter.instance().format(s)).formattedSourceCode,this.dataGrid.selectedNode===t&&e.Revealer.reveal(s)}sortingChanged(){const e=this.dataGrid.sortColumnId();if(!e)return;const t=P.sortFunctionForColumn(e);t&&this.dataGrid.sortNodes(t,!this.dataGrid.isSortOrderAscending())}wasShown(){super.wasShown(),this.registerCSSFiles([S])}}let x=null;function w(){return x||(x=new Intl.NumberFormat(i.DevToolsLocale.DevToolsLocale.instance().locale,{style:"percent",maximumFractionDigits:1})),x}class P extends a.SortableDataGrid.SortableDataGridNode{coverageInfo;lastUsedSize;url;maxSize;highlightRegExp;constructor(e,t){super(),this.coverageInfo=e,this.url=e.url(),this.maxSize=t,this.highlightRegExp=null}setHighlight(e){this.highlightRegExp!==e&&(this.highlightRegExp=e,this.refresh())}refreshIfNeeded(e){return(this.lastUsedSize!==this.coverageInfo.usedSize()||e!==this.maxSize)&&(this.lastUsedSize=this.coverageInfo.usedSize(),this.maxSize=e,this.refresh(),!0)}createCell(e){const o=this.createTD(e);switch(e){case"url":{l.Tooltip.Tooltip.install(o,this.url);const t=o.createChild("div","url-outer"),s=t.createChild("div","url-prefix"),i=t.createChild("div","url-suffix"),r=/^(.*)(\/[^/]*)$/.exec(this.url);s.textContent=r?r[1]:this.url,i.textContent=r?r[2]:"",this.highlightRegExp&&this.highlight(t,this.url),this.setCellAccessibleName(this.url,o,e);break}case"type":o.textContent=B(this.coverageInfo.type()),4&this.coverageInfo.type()?l.Tooltip.Tooltip.install(o,y(C.jsCoverageWithPerFunction)):2&this.coverageInfo.type()&&l.Tooltip.Tooltip.install(o,y(C.jsCoverageWithPerBlock));break;case"size":{o.createChild("span").textContent=t.NumberUtilities.withThousandsSeparator(this.coverageInfo.size()||0);const s=y(C.sBytes,{n:this.coverageInfo.size()||0});this.setCellAccessibleName(s,o,e);break}case"unusedSize":{const s=this.coverageInfo.unusedSize()||0,i=o.createChild("span"),r=o.createChild("span","percent-value");i.textContent=t.NumberUtilities.withThousandsSeparator(s);const n=w().format(this.coverageInfo.unusedPercentage());r.textContent=n;const a=y(C.sBytesS,{n:s,percentage:n});this.setCellAccessibleName(a,o,e);break}case"bars":{const t=o.createChild("div","bar-container"),s=w().format(this.coverageInfo.unusedPercentage()),i=w().format(this.coverageInfo.usedPercentage());if(this.coverageInfo.unusedSize()>0){const e=t.createChild("div","bar bar-unused-size");e.style.width=(this.coverageInfo.unusedSize()/this.maxSize*100||0)+"%",4&this.coverageInfo.type()?l.Tooltip.Tooltip.install(e,y(C.sBytesSBelongToFunctionsThatHave,{PH1:this.coverageInfo.unusedSize(),PH2:s})):2&this.coverageInfo.type()&&l.Tooltip.Tooltip.install(e,y(C.sBytesSBelongToBlocksOf,{PH1:this.coverageInfo.unusedSize(),PH2:s}))}if(this.coverageInfo.usedSize()>0){const e=t.createChild("div","bar bar-used-size");e.style.width=(this.coverageInfo.usedSize()/this.maxSize*100||0)+"%",4&this.coverageInfo.type()?l.Tooltip.Tooltip.install(e,y(C.sBytesSBelongToFunctionsThatHaveExecuted,{PH1:this.coverageInfo.usedSize(),PH2:i})):2&this.coverageInfo.type()&&l.Tooltip.Tooltip.install(e,y(C.sBytesSBelongToBlocksOfJavascript,{PH1:this.coverageInfo.usedSize(),PH2:i}))}this.setCellAccessibleName(y(C.sOfFileUnusedSOfFileUsed,{PH1:s,PH2:i}),o,e)}}return o}highlight(e,t){if(!this.highlightRegExp)return;const o=this.highlightRegExp.exec(t);if(!o||!o.length)return;const i=new s.TextRange.SourceRange(o.index,o[0].length);l.UIUtils.highlightRangesWithStyleClass(e,[i],"filter-highlight")}static sortFunctionForColumn(e){const t=(e,t)=>e.url.localeCompare(t.url);switch(e){case"url":return t;case"type":return(e,o)=>{const s=B(e.coverageInfo.type()),i=B(o.coverageInfo.type());return s.localeCompare(i)||t(e,o)};case"size":return(e,o)=>e.coverageInfo.size()-o.coverageInfo.size()||t(e,o);case"bars":case"unusedSize":return(e,o)=>e.coverageInfo.unusedSize()-o.coverageInfo.unusedSize()||t(e,o);default:return console.assert(!1,"Unknown sort field: "+e),null}}}var R=Object.freeze({__proto__:null,coverageTypeToString:B,CoverageListView:T,GridNode:P});class I{coverageModel;textByProvider;uiSourceCodeByContentProvider;constructor(e){this.coverageModel=e,this.textByProvider=new Map,this.uiSourceCodeByContentProvider=new t.MapUtilities.Multimap;for(const e of n.Workspace.WorkspaceImpl.instance().uiSourceCodes())e.setDecorationData("coverage",this);n.Workspace.WorkspaceImpl.instance().addEventListener(n.Workspace.Events.UISourceCodeAdded,this.onUISourceCodeAdded,this)}reset(){for(const e of n.Workspace.WorkspaceImpl.instance().uiSourceCodes())e.setDecorationData("coverage",void 0)}dispose(){this.reset(),n.Workspace.WorkspaceImpl.instance().removeEventListener(n.Workspace.Events.UISourceCodeAdded,this.onUISourceCodeAdded,this)}update(e){for(const t of e)for(const e of this.uiSourceCodeByContentProvider.get(t.getContentProvider()))e.setDecorationData("coverage",this)}async usageByLine(e){const t=[],{content:o}=await e.requestContent();if(!o)return[];const i=new s.Text.Text(o);await this.updateTexts(e,i);const r=i.lineEndings();for(let o=0;o<i.lineCount();++o){const s=r[o]-(o?r[o-1]:0)-1;if(!s){t.push(void 0);continue}const i=this.rawLocationsForSourceLocation(e,o,0),n=this.rawLocationsForSourceLocation(e,o,s),[a,l]=await Promise.all([i,n]);let c;for(let e=0,t=0;e<a.length;++e){const o=a[e];for(;t<l.length&&I.compareLocations(o,l[t])>=0;)++t;if(t>=l.length||l[t].id!==o.id)continue;const s=l[t++],i=this.textByProvider.get(s.contentProvider);if(!i)continue;const r=i.value();let n=Math.min(i.offsetFromPosition(o.line,o.column),r.length-1),d=Math.min(i.offsetFromPosition(s.line,s.column),r.length-1);for(;n<=d&&/\s/.test(r[n]);)++n;for(;n<=d&&/\s/.test(r[d]);)--d;if(n<=d&&(c=this.coverageModel.usageForRange(s.contentProvider,n,d)),c)break}t.push(c)}return t}async updateTexts(e,t){const o=[];for(let s=0;s<t.lineCount();++s)for(const t of await this.rawLocationsForSourceLocation(e,s,0))this.textByProvider.has(t.contentProvider)||(this.textByProvider.set(t.contentProvider,null),this.uiSourceCodeByContentProvider.set(t.contentProvider,e),o.push(this.updateTextForProvider(t.contentProvider)));await Promise.all(o)}async updateTextForProvider(e){const{content:t}=await e.requestContent();this.textByProvider.set(e,new s.Text.Text(t||""))}async rawLocationsForSourceLocation(e,t,o){const s=[],i=e.contentType();if(i.hasScripts()){let r=await d.DebuggerWorkspaceBinding.DebuggerWorkspaceBinding.instance().uiLocationToRawLocations(e,t,o);r=r.filter((e=>Boolean(e.script())));for(const e of r){const t=e.script();t&&(t.isInlineScript()&&i.isDocument()&&(e.lineNumber-=t.lineOffset,e.lineNumber||(e.columnNumber-=t.columnOffset)),s.push({id:`js:${e.scriptId}`,contentProvider:t,line:e.lineNumber,column:e.columnNumber}))}}if(i.isStyleSheet()||i.isDocument()){const r=d.CSSWorkspaceBinding.CSSWorkspaceBinding.instance().uiLocationToRawLocations(new n.UISourceCode.UILocation(e,t,o));for(const e of r){const t=e.header();t&&(t.isInline&&i.isDocument()&&(e.lineNumber-=t.startLine,e.lineNumber||(e.columnNumber-=t.startColumn)),s.push({id:`css:${e.styleSheetId}`,contentProvider:t,line:e.lineNumber,column:e.columnNumber}))}}return s.sort(I.compareLocations)}static compareLocations(e,t){return e.id.localeCompare(t.id)||e.line-t.line||e.column-t.column}onUISourceCodeAdded(e){e.data.setDecorationData("coverage",this)}}var k=Object.freeze({__proto__:null,decoratorType:"coverage",CoverageDecorationManager:I});const M=new CSSStyleSheet;M.replaceSync(":host{overflow:hidden}.coverage-toolbar-container{display:flex;border-bottom:1px solid var(--color-details-hairline);flex:0 0 auto}.coverage-toolbar{display:inline-block;width:100%}.coverage-toolbar-summary{background-color:var(--color-background-elevation-2);border-top:1px solid var(--color-details-hairline);padding-left:5px;flex:0 0 19px;display:flex;padding-right:5px}.coverage-toolbar-summary .coverage-message{padding-top:2px;padding-left:1ex;text-overflow:ellipsis;white-space:nowrap;overflow:hidden}.coverage-results{overflow-y:auto;display:flex;flex:auto}.landing-page{justify-content:center;align-items:center;padding:20px}.landing-page .message{white-space:pre-line}\n/*# sourceURL=coverageView.css */\n");const E={chooseCoverageGranularityPer:"Choose coverage granularity: Per function has low overhead, per block has significant overhead.",perFunction:"Per function",perBlock:"Per block",clearAll:"Clear all",export:"Export...",urlFilter:"URL filter",filterCoverageByType:"Filter coverage by type",all:"All",css:"CSS",javascript:"JavaScript",includeExtensionContentScripts:"Include extension content scripts",contentScripts:"Content scripts",clickTheReloadButtonSToReloadAnd:"Click the reload button {PH1} to reload and start capturing coverage.",clickTheRecordButtonSToStart:"Click the record button {PH1} to start capturing coverage.",filteredSTotalS:"Filtered: {PH1}  Total: {PH2}",sOfSSUsedSoFarSUnused:"{PH1} of {PH2} ({PH3}%) used so far, {PH4} unused."},F=i.i18n.registerUIStrings("panels/coverage/CoverageView.ts",E),z=i.i18n.getLocalizedString.bind(void 0,F);let L,U;class O extends l.Widget.VBox{model;decorationManager;resourceTreeModel;coverageTypeComboBox;coverageTypeComboBoxSetting;toggleRecordAction;toggleRecordButton;inlineReloadButton;startWithReloadButton;clearButton;saveButton;textFilterRegExp;filterInput;typeFilterValue;filterByTypeComboBox;showContentScriptsSetting;contentScriptsCheckbox;coverageResultsElement;landingPage;listView;statusToolbarElement;statusMessageElement;constructor(){super(!0),this.model=null,this.decorationManager=null,this.resourceTreeModel=null;const t=this.contentElement.createChild("div","coverage-toolbar-container"),s=new l.Toolbar.Toolbar("coverage-toolbar",t);s.makeWrappable(!0),this.coverageTypeComboBox=new l.Toolbar.ToolbarComboBox(this.onCoverageTypeComboBoxSelectionChanged.bind(this),z(E.chooseCoverageGranularityPer));const i=[{label:z(E.perFunction),value:6},{label:z(E.perBlock),value:2}];for(const e of i)this.coverageTypeComboBox.addOption(this.coverageTypeComboBox.createOption(e.label,`${e.value}`));this.coverageTypeComboBoxSetting=e.Settings.Settings.instance().createSetting("coverageViewCoverageType",0),this.coverageTypeComboBox.setSelectedIndex(this.coverageTypeComboBoxSetting.get()),this.coverageTypeComboBox.setEnabled(!0),s.appendToolbarItem(this.coverageTypeComboBox),this.toggleRecordAction=l.ActionRegistry.ActionRegistry.instance().action("coverage.toggle-recording"),this.toggleRecordButton=l.Toolbar.Toolbar.createActionButton(this.toggleRecordAction),s.appendToolbarItem(this.toggleRecordButton);const r=o.TargetManager.TargetManager.instance().mainTarget(),n=r&&r.model(o.ResourceTreeModel.ResourceTreeModel);if(this.inlineReloadButton=null,n){const e=l.ActionRegistry.ActionRegistry.instance().action("coverage.start-with-reload");this.startWithReloadButton=l.Toolbar.Toolbar.createActionButton(e),s.appendToolbarItem(this.startWithReloadButton),this.toggleRecordButton.setEnabled(!1),this.toggleRecordButton.setVisible(!1)}this.clearButton=new l.Toolbar.ToolbarButton(z(E.clearAll),"largeicon-clear"),this.clearButton.addEventListener(l.Toolbar.ToolbarButton.Events.Click,this.clear.bind(this)),s.appendToolbarItem(this.clearButton),s.appendSeparator(),this.saveButton=new l.Toolbar.ToolbarButton(z(E.export),"largeicon-download"),this.saveButton.addEventListener(l.Toolbar.ToolbarButton.Events.Click,(e=>{this.exportReport()})),s.appendToolbarItem(this.saveButton),this.saveButton.setEnabled(!1),this.textFilterRegExp=null,s.appendSeparator(),this.filterInput=new l.Toolbar.ToolbarInput(z(E.urlFilter),"",.4,1),this.filterInput.setEnabled(!1),this.filterInput.addEventListener(l.Toolbar.ToolbarInput.Event.TextChanged,this.onFilterChanged,this),s.appendToolbarItem(this.filterInput),s.appendSeparator(),this.typeFilterValue=null,this.filterByTypeComboBox=new l.Toolbar.ToolbarComboBox(this.onFilterByTypeChanged.bind(this),z(E.filterCoverageByType));const a=[{label:z(E.all),value:""},{label:z(E.css),value:1},{label:z(E.javascript),value:6}];for(const e of a)this.filterByTypeComboBox.addOption(this.filterByTypeComboBox.createOption(e.label,`${e.value}`));this.filterByTypeComboBox.setSelectedIndex(0),this.filterByTypeComboBox.setEnabled(!1),s.appendToolbarItem(this.filterByTypeComboBox),s.appendSeparator(),this.showContentScriptsSetting=e.Settings.Settings.instance().createSetting("showContentScripts",!1),this.showContentScriptsSetting.addChangeListener(this.onFilterChanged,this),this.contentScriptsCheckbox=new l.Toolbar.ToolbarSettingCheckbox(this.showContentScriptsSetting,z(E.includeExtensionContentScripts),z(E.contentScripts)),this.contentScriptsCheckbox.setEnabled(!1),s.appendToolbarItem(this.contentScriptsCheckbox),this.coverageResultsElement=this.contentElement.createChild("div","coverage-results"),this.landingPage=this.buildLandingPage(),this.listView=new T(this.isVisible.bind(this,!1)),this.statusToolbarElement=this.contentElement.createChild("div","coverage-toolbar-summary"),this.statusMessageElement=this.statusToolbarElement.createChild("div","coverage-message"),this.landingPage.show(this.coverageResultsElement)}static instance(){return L||(L=new O),L}buildLandingPage(){const e=new l.Widget.VBox;let t;if(this.startWithReloadButton)this.inlineReloadButton=l.UIUtils.createInlineButton(l.Toolbar.Toolbar.createActionButtonForId("coverage.start-with-reload")),t=i.i18n.getFormatLocalizedString(F,E.clickTheReloadButtonSToReloadAnd,{PH1:this.inlineReloadButton});else{const e=l.UIUtils.createInlineButton(l.Toolbar.Toolbar.createActionButton(this.toggleRecordAction));t=i.i18n.getFormatLocalizedString(F,E.clickTheRecordButtonSToStart,{PH1:e})}return t.classList.add("message"),e.contentElement.appendChild(t),e.element.classList.add("landing-page"),e}clear(){this.model&&this.model.reset(),this.reset()}reset(){this.decorationManager&&(this.decorationManager.dispose(),this.decorationManager=null),this.listView.reset(),this.listView.detach(),this.landingPage.show(this.coverageResultsElement),this.statusMessageElement.textContent="",this.filterInput.setEnabled(!1),this.filterByTypeComboBox.setEnabled(!1),this.contentScriptsCheckbox.setEnabled(!1),this.saveButton.setEnabled(!1)}toggleRecording(){!this.toggleRecordAction.toggled()?this.startRecording({reload:!1,jsCoveragePerBlock:this.isBlockCoverageSelected()}):this.stopRecording()}isBlockCoverageSelected(){const e=this.coverageTypeComboBox.selectedOption();return 2===Number(e?e.value:Number.NaN)}selectCoverageType(e){const t=e?1:0;this.coverageTypeComboBox.setSelectedIndex(t)}onCoverageTypeComboBoxSelectionChanged(){this.coverageTypeComboBoxSetting.set(this.coverageTypeComboBox.selectedIndex())}async ensureRecordingStarted(){this.toggleRecordAction.toggled()&&await this.stopRecording(),await this.startRecording({reload:!1,jsCoveragePerBlock:!1})}async startRecording(e){let t,s;this.startWithReloadButton&&this.startWithReloadButton.element.hasFocus()||this.inlineReloadButton&&this.inlineReloadButton.hasFocus()?s=!0:this.hasFocus()&&(t=!0),this.reset();const i=o.TargetManager.TargetManager.instance().mainTarget();if(!i)return;const{reload:r,jsCoveragePerBlock:n}={reload:!1,jsCoveragePerBlock:!1,...e};if(this.model&&!r||(this.model=i.model(g)),!this.model)return;c.userMetrics.actionTaken(c.UserMetrics.Action.CoverageStarted),n&&c.userMetrics.actionTaken(c.UserMetrics.Action.CoverageStartedPerBlock);await this.model.start(Boolean(n))&&(this.selectCoverageType(Boolean(n)),this.model.addEventListener(h.CoverageUpdated,this.onCoverageDataReceived,this),this.resourceTreeModel=i.model(o.ResourceTreeModel.ResourceTreeModel),this.resourceTreeModel&&this.resourceTreeModel.addEventListener(o.ResourceTreeModel.Events.MainFrameNavigated,this.onMainFrameNavigated,this),this.decorationManager=new I(this.model),this.toggleRecordAction.setToggled(!0),this.clearButton.setEnabled(!1),this.startWithReloadButton&&(this.startWithReloadButton.setEnabled(!1),this.startWithReloadButton.setVisible(!1),this.toggleRecordButton.setEnabled(!0),this.toggleRecordButton.setVisible(!0),s&&this.toggleRecordButton.focus()),this.coverageTypeComboBox.setEnabled(!1),this.filterInput.setEnabled(!0),this.filterByTypeComboBox.setEnabled(!0),this.contentScriptsCheckbox.setEnabled(!0),this.landingPage.isShowing()&&this.landingPage.detach(),this.listView.show(this.coverageResultsElement),t&&!s&&this.listView.focus(),r&&this.resourceTreeModel?this.resourceTreeModel.reloadPage():this.model.startPolling())}onCoverageDataReceived(e){const t=e.data;this.updateViews(t)}async stopRecording(){this.resourceTreeModel&&(this.resourceTreeModel.removeEventListener(o.ResourceTreeModel.Events.MainFrameNavigated,this.onMainFrameNavigated,this),this.resourceTreeModel=null),this.hasFocus()&&this.listView.focus(),this.model&&(await this.model.stop(),this.model.removeEventListener(h.CoverageUpdated,this.onCoverageDataReceived,this)),this.toggleRecordAction.setToggled(!1),this.coverageTypeComboBox.setEnabled(!0),this.startWithReloadButton&&(this.startWithReloadButton.setEnabled(!0),this.startWithReloadButton.setVisible(!0),this.toggleRecordButton.setEnabled(!1),this.toggleRecordButton.setVisible(!1)),this.clearButton.setEnabled(!0)}processBacklog(){this.model&&this.model.processJSBacklog()}onMainFrameNavigated(){this.model&&this.model.reset(),this.decorationManager&&this.decorationManager.reset(),this.listView.reset(),this.model&&this.model.startPolling()}updateViews(e){this.updateStats(),this.listView.update(this.model&&this.model.entries()||[]),this.saveButton.setEnabled(null!==this.model&&this.model.entries().length>0),this.decorationManager&&this.decorationManager.update(e)}updateStats(){const e={total:0,unused:0},o={total:0,unused:0};let s=!1;if(this.model)for(const t of this.model.entries())e.total+=t.size(),e.unused+=t.unusedSize(),this.isVisible(!1,t)?(o.total+=t.size(),o.unused+=t.unusedSize()):s=!0;function i({total:e,unused:o}){const s=e-o,i=e?Math.round(100*s/e):0;return z(E.sOfSSUsedSoFarSUnused,{PH1:t.NumberUtilities.bytesToString(s),PH2:t.NumberUtilities.bytesToString(e),PH3:i,PH4:t.NumberUtilities.bytesToString(o)})}this.statusMessageElement.textContent=s?z(E.filteredSTotalS,{PH1:i(o),PH2:i(e)}):i(e)}onFilterChanged(){if(!this.listView)return;const e=this.filterInput.value();this.textFilterRegExp=e?t.StringUtilities.createPlainTextSearchRegex(e,"i"):null,this.listView.updateFilterAndHighlight(this.textFilterRegExp),this.updateStats()}onFilterByTypeChanged(){if(!this.listView)return;c.userMetrics.actionTaken(c.UserMetrics.Action.CoverageReportFiltered);const e=this.filterByTypeComboBox.selectedOption(),t=e&&e.value;this.typeFilterValue=parseInt(t||"",10)||null,this.listView.updateFilterAndHighlight(this.textFilterRegExp),this.updateStats()}isVisible(e,t){const o=t.url();return!o.startsWith(O.EXTENSION_BINDINGS_URL_PREFIX)&&(!(t.isContentScript()&&!this.showContentScriptsSetting.get())&&(!(this.typeFilterValue&&!(t.type()&this.typeFilterValue))&&(e||!this.textFilterRegExp||this.textFilterRegExp.test(o))))}async exportReport(){const e=new d.FileUtils.FileOutputStream,o=`Coverage-${t.DateUtilities.toISO8601Compact(new Date)}.json`;await e.open(o)&&this.model&&this.model.exportReport(e)}selectCoverageItemByUrl(e){this.listView.selectByUrl(e)}static EXTENSION_BINDINGS_URL_PREFIX="extensions::";wasShown(){super.wasShown(),this.registerCSSFiles([M])}}class A{handleAction(e,t){const o="coverage";return l.ViewManager.ViewManager.instance().showView(o,!1,!0).then((()=>{const e=l.ViewManager.ViewManager.instance().view(o);return e&&e.widget()})).then((e=>this.innerHandleAction(e,t))),!0}static instance(e={forceNew:null}){const{forceNew:t}=e;return U&&!t||(U=new A),U}innerHandleAction(e,t){switch(t){case"coverage.toggle-recording":e.toggleRecording();break;case"coverage.start-with-reload":e.startRecording({reload:!0,jsCoveragePerBlock:e.isBlockCoverageSelected()});break;default:console.assert(!1,`Unknown action: ${t}`)}}}var N=Object.freeze({__proto__:null,CoverageView:O,ActionDelegate:A});export{k as CoverageDecorationManager,R as CoverageListView,m as CoverageModel,N as CoverageView};
