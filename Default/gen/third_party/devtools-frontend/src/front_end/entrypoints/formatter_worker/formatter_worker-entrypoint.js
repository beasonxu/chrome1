import*as e from"../../core/platform/platform.js";import*as t from"./formatter_worker.js";self.onmessage=function(a){const s=a.data.method,r=a.data.params;if(s)switch(s){case"format":self.postMessage(t.FormatterWorker.format(r.mimeType,r.content,r.indentString));break;case"parseCSS":t.CSSRuleParser.parseCSS(r.content,self.postMessage);break;case"htmlOutline":t.HTMLOutline.htmlOutline(r.content,self.postMessage);break;case"javaScriptOutline":t.JavaScriptOutline.javaScriptOutline(r.content,self.postMessage);break;case"javaScriptIdentifiers":self.postMessage(t.FormatterWorker.javaScriptIdentifiers(r.content));break;case"javaScriptSubstitute":{const e=new Map(r.mapping);self.postMessage(t.Substitute.substituteExpression(r.content,e));break}case"javaScriptScopeTree":self.postMessage(t.ScopeParser.parseScopes(r.content)?.export());break;case"evaluatableJavaScriptSubstring":self.postMessage(t.FormatterWorker.evaluatableJavaScriptSubstring(r.content));break;case"argumentsList":self.postMessage(t.FormatterWorker.argumentsList(r.content));break;default:e.assertNever(s,`Unsupport method name: ${s}`)}},self.postMessage("workerReady");
