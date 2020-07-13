function resizeIframe(obj) {
			obj.style.height = obj.contentWindow.document.body.scrollHeight + 'px';
  	    }
function disableselect(e) { 
    return false; 
} 
function reEnable() { 
    return true ;
} 
document.onselectstart = new Function("return false"); 
if (window.sidebar) { 
    document.onmousedown = disableselect; 
    document.onclick = reEnable; 
} 