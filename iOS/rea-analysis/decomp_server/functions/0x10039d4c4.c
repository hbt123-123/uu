// rea decompile_all
// name: FUN_10039d4c4
// address: 0x10039d4c4
// body: available
// range: 0x10039d4c4-0x10039d74f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10039d4c4(ulong *param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  ulong uVar6;
  ID IVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  undefined1 *puVar10;
  long lVar11;
  code *pcVar12;
  long lVar13;
  long alStack_d0 [4];
  undefined1 auStack_b0 [8];
  undefined8 local_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong uStack_90;
  ulong uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar3 + -8);
  lVar4 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  puVar10 = auStack_b0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar11 = (long)puVar10 - extraout_x12;
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (uVar1 == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    local_a8 = *(undefined8 *)(unaff_x20 + _TtC8UUCommon27UUMacHistoryFileStorePlugin::databaseRoot)
    ;
    uVar2 = ((undefined8 *)(unaff_x20 + _TtC8UUCommon27UUMacHistoryFileStorePlugin::databaseRoot))
            [1];
    local_70 = 0xd000000000000017;
    uStack_68 = 0x80000001008b0080;
    local_80 = 0;
    uStack_78 = 0xe000000000000000;
    local_a0 = param_2;
    uStack_98 = param_3;
    FUN_10009ff0c();
    _swift_bridgeObjectRetain(uVar2);
    *(long *)(lVar11 + -0x10) = lVar4;
    *(long *)(lVar11 + -8) = lVar4;
    *(undefined **)(lVar11 + -0x20) = PTR___sSSN_1009957f8;
    *(long *)(lVar11 + -0x18) = lVar4;
    puVar5 = &local_70;
    puVar8 = &local_80;
    __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
              (puVar5,puVar8,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
    local_a0 = 0;
    uStack_98 = 0xe000000000000000;
    __ss11_StringGutsV4growyySiF(0x19);
    _swift_bridgeObjectRelease(uStack_98);
    local_a0 = 0xd000000000000011;
    uStack_98 = 0x80000001008b00a0;
    __sSS6appendyySSF(puVar5,puVar8);
    _swift_bridgeObjectRelease(puVar8);
    __sSS6appendyySSF(0x7473696c702e,0xe600000000000000);
    uVar6 = uStack_98;
    uVar1 = local_a0;
    __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar11,local_a8,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    uVar9 = uVar6;
    __s10Foundation3URLV22appendingPathComponentyACSSF(puVar10,uVar1,uVar6);
    _swift_bridgeObjectRelease(uVar6);
    __s10Foundation3URLV4pathSSvg();
    pcVar12 = *(code **)(lVar13 + 8);
    (*pcVar12)(puVar10,lVar3);
    (*pcVar12)(lVar11,lVar3);
    __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar9);
    _swift_bridgeObjectRelease(uVar9);
    IVar7 = NSKeyedUnarchiver::unarchiveObjectWithFile_
                      ((ID)&_OBJC_CLASS___NSKeyedUnarchiver,"unarchiveObjectWithFile:",uVar6);
    if (IVar7 == 0) {
      uStack_98 = 0;
      local_a0 = 0;
      uStack_88 = 0;
      uStack_90 = 0;
    }
    else {
      __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_a0,IVar7);
      _swift_unknownObjectRelease(IVar7);
    }
    param_1[1] = uStack_98;
    *param_1 = local_a0;
    param_1[3] = uStack_88;
    param_1[2] = uStack_90;
  }
  return;
}

