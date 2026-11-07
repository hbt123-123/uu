// rea decompile_all
// name: FUN_10039d854
// address: 0x10039d854
// body: available
// range: 0x10039d854-0x10039daef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10039d854(undefined8 param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  ulong *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined1 *puVar7;
  undefined8 *puVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x12;
  long unaff_x20;
  long lVar10;
  code *pcVar11;
  long lVar12;
  undefined8 auStack_f0 [4];
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  ulong local_a0;
  ulong local_98;
  long local_88;
  undefined1 auStack_80 [24];
  undefined8 local_68;
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar12 + 0x40));
  puVar7 = auStack_d0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = (long)puVar7 - extraout_x12;
  uVar1 = param_2 & 0xffffffffffff;
  if ((param_3 & 0x2000000000000000) != 0) {
    uVar1 = param_3 >> 0x38 & 0xf;
  }
  if (uVar1 != 0) {
    FUN_1000b489c(param_1,&local_a0);
    if (local_88 == 0) {
      FUN_1000c776c(&local_a0);
    }
    else {
      puVar4 = &local_a0;
      FUN_10007f3d4(puVar4,auStack_80);
      local_c8 = *(undefined8 *)
                  (unaff_x20 + _TtC8UUCommon27UUMacHistoryFileStorePlugin::databaseRoot);
      uVar2 = ((undefined8 *)(unaff_x20 + _TtC8UUCommon27UUMacHistoryFileStorePlugin::databaseRoot))
              [1];
      uStack_c0 = 0;
      local_b0 = 0xd000000000000017;
      uStack_a8 = 0x80000001008b0080;
      local_b8 = 0xe000000000000000;
      local_a0 = param_2;
      local_98 = param_3;
      FUN_10009ff0c();
      _swift_bridgeObjectRetain(uVar2);
      *(ulong **)(lVar10 + -0x10) = puVar4;
      *(ulong **)(lVar10 + -8) = puVar4;
      *(undefined **)(lVar10 + -0x20) = PTR___sSSN_1009957f8;
      *(ulong **)(lVar10 + -0x18) = puVar4;
      puVar5 = &local_b0;
      puVar8 = &uStack_c0;
      __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                (puVar5,puVar8,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
      local_a0 = 0;
      local_98 = 0xe000000000000000;
      __ss11_StringGutsV4growyySiF(0x19);
      _swift_bridgeObjectRelease(local_98);
      local_a0 = 0xd000000000000011;
      local_98 = 0x80000001008b00a0;
      __sSS6appendyySSF(puVar5,puVar8);
      _swift_bridgeObjectRelease(puVar8);
      __sSS6appendyySSF(0x7473696c702e,0xe600000000000000);
      uVar6 = local_98;
      uVar1 = local_a0;
      __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar10,local_c8,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      uVar9 = uVar6;
      __s10Foundation3URLV22appendingPathComponentyACSSF(puVar7,uVar1,uVar6);
      _swift_bridgeObjectRelease(uVar6);
      __s10Foundation3URLV4pathSSvg();
      pcVar11 = *(code **)(lVar12 + 8);
      (*pcVar11)(puVar7,lVar3);
      (*pcVar11)(lVar10,lVar3);
      puVar7 = auStack_80;
      FUN_10003f030(puVar7,local_68);
      __ss27_bridgeAnythingToObjectiveCyyXlxlF();
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(uVar6,uVar9);
      _swift_bridgeObjectRelease(uVar9);
      NSKeyedArchiver::archiveRootObject_toFile_
                ((ID)&_OBJC_CLASS___NSKeyedArchiver,"archiveRootObject:toFile:",puVar7,uVar6);
      _swift_unknownObjectRelease(puVar7);
      FUN_10003f094(auStack_80);
    }
  }
  return;
}

