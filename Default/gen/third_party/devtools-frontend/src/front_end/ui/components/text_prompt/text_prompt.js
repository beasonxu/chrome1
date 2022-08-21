import*as t from"../../../core/platform/platform.js";import*as e from"../helpers/helpers.js";import*as s from"../../lit-html/lit-html.js";const i=new CSSStyleSheet;i.replaceSync(":host{white-space:pre;overflow:hidden;display:flex}.prefix{flex:none;color:var(--color-primary)}.text-prompt-input{flex:auto;position:relative}.text-prompt-input input{width:100%;border:none;outline:0;position:absolute;left:0;padding:0;z-index:2;background-color:transparent}.text-prompt-input .suggestion{color:var(--color-background-highlight);position:absolute;left:0;z-index:1}\n/*# sourceURL=textPrompt.css */\n");class n extends Event{static eventName="promptinputchanged";data;constructor(t){super(n.eventName),this.data=t}}class o extends HTMLElement{static litTagName=s.literal`devtools-text-prompt`;#t=this.attachShadow({mode:"open"});#e="";#s="";#i="";connectedCallback(){this.#t.adoptedStyleSheets=[i]}set data(t){this.#e=t.ariaLabel,this.#s=t.prefix,this.#i=t.suggestion,this.#n()}get data(){return{ariaLabel:this.#e,prefix:this.#s,suggestion:this.#i}}focus(){this.#o().focus()}#o(){const t=this.#t.querySelector(".input");if(!t)throw new Error("Expected an input element!");return t}moveCaretToEndOfInput(){this.setSelectedRange(this.#r().length,this.#r().length)}onInput(){this.#a().value=this.#r(),this.dispatchEvent(new n(this.#r().trim()))}onKeyDown(e){e.key===t.KeyboardUtilities.ENTER_KEY&&e.preventDefault()}setSelectedRange(t,e){if(t<0)throw new RangeError("Selected range start must be a nonnegative integer");const s=this.#r().length;e>s&&(e=s),e<t&&(e=t),this.#o().setSelectionRange(t,e)}setPrefix(t){this.#s=t,this.#n()}setSuggestion(t){this.#i=t,this.#a().value+=this.#i,this.#n()}setText(t){this.#o().value=t,this.#a().value=this.#r(),this.#o().hasFocus()&&(this.moveCaretToEndOfInput(),this.#o().scrollIntoView())}#a(){const t=this.#t.querySelector(".suggestion");if(!t)throw new Error("Expected an suggestion element!");return t}#r(){return this.#o().value||""}#n(){const t=s.html` <span class="prefix">${this.#s} </span> <span class="text-prompt-input"><input class="input" aria-label="${this.#e}" spellcheck="false" @input="${this.onInput}" @keydown="${this.onKeyDown}/"><input class="suggestion" aria-label="${this.#e+" Suggestion"}"></span>`;s.render(t,this.#t,{host:this})}}e.CustomElements.defineComponent("devtools-text-prompt",o);var r=Object.freeze({__proto__:null,PromptInputEvent:n,TextPrompt:o});export{r as TextPrompt};
