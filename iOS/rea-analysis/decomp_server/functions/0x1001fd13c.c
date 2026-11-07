// rea decompile_all
// name: FUN_1001fd13c
// address: 0x1001fd13c
// body: available
// range: 0x1001fd13c-0x1001fd3f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001fd13c(ID *param_1,ulong param_2,ulong param_3,undefined8 param_4,undefined8 param_5)

{
  ID IVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  ID self;
  
  self = *param_1;
  uVar3 = param_2;
  uVar2 = param_3;
  FUN_100434128(param_2,param_3,param_4);
  if ((uVar2 & 1) == 0) {
    uVar3 = 0x3c;
  }
  else {
    uVar3 = (ulong)*(uint *)(&DAT_100812c0c + uVar3 * 4);
  }
  _objc_msgSend(self,"setFps:",uVar3);
  uVar3 = param_2;
  FUN_1004e4bb8(param_2,param_3,param_4);
  if (0 < (int)uVar3) {
    uVar3 = param_2;
    FUN_1004e4bb8(param_2,param_3,param_4);
    _objc_msgSend(self,"setFps:",uVar3);
  }
  uVar3 = param_2;
  uVar2 = param_3;
  FUN_1004e2b88(param_2,param_3,param_4);
  if ((uVar2 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(&DAT_100812c20 + uVar3 * 8);
  }
  _objc_msgSend(self,"setFrameQuality:",uVar4);
  uVar3 = param_2;
  FUN_1004e2dac(param_2,param_3,param_4);
  _objc_msgSend(self,"setCursorCapture:",(ulong)((uint)uVar3 & 1));
  uVar3 = param_2;
  FUN_1004e2fa0(param_2,param_3,param_4);
  if (-1 < (int)uVar3) {
    _objc_msgSend(self,"setScreenId:",param_5);
  }
  uVar3 = param_2;
  FUN_1004e357c(param_2,param_3,param_4);
  _objc_msgSend(self,"setChromaSampling:",uVar3);
  uVar3 = param_2;
  FUN_1004e37a0(param_2,param_3,param_4);
  _objc_msgSend(self,"setMaxCustomBitrate:",uVar3);
  uVar3 = param_2;
  FUN_1004e43e8(param_2,param_3,param_4);
  _objc_msgSend(self,"setMaxScaleWidth:",uVar3);
  uVar3 = param_2;
  FUN_1004e45dc(param_2,param_3,param_4);
  _objc_msgSend(self,"setMaxScaleHeight:",uVar3);
  uVar3 = param_2;
  uVar2 = param_3;
  FUN_1004e41c4(param_2,param_3,param_4);
  if ((uVar2 & 1) == 0) {
    if (uVar3 != 2) goto LAB_1001fd318;
  }
  else if (uVar3 < 2) {
LAB_1001fd318:
    uVar4 = 1;
    goto LAB_1001fd31c;
  }
  uVar4 = 2;
LAB_1001fd31c:
  _objc_msgSend(self,"setCodecType:",uVar4);
  uVar3 = param_2;
  FUN_1004e3dac(param_2,param_3,param_4);
  _objc_msgSend(self,"setHdr:",(ulong)((uint)uVar3 & 1));
  uVar3 = param_2;
  FUN_1004e37a0(param_2,param_3,param_4);
  _objc_msgSend(self,"setMaxCustomBitrate:",uVar3);
  _objc_msgSend(self,"setAutoHighestQuality:",4);
  FUN_1004e3fa0(param_2,param_3,param_4);
  if ((param_3 & 1) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = *(undefined8 *)(&DAT_100812c20 + param_2 * 8);
  }
  _objc_msgSend(self,"setAutoStartupQuality:",uVar4);
  IVar1 = _objc_msgSend(self,"autoStartupQuality");
  if (IVar1 == 0xffffffffffffffff) {
    _objc_msgSend(self,"setAutoStartupQuality:",2);
  }
  return;
}

