// rea decompile_all
// name: FUN_10017c000
// address: 0x10017c000
// body: available
// range: 0x10017c000-0x10017c28f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017c000(undefined8 *param_1,undefined8 *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long extraout_x12;
  long lVar12;
  code *pcVar13;
  long lVar14;
  long alStack_d0 [4];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  long lStack_70;
  undefined1 local_68;
  
  lVar6 = 0;
  __s10Foundation3URLVMa();
  lVar14 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar14 + 0x40));
  lVar8 = (long)&local_b0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = lVar8 - extraout_x12;
  if ((*(byte *)((long)param_2 + 0x31) & 1) == 0) {
    local_a0 = 0;
    if ((*(byte *)(param_2 + 6) & 1) == 0) {
      local_a0 = 3;
    }
  }
  else {
    local_a0 = 2;
  }
  local_68 = 1;
  local_a8 = *param_2;
  uVar4 = param_2[1];
  _swift_bridgeObjectRetain(uVar4);
  _swift_bridgeObjectRelease(0xe000000000000000);
  uVar2 = param_2[4];
  local_b0 = param_2[5];
  puVar9 = (undefined8 *)param_2[2];
  puVar11 = (undefined8 *)param_2[3];
  if ((((puVar9 != (undefined8 *)0x2f3a) || (puVar11 != (undefined8 *)0xe200000000000000)) &&
      (puVar7 = puVar9,
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (puVar9,puVar11,0x2f3a,0xe200000000000000,0), ((ulong)puVar7 & 1) == 0)) &&
     (((puVar9 != (undefined8 *)0x6c75616665442f3a || (puVar11 != (undefined8 *)0xe900000000000074))
      && (puVar7 = puVar9,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (puVar9,puVar11,0x6c75616665442f3a,0xe900000000000074,0),
         ((ulong)puVar7 & 1) == 0)))) {
    uVar1 = (ulong)puVar9 & 0xffffffffffff;
    if (((ulong)puVar11 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar11 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      FUN_1000d6df8(puVar9,puVar11);
      __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar12);
      _swift_bridgeObjectRelease(puVar11);
      __s10Foundation3URLV016standardizedFileB0ACvg(lVar8);
      pcVar13 = *(code **)(lVar14 + 8);
      lVar14 = lVar12;
      lVar10 = lVar6;
      (*pcVar13)();
      __s10Foundation3URLV4pathSSvg();
      (*pcVar13)(lVar8,lVar6);
      local_88 = 0x2f;
      uStack_80 = 0xe100000000000000;
      local_98 = 0x5c;
      uStack_90 = 0xe100000000000000;
      local_78 = lVar14;
      lStack_70 = lVar10;
      FUN_10009ff0c();
      *(long *)(lVar12 + -0x10) = lVar8;
      *(long *)(lVar12 + -8) = lVar8;
      *(undefined **)(lVar12 + -0x20) = PTR___sSSN_1009957f8;
      *(long *)(lVar12 + -0x18) = lVar8;
      puVar9 = &local_88;
      puVar11 = &local_98;
      __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                (puVar9,puVar11,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
      _swift_bridgeObjectRelease(0xe000000000000000);
      goto LAB_10017c228;
    }
  }
  _swift_bridgeObjectRetain(puVar11);
  lVar10 = -0x2000000000000000;
LAB_10017c228:
  _swift_bridgeObjectRelease(lVar10);
  uVar3 = param_2[7];
  uVar5 = param_2[8];
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRelease(0xe000000000000000);
  *param_1 = local_a0;
  *(undefined1 *)(param_1 + 1) = local_68;
  param_1[2] = local_a8;
  param_1[3] = uVar4;
  param_1[4] = uVar2;
  param_1[5] = local_b0;
  param_1[6] = puVar9;
  param_1[7] = puVar11;
  param_1[8] = uVar3;
  param_1[9] = uVar5;
  param_1[0xb] = 0xc000000000000000;
  param_1[10] = 0;
  return;
}

