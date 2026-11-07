// rea decompile_all
// name: FUN_1005e11c0
// address: 0x1005e11c0
// body: available
// range: 0x1005e11c0-0x1005e14eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005e13c4) */
/* WARNING: Removing unreachable block (ram,0x0001005e12ec) */

void FUN_1005e11c0(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 *puVar10;
  long extraout_x8;
  long unaff_x21;
  long lVar11;
  undefined1 auStack_150 [4];
  uint local_14c;
  undefined8 local_148;
  undefined8 local_140;
  uint local_134;
  undefined8 local_130;
  uint local_124;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined1 local_108;
  undefined7 uStack_107;
  uint uStack_100;
  undefined4 uStack_fc;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined1 uStack_d0;
  undefined7 uStack_cf;
  undefined1 local_c8;
  undefined7 uStack_c7;
  undefined1 local_c0;
  uint local_b8 [2];
  uint local_b0;
  undefined4 uStack_ac;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined8 local_98;
  undefined8 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined1 local_70;
  undefined1 local_69 [9];
  
  puVar6 = &DAT_100aae310;
  FUN_100004bb4(&DAT_100aae310,&DAT_1008408a0);
  lVar11 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  lVar7 = param_3;
  FUN_10003f030(param_3,uVar1);
  FUN_1005e0f6c();
  puVar8 = &DAT_1009da090;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_150 + -extraout_x8,&DAT_1009da090,&DAT_1009da090,lVar7,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_108 = 0;
    FUN_1005e1b44();
    puVar9 = &DAT_1009d9ef0;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (local_b8,&DAT_1009d9ef0,&local_108,puVar6,&DAT_1009d9ef0,puVar8);
    uVar4 = local_b8[0];
    local_108 = 1;
    FUN_1005e1b84();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (local_b8,&DAT_1009d9f68,&local_108,puVar6,&DAT_1009d9f68,puVar9);
    local_134 = uVar4 & 0xff;
    local_124 = local_b8[0];
    local_130 = CONCAT44(uStack_ac,local_b0);
    local_110 = local_a8;
    local_118 = local_98;
    local_120 = local_88;
    local_b8[0]._0_1_ = 2;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(local_b8,puVar6);
    local_148 = local_90;
    local_140 = local_a0;
    local_69[0] = 3;
    puVar10 = local_69;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar10,puVar6);
    (**(code **)(lVar11 + 8))(auStack_150 + -extraout_x8,puVar6);
    uVar5 = local_110;
    uVar2 = local_118;
    uVar1 = local_120;
    uVar4 = local_124;
    local_14c = (uint)puVar10 & 1;
    uVar3 = (undefined1)local_134;
    uStack_100 = local_124;
    local_f8 = local_130;
    uStack_f0 = local_110;
    local_e8 = local_140;
    uStack_e0 = local_118;
    local_d8 = local_148;
    uStack_d0 = (undefined1)local_120;
    uStack_cf = (undefined7)((ulong)local_120 >> 8);
    local_c8 = (undefined1)param_2;
    uStack_c7 = (undefined7)((ulong)param_2 >> 8);
    local_c0 = (undefined1)local_14c;
    local_108 = uVar3;
    FUN_1005e0fec(&local_108,local_b8);
    FUN_10003f094(param_3);
    local_b8[0] = CONCAT31(local_b8[0]._1_3_,uVar3);
    local_b0 = uVar4;
    local_a8 = local_130;
    local_a0 = uVar5;
    local_98 = local_140;
    local_90 = uVar2;
    local_88 = local_148;
    uStack_80 = uVar1;
    local_70 = (undefined1)local_14c;
    local_78 = param_2;
    FUN_1005e1bc4(local_b8);
    param_1[5] = uStack_e0;
    param_1[4] = local_e8;
    param_1[7] = CONCAT71(uStack_cf,uStack_d0);
    param_1[6] = local_d8;
    *(ulong *)((long)param_1 + 0x41) = CONCAT17(local_c0,uStack_c7);
    *(ulong *)((long)param_1 + 0x39) = CONCAT17(local_c8,uStack_cf);
    param_1[1] = CONCAT44(uStack_fc,uStack_100);
    *param_1 = CONCAT71(uStack_107,local_108);
    param_1[3] = uStack_f0;
    param_1[2] = local_f8;
  }
  else {
    FUN_10003f094(param_3);
  }
  return;
}

