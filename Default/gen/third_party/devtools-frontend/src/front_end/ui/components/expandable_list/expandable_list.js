import*as e from"../helpers/helpers.js";import*as t from"../../lit-html/lit-html.js";const i=new CSSStyleSheet;i.replaceSync(":host{overflow:hidden}div{line-height:1.7em}.arrow-icon-button{cursor:pointer;padding:1px 0;border:none;background:0 0}.arrow-icon{display:inline-block;-webkit-mask-image:var(--image-file-treeoutlineTriangles);-webkit-mask-size:32px 24px;-webkit-mask-position:0 0;background-color:var(--color-text-primary);margin-top:2px;height:12px;width:13px}.arrow-icon.expanded{-webkit-mask-position:-16px 0}.expandable-list-container{display:flex;margin-top:4px}.expandable-list-items{overflow:hidden}.devtools-link,.link{color:var(--color-link);text-decoration:underline;cursor:pointer;padding:2px 0}button.link{border:none;background:0 0;font-family:inherit;font-size:inherit}.text-ellipsis{overflow:hidden;text-overflow:ellipsis;white-space:nowrap}\n/*# sourceURL=expandableList.css */\n");class o extends HTMLElement{static litTagName=t.literal`devtools-expandable-list`;#e=this.attachShadow({mode:"open"});#t=!1;#i=[];set data(e){this.#i=e.rows,this.#o()}#n(){this.#t=!this.#t,this.#o()}connectedCallback(){this.#e.adoptedStyleSheets=[i]}#o(){this.#i.length<1||t.render(t.html` <div class="expandable-list-container"> <div> ${this.#i.length>1?t.html` <button @click="${()=>this.#n()}" class="arrow-icon-button"> <span class="arrow-icon ${this.#t?"expanded":""}"></span> </button> `:t.nothing} </div> <div class="expandable-list-items"> ${this.#i.filter(((e,t)=>this.#t||0===t)).map((e=>t.html` ${e} `))} </div> </div> `,this.#e,{host:this})}}e.CustomElements.defineComponent("devtools-expandable-list",o);var n=Object.freeze({__proto__:null,ExpandableList:o});export{n as ExpandableList};
