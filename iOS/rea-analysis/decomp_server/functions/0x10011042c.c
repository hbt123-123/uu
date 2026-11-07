// rea decompile_all
// name: FUN_10011042c
// address: 0x10011042c
// body: available
// range: 0x10011042c-0x10011080b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011042c(ID *param_1,long *param_2,ID param_3,long param_4)

{
  ID IVar1;
  undefined *puVar2;
  ulong uVar3;
  char *op;
  undefined8 uVar4;
  ulong uVar5;
  undefined *puVar6;
  long lVar7;
  ID self;
  ulong uVar8;
  
  self = *param_1;
  _objc_msgSend(self,"setCaptureType:",0);
  lVar7 = param_2[6];
  if ((*(byte *)(param_2 + 7) & lVar7 != 0) == 0) {
    lVar7 = 1;
  }
  _objc_msgSend(self,"setChromaSampling:",lVar7);
  _objc_msgSend(self,"setCodecType:",1);
  _objc_msgSend(self,"setCursorCapture:",(ulong)*(byte *)((long)param_2 + 0x19));
  uVar4 = 0;
  if ((char)param_2[3] == '\x01') {
    uVar4 = *(undefined8 *)(&DAT_10080da98 + param_2[2] * 8);
  }
  _objc_msgSend(self,"setFrameQuality:",uVar4);
  IVar1 = _objc_msgSend(self,"frameQuality");
  if (IVar1 == 0xffffffffffffffff) {
    _objc_msgSend(self,"setFrameQuality:",0);
  }
  if ((char)param_2[1] == '\x01') {
    uVar5 = (ulong)*(uint *)(&DAT_10080da80 + *param_2 * 4);
  }
  else {
    uVar5 = 0x3c;
  }
  _objc_msgSend(self,"setFps:",uVar5);
  if (0 < *(int *)((long)param_2 + 0x54)) {
    _objc_msgSend(self,"setFps:");
  }
  _objc_msgSend(self,"setVideoTrackIndex:",0);
  _objc_msgSend(self,"setMaxScaleWidth:",0);
  IVar1 = _objc_msgSend(self,"setMaxScaleHeight:",0);
  if (param_3 == 0) {
    IVar1 = 1;
  }
  else {
    FUN_1003d541c();
  }
  _objc_msgSend(self,"setScreenId:",IVar1);
  lVar7 = DAT_100a73b60;
  uVar5 = *(ulong *)(param_4 + 0x38);
  if (uVar5 != 0) {
    uVar8 = *(ulong *)(param_4 + 0x30);
    _swift_bridgeObjectRetain(uVar5);
    if (lVar7 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    uVar4 = *(undefined8 *)(DAT_100b360a8 + 0x80);
    _swift_retain(uVar4);
    IVar1 = _objc_msgSend(self,"screenId");
    uVar3 = uVar5;
    FUN_10003f24c(uVar8,uVar5);
    _swift_release(uVar4);
    _swift_bridgeObjectRelease(uVar5);
    if ((IVar1 & 1) == 0) {
      puVar6 = (undefined *)(uVar3 >> 0x20);
      _objc_msgSend(self,"setResolutionWidth:",uVar8);
      _objc_msgSend(self,"setResolutionHeight:",uVar8 >> 0x20);
      _objc_msgSend(self,"setResolutionPixelWidth:",uVar3);
      op = "setResolutionPixelHeight:";
      goto LAB_100110738;
    }
  }
  if (param_3 == 0) {
    _objc_msgSend(self,"setResolutionWidth:",0);
    puVar6 = (undefined *)0x0;
  }
  else {
    IVar1 = _objc_msgSend(param_3,"frame");
    _CGRectGetWidth();
    FUN_100112f08();
    puVar6 = PTR___s12CoreGraphics7CGFloatVN_100996360;
    puVar2 = PTR___s12CoreGraphics7CGFloatVN_100996360;
    FUN_10040839c(PTR___s12CoreGraphics7CGFloatVN_100996360,IVar1);
    _objc_msgSend(self,"setResolutionWidth:",puVar2);
    _objc_msgSend(param_3,"frame");
    _CGRectGetHeight();
    FUN_10040839c(puVar6,IVar1);
  }
  op = "setResolutionHeight:";
LAB_100110738:
  _objc_msgSend(self,op,puVar6);
  _objc_msgSend(self,"setHdr:",(ulong)*(byte *)(param_2 + 8));
  _objc_msgSend(self,"setMaxCustomBitrate:",(ulong)*(uint *)((long)param_2 + 0x3c));
  _objc_msgSend(self,"setAutoHighestQuality:",4);
  if ((char)param_2[10] == '\x01') {
    uVar4 = *(undefined8 *)(&DAT_10080da98 + param_2[9] * 8);
  }
  else {
    uVar4 = 0;
  }
  _objc_msgSend(self,"setAutoStartupQuality:",uVar4);
  IVar1 = _objc_msgSend(self,"autoStartupQuality");
  if (IVar1 == 0xffffffffffffffff) {
    _objc_msgSend(self,"setAutoStartupQuality:",2);
  }
  return;
}

