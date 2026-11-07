// rea decompile_all
// name: FUN_100181dc4
// address: 0x100181dc4
// body: available
// range: 0x100181dc4-0x100182017 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100181dc4(undefined8 *param_1,undefined8 param_2,undefined8 *param_3,undefined8 *param_4)

{
  ulong uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined8 *puVar7;
  long extraout_x8;
  long extraout_x12;
  code *pcVar8;
  long lVar9;
  long lVar10;
  undefined8 auStack_c0 [4];
  undefined1 auStack_a0 [8];
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  long local_78;
  long lStack_70;
  byte local_68;
  
  lVar2 = 0;
  puVar7 = param_3;
  __s10Foundation3URLVMa();
  lVar10 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  puVar6 = auStack_a0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar9 = (long)puVar6 - extraout_x12;
  uVar3 = param_2;
  FUN_10017cb14();
  local_68 = (byte)puVar7 & 1;
  FUN_10017cb2c();
  _swift_bridgeObjectRelease(0xe000000000000000);
  if ((((param_3 != (undefined8 *)0x2f3a) || (param_4 != (undefined8 *)0xe200000000000000)) &&
      (puVar4 = param_3,
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (param_3,param_4,0x2f3a,0xe200000000000000,0), ((ulong)puVar4 & 1) == 0)) &&
     (((param_3 != (undefined8 *)0x6c75616665442f3a || (param_4 != (undefined8 *)0xe900000000000074)
       ) && (puVar4 = param_3,
            __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                      (param_3,param_4,0x6c75616665442f3a,0xe900000000000074,0),
            ((ulong)puVar4 & 1) == 0)))) {
    uVar1 = (ulong)param_3 & 0xffffffffffff;
    if (((ulong)param_4 & 0x2000000000000000) != 0) {
      uVar1 = (ulong)param_4 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      FUN_1000d6df8(param_3,param_4);
      __s10Foundation3URLV15fileURLWithPathACSSh_tcfC(lVar9);
      _swift_bridgeObjectRelease(param_4);
      __s10Foundation3URLV016standardizedFileB0ACvg(puVar6);
      pcVar8 = *(code **)(lVar10 + 8);
      lVar5 = lVar9;
      lVar10 = lVar2;
      (*pcVar8)();
      __s10Foundation3URLV4pathSSvg();
      (*pcVar8)(puVar6,lVar2);
      local_88 = 0x2f;
      uStack_80 = 0xe100000000000000;
      local_98 = 0x5c;
      uStack_90 = 0xe100000000000000;
      local_78 = lVar5;
      lStack_70 = lVar10;
      FUN_10009ff0c();
      *(undefined1 **)(lVar9 + -0x10) = puVar6;
      *(undefined1 **)(lVar9 + -8) = puVar6;
      *(undefined **)(lVar9 + -0x20) = PTR___sSSN_1009957f8;
      *(undefined1 **)(lVar9 + -0x18) = puVar6;
      param_3 = &local_88;
      param_4 = &local_98;
      __sSy10FoundationE20replacingOccurrences2of4with7options5rangeSSqd___qd_0_So22NSStringCompareOptionsVSnySS5IndexVGSgtSyRd__SyRd_0_r0_lF
                (param_3,param_4,0,0,0,1,PTR___sSSN_1009957f8,PTR___sSSN_1009957f8);
      _swift_bridgeObjectRelease(0xe000000000000000);
      goto LAB_100181fd4;
    }
  }
  _swift_bridgeObjectRetain(param_4);
  lVar10 = -0x2000000000000000;
LAB_100181fd4:
  _swift_bridgeObjectRelease(lVar10);
  *param_1 = uVar3;
  *(byte *)(param_1 + 1) = local_68;
  param_1[2] = param_2;
  param_1[3] = puVar7;
  param_1[4] = param_3;
  param_1[5] = param_4;
  param_1[7] = 0xc000000000000000;
  param_1[6] = 0;
  return;
}

