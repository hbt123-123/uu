// rea decompile_all
// name: FUN_1003d4488
// address: 0x1003d4488
// body: available
// range: 0x1003d4488-0x1003d49e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003d4750) */
/* WARNING: Removing unreachable block (ram,0x0001003d46a0) */
/* WARNING: Removing unreachable block (ram,0x0001003d46a4) */
/* WARNING: Removing unreachable block (ram,0x0001003d4674) */
/* WARNING: Removing unreachable block (ram,0x0001003d4608) */
/* WARNING: Removing unreachable block (ram,0x0001003d45c4) */
/* WARNING: Removing unreachable block (ram,0x0001003d468c) */
/* WARNING: Removing unreachable block (ram,0x0001003d46a8) */
/* WARNING: Removing unreachable block (ram,0x0001003d46b8) */
/* WARNING: Removing unreachable block (ram,0x0001003d4700) */
/* WARNING: Removing unreachable block (ram,0x0001003d479c) */
/* WARNING: Removing unreachable block (ram,0x0001003d47d4) */
/* WARNING: Removing unreachable block (ram,0x0001003d47e8) */
/* WARNING: Removing unreachable block (ram,0x0001003d47f0) */
/* WARNING: Removing unreachable block (ram,0x0001003d4830) */
/* WARNING: Removing unreachable block (ram,0x0001003d4828) */
/* WARNING: Removing unreachable block (ram,0x0001003d4840) */
/* WARNING: Removing unreachable block (ram,0x0001003d482c) */
/* WARNING: Removing unreachable block (ram,0x0001003d4554) */

void FUN_1003d4488(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  undefined1 *puVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  long extraout_x8;
  long unaff_x21;
  long lVar22;
  undefined1 auStack_1d0 [8];
  undefined8 ***local_1c8;
  undefined8 ***local_1c0;
  undefined8 ***local_1b8;
  undefined *local_1b0;
  undefined8 ***local_158;
  undefined *puStack_150;
  undefined8 ***local_148;
  undefined *puStack_140;
  undefined8 ***local_138;
  undefined *puStack_130;
  undefined8 ***local_128;
  undefined8 ***pppuStack_120;
  undefined *local_118;
  undefined8 ***pppuStack_110;
  undefined *local_108;
  undefined8 ***pppuStack_100;
  undefined *local_f8;
  undefined8 ***pppuStack_f0;
  undefined1 *local_e8;
  undefined8 ***local_e0;
  undefined *puStack_d8;
  undefined8 ***local_d0;
  undefined *puStack_c8;
  undefined8 ***local_c0;
  undefined *puStack_b8;
  undefined8 ***local_b0;
  undefined8 ***pppuStack_a8;
  undefined *local_a0;
  undefined8 ***pppuStack_98;
  undefined *local_90;
  undefined8 ***pppuStack_88;
  undefined *local_80;
  undefined8 ***pppuStack_78;
  undefined1 *local_70;
  undefined1 local_51;
  
  puVar6 = &DAT_100a8ca60;
  FUN_100004bb4(&DAT_100a8ca60,&DAT_100822f48);
  lVar22 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar22 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar7 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_1003d3700();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_1d0 + -extraout_x8,&DAT_1009b9da8,&DAT_1009b9da8,lVar7,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_e0 = (undefined8 ***)((ulong)local_e0 & 0xffffffffffffff00);
    ppppuVar8 = &local_e0;
    puVar16 = puVar6;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_e0._0_1_ = 1;
    ppppuVar9 = &local_e0;
    puVar17 = puVar6;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_e0._0_1_ = 2;
    ppppuVar10 = &local_e0;
    puVar18 = puVar6;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_e0._0_1_ = 3;
    ppppuVar11 = &local_e0;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(ppppuVar11,puVar6);
    local_e0._0_1_ = 4;
    ppppuVar12 = &local_e0;
    puVar19 = puVar6;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_e0._0_1_ = 5;
    ppppuVar13 = &local_e0;
    puVar20 = puVar6;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_e0._0_1_ = 6;
    ppppuVar14 = &local_e0;
    puVar21 = puVar6;
    local_1b8 = ppppuVar13;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_e0._0_1_ = 7;
    ppppuVar13 = &local_e0;
    local_1c0 = ppppuVar14;
    local_1b0 = puVar21;
    __ss22KeyedDecodingContainerV6decode_6forKeys6UInt64VAFm_xtKF(ppppuVar13,puVar6);
    local_51 = 8;
    puVar15 = &local_51;
    local_1c8 = ppppuVar13;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar15,puVar6);
    (**(code **)(lVar22 + 8))(auStack_1d0 + -extraout_x8,puVar6);
    pppuVar5 = local_1b8;
    pppuVar4 = local_1c0;
    pppuVar3 = local_1c8;
    pppuStack_110 = local_1b8;
    pppuStack_100 = local_1c0;
    local_f8 = local_1b0;
    pppuStack_f0 = local_1c8;
    local_158 = ppppuVar8;
    puStack_150 = puVar16;
    local_148 = ppppuVar9;
    puStack_140 = puVar17;
    local_138 = ppppuVar10;
    puStack_130 = puVar18;
    local_128 = ppppuVar11;
    pppuStack_120 = ppppuVar12;
    local_118 = puVar19;
    local_108 = puVar20;
    local_e8 = puVar15;
    FUN_1003d53b8(&local_158,&local_e0);
    FUN_10003f094(param_2);
    pppuStack_98 = pppuVar5;
    pppuStack_88 = pppuVar4;
    local_80 = local_1b0;
    pppuStack_78 = pppuVar3;
    local_e0 = ppppuVar8;
    puStack_d8 = puVar16;
    local_d0 = ppppuVar9;
    puStack_c8 = puVar17;
    local_c0 = ppppuVar10;
    puStack_b8 = puVar18;
    local_b0 = ppppuVar11;
    pppuStack_a8 = ppppuVar12;
    local_a0 = puVar19;
    local_90 = puVar20;
    local_70 = puVar15;
    FUN_1003d53ec(&local_e0);
    param_1[9] = pppuStack_110;
    param_1[8] = local_118;
    param_1[0xb] = pppuStack_100;
    param_1[10] = local_108;
    param_1[0xd] = pppuStack_f0;
    param_1[0xc] = local_f8;
    param_1[0xe] = local_e8;
    param_1[1] = puStack_150;
    *param_1 = local_158;
    param_1[3] = puStack_140;
    param_1[2] = local_148;
    param_1[5] = puStack_130;
    param_1[4] = local_138;
    param_1[7] = pppuStack_120;
    param_1[6] = local_128;
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

