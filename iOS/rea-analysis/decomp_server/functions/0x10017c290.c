// rea decompile_all
// name: FUN_10017c290
// address: 0x10017c290
// body: available
// range: 0x10017c290-0x10017c69b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10017c290(long *param_1,long param_2,undefined8 *param_3,undefined8 *param_4,long param_5)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 *puVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  long lVar9;
  long extraout_x8;
  long lVar10;
  long extraout_x12;
  undefined *puVar11;
  code *pcVar12;
  ulong uVar13;
  ulong uVar14;
  undefined8 auStack_240 [4];
  undefined1 auStack_220 [8];
  long local_218;
  long local_210;
  undefined1 *local_208;
  long local_200;
  ulong local_1f8;
  long lStack_1f0;
  undefined8 local_1e8;
  undefined8 *local_1e0;
  undefined8 *local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  long local_1b0;
  long lStack_1a8;
  long local_1a0;
  long lStack_198;
  undefined4 local_190;
  undefined3 uStack_18c;
  undefined1 local_188;
  undefined *local_180;
  undefined8 uStack_178;
  long local_170;
  undefined1 local_160;
  undefined4 local_15f;
  undefined3 uStack_15b;
  undefined8 local_158;
  undefined8 uStack_150;
  long local_148;
  long lStack_140;
  undefined8 local_138;
  undefined8 *puStack_130;
  undefined8 local_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined *local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  lVar3 = 0;
  local_1d8 = param_4;
  __s10Foundation3URLVMa();
  local_210 = *(long *)(lVar3 + -8);
  local_200 = lVar3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_210 + 0x40));
  local_208 = auStack_220 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar10 = (long)(auStack_220 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x12;
  lVar3 = *(long *)(param_5 + 0x10);
  puVar11 = PTR___swiftEmptyArrayStorage_100995ea0;
  local_218 = lVar10;
  if (lVar3 != 0) {
    local_c0 = PTR___swiftEmptyArrayStorage_100995ea0;
    local_1e0 = param_3;
    FUN_1000700fc(0,lVar3,0);
    puVar8 = (undefined8 *)(param_5 + 0x20);
    do {
      puVar11 = local_c0;
      uStack_88 = puVar8[5];
      local_90 = puVar8[4];
      uStack_78 = puVar8[7];
      uStack_80 = puVar8[6];
      local_70 = puVar8[8];
      uStack_a8 = puVar8[1];
      local_b0 = *puVar8;
      uStack_98 = puVar8[3];
      uStack_a0 = puVar8[2];
      FUN_10017c69c(&local_b0,&local_180);
      FUN_10017c000(&local_120,&local_b0);
      FUN_10017c6d8(&local_b0);
      uVar13 = *(ulong *)(puVar11 + 0x10);
      local_c0 = puVar11;
      if (*(ulong *)(puVar11 + 0x18) >> 1 <= uVar13) {
        FUN_1000700fc(1 < *(ulong *)(puVar11 + 0x18),uVar13 + 1,1);
      }
      *(ulong *)(local_c0 + 0x10) = uVar13 + 1;
      *(undefined8 *)(local_c0 + uVar13 * 0x60 + 0x28) = uStack_118;
      *(undefined8 *)(local_c0 + uVar13 * 0x60 + 0x20) = local_120;
      *(undefined8 *)(local_c0 + uVar13 * 0x60 + 0x38) = uStack_108;
      *(undefined8 *)(local_c0 + uVar13 * 0x60 + 0x30) = uStack_110;
      *(undefined8 *)(local_c0 + uVar13 * 0x60 + 0x68) = uStack_d8;
      *(undefined8 *)(local_c0 + uVar13 * 0x60 + 0x60) = local_e0;
      *(undefined8 *)(local_c0 + uVar13 * 0x60 + 0x78) = uStack_c8;
      *(undefined8 *)(local_c0 + uVar13 * 0x60 + 0x70) = uStack_d0;
      *(undefined8 *)(local_c0 + uVar13 * 0x60 + 0x48) = uStack_f8;
      *(undefined8 *)(local_c0 + uVar13 * 0x60 + 0x40) = local_100;
      *(undefined8 *)(local_c0 + uVar13 * 0x60 + 0x58) = uStack_e8;
      *(undefined8 *)(local_c0 + uVar13 * 0x60 + 0x50) = uStack_f0;
      puVar8 = puVar8 + 9;
      lVar3 = lVar3 + -1;
      puVar11 = local_c0;
      param_3 = local_1e0;
    } while (lVar3 != 0);
  }
  FUN_1004a03a4(&local_180);
  local_188 = local_160;
  local_190 = local_15f;
  uStack_18c = uStack_15b;
  lStack_198 = lStack_140;
  local_1a0 = local_148;
  lStack_1f0 = *(long *)(param_2 + 0x28);
  local_1f8 = *(ulong *)(param_2 + 0x30);
  local_1e8 = uStack_150;
  local_1e0 = (undefined8 *)local_158;
  if (local_1f8 >> 0x3c < 0xf) {
    uVar13 = *(ulong *)(param_2 + 0x20) & 0xffffffff00000000;
    uVar14 = *(ulong *)(param_2 + 0x20) & 0xffffffff;
  }
  else {
    uVar14 = 0;
    uVar13 = 0;
    local_1f8 = 0xc000000000000000;
    lStack_1f0 = 0;
  }
  uStack_b8 = uStack_178;
  local_c0 = local_180;
  thunk_FUN_100040b80();
  switchD_10004048c::caseD_6d(local_138,puStack_130,local_128);
  puVar8 = local_1d8;
  if ((((param_3 != (undefined8 *)0x2f3a) ||
       (puVar7 = puStack_130, local_1d8 != (undefined8 *)0xe200000000000000)) &&
      (puVar4 = param_3, puVar7 = local_1d8,
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_3,local_1d8,0x2f3a,0xe200000000000000,0), ((ulong)puVar4 & 1) == 0)) &&
     (((param_3 != (undefined8 *)0x6c75616665442f3a || (puVar8 != (undefined8 *)0xe900000000000074))
      && (puVar4 = param_3, puVar7 = puVar8,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (), ((ulong)puVar4 & 1) == 0)))) {
    uVar1 = (ulong)param_3 & 0xffffffffffff;
    if (((ulong)puVar8 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)puVar8 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      FUN_1000d6df8(param_3,puVar8);
      lVar3 = local_218;
      __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(local_218);
      _swift_bridgeObjectRelease(puVar8);
      puVar5 = local_208;
      __s10Foundation3URLV016standardizedFileB0ACvg(local_208);
      lVar2 = local_200;
      pcVar12 = *(code **)(local_210 + 8);
      lVar9 = local_200;
      (*pcVar12)();
      __s10Foundation3URLV4pathSSvg();
      (*pcVar12)(puVar5,lVar2);
      local_1c0 = 0x2f;
      uStack_1b8 = 0xe100000000000000;
      local_1d0 = 0x5c;
      uStack_1c8 = 0xe100000000000000;
      local_1b0 = lVar3;
      lStack_1a8 = lVar9;
      FUN_10009ff0c();
      *(undefined1 **)(lVar10 + -0x10) = puVar5;
      *(undefined1 **)(lVar10 + -8) = puVar5;
      *(undefined **)(lVar10 + -0x20) = PTR___sSSN_1009957f8;
      *(undefined1 **)(lVar10 + -0x18) = puVar5;
      param_3 = &local_1c0;
      puVar8 = &local_1d0;
      __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                (param_3,puVar8,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
      puVar7 = puVar8;
      _swift_bridgeObjectRelease(lVar9);
      goto LAB_10017c5f8;
    }
  }
  _swift_bridgeObjectRetain(puVar8);
LAB_10017c5f8:
  FUN_1000a9ec8(&local_c0);
  local_1b0 = local_170;
  _swift_bridgeObjectRetain(puVar11);
  FUN_10017c70c(&local_1b0);
  local_188 = 1;
  puVar6 = puVar11;
  FUN_10017be84();
  _swift_bridgeObjectRelease(puVar11);
  FUN_100006cdc(local_1e0,local_1e8);
  *param_1 = (long)param_3;
  param_1[1] = (long)puVar8;
  param_1[2] = (long)puVar11;
  param_1[3] = 1;
  *(undefined1 *)(param_1 + 4) = local_188;
  *(undefined4 *)((long)param_1 + 0x21) = local_190;
  *(uint *)((long)param_1 + 0x24) = CONCAT31(uStack_18c,local_190._3_1_);
  param_1[5] = (long)puVar6;
  param_1[6] = (long)puVar7;
  param_1[8] = lStack_198;
  param_1[7] = local_1a0;
  param_1[9] = uVar13 | uVar14;
  param_1[10] = lStack_1f0;
  param_1[0xb] = local_1f8;
  return;
}

