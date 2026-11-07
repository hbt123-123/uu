// rea decompile_all
// name: FUN_100002ac8
// address: 0x100002ac8
// body: available
// range: 0x100002ac8-0x100002ecb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100002d84) */
/* WARNING: Removing unreachable block (ram,0x000100002e24) */
/* WARNING: Removing unreachable block (ram,0x000100002ca0) */
/* WARNING: Removing unreachable block (ram,0x000100002cec) */

void FUN_100002ac8(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  TargetProtocolConformanceDescriptor *pTVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  undefined *puVar9;
  long extraout_x8;
  long extraout_x8_00;
  long lVar10;
  long extraout_x8_01;
  long extraout_x8_02;
  long lVar11;
  long unaff_x21;
  byte *pbVar12;
  byte abStack_110 [8];
  long local_108;
  undefined8 local_100;
  long local_f8;
  byte *local_f0;
  long local_e8;
  long local_e0;
  long local_d8;
  long local_d0;
  long local_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  undefined1 local_90;
  undefined7 uStack_8f;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined1 local_51;
  
  lVar4 = 0;
  local_100 = param_1;
  __s10Foundation4DateVMa();
  local_f8 = *(long *)(lVar4 + -8);
  local_e8 = lVar4;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(local_f8 + 0x40));
  lVar4 = 0;
  local_f0 = abStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  __sSqMa(0,param_3);
  local_e0 = *(long *)(lVar4 + -8);
  local_c8 = lVar4;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(local_e0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = (long)(abStack_110 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0)) - extraout_x8_00;
  uVar5 = 0xff;
  local_d0 = lVar10;
  FUN_10000eb94(0xff,param_3,param_4,param_5);
  pTVar6 = &TargetProtocolConformanceDescriptor_1000cf2a0;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000cf2a0,uVar5);
  lVar4 = 0;
  __ss22KeyedDecodingContainerVMa(0,uVar5,pTVar6);
  local_b0 = *(long *)(lVar4 + -8);
  local_a0 = lVar4;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(local_b0 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar10 = lVar10 - extraout_x8_01;
  lVar4 = 0;
  local_c0 = param_3;
  uStack_b8 = param_4;
  FUN_10000eb4c(0,param_3,param_4,param_5);
  lVar11 = *(long *)(lVar4 + -8);
  local_d8 = lVar4;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  pbVar12 = (byte *)(lVar10 - extraout_x8_02);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  FUN_10000eba0(param_2,uVar1);
  local_a8 = lVar10;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (lVar10,uVar5,uVar5,pTVar6,uVar1,uVar2);
  uVar2 = uStack_b8;
  uVar1 = local_c0;
  lVar3 = local_c8;
  lVar10 = local_d0;
  lVar4 = local_d8;
  if (unaff_x21 == 0) {
    local_90 = 0;
    puVar7 = &local_90;
    local_108 = lVar11;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar7,local_a0);
    *pbVar12 = (byte)puVar7 & 1;
    local_90 = 1;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (lVar10,uVar1,&local_90,local_a0,uVar1,uVar2);
    pbVar8 = pbVar12 + *(int *)(lVar4 + 0x2c);
    (**(code **)(local_e0 + 0x20))(pbVar8,lVar10,lVar3);
    local_51 = 2;
    FUN_10000ed08();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_90,&DAT_1000f0c90,&local_51,local_a0,&DAT_1000f0c90,pbVar8);
    pbVar8 = pbVar12 + *(int *)(lVar4 + 0x30);
    *(undefined8 *)(pbVar8 + 8) = uStack_88;
    *(ulong *)pbVar8 = CONCAT71(uStack_8f,local_90);
    *(undefined8 *)(pbVar8 + 0x18) = uStack_78;
    *(undefined8 *)(pbVar8 + 0x10) = uStack_80;
    *(undefined8 *)(pbVar8 + 0x20) = local_70;
    local_90 = 3;
    puVar9 = &DAT_100101ac8;
    FUN_10000ec04(&DAT_100101ac8,PTR___s10Foundation4DateVMa_1000f07d0,
                  PTR___s10Foundation4DateVSeAAMc_1000f07e8);
    lVar10 = local_e8;
    pbVar8 = local_f0;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (local_f0,local_e8,&local_90,local_a0,local_e8,puVar9);
    (**(code **)(local_b0 + 8))(local_a8,local_a0);
    (**(code **)(local_f8 + 0x20))(pbVar12 + *(int *)(lVar4 + 0x34),pbVar8,lVar10);
    lVar10 = local_108;
    (**(code **)(local_108 + 0x10))(local_100,pbVar12,lVar4);
    FUN_100001428(param_2);
    (**(code **)(lVar10 + 8))(pbVar12,lVar4);
  }
  else {
    FUN_100001428(param_2);
  }
  return;
}

