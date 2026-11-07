// rea decompile_all
// name: FUN_10039f6c4
// address: 0x10039f6c4
// body: available
// range: 0x10039f6c4-0x10039fa0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10039f6c4(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  long lVar2;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar3;
  long extraout_x12;
  long extraout_x12_00;
  long lVar4;
  undefined8 unaff_x20;
  long lVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  code *pcVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long local_a0;
  undefined8 local_98;
  long local_90;
  long local_88;
  
  lVar13 = *(long *)(param_2 + -8);
  local_98 = param_4;
  local_88 = param_3;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  lVar10 = (long)&local_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  lVar1 = 0xff;
  local_a0 = lVar10;
  __sSqMa();
  lVar2 = 0;
  _swift_getTupleTypeMetadata2(0,lVar1,lVar1,0,0);
  local_90 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(local_90 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8_00;
  lVar11 = *(long *)(param_3 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar11 + 0x40));
  lVar7 = lVar10 - (extraout_x8_01 + 0xfU & 0xfffffffffffffff0);
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar4 + 0x40));
  lVar3 = lVar7 - (extraout_x8_02 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar5 = lVar3 - extraout_x12;
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar12 = lVar5 - extraout_x12_00;
  (**(code **)(lVar13 + 0x10))(lVar12,unaff_x20,param_2);
  pcVar9 = *(code **)(lVar13 + 0x38);
  (*pcVar9)(lVar12,0,1,param_2);
  lVar8 = local_88;
  (**(code **)(lVar11 + 0x10))(lVar7,param_1,local_88);
  lVar11 = lVar5;
  _swift_dynamicCast(lVar5,lVar7,lVar8,param_2,6);
  (*pcVar9)(lVar5,(uint)lVar11 ^ 1,1,param_2);
  lVar8 = (long)*(int *)(lVar2 + 0x30);
  pcVar9 = *(code **)(lVar4 + 0x10);
  (*pcVar9)(lVar10,lVar12,lVar1);
  (*pcVar9)(lVar10 + lVar8,lVar5,lVar1);
  pcVar14 = *(code **)(lVar13 + 0x30);
  lVar11 = lVar10;
  (*pcVar14)(lVar10,1,param_2);
  if ((int)lVar11 == 1) {
    pcVar9 = *(code **)(lVar4 + 8);
    (*pcVar9)(lVar12,lVar1);
    lVar8 = lVar10 + lVar8;
    (*pcVar14)(lVar8,1,param_2);
    if ((int)lVar8 == 1) {
      (*pcVar9)(lVar10,lVar1);
      uVar6 = 1;
      goto LAB_10039f9e0;
    }
  }
  else {
    (*pcVar9)(lVar3,lVar10,lVar1);
    lVar11 = lVar10 + lVar8;
    (*pcVar14)(lVar11,1,param_2);
    lVar7 = local_a0;
    if ((int)lVar11 != 1) {
      (**(code **)(lVar13 + 0x20))(local_a0,lVar10 + lVar8,param_2);
      lVar8 = lVar3;
      __sSQ2eeoiySbx_xtFZTj(lVar3,lVar7,param_2,local_98);
      uVar6 = (uint)lVar8;
      pcVar14 = *(code **)(lVar13 + 8);
      (*pcVar14)(lVar7,param_2);
      pcVar9 = *(code **)(lVar4 + 8);
      (*pcVar9)(lVar12,lVar1);
      (*pcVar14)(lVar3,param_2);
      (*pcVar9)(lVar10,lVar1);
      goto LAB_10039f9e0;
    }
    pcVar9 = *(code **)(lVar4 + 8);
    (*pcVar9)(lVar12,lVar1);
    (**(code **)(lVar13 + 8))(lVar3,param_2);
  }
  (**(code **)(local_90 + 8))(lVar10,lVar2);
  uVar6 = 0;
LAB_10039f9e0:
  (*pcVar9)(lVar5,lVar1);
  return uVar6 & 1;
}

