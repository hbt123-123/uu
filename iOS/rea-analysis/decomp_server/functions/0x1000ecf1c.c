// rea decompile_all
// name: FUN_1000ecf1c
// address: 0x1000ecf1c
// body: available
// range: 0x1000ecf1c-0x1000ed337 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000ed1b4) */
/* WARNING: Removing unreachable block (ram,0x0001000ed0d8) */
/* WARNING: Removing unreachable block (ram,0x0001000ed164) */
/* WARNING: Removing unreachable block (ram,0x0001000ed0f0) */
/* WARNING: Removing unreachable block (ram,0x0001000ed11c) */
/* WARNING: Removing unreachable block (ram,0x0001000ed108) */
/* WARNING: Removing unreachable block (ram,0x0001000ed118) */
/* WARNING: Removing unreachable block (ram,0x0001000ed1fc) */
/* WARNING: Removing unreachable block (ram,0x0001000ed120) */
/* WARNING: Removing unreachable block (ram,0x0001000ed014) */

void FUN_1000ecf1c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  long lVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  undefined1 *puVar10;
  undefined *puVar11;
  undefined *puVar12;
  long extraout_x8;
  long unaff_x21;
  long lVar13;
  undefined1 auStack_160 [8];
  uint *local_158;
  uint *local_150;
  uint *local_148;
  uint *local_140;
  uint *local_138;
  undefined *local_130;
  undefined *local_128;
  undefined *local_120;
  uint local_118;
  undefined4 uStack_114;
  uint *puStack_110;
  undefined *local_108;
  uint *puStack_100;
  uint *local_f8;
  uint *puStack_f0;
  undefined *local_e8;
  uint *puStack_e0;
  undefined *local_d8;
  uint *puStack_d0;
  byte local_c8;
  uint local_c0 [2];
  uint *local_b8;
  undefined *puStack_b0;
  uint *local_a8;
  uint *puStack_a0;
  uint *local_98;
  undefined *puStack_90;
  uint *local_88;
  undefined *puStack_80;
  uint *local_78;
  byte local_70;
  undefined1 local_51;
  
  puVar4 = &DAT_100a78040;
  FUN_100004bb4(&DAT_100a78040,&DAT_10080d090);
  lVar13 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar5 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_1000ed338();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_160 + -extraout_x8,&DAT_10099c2e8,&DAT_10099c2e8,lVar5,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_c0[0] = local_c0[0] & 0xffffff00;
    puVar6 = local_c0;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(puVar6,puVar4);
    local_c0[0]._0_1_ = 1;
    puVar7 = local_c0;
    puVar11 = puVar4;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_c0[0]._0_1_ = 2;
    puVar8 = local_c0;
    local_120 = puVar11;
    __ss22KeyedDecodingContainerV6decode_6forKeys6UInt64VAFm_xtKF(puVar8,puVar4);
    local_c0[0]._0_1_ = 3;
    puVar9 = local_c0;
    local_138 = puVar8;
    __ss22KeyedDecodingContainerV6decode_6forKeys6UInt64VAFm_xtKF(puVar9,puVar4);
    local_c0[0]._0_1_ = 4;
    puVar8 = local_c0;
    puVar11 = puVar4;
    local_140 = puVar9;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_c0[0]._0_1_ = 5;
    puVar9 = local_c0;
    puVar12 = puVar4;
    local_148 = puVar8;
    local_128 = puVar11;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_c0[0]._0_1_ = 6;
    puVar8 = local_c0;
    local_150 = puVar9;
    local_130 = puVar12;
    __ss22KeyedDecodingContainerV6decode_6forKeys6UInt64VAFm_xtKF(puVar8,puVar4);
    local_51 = 7;
    puVar10 = &local_51;
    local_158 = puVar8;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar10,puVar4);
    (**(code **)(lVar13 + 8))(auStack_160 + -extraout_x8,puVar4);
    puVar12 = local_120;
    puVar11 = local_128;
    puVar4 = local_130;
    puVar8 = local_138;
    bVar3 = (byte)puVar10 & 1;
    local_108 = local_120;
    puStack_100 = local_138;
    local_f8 = local_140;
    puStack_f0 = local_148;
    local_e8 = local_128;
    puStack_e0 = local_150;
    local_d8 = local_130;
    puStack_d0 = local_158;
    local_118 = (uint)puVar6;
    puStack_110 = puVar7;
    local_c8 = bVar3;
    FUN_100082314(&local_118,local_c0);
    FUN_10003f094(param_2);
    puStack_b0 = puVar12;
    local_a8 = puVar8;
    puStack_a0 = local_140;
    local_98 = local_148;
    puStack_90 = puVar11;
    local_88 = local_150;
    puStack_80 = puVar4;
    local_78 = local_158;
    local_c0[0] = (uint)puVar6;
    local_b8 = puVar7;
    local_70 = bVar3;
    FUN_1000e3614(local_c0);
    param_1[5] = puStack_f0;
    param_1[4] = local_f8;
    param_1[7] = puStack_e0;
    param_1[6] = local_e8;
    param_1[9] = puStack_d0;
    param_1[8] = local_d8;
    *(byte *)(param_1 + 10) = local_c8;
    param_1[1] = puStack_110;
    *param_1 = CONCAT44(uStack_114,local_118);
    param_1[3] = puStack_100;
    param_1[2] = local_108;
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

