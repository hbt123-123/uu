// rea decompile_all
// name: thunk_FUN_10023744c
// address: 0x1002352b8
// body: available
// range: 0x1002352b8-0x1002352bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void thunk_FUN_10023744c(long param_1,ulong param_2,byte param_3,undefined8 param_4,ulong param_5)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  ID IVar5;
  undefined8 uVar6;
  uint uVar7;
  undefined8 uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_f8 [24];
  undefined1 auStack_e0 [24];
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  char acStack_98 [24];
  undefined1 auStack_80 [24];
  long lStack_68;
  
  lStack_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (DAT_100a7ddc8 != -1) {
    _swift_once(&DAT_100a7ddc8,FUN_10021c53c);
  }
  IVar5 = 0;
  DAT_100a7e168 = param_4;
  FUN_10022a084();
  _objc_allocWithZone();
  IVar5 = _objc_msgSend(IVar5,"init");
  plVar1 = (long *)(IVar5 + FCountAppConfig::appKey);
  _swift_beginAccess(plVar1,auStack_80,1,0);
  lVar9 = plVar1[1];
  *plVar1 = param_1;
  plVar1[1] = param_2;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRelease(lVar9);
  uVar8 = 0x80000001008a6f70;
  __s10Foundation4DataV13base64Encoded7optionsACSgSSh_So27NSDataBase64DecodingOptionsVtcfC
            (param_1,param_2,0);
  if (param_2 >> 0x3c < 0xf) {
    acStack_98[0] = '\0';
    uVar3 = (uint)(param_2 >> 0x20);
    uVar7 = uVar3 >> 0x1e;
    if (uVar3 >> 0x1e < 2) {
      lVar9 = 0;
      if (uVar7 != 0) {
        lVar9 = (long)(int)param_1;
      }
    }
    else {
      lVar9 = 0;
      if (uVar7 == 2) {
        lVar9 = *(long *)(param_1 + 0x10);
      }
    }
    if (SCARRY8(lVar9,1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002377f4);
      (*pcVar4)();
    }
    if (lVar9 + 1 < lVar9) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1002377f8);
      (*pcVar4)();
    }
    __s10Foundation4DataV16_copyBytesHelper2to4fromySv_SnySiGtF
              (acStack_98,lVar9,lVar9 + 1,param_1,param_2);
    if (acStack_98[0] == '\x01') {
      uVar8 = 0x80000001008a6fd0;
      uVar10 = 0xd000000000000022;
    }
    else if (acStack_98[0] == '\x10') {
      uVar8 = 0x80000001008a6fa0;
      uVar10 = 0xd000000000000029;
    }
    else {
      uVar10 = 0xd000000000000021;
    }
    FUN_100006cc8(param_1,param_2);
  }
  else {
    uVar10 = 0xd000000000000021;
  }
  puVar2 = (undefined8 *)(IVar5 + FCountAppConfig::apiHost);
  _swift_beginAccess(puVar2,acStack_98,1,0);
  uVar6 = puVar2[1];
  *puVar2 = uVar10;
  puVar2[1] = uVar8;
  _swift_bridgeObjectRelease(uVar6);
  lVar9 = FCountAppConfig::shouldAutoPushPageViewEvent;
  _swift_beginAccess(IVar5 + FCountAppConfig::shouldAutoPushPageViewEvent,auStack_b0,1,0);
  *(byte *)(IVar5 + lVar9) = param_3 & 1;
  if (DAT_100a7de18 != -1) {
    _swift_once(&DAT_100a7de18,FUN_100234ab4);
  }
  _swift_beginAccess(&DAT_100b36340,auStack_c8,1,0);
  DAT_100b36340 = IVar5;
  _swift_beginAccess(&DAT_100b36348,auStack_e0,0,0);
  if (DAT_100b36348 == 0) {
    if (DAT_100a7de20 != -1) {
      _swift_once(&DAT_100a7de20,FUN_100234cec);
    }
    if (*(char *)(DAT_100a7f1f8 + 0x11) != '\x01') {
      *(undefined1 *)(DAT_100a7f1f8 + 0x11) = 1;
      puVar2 = (undefined8 *)(DAT_100b36340 + FCountAppConfig::appKey);
      _swift_beginAccess(puVar2,auStack_f8,0,0);
      uVar8 = *puVar2;
      uVar10 = puVar2[1];
      _swift_bridgeObjectRetain(uVar10);
      FUN_10023a848(0,uVar8,uVar10);
      _swift_bridgeObjectRelease(uVar10);
    }
  }
  FUN_100231670();
  if ((param_5 & 1) != 0) {
    FUN_100232e2c(0);
    _objc_allocWithZone();
    uVar8 = 0xd000000000000012;
    FUN_100233c5c(0xd000000000000012,0x80000001008a6060,0);
    FUN_100237814(0);
    FUN_100234814(uVar8);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != lStack_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

