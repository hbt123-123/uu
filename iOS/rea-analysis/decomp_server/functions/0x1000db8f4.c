// rea decompile_all
// name: FUN_1000db8f4
// address: 0x1000db8f4
// body: available
// range: 0x1000db8f4-0x1000dbca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000dbca0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

uint FUN_1000db8f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  ulong uVar2;
  undefined *puVar3;
  ID IVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  long extraout_x8;
  long extraout_x12;
  long extraout_x12_00;
  uint uVar7;
  long unaff_x20;
  int iVar8;
  ID self;
  ulong uVar9;
  undefined1 *puVar10;
  code *pcVar11;
  long lVar12;
  long lVar13;
  undefined1 auStack_b0 [16];
  ulong auStack_a0 [2];
  undefined1 auStack_90 [24];
  undefined8 local_78;
  undefined *local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  puVar10 = auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = (long)puVar10 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  uVar9 = lVar12 - extraout_x12_00;
  __s10Foundation3URLV22appendingPathComponent_11isDirectoryACSS_SbtF(lVar12,param_1,param_2,1);
  __s10Foundation3URLV016standardizedFileB0ACvg(uVar9);
  pcVar11 = *(code **)(lVar13 + 8);
  (*pcVar11)(lVar12,lVar1);
  uVar2 = uVar9;
  FUN_1000d7700(uVar9,param_3);
  if ((uVar2 & 1) == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(ulong *)(uVar9 - 0x10) = uVar9;
    FUN_1003fb4ec(FUN_1000e3690,uVar9 - 0x20,0xd0000000000000ae,0x8000000100886ab0,
                  0xd000000000000039,0x8000000100887180,0x25c,0);
    iVar8 = 1;
    uVar7 = 4;
    goto LAB_1000dbc54;
  }
  local_70 = PTR___swiftEmptySetSingleton_100995eb0;
  FUN_1000dc6e0(puVar10,uVar9,param_4,&local_70);
  puVar3 = local_70;
  _swift_bridgeObjectRelease(local_70);
  self = *(ID *)(unaff_x20 + 0x10);
  __s10Foundation3URLV4pathSSvg();
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF();
  _swift_bridgeObjectRelease(param_4);
  IVar4 = _objc_msgSend(self,"fileExistsAtPath:",puVar3);
  uVar5 = 0;
  if ((int)IVar4 == 0) {
LAB_1000dbaa0:
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(uVar5);
    local_78 = 0;
    IVar4 = _objc_msgSend(self,"createDirectoryAtURL:withIntermediateDirectories:attributes:error:",
                          uVar5,1,0,&local_78);
    if ((int)IVar4 != 0) {
      (*pcVar11)(puVar10,lVar1);
      uVar7 = 0;
      iVar8 = 0;
      goto LAB_1000dbc54;
    }
  }
  else {
    __s10Foundation3URLV19_bridgeToObjectiveCSo5NSURLCyF(0);
    local_78 = 0;
    IVar4 = _objc_msgSend(self,"removeItemAtURL:error:",uVar5,&local_78);
    uVar5 = local_78;
    if ((int)IVar4 != 0) goto LAB_1000dbaa0;
  }
  uVar5 = local_78;
  __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
  _swift_willThrow(0);
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  *(undefined8 *)(uVar9 - 0x10) = uVar5;
  FUN_1003fb4ec(thunk_FUN_1000e3724,uVar9 - 0x20,0xd0000000000000ae,0x8000000100886ab0,
                0xd000000000000039,0x8000000100887180,0x26f,0);
  uVar6 = uVar5;
  FUN_1000e3240(uVar5);
  uVar7 = (uint)uVar6;
  _swift_errorRelease(uVar5);
  (*pcVar11)(puVar10,lVar1);
  iVar8 = 1;
LAB_1000dbc54:
  (*pcVar11)(uVar9,lVar1);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar7 & 0xff | iVar8 << 8;
}

