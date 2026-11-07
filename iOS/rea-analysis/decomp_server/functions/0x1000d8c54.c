// rea decompile_all
// name: FUN_1000d8c54
// address: 0x1000d8c54
// body: available
// range: 0x1000d8c54-0x1000d90e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000d90e0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000d8c54(undefined1 *param_1,ulong param_2,ulong param_3)

{
  long lVar1;
  ulong uVar2;
  undefined1 *puVar3;
  ID IVar4;
  undefined *puVar5;
  long lVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar10;
  ID self;
  code *pcVar11;
  long lVar12;
  undefined1 auStack_90 [16];
  ulong auStack_80 [2];
  undefined1 auStack_70 [7];
  char local_69;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  puVar3 = auStack_70 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = (long)puVar3 - extraout_x12;
  uVar2 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar2 = param_3 >> 0x38 & 0xf;
  }
  if ((uVar2 == 0) ||
     (((param_2 == 0x2f3a && (param_3 == 0xe200000000000000)) ||
      (uVar2 = param_2,
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_2,param_3,0x2f3a,0xe200000000000000,0), (uVar2 & 1) != 0)))) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(ulong *)(lVar10 + -0x10) = param_2;
    *(ulong *)(lVar10 + -8) = param_3;
    FUN_1003fb4ec(FUN_1000e36e8,lVar10 + -0x20,0xd0000000000000ae,0x8000000100886ab0,
                  0xd00000000000001e,0x80000001008873d0,0x236,0);
    *param_1 = 4;
    puVar5 = &DAT_100a77ce8;
    FUN_100004bb4(&DAT_100a77ce8,&DAT_10080ca10);
    _swift_storeEnumTagMultiPayload(param_1,puVar5,1);
    goto LAB_1000d8dd4;
  }
  FUN_1000d6df8(param_2,param_3);
  __s10Foundation3URLV15fileURLWithPath11isDirectoryACSSh_SbtcfC(puVar3);
  _swift_bridgeObjectRelease(param_3);
  __s10Foundation3URLV016standardizedFileB0ACvg(lVar10);
  pcVar11 = *(code **)(lVar12 + 8);
  lVar6 = lVar1;
  (*pcVar11)(puVar3,lVar1);
  local_69 = '\0';
  self = *(ID *)(unaff_x20 + 0x10);
  __s10Foundation3URLV4pathSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(lVar6);
  pcVar7 = "fileExistsAtPath:isDirectory:";
  IVar4 = _objc_msgSend(self,"fileExistsAtPath:isDirectory:",puVar3,&local_69);
  uVar8 = 0;
  if ((int)IVar4 == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(long *)(lVar10 + -0x10) = lVar10;
    FUN_1003fb4ec(FUN_1000e36d0,lVar10 + -0x20,0xd0000000000000ae,0x8000000100886ab0,
                  0xd00000000000001e,0x80000001008873d0,0x23e,0);
    uVar9 = 10;
LAB_1000d90a8:
    *param_1 = uVar9;
    puVar5 = &DAT_100a77ce8;
    FUN_100004bb4(&DAT_100a77ce8,&DAT_10080ca10);
    uVar8 = 1;
  }
  else {
    if (local_69 != '\x01') {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)(lVar10 + -0x10) = lVar10;
      FUN_1003fb4ec(FUN_1000e36d8,lVar10 + -0x20,0xd0000000000000ae,0x8000000100886ab0,
                    0xd00000000000001e,0x80000001008873d0,0x242,0);
      uVar9 = 4;
      goto LAB_1000d90a8;
    }
    __s10Foundation3URLV4pathSSvg(0);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
    _swift_bridgeObjectRelease(pcVar7);
    IVar4 = _objc_msgSend(self,"isWritableFileAtPath:",uVar8);
    if ((int)IVar4 == 0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)(lVar10 + -0x10) = lVar10;
      FUN_1003fb4ec(FUN_1000e36e0,lVar10 + -0x20,0xd0000000000000ae,0x8000000100886ab0,
                    0xd00000000000001e,0x80000001008873d0,0x246,0);
      uVar9 = 5;
      goto LAB_1000d90a8;
    }
    (**(code **)(lVar12 + 0x10))(param_1,lVar10,lVar1);
    puVar5 = &DAT_100a77ce8;
    FUN_100004bb4(&DAT_100a77ce8,&DAT_10080ca10);
    uVar8 = 0;
  }
  _swift_storeEnumTagMultiPayload(param_1,puVar5,uVar8);
  (*pcVar11)(lVar10,lVar1);
LAB_1000d8dd4:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

