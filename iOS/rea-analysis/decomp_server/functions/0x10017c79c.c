// rea decompile_all
// name: FUN_10017c79c
// address: 0x10017c79c
// body: available
// range: 0x10017c79c-0x10017cb03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017c79c(ulong *param_1,long param_2,ulong *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x12;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  code *pcVar11;
  long alStack_180 [4];
  ulong local_160;
  ulong local_158;
  ulong local_150;
  undefined8 local_148;
  undefined8 local_140;
  ulong local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 local_118;
  long local_110;
  long lStack_108;
  ulong local_100;
  ulong uStack_f8;
  undefined4 local_f0;
  undefined3 uStack_ec;
  undefined1 local_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  ulong local_d0;
  undefined1 local_c0;
  undefined4 local_bf;
  undefined3 uStack_bb;
  undefined8 local_b8;
  undefined8 uStack_b0;
  ulong local_a8;
  ulong uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar3 = (long)&local_160 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar7 = lVar3 - extraout_x12;
  FUN_1004a03a4(&local_e0);
  local_138 = local_d0;
  local_e8 = local_c0;
  local_f0 = local_bf;
  uStack_ec = uStack_bb;
  local_140 = local_b8;
  local_148 = uStack_b0;
  uStack_f8 = uStack_a0;
  local_100 = local_a8;
  local_150 = *(ulong *)(param_2 + 0x28);
  local_158 = *(ulong *)(param_2 + 0x30);
  if (local_158 >> 0x3c < 0xf) {
    local_160 = *(ulong *)(param_2 + 0x20) & 0xffffffff00000000;
    uVar9 = *(ulong *)(param_2 + 0x20) & 0xffffffff;
  }
  else {
    uVar9 = 0;
    local_160 = 0;
    local_150 = 0;
    local_158 = 0xc000000000000000;
  }
  thunk_FUN_100040b80();
  switchD_10004048c::caseD_6d(local_98,uStack_90,local_88);
  puVar4 = (undefined8 *)*param_3;
  puVar5 = (undefined8 *)param_3[1];
  uStack_78 = uStack_d8;
  local_80 = local_e0;
  if ((((puVar4 != (undefined8 *)0x2f3a) || (puVar5 != (undefined8 *)0xe200000000000000)) &&
      (puVar2 = puVar4,
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (puVar4,puVar5,0x2f3a,0xe200000000000000,0), ((ulong)puVar2 & 1) == 0)) &&
     (((puVar4 != (undefined8 *)0x6c75616665442f3a || (puVar5 != (undefined8 *)0xe900000000000074))
      && (puVar2 = puVar4,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (puVar4,puVar5,0x6c75616665442f3a,0xe900000000000074,0), ((ulong)puVar2 & 1) == 0
         )))) {
    uVar8 = (ulong)puVar4 & 0xffffffffffff;
    if (((ulong)puVar5 & 0x2000000000000000) != 0) {
      uVar8 = (ulong)puVar5 >> 0x38 & 0xf;
    }
    if (uVar8 != 0) {
      FUN_1000d6df8(puVar4,puVar5);
      __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar7);
      _swift_bridgeObjectRelease(puVar5);
      __s10Foundation3URLV016standardizedFileB0ACvg(lVar3);
      pcVar11 = *(code **)(lVar10 + 8);
      lVar10 = lVar7;
      lVar6 = lVar1;
      (*pcVar11)();
      __s10Foundation3URLV4pathSSvg();
      (*pcVar11)(lVar3,lVar1);
      local_120 = 0x2f;
      local_118 = 0xe100000000000000;
      local_130 = 0x5c;
      local_128 = 0xe100000000000000;
      local_110 = lVar10;
      lStack_108 = lVar6;
      FUN_10009ff0c();
      *(long *)(lVar7 + -0x10) = lVar3;
      *(long *)(lVar7 + -8) = lVar3;
      *(undefined **)(lVar7 + -0x20) = PTR___sSSN_1009957f8;
      *(long *)(lVar7 + -0x18) = lVar3;
      puVar4 = &local_120;
      puVar5 = &local_130;
      __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                (puVar4,puVar5,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
      _swift_bridgeObjectRelease(lVar6);
      goto LAB_10017ca50;
    }
  }
  _swift_bridgeObjectRetain(puVar5);
LAB_10017ca50:
  FUN_1000a9ec8(&local_80);
  uVar8 = *(ulong *)(&DAT_10080fc08 + (long)(char)param_3[4] * 8);
  uVar9 = local_160 | uVar9;
  local_e8 = 1;
  FUN_100006cdc(local_140,local_148);
  *param_1 = (ulong)puVar4;
  param_1[1] = (ulong)puVar5;
  param_1[2] = local_138;
  param_1[3] = uVar8;
  *(undefined1 *)(param_1 + 4) = local_e8;
  *(undefined4 *)((long)param_1 + 0x21) = local_f0;
  *(uint *)((long)param_1 + 0x24) = CONCAT31(uStack_ec,local_f0._3_1_);
  param_1[6] = 0xc000000000000000;
  param_1[5] = 0;
  param_1[8] = uStack_f8;
  param_1[7] = local_100;
  param_1[9] = uVar9;
  param_1[10] = local_150;
  param_1[0xb] = local_158;
  return;
}

