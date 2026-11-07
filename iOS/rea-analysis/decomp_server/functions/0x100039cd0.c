// rea decompile_all
// name: FUN_100039cd0
// address: 0x100039cd0
// body: available
// range: 0x100039cd0-0x10003a037 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003a034 to 0x1007de9c8 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100039cd0(ID param_1,ID param_2)

{
  ID IVar1;
  char *pcVar2;
  
  IVar1 = _objc_msgSend(param_1,"videoTrackIndex");
  _objc_msgSend(param_2,"setVideoTrackIndex:",IVar1);
  IVar1 = _objc_msgSend(param_1,"fps");
  _objc_msgSend(param_2,"setFps:",IVar1);
  IVar1 = _objc_msgSend(param_1,"frameQuality");
  _objc_msgSend(param_2,"setFrameQuality:",IVar1);
  IVar1 = _objc_msgSend(param_1,"autoStartupQuality");
  _objc_msgSend(param_2,"setAutoStartupQuality:",IVar1);
  IVar1 = _objc_msgSend(param_1,"autoHighestQuality");
  _objc_msgSend(param_2,"setAutoHighestQuality:",IVar1);
  IVar1 = _objc_msgSend(param_1,"cursorCapture");
  _objc_msgSend(param_2,"setCursorCapture:",IVar1);
  IVar1 = _objc_msgSend(param_1,"captureType");
  _objc_msgSend(param_2,"setCaptureType:",IVar1);
  IVar1 = _objc_msgSend(param_1,"chromaSampling");
  _objc_msgSend(param_2,"setChromaSampling:",IVar1);
  IVar1 = _objc_msgSend(param_1,"codecType");
  _objc_msgSend(param_2,"setCodecType:",IVar1);
  IVar1 = _objc_msgSend(param_1,"maxScaleWidth");
  _objc_msgSend(param_2,"setMaxScaleWidth:",IVar1);
  IVar1 = _objc_msgSend(param_1,"maxScaleHeight");
  _objc_msgSend(param_2,"setMaxScaleHeight:",IVar1);
  IVar1 = _objc_msgSend(param_1,"maxCustomBitrate");
  _objc_msgSend(param_2,"setMaxCustomBitrate:",IVar1);
  IVar1 = _objc_msgSend(param_1,"hdr");
  _objc_msgSend(param_2,"setHdr:",IVar1);
  IVar1 = _objc_msgSend(param_1,"resolutionWidth");
  _objc_msgSend(param_2,"setResolutionWidth:",IVar1);
  IVar1 = _objc_msgSend(param_1,"resolutionHeight");
  _objc_msgSend(param_2,"setResolutionHeight:",IVar1);
  IVar1 = _objc_msgSend(param_1,"resolutionPixelWidth");
  _objc_msgSend(param_2,"setResolutionPixelWidth:",IVar1);
  IVar1 = _objc_msgSend(param_1,"resolutionPixelHeight");
  _objc_msgSend(param_2,"setResolutionPixelHeight:",IVar1);
  IVar1 = _objc_msgSend(param_1,"screenId");
  _objc_msgSend(param_2,"setScreenId:",IVar1);
  IVar1 = _objc_msgSend(param_1,"isSecondScreen");
  _objc_msgSend(param_2,"setIsSecondScreen:",IVar1);
  IVar1 = _objc_msgSend(param_1,"hwnd");
  _objc_msgSend(param_2,"setHwnd:",IVar1);
  pcVar2 = "setting";
  IVar1 = _objc_msgSend(param_1,"setting");
  if (IVar1 == 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(pcVar2);
  }
  _objc_msgSend(param_2,"setSetting:",IVar1);
  IVar1 = _objc_msgSend(param_1,"index");
  _objc_msgSend(param_2,"setIndex:",IVar1);
  return;
}

