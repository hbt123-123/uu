// rea decompile_all
// name: FUN_100237118
// address: 0x100237118
// body: available
// range: 0x100237118-0x10023744b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100237448 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100237118(long param_1,ulong param_2,undefined8 param_3,long param_4)

{
  long *plVar1;
  undefined8 *puVar2;
  uint uVar3;
  code *pcVar4;
  long lVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_d0 [24];
  undefined1 auStack_b8 [24];
  char local_a0 [24];
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (DAT_100a7de18 != -1) {
    _swift_once(&DAT_100a7de18,FUN_100234ab4);
  }
  _swift_beginAccess(&DAT_100b36340,auStack_70,0,0);
  plVar1 = (long *)(DAT_100b36340 + FCountAppConfig::appKey);
  _swift_beginAccess(plVar1,auStack_88,1,0);
  lVar10 = plVar1[1];
  *plVar1 = param_1;
  plVar1[1] = param_2;
  _swift_bridgeObjectRetain(param_2);
  _swift_bridgeObjectRelease(lVar10);
  lVar10 = DAT_100b36340;
  if (param_4 == 0) {
    uVar8 = 0xd000000000000021;
    uVar9 = 0x80000001008a6f70;
    __s10Foundation4DataV13base64Encoded7optionsACSgSSh_So27NSDataBase64DecodingOptionsVtcfC
              (param_1,param_2,0);
    if (param_2 >> 0x3c < 0xf) {
      lVar5 = 0;
      local_a0[0] = '\0';
      uVar3 = (uint)(param_2 >> 0x20);
      uVar6 = uVar3 >> 0x1e;
      if (uVar3 >> 0x1e < 2) {
        if (uVar6 != 0) {
          lVar5 = (long)(int)param_1;
        }
      }
      else if (uVar6 == 2) {
        lVar5 = *(long *)(param_1 + 0x10);
      }
      if (SCARRY8(lVar5,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100237444);
        (*pcVar4)();
      }
      if (lVar5 + 1 < lVar5) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100237448);
        (*pcVar4)();
      }
      __s10Foundation4DataV16_copyBytesHelper2to4fromySv_SnySiGtF
                (local_a0,lVar5,lVar5 + 1,param_1,param_2);
      if (local_a0[0] == '\x01') {
        uVar9 = 0x80000001008a6fd0;
        uVar8 = 0xd000000000000022;
      }
      else if (local_a0[0] == '\x10') {
        uVar9 = 0x80000001008a6fa0;
        uVar8 = 0xd000000000000029;
      }
      FUN_100006cc8(param_1,param_2);
    }
    puVar2 = (undefined8 *)(lVar10 + FCountAppConfig::apiHost);
    _swift_beginAccess(puVar2,local_a0,1,0);
    uVar7 = puVar2[1];
    *puVar2 = uVar8;
    puVar2[1] = uVar9;
  }
  else {
    puVar2 = (undefined8 *)(DAT_100b36340 + FCountAppConfig::apiHost);
    _swift_beginAccess(puVar2,local_a0,1,0);
    uVar7 = puVar2[1];
    *puVar2 = param_3;
    puVar2[1] = param_4;
    _swift_bridgeObjectRetain(param_4);
  }
  _swift_bridgeObjectRelease(uVar7);
  _swift_beginAccess(&DAT_100b36348,auStack_b8,1,0);
  uVar8 = DAT_100b36348;
  DAT_100b36348 = 0;
  _swift_release(uVar8);
  if (DAT_100b36348 == 0) {
    if (DAT_100a7de20 != -1) {
      _swift_once(&DAT_100a7de20,FUN_100234cec);
    }
    if (*(char *)(DAT_100a7f1f8 + 0x11) != '\x01') {
      *(undefined1 *)(DAT_100a7f1f8 + 0x11) = 1;
      puVar2 = (undefined8 *)(DAT_100b36340 + FCountAppConfig::appKey);
      _swift_beginAccess(puVar2,auStack_d0,0,0);
      uVar8 = *puVar2;
      uVar9 = puVar2[1];
      _swift_bridgeObjectRetain(uVar9);
      FUN_10023a848(0,uVar8,uVar9);
      _swift_bridgeObjectRelease(uVar9);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

