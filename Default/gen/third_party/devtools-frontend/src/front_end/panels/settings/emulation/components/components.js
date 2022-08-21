import*as e from"../../../../core/i18n/i18n.js";import*as t from"../../../../ui/components/buttons/buttons.js";import*as a from"../../../../ui/components/helpers/helpers.js";import*as r from"../../../../ui/lit-html/lit-html.js";import*as n from"../../../../ui/components/input/input.js";import*as i from"../../../../ui/components/icon_button/icon_button.js";import*as o from"../utils/utils.js";const s=new CSSStyleSheet;s.replaceSync(":host{--client-hints-form-icon-color:var(--color-text-primary)}.root{color:var(--color-text-primary);width:100%}.tree-title{font-weight:700;display:flex;align-items:center}.rotate-icon{transform:rotate(-90deg)}.form-container{display:grid;grid-template-columns:1fr 1fr 1fr auto;align-items:center;column-gap:10px;row-gap:8px;padding:0 10px}.full-row{grid-column:1/5}.half-row{grid-column:span 2}.mobile-checkbox-container{display:flex}.device-model-input{grid-column:1/4}.input-field{color:var(--color-text-primary);padding:3px 6px;border:none;border-radius:2px;box-shadow:var(--legacy-focus-ring-inactive-shadow);background-color:var(--color-background);font-size:inherit;height:18px}.input-field:focus{box-shadow:var(--legacy-focus-ring-active-shadow);outline-width:0}.add-container{cursor:pointer;display:flex;align-items:center;gap:6px}.add-icon{margin-right:5px}.brand-row{display:flex;align-items:center;gap:10px;justify-content:space-between}.brand-row>input{width:100%}.info-link{height:14px;margin-left:5px}.hide-container{display:none}.input-field-label-container{display:flex;flex-direction:column;gap:10px}@media (forced-colors:active){:host{--client-hints-form-icon-color:fieldtext}.input-field{border:1px solid}.tree-title[aria-disabled=true]{color:GrayText}}\n/*# sourceURL=userAgentClientHintsForm.css */\n");const l={title:"User agent client hints",brands:"Brands",brandProperties:"Brand properties",brandName:"Brand",brandNameAriaLabel:"Brand {PH1}",version:"Version",brandVersionAriaLabel:"Version {PH1}",addBrand:"Add Brand",deleteTooltip:"Delete",brandDeleteAriaLabel:"Delete {PH1}",fullBrowserVersion:"Full browser version",fullBrowserVersionPlaceholder:"Full browser version (e.g. 87.0.4280.88)",platformLabel:"Platform",platformProperties:"Platform properties",platformVersion:"Platform version",platformPlaceholder:"Platform (e.g. Android)",architecture:"Architecture",architecturePlaceholder:"Architecture (e.g. x86)",deviceProperties:"Device properties",deviceModel:"Device model",mobileCheckboxLabel:"Mobile",update:"Update",notRepresentable:"Not representable as structured headers string.",userAgentClientHintsInfo:"User agent client hints are an alternative to the user agent string that identify the browser and the device in a more structured way with better privacy accounting. Click the button to learn more.",addedBrand:"Added brand row",deletedBrand:"Deleted brand row"},d=e.i18n.registerUIStrings("panels/settings/emulation/components/UserAgentClientHintsForm.ts",l),c=e.i18n.getLocalizedString.bind(void 0,d);class h extends Event{static eventName="clienthintschange";constructor(){super(h.eventName)}}class p extends Event{static eventName="clienthintssubmit";detail;constructor(e){super(p.eventName),this.detail={value:e}}}const u={brands:[{brand:"",version:""}],fullVersion:"",platform:"",platformVersion:"",architecture:"",model:"",mobile:!1};class m extends HTMLElement{static litTagName=r.literal`devtools-user-agent-client-hints-form`;#e=this.attachShadow({mode:"open"});#t=!1;#a=!1;#r=u;#n=!1;#i=!1;#o="";connectedCallback(){this.#e.adoptedStyleSheets=[n.checkboxStyles,s]}set value(e){const{metaData:t=u,showMobileCheckbox:a=!1,showSubmitButton:r=!1}=e;this.#r={...this.#r,...t},this.#n=a,this.#i=r,this.#s()}get value(){return{metaData:this.#r}}set disabled(e){this.#a=e,this.#t=!1,this.#s()}get disabled(){return this.#a}#l=e=>{"Space"!==e.code&&"Enter"!==e.code&&"ArrowLeft"!==e.code&&"ArrowRight"!==e.code||(e.stopPropagation(),this.#d(e.code))};#d=e=>{this.#a||"ArrowLeft"===e&&!this.#t||"ArrowRight"===e&&this.#t||(this.#t=!this.#t,this.#s())};#c=(e,t,a)=>{const r=this.#r.brands?.map(((r,n)=>{if(n===t){const{brand:t,version:n}=r;return"brandName"===a?{brand:e,version:n}:{brand:t,version:e}}return r}));this.#r={...this.#r,brands:r},this.dispatchEvent(new h),this.#s()};#h=e=>{const{brands:t=[]}=this.#r;t.splice(e,1),this.#r={...this.#r,brands:t},this.dispatchEvent(new h),this.#o=c(l.deletedBrand),this.#s();let a=this.shadowRoot?.getElementById(`brand-${e+1}-input`);a||(a=this.shadowRoot?.getElementById("add-brand-button")),a?.focus()};#p=()=>{const{brands:e}=this.#r;this.#r={...this.#r,brands:[...Array.isArray(e)?e:[],{brand:"",version:""}]},this.dispatchEvent(new h),this.#o=c(l.addedBrand),this.#s();const t=this.shadowRoot?.querySelectorAll(".brand-name-input");if(t){const e=Array.from(t).pop();e&&e.focus()}};#u=e=>{"Space"!==e.code&&"Enter"!==e.code||(e.preventDefault(),this.#p())};#m=(e,t)=>{e in this.#r&&(this.#r={...this.#r,[e]:t},this.#s()),this.dispatchEvent(new h)};#b=e=>{"Space"!==e.code&&"Enter"!==e.code||(e.preventDefault(),e.target.click())};#f=e=>{e.preventDefault(),this.#i&&(this.dispatchEvent(new p(this.#r)),this.#s())};#g(e,t,a,n){return r.html` <label class="full-row label input-field-label-container"> ${e} <input class="input-field" type="text" @input="${e=>{const t=e.target.value;this.#m(n,t)}}" .value="${a}" placeholder="${t}"> </label> `}#v(){const{platform:e,platformVersion:t}=this.#r;return r.html` <span class="full-row label">${c(l.platformLabel)}</span> <div class="full-row brand-row" aria-label="${c(l.platformProperties)}" role="group"> <input class="input-field half-row" type="text" @input="${e=>{const t=e.target.value;this.#m("platform",t)}}" .value="${e}" placeholder="${c(l.platformPlaceholder)}" aria-label="${c(l.platformLabel)}"> <input class="input-field half-row" type="text" @input="${e=>{const t=e.target.value;this.#m("platformVersion",t)}}" .value="${t}" placeholder="${c(l.platformVersion)}" aria-label="${c(l.platformVersion)}"> </div> `}#$(){const{model:e,mobile:t}=this.#r,a=this.#n?r.html` <label class="mobile-checkbox-container"> <input type="checkbox" @input="${e=>{const t=e.target.checked;this.#m("mobile",t)}}" .checked="${t}"> ${c(l.mobileCheckboxLabel)} </label> `:r.html``;return r.html` <span class="full-row label">${c(l.deviceModel)}</span> <div class="full-row brand-row" aria-label="${c(l.deviceProperties)}" role="group"> <input class="input-field ${this.#n?"device-model-input":"full-row"}" type="text" @input="${e=>{const t=e.target.value;this.#m("model",t)}}" .value="${e}" placeholder="${c(l.deviceModel)}"> ${a} </div> `}#w(){const{brands:e=[{brand:"",version:""}]}=this.#r,t=e.map(((e,t)=>{const{brand:a,version:n}=e,o=()=>{this.#h(t)};return r.html` <div class="full-row brand-row" aria-label="${c(l.brandProperties)}" role="group"> <input class="input-field brand-name-input" type="text" @input="${e=>{const a=e.target.value;this.#c(a,t,"brandName")}}" .value="${a}" id="brand-${t+1}-input" placeholder="${c(l.brandName)}" aria-label="${c(l.brandNameAriaLabel,{PH1:t+1})}"> <input class="input-field" type="text" @input="${e=>{const a=e.target.value;this.#c(a,t,"brandVersion")}}" .value="${n}" placeholder="${c(l.version)}" aria-label="${c(l.brandVersionAriaLabel,{PH1:t+1})}"> <${i.Icon.Icon.litTagName} .data="${{color:"var(--client-hints-form-icon-color)",iconName:"trash_bin_icon",width:"10px",height:"14px"}}" title="${c(l.deleteTooltip)}" class="delete-icon" tabindex="0" role="button" @click="${o}" @keypress="${e=>{"Space"!==e.code&&"Enter"!==e.code||(e.preventDefault(),o())}}" aria-label="${c(l.brandDeleteAriaLabel,{PH1:t+1})}"> </${i.Icon.Icon.litTagName}> </div> `}));return r.html` <span class="full-row label">${c(l.brands)}</span> ${t} <div class="add-container full-row" role="button" tabindex="0" id="add-brand-button" aria-label="${c(l.addBrand)}" @click="${this.#p}" @keypress="${this.#u}"> <${i.Icon.Icon.litTagName} aria-hidden="true" .data="${{color:"var(--client-hints-form-icon-color)",iconName:"add-icon",width:"10px"}}"> </${i.Icon.Icon.litTagName}> ${c(l.addBrand)} </div> `}#s(){const{fullVersion:e,architecture:a}=this.#r,n=this.#w(),o=this.#g(c(l.fullBrowserVersion),c(l.fullBrowserVersionPlaceholder),e||"","fullVersion"),s=this.#v(),d=this.#g(c(l.architecture),c(l.architecturePlaceholder),a,"architecture"),h=this.#$(),p=this.#i?r.html` <${t.Button.Button.litTagName} .variant="${"secondary"}" .type="${"submit"}"> ${c(l.update)} </${t.Button.Button.litTagName}> `:r.html``,u=r.html` <section class="root"> <div class="tree-title" role="button" @click="${this.#d}" tabindex="0" @keydown="${this.#l}" aria-expanded="${this.#t}" aria-controls="form-container" @disabled="${this.#a}" aria-disabled="${this.#a}" aria-label="${c(l.title)}"> <${i.Icon.Icon.litTagName} class="${this.#t?"":"rotate-icon"}" .data="${{color:"var(--client-hints-form-icon-color)",iconName:"chromeSelect",width:"20px"}}"> </${i.Icon.Icon.litTagName}> ${c(l.title)} <x-link tabindex="0" href="https://web.dev/user-agent-client-hints/" target="_blank" class="info-link" @keypress="${this.#b}" aria-label="${c(l.userAgentClientHintsInfo)}"> <${i.Icon.Icon.litTagName} .data="${{color:"var(--client-hints-form-icon-color)",iconName:"ic_info_black_18dp",width:"14px"}}"> </${i.Icon.Icon.litTagName}> </x-link> </div> <form id="form-container" class="form-container ${this.#t?"":"hide-container"}" @submit="${this.#f}"> ${n} ${o} ${s} ${d} ${h} ${p} </form> <div aria-live="polite" aria-label="${this.#o}"></div> </section> `;r.render(u,this.#e,{host:this})}validate=()=>{for(const[e,t]of Object.entries(this.#r))if("brands"===e){const e=this.#r.brands?.every((({brand:e,version:t})=>{const a=o.UserAgentMetadata.validateAsStructuredHeadersString(e,c(l.notRepresentable)),r=o.UserAgentMetadata.validateAsStructuredHeadersString(t,c(l.notRepresentable));return a.valid&&r.valid}));if(!e)return{valid:!1,errorMessage:c(l.notRepresentable)}}else{const e=o.UserAgentMetadata.validateAsStructuredHeadersString(t,c(l.notRepresentable));if(!e.valid)return e}return{valid:!0}}}a.CustomElements.defineComponent("devtools-user-agent-client-hints-form",m);var b=Object.freeze({__proto__:null,ClientHintsChangeEvent:h,ClientHintsSubmitEvent:p,UserAgentClientHintsForm:m});export{b as UserAgentClientHintsForm};
