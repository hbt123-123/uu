// rea decompile_all
// name: FUN_10019eb70
// address: 0x10019eb70
// body: available
// range: 0x10019eb70-0x10019f1a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10019ee58 to 0x1007dea34 _objc_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10019eb70(ID param_1,ulong param_2,long param_3,undefined8 param_4)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  ID IVar5;
  ID IVar7;
  ID IVar8;
  ID IVar9;
  ID IVar10;
  class_t *self;
  ID IVar11;
  char *pcVar12;
  ulong uVar13;
  uint uVar14;
  long lVar15;
  uint *puVar16;
  ulong uVar17;
  ID IVar6;
  
  IVar5 = _objc_msgSend(param_1,"screenId");
  IVar6 = _objc_msgSend(param_1,"fps");
  uVar3 = (uint)IVar6;
  lVar15 = *(long *)(param_3 + 0x10) + 1;
  puVar16 = (uint *)(param_3 + 0x14);
  do {
    lVar15 = lVar15 + -1;
    uVar14 = uVar3;
    if (lVar15 == 0) goto LAB_10019ebf4;
    puVar2 = puVar16 + 4;
    puVar1 = puVar16 + 3;
    puVar16 = puVar2;
  } while (*puVar1 != (uint)IVar5);
  uVar14 = *puVar2;
LAB_10019ebf4:
  if ((int)uVar14 <= (int)uVar3) {
    uVar3 = uVar14;
  }
  IVar5 = _objc_msgSend(param_1,"frameQuality");
  IVar6 = _objc_msgSend(param_1,"chromaSampling");
  IVar7 = _objc_msgSend(param_1,"hdr");
  uVar14 = 10;
  if ((uint)IVar7 == 0) {
    uVar14 = 8;
  }
  uVar17 = (ulong)uVar14;
  IVar8 = _objc_msgSend(param_1,"autoStartupQuality");
  IVar9 = _objc_msgSend(param_1,"autoHighestQuality");
  _objc_msgSend(param_1,"codecType");
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1001a004c,0,0xd0000000000000ab,0x8000000100899ff0,0xd000000000000024,
                0x800000010089a0a0,0x74,0);
  IVar10 = IVar6;
  uVar13 = param_2;
  FUN_1001a0078(IVar6,uVar17,param_2,param_3,param_4);
  if ((uVar13 & 1) != 0) {
    if (((uint)(IVar6 == 3) & (uint)IVar7) != 1) {
LAB_10019edc4:
      FUN_1003fb48c(FUN_1001a0240,0,0xd0000000000000ab,0x8000000100899ff0,0xd000000000000024,
                    0x800000010089a0a0,0x88,0);
      IVar10 = 1;
      uVar17 = 8;
      FUN_1001a0078(1,8,param_2,param_3,param_4);
      if ((param_2 & 1) != 0) {
        FUN_1003fb48c(FUN_1001a026c,0,0xd0000000000000ab,0x8000000100899ff0,0xd000000000000024,
                      0x800000010089a0a0,0xb0,0);
        return param_1;
      }
      iVar4 = (int)IVar10;
      uVar14 = 8;
      IVar6 = 1;
      goto LAB_10019ee70;
    }
    FUN_1003fb48c(FUN_1001a01e8,0,0xd0000000000000ab,0x8000000100899ff0,0xd000000000000024,
                  0x800000010089a0a0,0x7a,0);
    IVar6 = 1;
    uVar14 = 10;
    IVar10 = 1;
    uVar17 = 10;
    uVar13 = param_2;
    FUN_1001a0078(1,10,param_2,param_3,param_4);
    if ((uVar13 & 1) != 0) {
      FUN_1003fb48c(FUN_1001a0214,0,0xd0000000000000ab,0x8000000100899ff0,0xd000000000000024,
                    0x800000010089a0a0,0x81,0);
      IVar6 = 3;
      uVar14 = 8;
      IVar10 = 3;
      uVar17 = 8;
      uVar13 = param_2;
      FUN_1001a0078(3,8,param_2,param_3,param_4);
      if ((uVar13 & 1) != 0) goto LAB_10019edc4;
    }
  }
  iVar4 = (int)IVar10;
LAB_10019ee70:
  IVar7 = IVar5;
  if ((long)iVar4 < (long)IVar5) {
    IVar7 = (long)iVar4;
  }
  IVar11 = IVar5;
  if (IVar5 != 5) {
    IVar11 = IVar7;
  }
  IVar7 = 0;
  if (IVar5 != 0) {
    IVar7 = IVar11;
  }
  self = &objc::class_t::StartVideoCaptureConfig;
  _objc_allocWithZone();
  IVar5 = _objc_msgSend((ID)self,"init");
  IVar11 = _objc_msgSend(param_1,"captureType");
  _objc_msgSend(IVar5,"setCaptureType:",IVar11);
  _objc_msgSend(IVar5,"setChromaSampling:",IVar6);
  _objc_msgSend(IVar5,"setCodecType:",(long)(int)(IVar10 >> 0x20));
  IVar6 = _objc_msgSend(param_1,"cursorCapture");
  _objc_msgSend(IVar5,"setCursorCapture:",IVar6);
  _objc_msgSend(IVar5,"setFrameQuality:",IVar7);
  _objc_msgSend(IVar5,"setAutoStartupQuality:",IVar8);
  _objc_msgSend(IVar5,"setAutoHighestQuality:",IVar9);
  _objc_msgSend(IVar5,"setFps:",(ulong)uVar3);
  IVar6 = _objc_msgSend(param_1,"videoTrackIndex");
  _objc_msgSend(IVar5,"setVideoTrackIndex:",IVar6);
  _objc_msgSend(IVar5,"setMaxScaleWidth:",uVar17);
  _objc_msgSend(IVar5,"setMaxScaleHeight:",uVar17 >> 0x20);
  IVar6 = _objc_msgSend(param_1,"resolutionWidth");
  _objc_msgSend(IVar5,"setResolutionWidth:",IVar6);
  IVar6 = _objc_msgSend(param_1,"resolutionHeight");
  _objc_msgSend(IVar5,"setResolutionHeight:",IVar6);
  IVar6 = _objc_msgSend(param_1,"resolutionPixelWidth");
  _objc_msgSend(IVar5,"setResolutionPixelWidth:",IVar6);
  IVar6 = _objc_msgSend(param_1,"resolutionPixelHeight");
  _objc_msgSend(IVar5,"setResolutionPixelHeight:",IVar6);
  IVar6 = _objc_msgSend(param_1,"screenId");
  _objc_msgSend(IVar5,"setScreenId:",IVar6);
  _objc_msgSend(IVar5,"setHdr:",(ulong)(uVar14 != 8));
  IVar6 = _objc_msgSend(param_1,"maxCustomBitrate");
  _objc_msgSend(IVar5,"setMaxCustomBitrate:",IVar6);
  IVar6 = _objc_msgSend(param_1,"hwnd");
  _objc_msgSend(IVar5,"setHwnd:",IVar6);
  pcVar12 = "setting";
  IVar6 = _objc_msgSend(param_1,"setting");
  if (IVar6 == 0) {
    __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(pcVar12);
  }
  _objc_msgSend(IVar5,"setSetting:",IVar6);
  IVar6 = _objc_msgSend(param_1,"index");
  _objc_msgSend(IVar5,"setIndex:",IVar6);
  return IVar5;
}

