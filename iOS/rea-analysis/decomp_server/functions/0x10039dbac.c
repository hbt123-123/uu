// rea decompile_all
// name: FUN_10039dbac
// address: 0x10039dbac
// body: available
// range: 0x10039dbac-0x10039de9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10039de2c to 0x1007dea34 _objc_retain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10039de98 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_10039dbac(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined8 uVar7;
  undefined8 *puVar8;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar9;
  long lVar10;
  code *pcVar11;
  long lVar12;
  long alStack_d0 [4];
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar2 + -8);
  lVar3 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  puVar9 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = (long)puVar9 - extraout_x12;
  local_a8 = *(undefined8 *)(unaff_x20 + _TtC8UUCommon27UUMacHistoryFileStorePlugin::databaseRoot);
  uVar7 = ((undefined8 *)(unaff_x20 + _TtC8UUCommon27UUMacHistoryFileStorePlugin::databaseRoot))[1];
  local_88 = 0xd000000000000017;
  uStack_80 = 0x80000001008b0080;
  local_98 = 0;
  uStack_90 = 0xe000000000000000;
  local_78 = param_1;
  local_70 = param_2;
  FUN_10009ff0c();
  _swift_bridgeObjectRetain(uVar7);
  *(long *)(lVar10 + -0x10) = lVar3;
  *(long *)(lVar10 + -8) = lVar3;
  *(undefined **)(lVar10 + -0x20) = PTR___sSSN_1009957f8;
  *(long *)(lVar10 + -0x18) = lVar3;
  puVar4 = &local_88;
  puVar8 = &local_98;
  __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
            (puVar4,puVar8,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
  local_78 = 0;
  local_70 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x19);
  _swift_bridgeObjectRelease(local_70);
  local_78 = 0xd000000000000011;
  local_70 = 0x80000001008b00a0;
  __sSS6appendyySSF(puVar4,puVar8);
  _swift_bridgeObjectRelease(puVar8);
  __sSS6appendyySSF(0x7473696c702e,0xe600000000000000);
  uVar5 = local_70;
  uVar1 = local_78;
  __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar10,local_a8,uVar7);
  _swift_bridgeObjectRelease(uVar7);
  uVar7 = uVar5;
  __s10Foundation3URLV22appendingPathComponentyACSSF(puVar9,uVar1,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  __s10Foundation3URLV4pathSSvg();
  pcVar11 = *(code **)(lVar12 + 8);
  (*pcVar11)(puVar9,lVar2);
  (*pcVar11)(lVar10,lVar2);
  IVar6 = NSFileManager::defaultManager((ID)&_OBJC_CLASS___NSFileManager,"defaultManager");
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar5,uVar7);
  _swift_bridgeObjectRelease(uVar7);
  local_78 = 0;
  IVar6 = NSFileManager::removeItemAtPath_error_(IVar6,"removeItemAtPath:error:",uVar5,&local_78);
  if ((int)IVar6 == 0) {
    uVar7 = local_78;
    __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_78);
    _swift_willThrow(0);
    _swift_errorRelease(uVar7);
    if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
      return uVar7;
    }
  }
  else if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return local_78;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

