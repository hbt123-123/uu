// rea decompile_all
// name: FUN_1001820d0
// address: 0x1001820d0
// body: available
// range: 0x1001820d0-0x10018246f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001820d0(undefined8 *param_1,undefined **param_2,undefined8 *param_3,long param_4,
                  ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  long lVar3;
  undefined **ppuVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x8;
  long extraout_x12;
  long lVar10;
  code *pcVar11;
  ulong *puVar12;
  long lVar13;
  undefined1 uVar14;
  undefined *puVar15;
  undefined8 auStack_140 [4];
  undefined1 auStack_120 [8];
  undefined **local_118;
  undefined8 *local_110;
  undefined8 *puStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined *local_c8;
  undefined8 uStack_c0;
  long local_b8;
  long lStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  long local_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  puVar5 = auStack_120 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar13 = (long)puVar5 - extraout_x12;
  thunk_FUN_1004a01b0(&local_a8);
  uStack_78 = uStack_a0;
  local_80 = local_a8;
  uStack_f8 = uStack_88;
  local_100 = local_90;
  if ((((param_2 != (undefined **)0x2f3a) || (param_3 != (undefined8 *)0xe200000000000000)) &&
      (ppuVar4 = param_2,
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_2,param_3,0x2f3a,0xe200000000000000,0), ((ulong)ppuVar4 & 1) == 0)) &&
     (((param_2 != (undefined **)0x6c75616665442f3a || (param_3 != (undefined8 *)0xe900000000000074)
       ) && (ppuVar4 = param_2,
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (param_2,param_3,0x6c75616665442f3a,0xe900000000000074,0),
            ((ulong)ppuVar4 & 1) == 0)))) {
    uVar1 = (ulong)param_2 & 0xffffffffffff;
    if (((ulong)param_3 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)param_3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      FUN_1000d6df8(param_2,param_3);
      __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar13);
      _swift_bridgeObjectRelease(param_3);
      __s10Foundation3URLV016standardizedFileB0ACvg(puVar5);
      pcVar11 = *(code **)(lVar10 + 8);
      lVar10 = lVar13;
      lVar8 = lVar3;
      (*pcVar11)();
      __s10Foundation3URLV4pathSSvg();
      (*pcVar11)(puVar5,lVar3);
      local_c8 = (undefined *)0x2f;
      uStack_c0 = 0xe100000000000000;
      local_d8 = 0x5c;
      uStack_d0 = 0xe100000000000000;
      local_b8 = lVar10;
      lStack_b0 = lVar8;
      FUN_10009ff0c();
      *(undefined1 **)(lVar13 + -0x10) = puVar5;
      *(undefined1 **)(lVar13 + -8) = puVar5;
      *(undefined **)(lVar13 + -0x20) = PTR___sSSN_1009957f8;
      *(undefined1 **)(lVar13 + -0x18) = puVar5;
      param_2 = &local_c8;
      param_3 = &local_d8;
      __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                (param_2,param_3,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
      _swift_bridgeObjectRelease(lVar8);
      goto LAB_1001822c8;
    }
  }
  _swift_bridgeObjectRetain(param_3);
LAB_1001822c8:
  FUN_1000a9ec8(&local_80);
  local_b8 = local_98;
  lVar3 = *(long *)(param_4 + 0x10);
  puStack_108 = param_1;
  if (lVar3 == 0) {
    FUN_100040bb4(&local_b8,&DAT_100a7b960,&DAT_10080fd90);
    puVar15 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    local_c8 = PTR___swiftEmptyArrayStorage_100995ea0;
    local_118 = param_2;
    local_110 = param_3;
    FUN_10006ffb4(0,lVar3,0);
    puVar12 = (ulong *)(param_4 + 0x28);
    uStack_e8 = 0xc000000000000000;
    local_f0 = 0;
    do {
      puVar15 = local_c8;
      uVar1 = puVar12[-1];
      uVar2 = *puVar12;
      _swift_bridgeObjectRetain_n(uVar2,2);
      _swift_bridgeObjectRelease(0xe000000000000000);
      uVar7 = uVar2;
      if (*(long *)(param_5 + 0x10) == 0) {
LAB_10018238c:
        _swift_bridgeObjectRelease(uVar7);
        uVar14 = 0;
      }
      else {
        _swift_bridgeObjectRetain(param_5);
        uVar6 = uVar1;
        uVar9 = uVar2;
        FUN_1001a2c70();
        _swift_bridgeObjectRelease(uVar2);
        uVar7 = param_5;
        if ((uVar9 & 1) == 0) goto LAB_10018238c;
        uVar14 = *(undefined1 *)(*(long *)(param_5 + 0x38) + uVar6);
        _swift_bridgeObjectRelease(param_5);
      }
      uVar7 = *(ulong *)(puVar15 + 0x10);
      local_c8 = puVar15;
      if (*(ulong *)(puVar15 + 0x18) >> 1 <= uVar7) {
        FUN_10006ffb4(1 < *(ulong *)(puVar15 + 0x18),uVar7 + 1,1);
      }
      puVar15 = local_c8;
      *(ulong *)(local_c8 + 0x10) = uVar7 + 1;
      *(ulong *)(local_c8 + uVar7 * 0x28 + 0x20) = uVar1;
      *(ulong *)(local_c8 + uVar7 * 0x28 + 0x28) = uVar2;
      local_c8[uVar7 * 0x28 + 0x30] = uVar14;
      local_c8[uVar7 * 0x28 + 0x31] = 0;
      *(undefined8 *)(local_c8 + uVar7 * 0x28 + 0x40) = uStack_e8;
      *(undefined8 *)(local_c8 + uVar7 * 0x28 + 0x38) = local_f0;
      puVar12 = puVar12 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    FUN_100040bb4(&local_b8,&DAT_100a7b960,&DAT_10080fd90);
    param_3 = local_110;
    param_2 = local_118;
  }
  *puStack_108 = param_2;
  puStack_108[1] = param_3;
  puStack_108[2] = puVar15;
  puStack_108[4] = uStack_f8;
  puStack_108[3] = local_100;
  return;
}

