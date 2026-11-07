// rea decompile_all
// name: FUN_1001115ec
// address: 0x1001115ec
// body: available
// range: 0x1001115ec-0x1001118c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001115ec(ID param_1,ID param_2)

{
  ID IVar1;
  
  IVar1 = _objc_msgSend(param_2,"captureType");
  _objc_msgSend(param_1,"setCaptureType:",IVar1);
  IVar1 = _objc_msgSend(param_2,"videoTrackIndex");
  _objc_msgSend(param_1,"setVideoTrackIndex:",IVar1);
  IVar1 = _objc_msgSend(param_2,"fps");
  _objc_msgSend(param_1,"setFps:",IVar1);
  IVar1 = _objc_msgSend(param_2,"chromaSampling");
  _objc_msgSend(param_1,"setChromaSampling:",IVar1);
  IVar1 = _objc_msgSend(param_2,"codecType");
  _objc_msgSend(param_1,"setCodecType:",IVar1);
  IVar1 = _objc_msgSend(param_2,"maxScaleWidth");
  _objc_msgSend(param_1,"setMaxScaleWidth:",IVar1);
  IVar1 = _objc_msgSend(param_2,"maxScaleHeight");
  _objc_msgSend(param_1,"setMaxScaleHeight:",IVar1);
  IVar1 = _objc_msgSend(param_2,"frameQuality");
  _objc_msgSend(param_1,"setFrameQuality:",IVar1);
  IVar1 = _objc_msgSend(param_2,"cursorCapture");
  _objc_msgSend(param_1,"setCursorCapture:",IVar1);
  IVar1 = _objc_msgSend(param_2,"maxCustomBitrate");
  _objc_msgSend(param_1,"setMaxCustomBitrate:",IVar1);
  IVar1 = _objc_msgSend(param_2,"screenId");
  _objc_msgSend(param_1,"setScreenId:",IVar1);
  IVar1 = _objc_msgSend(param_2,"resolutionWidth");
  _objc_msgSend(param_1,"setResolutionWidth:",IVar1);
  IVar1 = _objc_msgSend(param_2,"resolutionHeight");
  _objc_msgSend(param_1,"setResolutionHeight:",IVar1);
  IVar1 = _objc_msgSend(param_2,"resolutionPixelWidth");
  _objc_msgSend(param_1,"setResolutionPixelWidth:",IVar1);
  IVar1 = _objc_msgSend(param_2,"resolutionPixelHeight");
  _objc_msgSend(param_1,"setResolutionPixelHeight:",IVar1);
  IVar1 = _objc_msgSend(param_2,"hdr");
  _objc_msgSend(param_1,"setHdr:",IVar1);
  IVar1 = _objc_msgSend(param_2,"maxCustomBitrate");
  _objc_msgSend(param_1,"setMaxCustomBitrate:",IVar1);
  IVar1 = _objc_msgSend(param_2,"autoHighestQuality");
  _objc_msgSend(param_1,"setAutoHighestQuality:",IVar1);
  IVar1 = _objc_msgSend(param_2,"autoStartupQuality");
  _objc_msgSend(param_1,"setAutoStartupQuality:",IVar1);
  return;
}

