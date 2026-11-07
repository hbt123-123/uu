// rea decompile_all
// name: FUN_1000080f8
// address: 0x1000080f8
// body: available
// range: 0x1000080f8-0x10000851f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010000839c) */
/* WARNING: Removing unreachable block (ram,0x000100008334) */
/* WARNING: Removing unreachable block (ram,0x0001000083ac) */
/* WARNING: Removing unreachable block (ram,0x000100008290) */
/* WARNING: Removing unreachable block (ram,0x0001000083cc) */
/* WARNING: Removing unreachable block (ram,0x0001000083e0) */
/* WARNING: Removing unreachable block (ram,0x0001000083f4) */
/* WARNING: Removing unreachable block (ram,0x0001000083f8) */
/* WARNING: Removing unreachable block (ram,0x00010000820c) */

void FUN_1000080f8(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  TargetProtocolConformanceDescriptor *pTVar3;
  long lVar4;
  undefined8 ****ppppuVar5;
  undefined8 ****ppppuVar6;
  undefined8 uVar7;
  undefined *puVar8;
  undefined1 *puVar9;
  long lVar10;
  long extraout_x8;
  long unaff_x21;
  long lVar11;
  undefined8 ***local_150;
  undefined8 **local_148;
  undefined8 local_140;
  undefined8 **local_138;
  undefined8 local_130;
  undefined8 local_128;
  undefined8 *local_120;
  undefined8 local_118;
  long local_110;
  undefined8 local_108;
  undefined8 ***local_f8;
  long lStack_f0;
  undefined8 **local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 **local_c8;
  undefined8 ***pppuStack_c0;
  byte local_b8;
  undefined8 ***local_b0;
  long lStack_a8;
  undefined8 **local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 **local_80;
  undefined8 ***pppuStack_78;
  undefined1 local_70;
  undefined1 local_69 [9];
  undefined8 local_58;
  
  uVar2 = 0xff;
  local_120 = param_1;
  local_118 = param_5;
  FUN_100010c98(0xff);
  pTVar3 = &TargetProtocolConformanceDescriptor_1000cee40;
  _swift_getWitnessTable(&TargetProtocolConformanceDescriptor_1000cee40,uVar2);
  lVar4 = 0;
  __ss22KeyedDecodingContainerVMa(0,uVar2,pTVar3);
  lVar11 = *(long *)(lVar4 + -8);
  local_110 = lVar4;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar7 = *(undefined8 *)(param_2 + 0x20);
  FUN_10000eba0(param_2,uVar1);
  local_108 = (long)&local_150 - extraout_x8;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_150 - extraout_x8,uVar2,uVar2,pTVar3,uVar1,uVar7);
  lVar4 = local_110;
  uVar1 = local_118;
  if (unaff_x21 == 0) {
    local_b0 = (undefined8 ***)((ulong)local_b0 & 0xffffffffffffff00);
    ppppuVar5 = &local_b0;
    lVar10 = local_110;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_f8._0_1_ = 1;
    ppppuVar6 = ppppuVar5;
    FUN_100010ca4();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_b0,&DAT_1000f10a8,&local_f8,lVar4,&DAT_1000f10a8,ppppuVar6);
    local_138 = local_b0;
    local_128 = lStack_a8;
    local_140 = local_a0;
    local_130 = uStack_98;
    uVar7 = 0;
    __sSaMa(0,param_3);
    local_f8._0_1_ = 2;
    puVar8 = PTR___sSayxGSesSeRzlMc_1000f0388;
    local_58 = param_4;
    _swift_getWitnessTable(PTR___sSayxGSesSeRzlMc_1000f0388,uVar7,&local_58);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_b0,uVar7,&local_f8,lVar4,uVar7,puVar8);
    local_148 = local_b0;
    local_b0 = (undefined8 ***)CONCAT71(local_b0._1_7_,3);
    ppppuVar6 = &local_b0;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(ppppuVar6,local_110);
    local_69[0] = 4;
    puVar9 = local_69;
    local_150 = ppppuVar6;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar9,local_110);
    (**(code **)(lVar11 + 8))(local_108,local_110);
    uVar7 = local_140;
    local_b8 = (byte)puVar9 & 1;
    local_108 = CONCAT44(local_108._4_4_,(int)puVar9) & 0xffffffff00000001;
    local_e8 = local_138;
    uStack_e0 = local_128;
    local_d8 = local_140;
    uStack_d0 = local_130;
    local_c8 = local_148;
    pppuStack_c0 = local_150;
    lVar4 = 0;
    local_f8 = ppppuVar5;
    lStack_f0 = lVar10;
    FUN_100010d14(0,param_3,param_4,uVar1);
    lVar11 = *(long *)(lVar4 + -8);
    (**(code **)(lVar11 + 0x10))(&local_b0,&local_f8,lVar4);
    FUN_100001428(param_2);
    local_a0 = local_138;
    uStack_98 = local_128;
    local_90 = uVar7;
    uStack_88 = local_130;
    local_80 = local_148;
    pppuStack_78 = local_150;
    local_70 = (undefined1)local_108;
    local_b0 = ppppuVar5;
    lStack_a8 = lVar10;
    (**(code **)(lVar11 + 8))(&local_b0,lVar4);
    local_120[5] = uStack_d0;
    local_120[4] = local_d8;
    local_120[7] = pppuStack_c0;
    local_120[6] = local_c8;
    *(byte *)(local_120 + 8) = local_b8;
    local_120[1] = lStack_f0;
    *local_120 = local_f8;
    local_120[3] = uStack_e0;
    local_120[2] = local_e8;
  }
  else {
    FUN_100001428(param_2);
  }
  return;
}

