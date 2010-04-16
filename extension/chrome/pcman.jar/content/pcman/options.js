function load(){
	var prefs = Components.classes["@mozilla.org/preferences-service;1"]
							.getService(Components.interfaces.nsIPrefService)
								.getBranch("extensions.pcman.options.");
	document.getElementById('ask').checked = prefs.getBoolPref('ask');
	document.getElementById('bbsbox.fixed').checked = prefs.getBoolPref('bbsbox.fixed');	
	document.getElementById('bbsbox.width').value = prefs.getIntPref('bbsbox.width');
	document.getElementById('bbsbox.height').value = prefs.getIntPref('bbsbox.height');
	document.getElementById('ShowConnectionTimer').checked = prefs.getBoolPref('ShowConnectionTimer');
	document.getElementById('DoNotUseScrollbar').checked = prefs.getBoolPref('DoNotUseScrollbar');
	document.getElementById('FontFace.string').value = unescape(prefs.getCharPref('FontFace.string'));
	document.getElementById('FontFaceEn.string').value = unescape(prefs.getCharPref('FontFaceEn.string'));
	document.getElementById('AntiIdle.seconds').value = prefs.getIntPref('AntiIdle.seconds');
	document.getElementById('AntiIdle.string').value = unescape(prefs.getCharPref('AntiIdle.string'));
	document.getElementById('Escape.string').value = unescape(prefs.getCharPref('Escape.string'));
	document.getElementById('AutoDbcsDetection.backspace').checked = prefs.getBoolPref('AutoDbcsDetection.backspace');
	document.getElementById('AutoDbcsDetection.delete').checked = prefs.getBoolPref('AutoDbcsDetection.delete');
	document.getElementById('AutoDbcsDetection.arrow').checked = prefs.getBoolPref('AutoDbcsDetection.arrow');
	document.getElementById('SearchEngine1.url').value = unescape(prefs.getCharPref('SearchEngine1.url'));
	document.getElementById('SearchEngine1.paramname').value = unescape(prefs.getCharPref('SearchEngine1.paramname'));
	document.getElementById('SearchEngine2.url').value = unescape(prefs.getCharPref('SearchEngine2.url'));
	document.getElementById('SearchEngine2.paramname').value = unescape(prefs.getCharPref('SearchEngine2.paramname'));
	document.getElementById('UseMouseBrowsing').checked = prefs.getBoolPref('UseMouseBrowsing');
	document.getElementById('UseTextDragDrop').checked = prefs.getBoolPref('UseTextDragDrop');
	document.getElementById('LoadUrlInBackGround').checked = prefs.getBoolPref('LoadUrlInBackGround');
	document.getElementById('Gestures.SensitivityX').value = prefs.getIntPref('Gestures.SensitivityX');
	document.getElementById('Gestures.UseXAxisOnly').checked = prefs.getBoolPref('Gestures.UseXAxisOnly');
	document.getElementById('UseHelperWnd').checked = prefs.getBoolPref('UseHelperWnd');
	document.getElementById('UseMouseWheelHack').checked = prefs.getBoolPref('UseMouseWheelHack');
	document.getElementById('MouseOverEffect').selectedIndex = document.getElementById('MouseOverEffect').value = prefs.getIntPref('MouseOverEffect');

}

function save(){
	var prefs = Components.classes["@mozilla.org/preferences-service;1"]
							.getService(Components.interfaces.nsIPrefService)
								.getBranch("extensions.pcman.options.");
	prefs.setBoolPref("ask", document.getElementById('ask').checked);
	prefs.setBoolPref("bbsbox.fixed", document.getElementById('bbsbox.fixed').checked);
	prefs.setBoolPref("AutoDbcsDetection.backspace", document.getElementById('AutoDbcsDetection.backspace').checked);
	prefs.setBoolPref("AutoDbcsDetection.delete", document.getElementById('AutoDbcsDetection.delete').checked);
	prefs.setBoolPref("AutoDbcsDetection.arrow", document.getElementById('AutoDbcsDetection.arrow').checked);
	prefs.setIntPref("bbsbox.width", document.getElementById('bbsbox.width').value);
	prefs.setIntPref("bbsbox.height", document.getElementById('bbsbox.height').value);
	prefs.setBoolPref("ShowConnectionTimer", document.getElementById('ShowConnectionTimer').checked);
	prefs.setBoolPref("DoNotUseScrollbar", document.getElementById('DoNotUseScrollbar').checked);
	prefs.setCharPref("FontFace.string", escape(document.getElementById('FontFace.string').value));
	prefs.setCharPref("FontFaceEn.string", escape(document.getElementById('FontFaceEn.string').value));
	prefs.setIntPref("AntiIdle.seconds", document.getElementById('AntiIdle.seconds').value);
	prefs.setCharPref("AntiIdle.string", escape(document.getElementById('AntiIdle.string').value));
	prefs.setCharPref('Escape.string', escape(document.getElementById('Escape.string').value));
	prefs.setCharPref("SearchEngine1.url", escape(document.getElementById('SearchEngine1.url').value));
	prefs.setCharPref("SearchEngine1.paramname", escape(document.getElementById('SearchEngine1.paramname').value));
	prefs.setCharPref("SearchEngine2.url", escape(document.getElementById('SearchEngine2.url').value));
	prefs.setCharPref("SearchEngine2.paramname", escape(document.getElementById('SearchEngine2.paramname').value));	
	prefs.setBoolPref("UseMouseBrowsing", document.getElementById('UseMouseBrowsing').checked);
	prefs.setBoolPref("UseTextDragDrop", document.getElementById('UseTextDragDrop').checked);
	prefs.setBoolPref("LoadUrlInBackGround", document.getElementById('LoadUrlInBackGround').checked);
	prefs.setIntPref("Gestures.SensitivityX", document.getElementById('Gestures.SensitivityX').value);
	prefs.setBoolPref("Gestures.UseXAxisOnly", document.getElementById('Gestures.UseXAxisOnly').checked);
	prefs.setBoolPref("UseHelperWnd", document.getElementById('UseHelperWnd').checked);
	prefs.setBoolPref("UseMouseWheelHack", document.getElementById('UseMouseWheelHack').checked);
	prefs.setIntPref("MouseOverEffect", document.getElementById('MouseOverEffect').selectedIndex);
}

