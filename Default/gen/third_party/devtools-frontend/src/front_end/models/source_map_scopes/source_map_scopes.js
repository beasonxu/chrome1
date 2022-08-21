import*as e from"../../core/sdk/sdk.js";import*as t from"../bindings/bindings.js";import*as n from"../formatter/formatter.js";import*as r from"../text_utils/text_utils.js";const o=new WeakMap,s=new WeakMap;class i{name;positions;constructor(e,t=[]){this.name=e,this.positions=t}addPosition(e,t){this.positions.push({lineNumber:e,columnNumber:t})}}const a=async function(e,t){if(!e)return null;const o=t.startLocation(),s=t.endLocation();if(!o||!s)return null;const a=await async function(e){const t=e.startLocation(),o=e.endLocation();if(!t||!o)return null;const s=t.script();if(!s||!s.sourceMapURL||s!==o.script())return null;const{content:i}=await s.requestContent();if(!i)return null;const a=new r.Text.Text(i),c=new r.TextRange.TextRange(t.lineNumber,t.columnNumber,o.lineNumber,o.columnNumber),u=a.extract(c),l=a.toSourceRange(c).offset;let p="class DummyClass extends DummyBase { constructor",f="}",b=await n.FormatterWorkerPool.formatterWorkerPool().javaScriptScopeTree(p+u+f);return b||(p="",f="",b=await n.FormatterWorkerPool.formatterWorkerPool().javaScriptScopeTree(p+u+f)),b?{scopeTree:b,text:a,slide:l-p.length}:null}(e);if(!a)return null;const{scopeTree:c,text:u,slide:l}=a,p={start:u.offsetFromPosition(o.lineNumber,o.columnNumber)-l,end:u.offsetFromPosition(s.lineNumber,s.columnNumber)-l};if(!h(c,p))return null;let f=c;const b=[];for(;;){let e=!1;for(const t of f.children){if(h(t,p)){b.push(f),f=t,e=!0;break}if(!w(p,t)&&!h(p,t))return console.error("Wrong nesting of scopes"),null}if(!e)break}const m=[],g=new r.TextCursor.TextCursor(u.lineEndings());for(const e of f.variables){if(3===e.kind&&e.offsets.length<=1)continue;const t=new i(e.name);for(const n of e.offsets){const e=n+l;g.resetTo(e),t.addPosition(g.lineNumber(),g.columnNumber())}m.push(t)}const d=[];for(const e of b)for(const t of e.variables){let e=null;for(const n of t.offsets)if(n>=f.start&&n<f.end){e||(e=new i(t.name));const r=n+l;g.resetTo(r),e.addPosition(g.lineNumber(),g.columnNumber())}e&&d.push(e)}return{boundVariables:m,freeVariables:d};function h(e,t){return e.start<=t.start&&e.end>=t.end}function w(e,t){return e.end<=t.start||t.end<=e.start}},c=/^\s*([A-Za-z_$][A-Za-z_$0-9]*)\s*([.;,=]?)\s*$/,u=async e=>{let n=o.get(e);const s=e.callFrame().script,i=t.DebuggerWorkspaceBinding.DebuggerWorkspaceBinding.instance().sourceMapForScript(s);if(!n||n.sourceMap!==i){const t=(async()=>{const t=new Map;let n=null;if(!i)return{variableMapping:t,thisMapping:n};const r=new Map,o=[],c=(e,t)=>{for(const n of e.positions){const e=i.findEntry(n.lineNumber,n.columnNumber);if(e&&e.name)return void t(e.name)}o.push(async function(){if(i)for(const n of e.positions){const o=await u(s,i,e.name,n,r);if(o)return void t(o)}}())},l=function(){const t=e.callFrame().scopeChain();let n=0;for(;n<t.length&&t[n]!==e;n++);for(;n<t.length;n++){const e=t[n].type();if("local"===e||"closure"===e)break}return n===t.length?null:t[n]}(),p=await a(l,e);if(!p)return{variableMapping:t,thisMapping:n};for(const e of p.boundVariables)c(e,(n=>{"this"!==n&&t.set(e.name,n)}));for(const e of p.freeVariables)c(e,(t=>{"this"===t&&(n=e.name)}));return await Promise.all(o).then(b()),{variableMapping:t,thisMapping:n}})();n={sourceMap:i,mappingPromise:t},o.set(e,{sourceMap:i,mappingPromise:t})}return await n.mappingPromise;async function u(e,n,o,s,i){const a=n.findEntryRanges(s.lineNumber,s.columnNumber);if(!a)return null;const u=t.DebuggerWorkspaceBinding.DebuggerWorkspaceBinding.instance().uiSourceCodeForSourceMapSourceURL(e.debuggerModel,a.sourceURL,e.isContentScript());if(!u)return null;const l=j((await e.requestContent()).content);if(!l)return null;const p=w(l.extract(a.range));if(!p)return null;const{name:f,punctuation:b}=p;if(f!==o)return null;const m=j((await u.requestContent()).content);if(!m)return null;const g=w(m.extract(a.sourceRange));if(!g)return null;const{name:d,punctuation:h}=g;return b===h||"comma"===b&&"semicolon"===h?d:null;function w(e){const t=e.match(c);if(!t)return null;const n=t[1];let r=null;switch(t[2]){case".":r="dot";break;case",":r="comma";break;case";":r="semicolon";break;case"=":r="equals";break;case"":r="none";break;default:return console.error(`Name token parsing error: unexpected token "${t[2]}"`),null}return{name:n,punctuation:r}}function j(e){if(!e)return null;let t=i.get(e);return t||(t=new r.Text.Text(e),i.set(e,t)),t}}},l=async e=>{const t=s.get(e);if(t)return t;const n=e.scopeChain(),r=await Promise.all(n.map(u)),o=new Map;for(const{variableMapping:e}of r)for(const[t,n]of e)n&&!o.has(n)&&o.set(n,t);return s.set(e,o),o};class p extends e.RemoteObject.RemoteObject{scope;object;constructor(e){super(),this.scope=e,this.object=e.object()}customPreview(){return this.object.customPreview()}get objectId(){return this.object.objectId}get type(){return this.object.type}get subtype(){return this.object.subtype}get value(){return this.object.value}get description(){return this.object.description}get hasChildren(){return this.object.hasChildren}get preview(){return this.object.preview}arrayLength(){return this.object.arrayLength()}getOwnProperties(e){return this.object.getOwnProperties(e)}async getAllProperties(t,n){const r=await this.object.getAllProperties(t,n),{variableMapping:o}=await u(this.scope),s=r.properties,i=r.internalProperties,a=[];if(s)for(let t=0;t<s.length;++t){const n=s[t],r=o.get(n.name)||s[t].name;n.value&&a.push(new e.RemoteObject.RemoteObjectProperty(r,n.value,n.enumerable,n.writable,n.isOwn,n.wasThrown,n.symbol,n.synthetic))}return{properties:a,internalProperties:i}}async setPropertyValue(e,t){const{variableMapping:n}=await u(this.scope);let r;r="string"==typeof e?e:e.value;let o=r;for(const e of n.keys())if(n.get(e)===r){o=e;break}return this.object.setPropertyValue(o,t)}async deleteProperty(e){return this.object.deleteProperty(e)}callFunction(e,t){return this.object.callFunction(e,t)}callFunctionJSON(e,t){return this.object.callFunctionJSON(e,t)}release(){this.object.release()}debuggerModel(){return this.object.debuggerModel()}runtimeModel(){return this.object.runtimeModel()}isNode(){return this.object.isNode()}}let f=function(){};const b=()=>f;var m=Object.freeze({__proto__:null,IdentifierPositions:i,scopeIdentifiers:a,resolveScopeChain:async function(e){if(!e)return null;const{pluginManager:n}=t.DebuggerWorkspaceBinding.DebuggerWorkspaceBinding.instance();if(n){const t=await n.resolveScopeChain(e);if(t)return t}return e.scopeChain()},allVariablesInCallFrame:l,resolveExpression:async(e,o,s,i,a,c)=>{if("application/wasm"===s.mimeType())return`memories["${o}"] ?? locals["${o}"] ?? tables["${o}"] ?? functions["${o}"] ?? globals["${o}"]`;if(!s.contentType().isFromSourceMap())return"";const u=await l(e);if(u.has(o))return u.get(o);const p=(await t.DebuggerWorkspaceBinding.DebuggerWorkspaceBinding.instance().uiLocationToRawLocations(s,i,a)).find((t=>t.debuggerModel===e.debuggerModel));if(!p)return"";const f=p.script();if(!f)return"";const b=t.DebuggerWorkspaceBinding.DebuggerWorkspaceBinding.instance().sourceMapForScript(f);if(!b)return"";const{content:m}=await f.requestContent();if(!m)return"";const g=new r.Text.Text(m),d=b.reverseMapTextRange(s.url(),new r.TextRange.TextRange(i,a,i,c));if(!d)return"";const h=g.extract(d);return h?await n.FormatterWorkerPool.formatterWorkerPool().evaluatableJavaScriptSubstring(h):""},resolveThisObject:async e=>{if(!e)return null;const t=e.scopeChain();if(0===t.length)return e.thisObject();const{thisMapping:n}=await u(t[0]);if(!n)return e.thisObject();const r=await e.evaluate({expression:n,objectGroup:"backtrace",includeCommandLineAPI:!1,silent:!0,returnByValue:!1,generatePreview:!0});return"exceptionDetails"in r?!r.exceptionDetails&&r.object?r.object:e.thisObject():null},resolveScopeInObject:function(e){const t=e.startLocation(),n=e.endLocation(),r=t?t.script():null;return"global"!==e.type()&&r&&n&&r.sourceMapURL&&r===n.script()?new p(e):e.object()},RemoteObject:p,resolveFrameFunctionName:async function(e){const n=e.script,o=e.localScope();if(!o||!n)return null;const s=o.startLocation();if(!s)return null;const{content:i}=await n.requestContent();if(!i)return null;const a=new r.Text.Text(i),c=new r.TextRange.TextRange(s.lineNumber,s.columnNumber,s.lineNumber,s.columnNumber+1);if("("!==a.extract(c))return null;const u=t.DebuggerWorkspaceBinding.DebuggerWorkspaceBinding.instance().sourceMapForScript(n);return u?u.findEntry(s.lineNumber,s.columnNumber)?.name??null:null},getScopeResolvedForTest:b,setScopeResolvedForTest:e=>{f=e}});export{m as NamesResolver};
