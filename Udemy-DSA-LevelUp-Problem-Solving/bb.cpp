
<!DOCTYPE html>







<html>
  <head>
    <meta charset="utf-8"><script type="text/javascript">(window.NREUM||(NREUM={})).init={ajax:{deny_list:["bam.nr-data.net"]}};(window.NREUM||(NREUM={})).loader_config={licenseKey:"8d5fb92f6e",applicationID:"1100293087"};;/*! For license information please see nr-loader-rum-1.237.1.min.js.LICENSE.txt */
(()=>{"use strict";var e,t,n={5763:(e,t,n)=>{n.d(t,{P_:()=>f,Mt:()=>p,C5:()=>s,DL:()=>m,OP:()=>j,lF:()=>E,Yu:()=>y,Dg:()=>g,CX:()=>c,GE:()=>b,sU:()=>_});var r=n(8632),i=n(9567);const a={beacon:r.ce.beacon,errorBeacon:r.ce.errorBeacon,licenseKey:void 0,applicationID:void 0,sa:void 0,queueTime:void 0,applicationTime:void 0,ttGuid:void 0,user:void 0,account:void 0,product:void 0,extra:void 0,jsAttributes:{},userAttributes:void 0,atts:void 0,transactionName:void 0,tNamePlain:void 0},o={};function s(e){if(!e)throw new Error("All info objects require an agent identifier!");if(!o[e])throw new Error("Info for ".concat(e," was never set"));return o[e]}function c(e,t){if(!e)throw new Error("All info objects require an agent identifier!");o[e]=(0,i.D)(t,a),(0,r.Qy)(e,o[e],"info")}var d=n(7056);const u=()=>{const e={blockSelector:"[data-nr-block]",maskInputOptions:{password:!0}};return{allow_bfcache:!0,privacy:{cookies_enabled:!0},ajax:{deny_list:void 0,block_internal:!0,enabled:!0,harvestTimeSeconds:10},distributed_tracing:{enabled:void 0,exclude_newrelic_header:void 0,cors_use_newrelic_header:void 0,cors_use_tracecontext_headers:void 0,allowed_origins:void 0},session:{domain:void 0,expiresMs:d.oD,inactiveMs:d.Hb},ssl:void 0,obfuscate:void 0,jserrors:{enabled:!0,harvestTimeSeconds:10},metrics:{enabled:!0},page_action:{enabled:!0,harvestTimeSeconds:30},page_view_event:{enabled:!0},page_view_timing:{enabled:!0,harvestTimeSeconds:30,long_task:!1},session_trace:{enabled:!0,harvestTimeSeconds:10},harvest:{tooManyRequestsDelay:60},session_replay:{enabled:!1,harvestTimeSeconds:60,sampleRate:.1,errorSampleRate:.1,maskTextSelector:"*",maskAllInputs:!0,get blockClass(){return"nr-block"},get ignoreClass(){return"nr-ignore"},get maskTextClass(){return"nr-mask"},get blockSelector(){return e.blockSelector},set blockSelector(t){e.blockSelector+=",".concat(t)},get maskInputOptions(){return e.maskInputOptions},set maskInputOptions(t){e.maskInputOptions={...t,password:!0}}},spa:{enabled:!0,harvestTimeSeconds:10}}},l={};function f(e){if(!e)throw new Error("All configuration objects require an agent identifier!");if(!l[e])throw new Error("Configuration for ".concat(e," was never set"));return l[e]}function g(e,t){if(!e)throw new Error("All configuration objects require an agent identifier!");l[e]=(0,i.D)(t,u()),(0,r.Qy)(e,l[e],"config")}function p(e,t){if(!e)throw new Error("All configuration objects require an agent identifier!");var n=f(e);if(n){for(var r=t.split("."),i=0;i<r.length-1;i++)if("object"!=typeof(n=n[r[i]]))return;n=n[r[r.length-1]]}return n}const h={accountID:void 0,trustKey:void 0,agentID:void 0,licenseKey:void 0,applicationID:void 0,xpid:void 0},v={};function m(e){if(!e)throw new Error("All loader-config objects require an agent identifier!");if(!v[e])throw new Error("LoaderConfig for ".concat(e," was never set"));return v[e]}function b(e,t){if(!e)throw new Error("All loader-config objects require an agent identifier!");v[e]=(0,i.D)(t,h),(0,r.Qy)(e,v[e],"loader_config")}const y=(0,r.mF)().o;var w=n(385),A=n(6818);const x={buildEnv:A.Re,bytesSent:{},queryBytesSent:{},customTransaction:void 0,disabled:!1,distMethod:A.gF,isolatedBacklog:!1,loaderType:void 0,maxBytes:3e4,offset:Math.floor(w._A?.performance?.timeOrigin||w._A?.performance?.timing?.navigationStart||Date.now()),onerror:void 0,origin:""+w._A.location,ptid:void 0,releaseIds:{},session:void 0,xhrWrappable:"function"==typeof w._A.XMLHttpRequest?.prototype?.addEventListener,version:A.q4,denyList:void 0},D={};function j(e){if(!e)throw new Error("All runtime objects require an agent identifier!");if(!D[e])throw new Error("Runtime for ".concat(e," was never set"));return D[e]}function _(e,t){if(!e)throw new Error("All runtime objects require an agent identifier!");D[e]=(0,i.D)(t,x),(0,r.Qy)(e,D[e],"runtime")}function E(e){return function(e){try{const t=s(e);return!!t.licenseKey&&!!t.errorBeacon&&!!t.applicationID}catch(e){return!1}}(e)}},9567:(e,t,n)=>{n.d(t,{D:()=>i});var r=n(50);function i(e,t){try{if(!e||"object"!=typeof e)return(0,r.Z)("Setting a Configurable requires an object as input");if(!t||"object"!=typeof t)return(0,r.Z)("Setting a Configurable requires a model to set its initial properties");const n=Object.create(Object.getPrototypeOf(t),Object.getOwnPropertyDescriptors(t)),a=0===Object.keys(n).length?e:n;for(let o in a)if(void 0!==e[o])try{"object"==typeof e[o]&&"object"==typeof t[o]?n[o]=i(e[o],t[o]):n[o]=e[o]}catch(e){(0,r.Z)("An error occurred while setting a property of a Configurable",e)}return n}catch(e){(0,r.Z)("An error occured while setting a Configurable",e)}}},6818:(e,t,n)=>{n.d(t,{Re:()=>i,gF:()=>a,q4:()=>r});const r="1.237.1",i="PROD",a="CDN"},385:(e,t,n)=>{n.d(t,{FN:()=>o,IF:()=>d,Nk:()=>l,Tt:()=>s,_A:()=>a,il:()=>r,pL:()=>c,v6:()=>i,w1:()=>u});const r="undefined"!=typeof window&&!!window.document,i="undefined"!=typeof WorkerGlobalScope&&("undefined"!=typeof self&&self instanceof WorkerGlobalScope&&self.navigator instanceof WorkerNavigator||"undefined"!=typeof globalThis&&globalThis instanceof WorkerGlobalScope&&globalThis.navigator instanceof WorkerNavigator),a=r?window:"undefined"!=typeof WorkerGlobalScope&&("undefined"!=typeof self&&self instanceof WorkerGlobalScope&&self||"undefined"!=typeof globalThis&&globalThis instanceof WorkerGlobalScope&&globalThis),o=""+a?.location,s=/iPad|iPhone|iPod/.test(navigator.userAgent),c=s&&"undefined"==typeof SharedWorker,d=(()=>{const e=navigator.userAgent.match(/Firefox[/\s](\d+\.\d+)/);return Array.isArray(e)&&e.length>=2?+e[1]:0})(),u=Boolean(r&&window.document.documentMode),l=!!navigator.sendBeacon},1117:(e,t,n)=>{n.d(t,{w:()=>a});var r=n(50);const i={agentIdentifier:"",ee:void 0};class a{constructor(e){try{if("object"!=typeof e)return(0,r.Z)("shared context requires an object as input");this.sharedContext={},Object.assign(this.sharedContext,i),Object.entries(e).forEach((e=>{let[t,n]=e;Object.keys(i).includes(t)&&(this.sharedContext[t]=n)}))}catch(e){(0,r.Z)("An error occured while setting SharedContext",e)}}}},8e3:(e,t,n)=>{n.d(t,{L:()=>u,R:()=>c});var r=n(2177),i=n(1284),a=n(4322),o=n(3325);const s={};function c(e,t){const n={staged:!1,priority:o.p[t]||0};d(e),s[e].get(t)||s[e].set(t,n)}function d(e){e&&(s[e]||(s[e]=new Map))}function u(){let e=arguments.length>0&&void 0!==arguments[0]?arguments[0]:"",t=arguments.length>1&&void 0!==arguments[1]?arguments[1]:"feature";if(d(e),!e||!s[e].get(t))return o(t);s[e].get(t).staged=!0;const n=[...s[e]];function o(t){const n=e?r.ee.get(e):r.ee,o=a.X.handlers;if(n.backlog&&o){var s=n.backlog[t],c=o[t];if(c){for(var d=0;s&&d<s.length;++d)l(s[d],c);(0,i.D)(c,(function(e,t){(0,i.D)(t,(function(t,n){n[0].on(e,n[1])}))}))}delete o[t],n.backlog[t]=null,n.emit("drain-"+t,[])}}n.every((e=>{let[t,n]=e;return n.staged}))&&(n.sort(((e,t)=>e[1].priority-t[1].priority)),n.forEach((e=>{let[t]=e;o(t)})))}function l(e,t){var n=e[1];(0,i.D)(t[n],(function(t,n){var r=e[0];if(n[0]===r){var i=n[1],a=e[3],o=e[2];i.apply(a,o)}}))}},2177:(e,t,n)=>{n.d(t,{ee:()=>d});var r=n(8632),i=n(2210),a=n(1284),o=n(5763),s="nr@context";let c=(0,r.fP)();var d;function u(){}function l(){return new u}function f(){d.aborted=!0,d.backlog={}}c.ee?d=c.ee:(d=function e(t,n){var r={},c={},g={},p=!1;try{p=16===n.length&&(0,o.OP)(n).isolatedBacklog}catch(e){}var h={on:b,addEventListener:b,removeEventListener:y,emit:m,get:A,listeners:w,context:v,buffer:x,abort:f,aborted:!1,isBuffering:D,debugId:n,backlog:p?{}:t&&"object"==typeof t.backlog?t.backlog:{}};return h;function v(e){return e&&e instanceof u?e:e?(0,i.X)(e,s,l):l()}function m(e,n,r,i,a){if(!1!==a&&(a=!0),!d.aborted||i){t&&a&&t.emit(e,n,r);for(var o=v(r),s=w(e),u=s.length,l=0;l<u;l++)s[l].apply(o,n);var f=j()[c[e]];return f&&f.push([h,e,n,o]),o}}function b(e,t){r[e]=w(e).concat(t)}function y(e,t){var n=r[e];if(n)for(var i=0;i<n.length;i++)n[i]===t&&n.splice(i,1)}function w(e){return r[e]||[]}function A(t){return g[t]=g[t]||e(h,t)}function x(e,t){var n=j();h.aborted||(0,a.D)(e,(function(e,r){t=t||"feature",c[r]=t,t in n||(n[t]=[])}))}function D(e){return!!j()[c[e]]}function j(){return h.backlog}}(void 0,"globalEE"),c.ee=d)},5546:(e,t,n)=>{n.d(t,{E:()=>r,p:()=>i});var r=n(2177).ee.get("handle");function i(e,t,n,i,a){a?(a.buffer([e],i),a.emit(e,t,n)):(r.buffer([e],i),r.emit(e,t,n))}},4322:(e,t,n)=>{n.d(t,{X:()=>a});var r=n(5546);a.on=o;var i=a.handlers={};function a(e,t,n,a){o(a||r.E,i,e,t,n)}function o(e,t,n,i,a){a||(a="feature"),e||(e=r.E);var o=t[a]=t[a]||{};(o[n]=o[n]||[]).push([e,i])}},3239:(e,t,n)=>{n.d(t,{bP:()=>s,iz:()=>c,m$:()=>o});var r=n(385);let i=!1,a=!1;try{const e={get passive(){return i=!0,!1},get signal(){return a=!0,!1}};r._A.addEventListener("test",null,e),r._A.removeEventListener("test",null,e)}catch(e){}function o(e,t){return i||a?{capture:!!e,passive:i,signal:t}:!!e}function s(e,t){let n=arguments.length>2&&void 0!==arguments[2]&&arguments[2],r=arguments.length>3?arguments[3]:void 0;window.addEventListener(e,t,o(n,r))}function c(e,t){let n=arguments.length>2&&void 0!==arguments[2]&&arguments[2],r=arguments.length>3?arguments[3]:void 0;document.addEventListener(e,t,o(n,r))}},4402:(e,t,n)=>{n.d(t,{Rl:()=>o,ky:()=>s});var r=n(385);const i="xxxxxxxx-xxxx-4xxx-yxxx-xxxxxxxxxxxx";function a(e,t){return e?15&e[t]:16*Math.random()|0}function o(){const e=r._A?.crypto||r._A?.msCrypto;let t,n=0;return e&&e.getRandomValues&&(t=e.getRandomValues(new Uint8Array(31))),i.split("").map((e=>"x"===e?a(t,++n).toString(16):"y"===e?(3&a()|8).toString(16):e)).join("")}function s(e){const t=r._A?.crypto||r._A?.msCrypto;let n,i=0;t&&t.getRandomValues&&(n=t.getRandomValues(new Uint8Array(31)));const o=[];for(var s=0;s<e;s++)o.push(a(n,++i).toString(16));return o.join("")}},7056:(e,t,n)=>{n.d(t,{Bq:()=>r,Hb:()=>a,oD:()=>i});const r="NRBA",i=144e5,a=18e5},7894:(e,t,n)=>{function r(){return Math.round(performance.now())}n.d(t,{z:()=>r})},50:(e,t,n)=>{function r(e,t){"function"==typeof console.warn&&(console.warn("New Relic: ".concat(e)),t&&console.warn(t))}n.d(t,{Z:()=>r})},2587:(e,t,n)=>{n.d(t,{N:()=>c,T:()=>d});var r=n(2177),i=n(5546),a=n(8e3),o=n(3325);const s={stn:[o.D.sessionTrace],err:[o.D.jserrors,o.D.metrics],ins:[o.D.pageAction],spa:[o.D.spa],sr:[o.D.sessionReplay,o.D.sessionTrace]};function c(e,t){const n=r.ee.get(t);e&&"object"==typeof e&&(Object.entries(e).forEach((e=>{let[t,r]=e;void 0===d[t]&&(s[t]?s[t].forEach((e=>{r?(0,i.p)("feat-"+t,[],void 0,e,n):(0,i.p)("block-"+t,[],void 0,e,n),(0,i.p)("rumresp-"+t,[Boolean(r)],void 0,e,n)})):r&&(0,i.p)("feat-"+t,[],void 0,void 0,n),d[t]=Boolean(r))})),Object.keys(s).forEach((e=>{void 0===d[e]&&(s[e]?.forEach((t=>(0,i.p)("rumresp-"+e,[!1],void 0,t,n))),d[e]=!1)})),(0,a.L)(t,o.D.pageViewEvent))}const d={}},2210:(e,t,n)=>{n.d(t,{X:()=>i});var r=Object.prototype.hasOwnProperty;function i(e,t,n){if(r.call(e,t))return e[t];var i=n();if(Object.defineProperty&&Object.keys)try{return Object.defineProperty(e,t,{value:i,writable:!0,enumerable:!1}),i}catch(e){}return e[t]=i,i}},1284:(e,t,n)=>{n.d(t,{D:()=>r});const r=(e,t)=>Object.entries(e||{}).map((e=>{let[n,r]=e;return t(n,r)}))},4351:(e,t,n)=>{n.d(t,{P:()=>a});var r=n(2177);const i=()=>{const e=new WeakSet;return(t,n)=>{if("object"==typeof n&&null!==n){if(e.has(n))return;e.add(n)}return n}};function a(e){try{return JSON.stringify(e,i())}catch(e){try{r.ee.emit("internal-error",[e])}catch(e){}}}},3960:(e,t,n)=>{n.d(t,{K:()=>o,b:()=>a});var r=n(3239);function i(){return"undefined"==typeof document||"complete"===document.readyState}function a(e,t){if(i())return e();(0,r.bP)("load",e,t)}function o(e){if(i())return e();(0,r.iz)("DOMContentLoaded",e)}},8632:(e,t,n)=>{n.d(t,{EZ:()=>d,Qy:()=>c,ce:()=>a,fP:()=>o,gG:()=>u,mF:()=>s});var r=n(7894),i=n(385);const a={beacon:"bam.nr-data.net",errorBeacon:"bam.nr-data.net"};function o(){return i._A.NREUM||(i._A.NREUM={}),void 0===i._A.newrelic&&(i._A.newrelic=i._A.NREUM),i._A.NREUM}function s(){let e=o();return e.o||(e.o={ST:i._A.setTimeout,SI:i._A.setImmediate,CT:i._A.clearTimeout,XHR:i._A.XMLHttpRequest,REQ:i._A.Request,EV:i._A.Event,PR:i._A.Promise,MO:i._A.MutationObserver,FETCH:i._A.fetch}),e}function c(e,t,n){let i=o();const a=i.initializedAgents||{},s=a[e]||{};return Object.keys(s).length||(s.initializedAt={ms:(0,r.z)(),date:new Date}),i.initializedAgents={...a,[e]:{...s,[n]:t}},i}function d(e,t){o()[e]=t}function u(){return function(){let e=o();const t=e.info||{};e.info={beacon:a.beacon,errorBeacon:a.errorBeacon,...t}}(),function(){let e=o();const t=e.init||{};e.init={...t}}(),s(),function(){let e=o();const t=e.loader_config||{};e.loader_config={...t}}(),o()}},7956:(e,t,n)=>{n.d(t,{N:()=>i});var r=n(3239);function i(e){let t=arguments.length>1&&void 0!==arguments[1]&&arguments[1],n=arguments.length>2?arguments[2]:void 0,i=arguments.length>3?arguments[3]:void 0;return void(0,r.iz)("visibilitychange",(function(){if(t)return void("hidden"==document.visibilityState&&e());e(document.visibilityState)}),n,i)}},3081:(e,t,n)=>{n.d(t,{gF:()=>a,mY:()=>i,t9:()=>r,vz:()=>s,xS:()=>o});const r=n(3325).D.metrics,i="sm",a="cm",o="storeSupportabilityMetrics",s="storeEventMetrics"},7633:(e,t,n)=>{n.d(t,{Dz:()=>i,OJ:()=>o,qw:()=>a,t9:()=>r});const r=n(3325).D.pageViewEvent,i="firstbyte",a="domcontent",o="windowload"},9251:(e,t,n)=>{n.d(t,{t:()=>r});const r=n(3325).D.pageViewTiming},5938:(e,t,n)=>{n.d(t,{W:()=>a});var r=n(5763),i=n(2177);class a{constructor(e,t,n){this.agentIdentifier=e,this.aggregator=t,this.ee=i.ee.get(e,(0,r.OP)(this.agentIdentifier).isolatedBacklog),this.featureName=n,this.blocked=!1}}},9144:(e,t,n)=>{n.d(t,{j:()=>v});var r=n(3325),i=n(5763),a=n(5546),o=n(2177),s=n(7894),c=n(8e3),d=n(3960),u=n(385),l=n(50),f=n(3081),g=n(8632);function p(){const e=(0,g.gG)();["setErrorHandler","finished","addToTrace","inlineHit","addRelease","addPageAction","setCurrentRouteName","setPageViewName","setCustomAttribute","interaction","noticeError","setUserId"].forEach((t=>{e[t]=function(){for(var n=arguments.length,r=new Array(n),i=0;i<n;i++)r[i]=arguments[i];return function(t){for(var n=arguments.length,r=new Array(n>1?n-1:0),i=1;i<n;i++)r[i-1]=arguments[i];let a=[];return Object.values(e.initializedAgents).forEach((e=>{e.exposed&&e.api[t]&&a.push(e.api[t](...r))})),a.length>1?a:a[0]}(t,...r)}}))}var h=n(2587);function v(e){let t=arguments.length>1&&void 0!==arguments[1]?arguments[1]:{},v=arguments.length>2?arguments[2]:void 0,m=arguments.length>3?arguments[3]:void 0,{init:b,info:y,loader_config:w,runtime:A={loaderType:v},exposed:x=!0}=t;const D=(0,g.gG)();y||(b=D.init,y=D.info,w=D.loader_config),(0,i.Dg)(e,b||{}),(0,i.GE)(e,w||{}),y.jsAttributes??={},u.v6&&(y.jsAttributes.isWorker=!0),(0,i.CX)(e,y);const j=(0,i.P_)(e);A.denyList=[...j.ajax?.deny_list||[],...j.ajax?.block_internal?[y.beacon,y.errorBeacon]:[]],(0,i.sU)(e,A),p();const _=function(e,t){t||(0,c.R)(e,"api");const g={};var p=o.ee.get(e),h=p.get("tracer"),v="api-",m=v+"ixn-";function b(t,n,r,a){const o=(0,i.C5)(e);return null===n?delete o.jsAttributes[t]:(0,i.CX)(e,{...o,jsAttributes:{...o.jsAttributes,[t]:n}}),A(v,r,!0,a||null===n?"session":void 0)(t,n)}function y(){}["setErrorHandler","finished","addToTrace","inlineHit","addRelease"].forEach((e=>g[e]=A(v,e,!0,"api"))),g.addPageAction=A(v,"addPageAction",!0,r.D.pageAction),g.setCurrentRouteName=A(v,"routeName",!0,r.D.spa),g.setPageViewName=function(t,n){if("string"==typeof t)return"/"!==t.charAt(0)&&(t="/"+t),(0,i.OP)(e).customTransaction=(n||"http://custom.transaction")+t,A(v,"setPageViewName",!0)()},g.setCustomAttribute=function(e,t){let n=arguments.length>2&&void 0!==arguments[2]&&arguments[2];if("string"==typeof e){if(["string","number"].includes(typeof t)||null===t)return b(e,t,"setCustomAttribute",n);(0,l.Z)("Failed to execute setCustomAttribute.\nNon-null value must be a string or number type, but a type of <".concat(typeof t,"> was provided."))}else(0,l.Z)("Failed to execute setCustomAttribute.\nName must be a string type, but a type of <".concat(typeof e,"> was provided."))},g.setUserId=function(e){if("string"==typeof e||null===e)return b("enduser.id",e,"setUserId",!0);(0,l.Z)("Failed to execute setUserId.\nNon-null value must be a string type, but a type of <".concat(typeof e,"> was provided."))},g.interaction=function(){return(new y).get()};var w=y.prototype={createTracer:function(e,t){var n={},i=this,o="function"==typeof t;return(0,a.p)(m+"tracer",[(0,s.z)(),e,n],i,r.D.spa,p),function(){if(h.emit((o?"":"no-")+"fn-start",[(0,s.z)(),i,o],n),o)try{return t.apply(this,arguments)}catch(e){throw h.emit("fn-err",[arguments,this,e],n),e}finally{h.emit("fn-end",[(0,s.z)()],n)}}}};function A(e,t,n,i){return function(){return(0,a.p)(f.xS,["API/"+t+"/called"],void 0,r.D.metrics,p),i&&(0,a.p)(e+t,[(0,s.z)(),...arguments],n?null:this,i,p),n?void 0:this}}function x(){n.e(439).then(n.bind(n,7438)).then((t=>{let{setAPI:n}=t;n(e),(0,c.L)(e,"api")})).catch((()=>(0,l.Z)("Downloading runtime APIs failed...")))}return["actionText","setName","setAttribute","save","ignore","onEnd","getContext","end","get"].forEach((e=>{w[e]=A(m,e,void 0,r.D.spa)})),g.noticeError=function(e,t){"string"==typeof e&&(e=new Error(e)),(0,a.p)(f.xS,["API/noticeError/called"],void 0,r.D.metrics,p),(0,a.p)("err",[e,(0,s.z)(),!1,t],void 0,r.D.jserrors,p)},u.il?(0,d.b)((()=>x()),!0):x(),g}(e,m);return(0,g.Qy)(e,_,"api"),(0,g.Qy)(e,x,"exposed"),(0,g.EZ)("activatedFeatures",h.T),_}},3325:(e,t,n)=>{n.d(t,{D:()=>r,p:()=>i});const r={ajax:"ajax",jserrors:"jserrors",metrics:"metrics",pageAction:"page_action",pageViewEvent:"page_view_event",pageViewTiming:"page_view_timing",sessionReplay:"session_replay",sessionTrace:"session_trace",spa:"spa"},i={[r.pageViewEvent]:1,[r.pageViewTiming]:2,[r.metrics]:3,[r.jserrors]:4,[r.ajax]:5,[r.sessionTrace]:6,[r.pageAction]:7,[r.spa]:8,[r.sessionReplay]:9}}},r={};function i(e){var t=r[e];if(void 0!==t)return t.exports;var a=r[e]={exports:{}};return n[e](a,a.exports,i),a.exports}i.m=n,i.d=(e,t)=>{for(var n in t)i.o(t,n)&&!i.o(e,n)&&Object.defineProperty(e,n,{enumerable:!0,get:t[n]})},i.f={},i.e=e=>Promise.all(Object.keys(i.f).reduce(((t,n)=>(i.f[n](e,t),t)),[])),i.u=e=>(({78:"page_action-aggregate",147:"metrics-aggregate",193:"session_trace-aggregate",242:"session-manager",317:"jserrors-aggregate",348:"page_view_timing-aggregate",412:"lazy-feature-loader",439:"async-api",538:"recorder",590:"session_replay-aggregate",675:"compressor",786:"page_view_event-aggregate",873:"spa-aggregate",898:"ajax-aggregate"}[e]||e)+"."+{78:"467f8594",147:"b86cefcf",193:"ac30a1f3",242:"d080e4cc",317:"319b8300",348:"7b2a53ee",412:"c1052c27",439:"e9f77430",538:"9c5c1546",590:"8b420469",646:"9e7a6b8d",675:"9614fd62",786:"4988d952",860:"95a91211",873:"550eec7b",898:"d95c640e"}[e]+"-1.237.1.min.js"),i.o=(e,t)=>Object.prototype.hasOwnProperty.call(e,t),e={},t="NRBA:",i.l=(n,r,a,o)=>{if(e[n])e[n].push(r);else{var s,c;if(void 0!==a)for(var d=document.getElementsByTagName("script"),u=0;u<d.length;u++){var l=d[u];if(l.getAttribute("src")==n||l.getAttribute("data-webpack")==t+a){s=l;break}}s||(c=!0,(s=document.createElement("script")).charset="utf-8",s.timeout=120,i.nc&&s.setAttribute("nonce",i.nc),s.setAttribute("data-webpack",t+a),s.src=n),e[n]=[r];var f=(t,r)=>{s.onerror=s.onload=null,clearTimeout(g);var i=e[n];if(delete e[n],s.parentNode&&s.parentNode.removeChild(s),i&&i.forEach((e=>e(r))),t)return t(r)},g=setTimeout(f.bind(null,void 0,{type:"timeout",target:s}),12e4);s.onerror=f.bind(null,s.onerror),s.onload=f.bind(null,s.onload),c&&document.head.appendChild(s)}},i.r=e=>{"undefined"!=typeof Symbol&&Symbol.toStringTag&&Object.defineProperty(e,Symbol.toStringTag,{value:"Module"}),Object.defineProperty(e,"__esModule",{value:!0})},i.j=4,i.p="https://js-agent.newrelic.com/",(()=>{var e={4:0,465:0};i.f.j=(t,n)=>{var r=i.o(e,t)?e[t]:void 0;if(0!==r)if(r)n.push(r[2]);else{var a=new Promise(((n,i)=>r=e[t]=[n,i]));n.push(r[2]=a);var o=i.p+i.u(t),s=new Error;i.l(o,(n=>{if(i.o(e,t)&&(0!==(r=e[t])&&(e[t]=void 0),r)){var a=n&&("load"===n.type?"missing":n.type),o=n&&n.target&&n.target.src;s.message="Loading chunk "+t+" failed.\n("+a+": "+o+")",s.name="ChunkLoadError",s.type=a,s.request=o,r[1](s)}}),"chunk-"+t,t)}};var t=(t,n)=>{var r,a,[o,s,c]=n,d=0;if(o.some((t=>0!==e[t]))){for(r in s)i.o(s,r)&&(i.m[r]=s[r]);if(c)c(i)}for(t&&t(n);d<o.length;d++)a=o[d],i.o(e,a)&&e[a]&&e[a][0](),e[a]=0},n=window.webpackChunkNRBA=window.webpackChunkNRBA||[];n.forEach(t.bind(null,0)),n.push=t.bind(null,n.push.bind(n))})();var a={};(()=>{i.r(a);var e=i(50);class t{addPageAction(t,n){(0,e.Z)("Call to agent api addPageAction failed. The session trace feature is not currently initialized.")}setPageViewName(t,n){(0,e.Z)("Call to agent api setPageViewName failed. The page view feature is not currently initialized.")}setCustomAttribute(t,n,r){(0,e.Z)("Call to agent api setCustomAttribute failed. The js errors feature is not currently initialized.")}noticeError(t,n){(0,e.Z)("Call to agent api noticeError failed. The js errors feature is not currently initialized.")}setUserId(t){(0,e.Z)("Call to agent api setUserId failed. The js errors feature is not currently initialized.")}setErrorHandler(t){(0,e.Z)("Call to agent api setErrorHandler failed. The js errors feature is not currently initialized.")}finished(t){(0,e.Z)("Call to agent api finished failed. The page action feature is not currently initialized.")}addRelease(t,n){(0,e.Z)("Call to agent api addRelease failed. The agent is not currently initialized.")}}var n=i(3325),r=i(5763);const o=Object.values(n.D);function s(e){const t={};return o.forEach((n=>{t[n]=function(e,t){return!1!==(0,r.Mt)(t,"".concat(e,".enabled"))}(n,e)})),t}var c=i(9144);var d=i(5546),u=i(385),l=i(8e3),f=i(5938),g=i(3960);class p extends f.W{constructor(e,t,n){let r=!(arguments.length>3&&void 0!==arguments[3])||arguments[3];super(e,t,n),this.auto=r,this.abortHandler,this.featAggregate,this.onAggregateImported,r&&(0,l.R)(e,n)}importAggregator(){let t=arguments.length>0&&void 0!==arguments[0]?arguments[0]:{};if(this.featAggregate||!this.auto)return;const n=u.il&&!0===(0,r.Mt)(this.agentIdentifier,"privacy.cookies_enabled");let a;this.onAggregateImported=new Promise((e=>{a=e}));const o=async()=>{let r;try{if(n){const{setupAgentSession:e}=await Promise.all([i.e(860),i.e(242)]).then(i.bind(i,3228));r=e(this.agentIdentifier)}}catch(t){(0,e.Z)("A problem occurred when starting up session manager. This page will not start or extend any session.",t)}try{if(!this.shouldImportAgg(this.featureName,r))return(0,l.L)(this.agentIdentifier,this.featureName),void a(!1);const{lazyFeatureLoader:e}=await i.e(412).then(i.bind(i,8582)),{Aggregate:n}=await e(this.featureName,"aggregate");this.featAggregate=new n(this.agentIdentifier,this.aggregator,t),a(!0)}catch(t){(0,e.Z)("Downloading and initializing ".concat(this.featureName," failed..."),t),this.abortHandler?.(),a(!1)}};u.il?(0,g.b)((()=>o()),!0):o()}shouldImportAgg(e,t){return e!==n.D.sessionReplay||!!r.Yu.MO&&(!1!==(0,r.Mt)(this.agentIdentifier,"session_trace.enabled")&&(!!t?.isNew||!!t?.state.sessionReplay))}}var h=i(7633),v=i(7894);class m extends p{static featureName=h.t9;constructor(e,t){let i=!(arguments.length>2&&void 0!==arguments[2])||arguments[2];if(super(e,t,h.t9,i),("undefined"==typeof PerformanceNavigationTiming||u.Tt)&&"undefined"!=typeof PerformanceTiming){const t=(0,r.OP)(e);t[h.Dz]=Math.max(Date.now()-t.offset,0),(0,g.K)((()=>t[h.qw]=Math.max((0,v.z)()-t[h.Dz],0))),(0,g.b)((()=>{const e=(0,v.z)();t[h.OJ]=Math.max(e-t[h.Dz],0),(0,d.p)("timing",["load",e],void 0,n.D.pageViewTiming,this.ee)}))}this.importAggregator()}}var b=i(1117),y=i(1284);class w extends b.w{constructor(e){super(e),this.aggregatedData={}}store(e,t,n,r,i){var a=this.getBucket(e,t,n,i);return a.metrics=function(e,t){t||(t={count:0});return t.count+=1,(0,y.D)(e,(function(e,n){t[e]=A(n,t[e])})),t}(r,a.metrics),a}merge(e,t,n,r,i){var a=this.getBucket(e,t,r,i);if(a.metrics){var o=a.metrics;o.count+=n.count,(0,y.D)(n,(function(e,t){if("count"!==e){var r=o[e],i=n[e];i&&!i.c?o[e]=A(i.t,r):o[e]=function(e,t){if(!t)return e;t.c||(t=x(t.t));return t.min=Math.min(e.min,t.min),t.max=Math.max(e.max,t.max),t.t+=e.t,t.sos+=e.sos,t.c+=e.c,t}(i,o[e])}}))}else a.metrics=n}storeMetric(e,t,n,r){var i=this.getBucket(e,t,n);return i.stats=A(r,i.stats),i}getBucket(e,t,n,r){this.aggregatedData[e]||(this.aggregatedData[e]={});var i=this.aggregatedData[e][t];return i||(i=this.aggregatedData[e][t]={params:n||{}},r&&(i.custom=r)),i}get(e,t){return t?this.aggregatedData[e]&&this.aggregatedData[e][t]:this.aggregatedData[e]}take(e){for(var t={},n="",r=!1,i=0;i<e.length;i++)t[n=e[i]]=D(this.aggregatedData[n]),t[n].length&&(r=!0),delete this.aggregatedData[n];return r?t:null}}function A(e,t){return null==e?function(e){e?e.c++:e={c:1};return e}(t):t?(t.c||(t=x(t.t)),t.c+=1,t.t+=e,t.sos+=e*e,e>t.max&&(t.max=e),e<t.min&&(t.min=e),t):{t:e}}function x(e){return{t:e,min:e,max:e,sos:e*e,c:1}}function D(e){return"object"!=typeof e?[]:(0,y.D)(e,j)}function j(e,t){return t}var _=i(8632),E=i(4402),T=i(4351);var k=i(7956),N=i(3239),P=i(9251);class C extends p{static featureName=P.t;constructor(e,t){let n=!(arguments.length>2&&void 0!==arguments[2])||arguments[2];super(e,t,P.t,n),u.il&&((0,r.OP)(e).initHidden=Boolean("hidden"===document.visibilityState),(0,k.N)((()=>(0,d.p)("docHidden",[(0,v.z)()],void 0,P.t,this.ee)),!0),(0,N.bP)("pagehide",(()=>(0,d.p)("winPagehide",[(0,v.z)()],void 0,P.t,this.ee))),this.importAggregator())}}var I=i(3081);class S extends p{static featureName=I.t9;constructor(e,t){let n=!(arguments.length>2&&void 0!==arguments[2])||arguments[2];super(e,t,I.t9,n),this.importAggregator()}}new class extends t{constructor(t){let n=arguments.length>1&&void 0!==arguments[1]?arguments[1]:(0,E.ky)(16);super(),u._A?(this.agentIdentifier=n,this.sharedAggregator=new w({agentIdentifier:this.agentIdentifier}),this.features={},this.desiredFeatures=new Set(t.features||[]),this.desiredFeatures.add(m),Object.assign(this,(0,c.j)(this.agentIdentifier,t,t.loaderType||"agent")),this.start()):(0,e.Z)("Failed to initial the agent. Could not determine the runtime environment.")}get config(){return{info:(0,r.C5)(this.agentIdentifier),init:(0,r.P_)(this.agentIdentifier),loader_config:(0,r.DL)(this.agentIdentifier),runtime:(0,r.OP)(this.agentIdentifier)}}start(){const t="features";try{const r=s(this.agentIdentifier),i=[...this.desiredFeatures];i.sort(((e,t)=>n.p[e.featureName]-n.p[t.featureName])),i.forEach((t=>{if(r[t.featureName]||t.featureName===n.D.pageViewEvent){const i=function(e){switch(e){case n.D.ajax:return[n.D.jserrors];case n.D.sessionTrace:return[n.D.ajax,n.D.pageViewEvent];case n.D.sessionReplay:return[n.D.sessionTrace];case n.D.pageViewTiming:return[n.D.pageViewEvent];default:return[]}}(t.featureName);i.every((e=>r[e]))||(0,e.Z)("".concat(t.featureName," is enabled but one or more dependent features has been disabled (").concat((0,T.P)(i),"). This may cause unintended consequences or missing data...")),this.features[t.featureName]=new t(this.agentIdentifier,this.sharedAggregator)}})),(0,_.Qy)(this.agentIdentifier,this.features,t)}catch(n){(0,e.Z)("Failed to initialize all enabled instrument classes (agent aborted) -",n);for(const e in this.features)this.features[e].abortHandler?.();const r=(0,_.fP)();return delete r.initializedAgents[this.agentIdentifier]?.api,delete r.initializedAgents[this.agentIdentifier]?.[t],delete this.sharedAggregator,r.ee?.abort(),delete r.ee?.get(this.agentIdentifier),!1}}addToTrace(t){(0,e.Z)("Call to agent api addToTrace failed. The page action feature is not currently initialized.")}setCurrentRouteName(t){(0,e.Z)("Call to agent api setCurrentRouteName failed. The spa feature is not currently initialized.")}interaction(){(0,e.Z)("Call to agent api interaction failed. The spa feature is not currently initialized.")}}({features:[m,C,S],loaderType:"lite"})})(),window.NRBA=a})();</script><script type="text/javascript">window.NREUM||(NREUM={});NREUM.info={"beacon":"bam.nr-data.net","errorBeacon":"bam.nr-data.net","licenseKey":"8d5fb92f6e","applicationID":"1100293087","transactionName":"ZwMAYEdSCktRWxZRXV5JJEFbUBBRX1ZNW11eEgdHQR0SUVVPERZCQgkAWFBeO1xVTANRXgolDVpBVhdMYU0HS0ZZCQxwUEcFUVxuC11FHgEHQA==","queueTime":0,"applicationTime":49,"agent":""}</script>
    <title>Check if it is Possible to Split Array - LeetCode Contest</title>
    <meta property="og:title" content="Check if it is Possible to Split Array - LeetCode Contest" />

    
    <meta content='width=device-width, initial-scale=1.0, maximum-scale=1.0, user-scalable=no, viewport-fit=cover' name='viewport' />
    
    <meta name="description" content="Level up your coding skills and quickly land a job. This is the best place to expand your knowledge and get prepared for your next interview." />
    
    <meta property="og:image" content="/static/images/LeetCode_Sharing.png" />
    <meta property="og:description" content="Level up your coding skills and quickly land a job. This is the best place to expand your knowledge and get prepared for your next interview." />

    

    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-57x57.png" />
    <link rel="apple-touch-icon" sizes="60x60" href="/apple-touch-icon-60x60.png" />
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-72x72.png" />
    <link rel="apple-touch-icon" sizes="76x76" href="/apple-touch-icon-76x76.png" />
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114x114.png" />
    <link rel="apple-touch-icon" sizes="120x120" href="/apple-touch-icon-120x120.png" />
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144x144.png" />
    <link rel="apple-touch-icon" sizes="152x152" href="/apple-touch-icon-152x152.png" />
    <link rel="apple-touch-icon" sizes="180x180" href="/apple-touch-icon-180x180.png" />
    <link rel="icon" type="image/png" href="/favicon-16x16.png" sizes="16x16" />
    <link rel="icon" type="image/png" href="/favicon-32x32.png" sizes="32x32" />
    <link rel="icon" type="image/png" href="/favicon-96x96.png" sizes="96x96" />
    <link rel="icon" type="image/png" href="/favicon-160x160.png" sizes="160x160" />
    <link rel="icon" type="image/png" href="/favicon-192x192.png" sizes="192x192" />
    <meta name="application-name" content="LeetCode"/>
    <meta name="msapplication-TileColor" content="#da532c" />
    <meta name="msapplication-TileImage" content="/mstile-144x144.png" />

    

    <script>
  (function(i,s,o,g,r,a,m){i['GoogleAnalyticsObject']=r;i[r]=i[r]||function(){
  (i[r].q=i[r].q||[]).push(arguments)},i[r].l=1*new Date();a=s
  .createElement(o),m=s.getElementsByTagName(o)[0];a.async=1;a.src=g;m
  .parentNode.insertBefore(a,m)})(window,document,'script',
  '//www.google-analytics.com/analytics.js','ga');
  var currentDate=new Date();
  var thresholdDate=new Date(Date.UTC(2022, 0, 1, 0, 0, 0));
  ga('create', 'UA-159258186-1', 'leetcode.com', { userId: 2979627, sampleRate: currentDate <= thresholdDate ? 75 : 100 });
  ga('set', {'dimension1': 'false', 'dimension2': '2979627'});
  ga('require', 'displayfeatures');
  ga('send', 'pageview');
</script>

<script type="text/javascript" defer="defer" src="https://extend.vimeocdn.com/ga/124665836.js"></script>

    <!-- Google tag (gtag.js) -->
<script async src="https://www.googletagmanager.com/gtag/js?id=G-CDRWKZTDEX"></script>
<script>
  window.dataLayer = window.dataLayer || [];
  function gtag(){dataLayer.push(arguments);}
  gtag('js', new Date());
  gtag('set', 'user_properties', {
    is_premium: "false",
  })
  gtag('config', 'G-CDRWKZTDEX', { user_id: 2979627});
</script>


    <link type="text/css" href="/static/bootstrap/dist/css/bootstrap.min.css?v=3.3.7" rel="stylesheet">
    <link type="text/css" href="/static/font-awesome/css/font-awesome.min.css?cache_version=2" rel="stylesheet">
    <link type="text/css" href="/static/bootstrap-table/dist/bootstrap-table.min.css" rel="stylesheet" />

    
    <link rel="stylesheet" href="/static/CACHE/css/output.c2b31c324925.css" type="text/css">

    

     
<link rel="stylesheet" href="/static/CACHE/css/output.111391214419.css" type="text/css">

    

    <script src="/static/CACHE/js/output.6b818f3f25d1.js"></script>
    <script type="text/javascript" src="/static/jquery/dist/jquery.min.js?v=3.3.1"></script>
    <script>window.jQuery || document.write("<script type=\"text/javascript\" src=\"https://code.jquery.com/jquery-3.3.1.min.js\">\x3C/script>")</script>
    <script type="text/javascript" src="/static/jquery.cookie/jquery.cookie.js"></script>
    <script type="text/javascript" src="/static/jquery-sticky/jquery.sticky.js"></script>
    <script type="text/javascript" src="/static/clipboard/dist/clipboard.min.js"></script>
    <script type="text/javascript" src="/static/sweetalert2/dist/sweetalert2.min.js"></script>
    <script>
      $(document).ready(function(){
        $('.sticky').sticky({topSpacing:0});
      });

      
      
      
      window.LeetCodeData = {
        features: {
          questionTranslation: false,
          subscription: true,
          signUp: true,
          chinaProblemDiscuss: false,
          enableSharedWorker: true,
          enableChannels: false,
          enableDangerZone: true,
          enableRecaptchaV3: true,
          enableIndiaPricing: true,
          enableReferralDiscount: true,
          maxTimeTravelTicketCount: 3,
          enableStoreShippingForm: true,
          enableNewProblemsetBanner: true,
          enableCodingChallengeV2: false,
        },
        regionInfo: "US",
        userStatus: {
          isSignedIn: true,
          optedIn:  true ,
          isPremium: false,
          isAdmin:  false ,
          isStaff:  false ,
          isTranslator:  false ,
          isSuperuser:  false ,
          request_region: 'US',
          region: '',
          plan: 'None',
          countryCode: 'IN',
          permissions: [],
          
            realName: 'Krishna Kant Verma',
            username: 'krishna_6431',
            userSlug: 'krishna_6431',
            avatar: 'https://assets.leetcode.com/users/avatars/avatar_1645123215.png',
            numUnreadNotifications: 0,
            lastModified: 1691239537,
          
          
        },
        chinaURL: "https://leetcode.cn",
        websocketUrl: "wss://sockets.leetcode.com/ws/",
        recaptchaKey: "6LdBpsIUAAAAAKAYWjZfIpn4cJHVIk_tsmxpl7cz",
        recaptchaKeyV2: "6LdBX8MUAAAAAAI4aZHi1C59OJizaJTvPNvWH2wz",
        
        navbar: {
          
            loginSocial: [{"id": "linkedin_oauth2", "login_url": "/accounts/linkedin_oauth2/login/"}, {"id": "google", "login_url": "/accounts/google/login/"}, {"id": "github", "login_url": "/accounts/github/login/"}, {"id": "facebook", "login_url": "/accounts/facebook/login/"}],
          
          loginNext: undefined,
          subscription: true,
          mi: true,
          contest: true,
          discuss: true,
          store: true,
          translate: false,
          identity:  "" ,
        },
      };
    </script>
    <script type="text/javascript" src="/static/angular/angular.min.js"></script>
    <script type="text/javascript" src="/static/jquery-ui-dist/jquery-ui.min.js"></script>
    <script type="text/javascript" src="/static/noty/lib/noty.min.js"></script>
    <!-- HTML5 Shim and Respond.js IE8 support of HTML5 elements and media queries -->
    <!-- WARNING: Respond.js doesn't work if you view the page via file:// -->
    <!--[if lt IE 9]>
      <script type="text/javascript" src="/static/html5shiv/dist/html5shiv.min.js"></script>
      <script type="text/javascript" src="/static/respond.js/dest/respond.min.js"></script>
    <![endif]-->

    
  </head>
  <body>
    <script type="text/javascript" src="/static/bootstrap/dist/js/bootstrap.min.js?v=3.3.7"></script>
    <script type="text/javascript" src="/static/bootstrap-table/dist/bootstrap-table.min.js"></script>
    <script src="/static/CACHE/js/output.74019921ae23.js"></script>

    <script type="text/javascript" src="/static/webpack_bundles/runtime.f5758cf00.js" ></script>
    <script type="text/javascript" src="/static/webpack_bundles/common/global.78e54acc0.js" ></script>
    <script type="text/javascript" src="/static/webpack_bundles/common/styles/index.76b2aa34d.js" ></script>
    <script type="text/javascript" src="/static/webpack_bundles/vendor-libs.5c1c67dab.js" ></script>
    <script type="text/javascript" src="/static/webpack_bundles/common-libs.023a82d08.js" ></script>
    <script type="text/javascript" src="/static/webpack_bundles/new-libs.f89e3c82a.js" ></script>

    
     

    
  
  <div id="navbar-root"></div>
  

  <div class="content-wrapper" style="min-height: 100vh">
    <div id="base_content">
       

  <div class="container">
    
      <div id="notice"></div>
    
    <div class="row">
      <div class="col-md-12">
        <div class="question-title clearfix">
          <h3>6953. <span>Check if it is Possible to Split Array</span></h3>
          <div class="pull-right top-buttons">
            <div class="btn-group right-pad">
              <a class="btn btn-default" href="/contest/weekly-contest-357/problems/check-if-it-is-possible-to-split-array/submissions/">My Submissions</a>
              <a class="btn btn-success" href="/contest/weekly-contest-357/">Back to Contest</a>
            </div>
          </div>
        </div>
        <div class="row col-md-12">

        </div>
        <div class="row">
          <div class="col-md-12">
            <div class="contest-question-info pull-right">
              <ul class="list-group">
                
                  <li class="list-group-item">
                    <strong>
                      User Accepted:
                    </strong>
                    <span class="pull-right">142</span>
                  </li>
                  <li class="list-group-item">
                    <strong>
                      User Tried:
                    </strong>
                    <span class="pull-right">309</span>
                  </li>
                
                <li class="list-group-item">
                  <strong>Total Accepted:</strong>
                  <span class="pull-right">142</span>
                </li>
                <li class="list-group-item">
                  <strong>Total Submissions:</strong>
                  <span class="pull-right">539</span>
                </li>
                <li class="list-group-item">
                  <strong>Difficulty:</strong>
                  <span class="pull-right label label-Medium round">Medium</span>
                </li>
              </ul>
            </div>
            <div class="question-content default-content">
              <p>You are given an array <code>nums</code> of length <code>n</code> and an integer <code>m</code>. You need to determine if it is possible to split the array into <code>n</code> <strong>non-empty</strong> arrays by performing a series of steps.</p>

<p>In each step, you can select an existing array (which may be the result of previous steps) with a length of <strong>at least two</strong> and split it into <strong>two </strong>subarrays, if, <strong>for each </strong>resulting subarray, <strong>at least</strong> one of the following holds:</p>

<ul>
	<li>The length of the subarray is one, or</li>
	<li>The sum of elements of the subarray is <strong>greater than or equal</strong> to <code>m</code>.</li>
</ul>

<p>Return <code>true</code><em> if you can split the given array into </em><code>n</code><em> arrays, otherwise return</em> <code>false</code>.</p>

<p><strong>Note:</strong> A subarray is <em>a contiguous non-empty sequence of elements within an array</em>.</p>

<p>&nbsp;</p>
<p><strong class="example">Example 1:</strong></p>

<pre>
<strong>Input:</strong> nums = [2, 2, 1], m = 4
<strong>Output:</strong> true
<strong>Explanation:</strong> We can split the array into [2, 2] and [1] in the first step. Then, in the second step, we can split [2, 2] into [2] and [2]. As a result, the answer is true.</pre>

<p><strong class="example">Example 2:</strong></p>

<pre>
<strong>Input:</strong> nums = [2, 1, 3], m = 5 
<strong>Output:</strong> false
<strong>Explanation: </strong>We can try splitting the array in two different ways: the first way is to have [2, 1] and [3], and the second way is to have [2] and [1, 3]. However, both of these ways are not valid. So, the answer is false.</pre>

<p><strong class="example">Example 3:</strong></p>

<pre>
<strong>Input:</strong> nums = [2, 3, 3, 2, 3], m = 6
<strong>Output:</strong> true
<strong>Explanation:</strong> We can split the array into [2, 3, 3, 2] and [3] in the first step. Then, in the second step, we can split [2, 3, 3, 2] into [2, 3, 3] and [2]. Then, in the third step, we can split [2, 3, 3] into [2] and [3, 3]. And in the last step we can split [3, 3] into [3] and [3]. As a result, the answer is true.
</pre>

<p>&nbsp;</p>
<p><strong>Constraints:</strong></p>

<ul>
	<li><code>1 &lt;= n == nums.length &lt;= 100</code></li>
	<li><code>1 &lt;= nums[i] &lt;= 100</code></li>
	<li><code>1 &lt;= m &lt;= 200</code></li>
</ul>

            </div>
          </div>
        </div>
      </div>
    </div>
    
  </div>
  <div class="editor-container">
    <div id="submission-form-app"></div>
  </div>


    </div>
  </div>

  <div id="footer-root"></div>
  <script type="text/javascript" src="/static/webpack_bundles/new-apps/navbar-footer/index.91722135f.js" ></script>


    <script>
      $(document).ready(function() {
        var time_diff = new Date() - new Date(localStorage.getItem('region_switcher_last_close_ts'))
        if (time_diff > 86400000) {  // 86400000ms == 1day
          $("#region_switcher").removeClass('hide');
        }
      });

      function closeRegion() {
        $("#region_switcher").addClass('hide');
        localStorage.setItem('region_switcher_last_close_ts', new Date());
      }
    </script>

     
<script>
  var pageData = {
    questionId: '2916',
    questionIdHash: '',
    questionTitleSlug: 'check-if-it-is-possible-to-split-array',
    questionTitle: 'Check if it is Possible to Split Array',
    questionExampleTestcases: '[2, 2, 1]\u000A4\u000A[2, 1, 3]\u000A5\u000A[2, 3, 3, 2, 3]\u000A6',
    categoryTitle: 'Contest',
    contestTitleSlug: 'weekly-contest-357',
    loginUrl: '/accounts/login/?next=/problems/check-if-it-is-possible-to-split-array/',
    isSignedIn: true,

    sessionId: '0',
    reverseUrl: {
      latest_submission: '/submissions/latest/',
      account_login: '/accounts/login/',
      maintenance: '/maintenance/',
      profile: '/profile/'
    },
    enableRunCode:  true ,
    enableSubmit: true ,
    submitUrl: '/contest/api/weekly-contest-357/problems/check-if-it-is-possible-to-split-array/submit/',
    interpretUrl: '/contest/api/weekly-contest-357/problems/check-if-it-is-possible-to-split-array/interpret_solution/',
    judgeType: 'large',
    nextChallengePairs: null,
    codeDefinition: [{'value': 'cpp', 'text': 'C++', 'defaultCode': 'class Solution {\u000Apublic:\u000A    bool canSplitArray(vector\u003Cint\u003E\u0026 nums, int m) {\u000A        \u000A    }\u000A}\u003B' },{'value': 'java', 'text': 'Java', 'defaultCode': 'class Solution {\u000A    public boolean canSplitArray(List\u003CInteger\u003E nums, int m) {\u000A        \u000A    }\u000A}' },{'value': 'python', 'text': 'Python', 'defaultCode': 'class Solution(object):\u000A    def canSplitArray(self, nums, m):\u000A        \u0022\u0022\u0022\u000A        :type nums: List[int]\u000A        :type m: int\u000A        :rtype: bool\u000A        \u0022\u0022\u0022\u000A        ' },{'value': 'python3', 'text': 'Python3', 'defaultCode': 'class Solution:\u000A    def canSplitArray(self, nums: List[int], m: int) \u002D\u003E bool:\u000A        ' },{'value': 'c', 'text': 'C', 'defaultCode': 'bool canSplitArray(int* nums, int numsSize, int m){\u000A\u000A}' },{'value': 'csharp', 'text': 'C#', 'defaultCode': 'public class Solution {\u000A    public bool CanSplitArray(IList\u003Cint\u003E nums, int m) {\u000A        \u000A    }\u000A}' },{'value': 'javascript', 'text': 'JavaScript', 'defaultCode': '/**\u000A * @param {number[]} nums\u000A * @param {number} m\u000A * @return {boolean}\u000A */\u000Avar canSplitArray \u003D function(nums, m) {\u000A    \u000A}\u003B' },{'value': 'ruby', 'text': 'Ruby', 'defaultCode': '# @param {Integer[]} nums\u000A# @param {Integer} m\u000A# @return {Boolean}\u000Adef can_split_array(nums, m)\u000A    \u000Aend' },{'value': 'swift', 'text': 'Swift', 'defaultCode': 'class Solution {\u000A    func canSplitArray(_ nums: [Int], _ m: Int) \u002D\u003E Bool {\u000A        \u000A    }\u000A}' },{'value': 'golang', 'text': 'Go', 'defaultCode': 'func canSplitArray(nums []int, m int) bool {\u000A    \u000A}' },{'value': 'scala', 'text': 'Scala', 'defaultCode': 'object Solution {\u000A    def canSplitArray(nums: List[Int], m: Int): Boolean \u003D {\u000A        \u000A    }\u000A}' },{'value': 'kotlin', 'text': 'Kotlin', 'defaultCode': 'class Solution {\u000A    fun canSplitArray(nums: List\u003CInt\u003E, m: Int): Boolean {\u000A        \u000A    }\u000A}' },{'value': 'rust', 'text': 'Rust', 'defaultCode': 'impl Solution {\u000A    pub fn can_split_array(nums: Vec\u003Ci32\u003E, m: i32) \u002D\u003E bool {\u000A        \u000A    }\u000A}' },{'value': 'php', 'text': 'PHP', 'defaultCode': 'class Solution {\u000A\u000A    /**\u000A     * @param Integer[] $nums\u000A     * @param Integer $m\u000A     * @return Boolean\u000A     */\u000A    function canSplitArray($nums, $m) {\u000A        \u000A    }\u000A}' },{'value': 'typescript', 'text': 'TypeScript', 'defaultCode': 'function canSplitArray(nums: number[], m: number): boolean {\u000A\u000A}\u003B' },{'value': 'racket', 'text': 'Racket', 'defaultCode': '(define/contract (can\u002Dsplit\u002Darray nums m)\u000A  (\u002D\u003E (listof exact\u002Dinteger?) exact\u002Dinteger? boolean?)\u000A\u000A  )' },{'value': 'erlang', 'text': 'Erlang', 'defaultCode': '\u002Dspec can_split_array(Nums :: [integer()], M :: integer()) \u002D\u003E boolean().\u000Acan_split_array(Nums, M) \u002D\u003E\u000A  .' },{'value': 'elixir', 'text': 'Elixir', 'defaultCode': 'defmodule Solution do\u000A  @spec can_split_array(nums :: [integer], m :: integer) :: boolean\u000A  def can_split_array(nums, m) do\u000A\u000A  end\u000Aend' },{'value': 'dart', 'text': 'Dart', 'defaultCode': 'class Solution {\u000A  bool canSplitArray(List\u003Cint\u003E nums, int m) {\u000A\u000A  }\u000A}' },],
    enableTestMode: false ,
    metaData: JSON.parse('{\u000A  \u0022name\u0022: \u0022canSplitArray\u0022,\u000A  \u0022params\u0022: [\u000A    {\u000A      \u0022name\u0022: \u0022nums\u0022,\u000A      \u0022type\u0022: \u0022list\u003Cinteger\u003E\u0022\u000A    },\u000A    {\u000A      \u0022type\u0022: \u0022integer\u0022,\u000A      \u0022name\u0022: \u0022m\u0022\u000A    }\u000A  ],\u000A  \u0022return\u0022: {\u000A    \u0022type\u0022: \u0022boolean\u0022\u000A  }\u000A}' || '{}'),
    sampleTestCase: '[2, 2, 1]\u000A4',
    judgerAvailable:  true ,
    envInfo: JSON.parse('{\u0022cpp\u0022: [\u0022C++\u0022, \u0022\u003Cp\u003ECompiled with \u003Ccode\u003E clang 11 \u003C/code\u003E using the latest C++ 20 standard.\u003C/p\u003E\u005Cr\u005Cn\u005Cr\u005Cn\u003Cp\u003EYour code is compiled with level two optimization (\u003Ccode\u003E\u002DO2\u003C/code\u003E). \u003Ca href\u003D\u005C\u0022https://github.com/google/sanitizers/wiki/AddressSanitizer\u005C\u0022 target\u003D\u005C\u0022_blank\u005C\u0022\u003EAddressSanitizer\u003C/a\u003E is also enabled to help detect out\u002Dof\u002Dbounds and use\u002Dafter\u002Dfree bugs.\u003C/p\u003E\u005Cr\u005Cn\u005Cr\u005Cn\u003Cp\u003EMost standard library headers are already included automatically for your convenience.\u003C/p\u003E\u0022], \u0022java\u0022: [\u0022Java\u0022, \u0022\u003Cp\u003E\u003Ccode\u003EOpenJDK 17\u003C/code\u003E. Java 8 features such as lambda expressions and stream API can be used. \u003C/p\u003E\u005Cr\u005Cn\u005Cr\u005Cn\u003Cp\u003EMost standard library headers are already included automatically for your convenience.\u003C/p\u003E\u005Cr\u005Cn\u003Cp\u003EIncludes \u003Ccode\u003EPair\u003C/code\u003E class from https://docs.oracle.com/javase/8/javafx/api/javafx/util/Pair.html.\u003C/p\u003E\u0022], \u0022python\u0022: [\u0022Python\u0022, \u0022\u003Cp\u003E\u003Ccode\u003EPython 2.7.12\u003C/code\u003E.\u003C/p\u003E\u005Cr\u005Cn\u005Cr\u005Cn\u003Cp\u003EMost libraries are already imported automatically for your convenience, such as \u003Ca href\u003D\u005C\u0022https://docs.python.org/2/library/array.html\u005C\u0022 target\u003D\u005C\u0022_blank\u005C\u0022\u003Earray\u003C/a\u003E, \u003Ca href\u003D\u005C\u0022https://docs.python.org/2/library/bisect.html\u005C\u0022 target\u003D\u005C\u0022_blank\u005C\u0022\u003Ebisect\u003C/a\u003E, \u003Ca href\u003D\u005C\u0022https://docs.python.org/2/library/collections.html\u005C\u0022 target\u003D\u005C\u0022_blank\u005C\u0022\u003Ecollections\u003C/a\u003E. If you need more libraries, you can import it yourself.\u003C/p\u003E\u005Cr\u005Cn\u005Cr\u005Cn\u003Cp\u003EFor Map/TreeMap data structure, you may use \u003Ca href\u003D\u005C\u0022http://www.grantjenks.com/docs/sortedcontainers/\u005C\u0022 target\u003D\u005C\u0022_blank\u005C\u0022\u003Esortedcontainers\u003C/a\u003E library.\u003C/p\u003E\u005Cr\u005Cn\u005Cr\u005Cn\u003Cp\u003ENote that Python 2.7 \u003Ca href\u003D\u005C\u0022https://www.python.org/dev/peps/pep\u002D0373/\u005C\u0022 target\u003D\u005C\u0022_blank\u005C\u0022\u003Ewill not be maintained past 2020\u003C/a\u003E. For the latest Python, please choose Python3 instead.\u003C/p\u003E\u0022], \u0022c\u0022: [\u0022C\u0022, \u0022\u003Cp\u003ECompiled with \u003Ccode\u003Egcc 8.2\u003C/code\u003E using the gnu11 standard.\u003C/p\u003E\u005Cr\u005Cn\u005Cr\u005Cn\u003Cp\u003EYour code is compiled with level one optimization (\u003Ccode\u003E\u002DO1\u003C/code\u003E). \u003Ca href\u003D\u005C\u0022https://github.com/google/sanitizers/wiki/AddressSanitizer\u005C\u0022 target\u003D\u005C\u0022_blank\u005C\u0022\u003EAddressSanitizer\u003C/a\u003E is also enabled to help detect out\u002Dof\u002Dbounds and use\u002Dafter\u002Dfree bugs.\u003C/p\u003E\u005Cr\u005Cn\u005Cr\u005Cn\u003Cp\u003EMost standard library headers are already included automatically for your convenience.\u003C/p\u003E\u005Cr\u005Cn\u005Cr\u005Cn\u003Cp\u003EFor hash table operations, you may use \u003Ca href\u003D\u005C\u0022https://troydhanson.github.io/uthash/\u005C\u0022 target\u003D\u005C\u0022_blank\u005C\u0022\u003Euthash\u003C/a\u003E. \u005C\u0022uthash.h\u005C\u0022 is included by default. Below are some examples:\u003C/p\u003E\u005Cr\u005Cn\u005Cr\u005Cn\u003Cp\u003E\u003Cb\u003E1. Adding an item to a hash.\u003C/b\u003E\u005Cr\u005Cn\u003Cpre\u003E\u005Cr\u005Cnstruct hash_entry {\u005Cr\u005Cn    int id\u003B            /* we\u0027ll use this field as the key */\u005Cr\u005Cn    char name[10]\u003B\u005Cr\u005Cn    UT_hash_handle hh\u003B /* makes this structure hashable */\u005Cr\u005Cn}\u003B\u005Cr\u005Cn\u005Cr\u005Cnstruct hash_entry *users \u003D NULL\u003B\u005Cr\u005Cn\u005Cr\u005Cnvoid add_user(struct hash_entry *s) {\u005Cr\u005Cn    HASH_ADD_INT(users, id, s)\u003B\u005Cr\u005Cn}\u005Cr\u005Cn\u003C/pre\u003E\u005Cr\u005Cn\u003C/p\u003E\u005Cr\u005Cn\u005Cr\u005Cn\u003Cp\u003E\u003Cb\u003E2. Looking up an item in a hash:\u003C/b\u003E\u005Cr\u005Cn\u003Cpre\u003E\u005Cr\u005Cnstruct hash_entry *find_user(int user_id) {\u005Cr\u005Cn    struct hash_entry *s\u003B\u005Cr\u005Cn    HASH_FIND_INT(users, \u0026user_id, s)\u003B\u005Cr\u005Cn    return s\u003B\u005Cr\u005Cn}\u005Cr\u005Cn\u003C/pre\u003E\u005Cr\u005Cn\u003C/p\u003E\u005Cr\u005Cn\u005Cr\u005Cn\u003Cp\u003E\u003Cb\u003E3. Deleting an item in a hash:\u003C/b\u003E\u005Cr\u005Cn\u003Cpre\u003E\u005Cr\u005Cnvoid delete_user(struct hash_entry *user) {\u005Cr\u005Cn    HASH_DEL(users, user)\u003B  \u005Cr\u005Cn}\u005Cr\u005Cn\u003C/pre\u003E\u005Cr\u005Cn\u003C/p\u003E\u0022], \u0022csharp\u0022: [\u0022C#\u0022, \u0022\u003Cp\u003E\u003Ca href\u003D\u005C\u0022https://learn.microsoft.com/en\u002Dus/dotnet/csharp/whats\u002Dnew/csharp\u002D10\u005C\u0022 target\u003D\u005C\u0022_blank\u005C\u0022\u003EC# 10 with .NET 6 runtime\u003C/a\u003E\u003C/p\u003E\u0022], \u0022javascript\u0022: [\u0022JavaScript\u0022, \u0022\u003Cp\u003E\u003Ccode\u003ENode.js 16.13.2\u003C/code\u003E.\u003C/p\u003E\u005Cr\u005Cn\u005Cr\u005Cn\u003Cp\u003EYour code is run with \u003Ccode\u003E\u002D\u002Dharmony\u003C/code\u003E flag, enabling \u003Ca href\u003D\u005C\u0022http://node.green/\u005C\u0022 target\u003D\u005C\u0022_blank\u005C\u0022\u003Enew ES6 features\u003C/a\u003E.\u003C/p\u003E\u005Cr\u005Cn\u005Cr\u005Cn\u003Cp\u003E\u003Ca href\u003D\u005C\u0022https://lodash.com\u005C\u0022 target\u003D\u005C\u0022_blank\u005C\u0022\u003Elodash.js\u003C/a\u003E library is included by default.\u003C/p\u003E\u005Cr\u005Cn\u005Cr\u005Cn\u003Cp\u003EFor Priority Queue / Queue data structures, you may use 5.3.0 version of \u003Ca href\u003D\u005C\u0022https://github.com/datastructures\u002Djs/priority\u002Dqueue/tree/fb4fdb984834421279aeb081df7af624d17c2a03\u005C\u0022 target\u003D\u005C\u0022_blank\u005C\u0022\u003Edatastructures\u002Djs/priority\u002Dqueue\u003C/a\u003E and 4.2.1 version of \u003Ca href\u003D\u005C\u0022https://github.com/datastructures\u002Djs/queue/tree/e63563025a5a805aa16928cb53bcd517bfea9230\u005C\u0022 target\u003D\u005C\u0022_blank\u005C\u0022\u003Edatastructures\u002Djs/queue\u003C/a\u003E.\u003C/p\u003E\u0022], \u0022ruby\u0022: [\u0022Ruby\u0022, \u0022\u003Cp\u003E\u003Ccode\u003ERuby 3.1\u003C/code\u003E\u003C/p\u003E\u005Cr\u005Cn\u005Cr\u005Cn\u003Cp\u003ESome common data structure implementations are provided in the Algorithms module: https://www.rubydoc.info/github/kanwei/algorithms/Algorithms\u003C/p\u003E\u0022], \u0022swift\u0022: [\u0022Swift\u0022, \u0022\u003Cp\u003E\u003Ccode\u003ESwift 5.5.2\u003C/code\u003E.\u003C/p\u003E\u0022], \u0022golang\u0022: [\u0022Go\u0022, \u0022\u003Cp\u003E\u003Ccode\u003EGo 1.18\u003C/code\u003E\u003C/p\u003E\u005Cr\u005Cn\u003Cp\u003ESupport \u003Ca href\u003D\u005C\u0022https://github.com/emirpasic/gods/tree/v1.18.1\u005C\u0022 target\u003D\u005C\u0022_blank\u005C\u0022\u003Ehttps://godoc.org/github.com/emirpasic/gods@v1.18.1\u003C/a\u003E library.\u003C/p\u003E\u0022], \u0022python3\u0022: [\u0022Python3\u0022, \u0022\u003Cp\u003E\u003Ccode\u003EPython 3.10\u003C/code\u003E.\u003C/p\u003E\u005Cr\u005Cn\u005Cr\u005Cn\u003Cp\u003EMost libraries are already imported automatically for your convenience, such as \u003Ca href\u003D\u005C\u0022https://docs.python.org/3/library/array.html\u005C\u0022 target\u003D\u005C\u0022_blank\u005C\u0022\u003Earray\u003C/a\u003E, \u003Ca href\u003D\u005C\u0022https://docs.python.org/3/library/bisect.html\u005C\u0022 target\u003D\u005C\u0022_blank\u005C\u0022\u003Ebisect\u003C/a\u003E, \u003Ca href\u003D\u005C\u0022https://docs.python.org/3/library/collections.html\u005C\u0022 target\u003D\u005C\u0022_blank\u005C\u0022\u003Ecollections\u003C/a\u003E. If you need more libraries, you can import it yourself.\u003C/p\u003E\u005Cr\u005Cn\u005Cr\u005Cn\u003Cp\u003EFor Map/TreeMap data structure, you may use \u003Ca href\u003D\u005C\u0022http://www.grantjenks.com/docs/sortedcontainers/\u005C\u0022 target\u003D\u005C\u0022_blank\u005C\u0022\u003Esortedcontainers\u003C/a\u003E library.\u003C/p\u003E\u0022], \u0022scala\u0022: [\u0022Scala\u0022, \u0022\u003Cp\u003E\u003Ccode\u003EScala 2.13.7\u003C/code\u003E.\u003C/p\u003E\u0022], \u0022kotlin\u0022: [\u0022Kotlin\u0022, \u0022\u003Cp\u003E\u003Ccode\u003EKotlin 1.3.10\u003C/code\u003E.\u003C/p\u003E\u0022], \u0022rust\u0022: [\u0022Rust\u0022, \u0022\u003Cp\u003E\u003Ccode\u003ERust 1.58.1\u003C/code\u003E\u003C/p\u003E\u005Cr\u005Cn\u005Cr\u005Cn\u003Cp\u003ESupports \u003Ca href\u003D\u005C\u0022https://crates.io/crates/rand\u005C\u0022 target\u003D\u005C\u0022_blank\u005C\u0022\u003Erand \u003C/a\u003E v0.6\u005Cu00a0from crates.io\u003C/p\u003E\u0022], \u0022php\u0022: [\u0022PHP\u0022, \u0022\u003Cp\u003E\u003Ccode\u003EPHP 8.1\u003C/code\u003E.\u003C/p\u003E\u005Cr\u005Cn\u003Cp\u003EWith bcmath module\u003C/p\u003E\u0022], \u0022typescript\u0022: [\u0022Typescript\u0022, \u0022\u003Cp\u003E\u003Ccode\u003ETypeScript 5.1.6, Node.js 16.13.2\u003C/code\u003E.\u003C/p\u003E\u005Cr\u005Cn\u005Cr\u005Cn\u003Cp\u003EYour code is run with \u003Ccode\u003E\u002D\u002Dharmony\u003C/code\u003E flag, enabling \u003Ca href\u003D\u005C\u0022http://node.green/\u005C\u0022 target\u003D\u005C\u0022_blank\u005C\u0022\u003Enew ES2022 features\u003C/a\u003E.\u003C/p\u003E\u005Cr\u005Cn\u005Cr\u005Cn\u003Cp\u003E\u003Ca href\u003D\u005C\u0022https://lodash.com\u005C\u0022 target\u003D\u005C\u0022_blank\u005C\u0022\u003Elodash.js\u003C/a\u003E library is included by default.\u003C/p\u003E\u0022], \u0022racket\u0022: [\u0022Racket\u0022, \u0022\u003Cp\u003ERun with \u003Ccode\u003ERacket 8.3\u003C/code\u003E.\u003C/p\u003E\u0022], \u0022erlang\u0022: [\u0022Erlang\u0022, \u0022Erlang/OTP 25.0\u0022], \u0022elixir\u0022: [\u0022Elixir\u0022, \u0022Elixir 1.13.4 with Erlang/OTP 25.0\u0022], \u0022dart\u0022: [\u0022Dart\u0022, \u0022\u003Cp\u003EDart 2.17.3\u003C/p\u003E\u005Cr\u005Cn\u005Cr\u005Cn\u003Cp\u003EYour code will be run directly without compiling\u003C/p\u003E\u0022]}'),
  };
</script>
<script type="text/javascript" src="/static/angular-nvd3/node_modules/d3/d3.min.js"></script>
<script src="/static/CACHE/js/output.07d09150c290.js"></script>
<script type="text/javascript" src="/static/webpack_bundles/apps/contest/question_detail.201e78641.js" ></script>

    
      <script type="text/javascript">

    var eventURL = 'https://leetcode.com/discuss/general-discussion/2314284/WE\'RE-HIRING!-Join-LeetCode\'s-Content-Team!';
    var CONTENT = "📣  We're Hiring!  📣";

    function getHashCode(str) {
      var hash = 0,
        i,
        chr;
      if (str.length === 0) return hash;
      for (i = 0; i < str.length; i++) {
        chr = str.charCodeAt(i);
        hash = (hash << 5) - hash + chr;
        hash |= 0;
      }
      return hash;
    }

    var LOCAL_STORAGE_KEY = 'feedback-tab:' + getHashCode(eventURL + CONTENT);
    var CLOSE_BUTTON_CLICKED = false;

    var CLOSE_BUTTON_HTML =
      '\
          <?xml version="1.0" encoding="UTF-8"?>\
          <svg id="close-icon-svg" width="24px" height="24px" viewBox="0 0 24 24" version="1.1" xmlns="http://www.w3.org/2000/svg" xmlns:xlink="http://www.w3.org/1999/xlink">\
              <title>icon/close</title>\
              <defs></defs>\
              <g id="close-icon" stroke="none" stroke-width="1" fill="none" fill-rule="evenodd">\
                  <polygon id="path-1" points="19 6.41 17.59 5 12 10.59 6.41 5 5 6.41 10.59 12 5 17.59 6.41 19 12 13.41 17.59 19 19 17.59 13.41 12"></polygon>\
              </g>\
          </svg>\
      ';

    function onClickClose(e) {
      e.preventDefault();
      document
        .querySelector('.feedback-anchor')
        .classList.add('feedback-anchor-closing');
      window.localStorage.setItem(LOCAL_STORAGE_KEY, Date.now());
      CLOSE_BUTTON_CLICKED = true;
    }

    function onTransitionEnd(event) {
      if (
        event.target &&
        CLOSE_BUTTON_CLICKED &&
        event.propertyName === 'opacity'
      ) {
        event.target.remove();
      }
    }

    function createFeedbackTab() {
      var closeButton = document.createElement('span');
      closeButton.classList.add('feedback-tab-close-button');
      closeButton.innerHTML = CLOSE_BUTTON_HTML;
      closeButton.addEventListener('click', onClickClose);

      var feedbackTabContent = document.createElement('span');
      feedbackTabContent.innerHTML = CONTENT;

      var feedbackTab = document.createElement('div');
      feedbackTab.classList.add('feedback-tab');

      feedbackTab.appendChild(feedbackTabContent);
      feedbackTab.appendChild(closeButton);

      var feedbackAnchor = document.createElement('a');
      feedbackAnchor.classList.add('feedback-anchor');
      feedbackAnchor.setAttribute('href', eventURL);
      feedbackAnchor.setAttribute('target', '_blank');
      feedbackAnchor.appendChild(feedbackTab);
      feedbackAnchor.addEventListener('transitionend', onTransitionEnd);
      return feedbackAnchor;
    }

    function createComingSoonBanner(text) {
      var banner = document.createElement('div');
      banner.classList.add('card-label');
      banner.style.background = 'rgb(95, 123, 230)';
      banner.style.color = 'white';
      banner.style['font-weight'] = 'bold';
      banner.innerHTML = text;
      return banner;
    }

    function insertFeedbackTab() {
      var feedbackTab = createFeedbackTab();
      var navbarRightContainer = document.getElementById(
        'navbar-right-container'
      );
      if (navbarRightContainer) {
        navbarRightContainer.insertBefore(
          feedbackTab,
          navbarRightContainer.firstChild
        );
      }
    }

    function insertComingSoonBanner(text, clsname) {
      var banner = createComingSoonBanner(text);
      var exploreCardContainer = document.getElementsByClassName(clsname);

      if (!exploreCardContainer.length) {
        return false;
      }

      var innerLayer = exploreCardContainer[0].getElementsByClassName(
        'top-inner-layer'
      );

      if (!innerLayer.length) {
        return false;
      }

      innerLayer[0].insertBefore(banner, innerLayer[0].firstChild);
      return true;
    }

    function loadLeetCodeChallenge() {
      if (!window.localStorage.getItem(LOCAL_STORAGE_KEY)) {
        setTimeout(insertFeedbackTab, 500);
      }

      if (window.location.pathname === '/explore/') {
        var comingSoonInterval = setInterval(function() {
          var res2 = insertComingSoonBanner(
            'Day 30',
            'september-leetcoding-challenge-2021'
          );
          if (/*res && */ res2 && comingSoonInterval) {
            clearInterval(comingSoonInterval);
          }
        }, 300);
      }

      var script = document.createElement('script');
      script.async = true;
      script.src = 'https://assets.leetcode.cn/lccn-resources/cn.js';
      document.body.appendChild(script);
    }
  </script>
  <style>
    .feedback-tab {
      position: absolute;
      display: flex;
      align-items: center;
      top: 0px;
      right: 270px;
      background-color: #FFA400;
      color: white;
      opacity: 0.6;
      border-radius: 0 0 3px 3px;
      padding: 5px 10px;
      cursor: pointer;
      z-index: 2;
      transition: all 0.3s ease-in-out;
    }
    .feedback-tab:hover {
      opacity: 1;
    }
    .feedback-tab-close-button {
      margin-left: 5px;
      height: 1em;
      width: 1em;
      display: inline-flex;
      align-items: center;
      justify-content: center;
    }
    .feedback-anchor:focus {
      text-decoration: none;
    }
    .feedback-anchor-closing {
      opacity: 0;
      transition: opacity 0.3s ease-in-out;
    }
    aside#region_switcher {
      position: initial;
    }
    #close-icon-svg {
      opacity: 0.5;
      transition: all 0.3s ease-in-out;
    }
    #close-icon-svg:hover {
      opacity: 1;
    }
    #close-icon {
      fill: white;
    }
  </style>


  <!--@START: Nav Highlight Tag -->
  <style>
    [id='interview-nav-item'] a.ant-dropdown-link::after {
      display: block;
      border-radius: 20px;
      padding: 0px 8px;
      color: white;
      font-size: 12px;
      position: absolute;
      top: -9px;
      font-weight: 500;
      transform: scale(0.6);
      right: -25px;
      content: 'New';
      background: rgb(236, 64, 122);
    }
    [class*='nav-item-container'] a[href='/contest/']::after {
      display: block;
      background: red;
      border-radius: 20px;
      padding: 0px 8px;
      color: white;
      font-size: 12px;
      position: absolute;
      top: -9px;
      right: -15px;
      font-weight: 500;
      transform: scale(0.6);
    }
  </style>

  <script type="text/javascript">
    var DISCOUNT_URL = '/subscribe/';
    var DISCOUNT_CONTENT =
      'In an effort to fight COVID-19, from now until a limited time only, users residing in India can enjoy discount on both&nbsp';
    var DISCOUNT_LINK = 'monthly and annual subscriptions';

    function createDiscountTab() {
      var discountTabContent = document.createElement('span');
      discountTabContent.innerHTML = DISCOUNT_CONTENT;
      var subscribeLink = document.createElement('a');
      subscribeLink.setAttribute('href', DISCOUNT_URL);
      subscribeLink.classList.add('subscribe-link');
      subscribeLink.innerHTML = DISCOUNT_LINK;
      var exclamation = document.createElement('span');
      exclamation.innerHTML = '!';

      var discountTab = document.createElement('div');
      discountTab.classList.add('col-md-12');
      discountTab.classList.add('alert');
      discountTab.classList.add('alert-warning');

      discountTab.appendChild(discountTabContent);
      discountTab.appendChild(subscribeLink);
      discountTab.appendChild(exclamation);

      var DiscountContainer = document.createElement('div');
      DiscountContainer.classList.add('container');
      DiscountContainer.classList.add('row');
      DiscountContainer.classList.add('no-margin');
      DiscountContainer.classList.add('container-center');
      DiscountContainer.appendChild(discountTab);
      return DiscountContainer;
    }

    function insertDiscountTab() {
      var discountTab = createDiscountTab();
      var container = document.getElementById('base_content');
      if (container) {
        container.insertBefore(discountTab, container.firstChild);
      }
    }

    window.onload = function() {
      if (window.LeetCodeData) {
        const {
          features: { enableIndiaPricing },
          userStatus: { countryCode },
        } = window.LeetCodeData;
        if (
          (window.location.pathname === '/' ||
            window.location.pathname.startsWith('/problemset')) &&
          enableIndiaPricing &&
          countryCode === 'IN'
        ) {
          setTimeout(insertDiscountTab, 500);
        }

        var script = document.createElement('script');
        script.async = true;
        document.body.appendChild(script);
      }
      var script = document.createElement('script');
      script.async = true;
      script.src = 'https://assets.leetcode.cn/lccn-resources/cn.js';
      document.body.appendChild(script);
      // 这个函数作用域有问题，无法正常跑，但是先不注释了（不敢乱动）
      setTimeout(function() {
          document.getElementsByClassName("sidebar-challenge-ad")[0].style.display = "none";
      }, 1000);
    };
  </script>
  <style>
    .container-center {
      margin: auto;
      display: flex;
      justify-content: center;
      padding: 0;
      text-align: center;
      margin-top: -10px;
    }
    .subscribe-link {
      cursor: pointer;
    }
  </style>
    

    

    <script type="text/javascript" src="/static/legacy/common/js/base.js"></script>

    <script>
      try {
        ace.config.set("basePath", "/static/ace-builds/src-noconflict/")
      } catch(err) {}
    </script>

    <script>
      function recaptchaV2Callback() {
        window.grecaptchaV2 = Object.assign(Object.create(Object.getPrototypeOf(window.grecaptcha.enterprise)), window.grecaptcha.enterprise)
      }

      function recaptchaV3Callback() {
        window.grecaptchaV3 = Object.assign(Object.create(Object.getPrototypeOf(window.grecaptcha.enterprise)), window.grecaptcha.enterprise)
      }
    </script>

    <script type="text/javascript" src="https://www.recaptcha.net/recaptcha/enterprise.js?onload=recaptchaV2Callback&render=explicit" async
      defer></script>

    
    <script
      src="https://www.recaptcha.net/recaptcha/enterprise.js?onload=recaptchaV3Callback&render=6LdBpsIUAAAAAKAYWjZfIpn4cJHVIk_tsmxpl7cz"></script>

  </body>
</html>
