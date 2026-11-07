// rea decompile_all
// name: FUN_1003b7820
// address: 0x1003b7820
// body: available
// range: 0x1003b7820-0x1003b7ea7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003b7ce8) */
/* WARNING: Removing unreachable block (ram,0x0001003b7cec) */
/* WARNING: Removing unreachable block (ram,0x0001003b7bcc) */
/* WARNING: Removing unreachable block (ram,0x0001003b7ae0) */
/* WARNING: Removing unreachable block (ram,0x0001003b79b0) */
/* WARNING: Removing unreachable block (ram,0x0001003b7968) */
/* WARNING: Removing unreachable block (ram,0x0001003b79fc) */
/* WARNING: Removing unreachable block (ram,0x0001003b7b78) */
/* WARNING: Removing unreachable block (ram,0x0001003b7a18) */
/* WARNING: Removing unreachable block (ram,0x0001003b7a50) */
/* WARNING: Removing unreachable block (ram,0x0001003b7a2c) */
/* WARNING: Removing unreachable block (ram,0x0001003b7a30) */
/* WARNING: Removing unreachable block (ram,0x0001003b7a5c) */
/* WARNING: Removing unreachable block (ram,0x0001003b7a60) */
/* WARNING: Removing unreachable block (ram,0x0001003b7a6c) */
/* WARNING: Removing unreachable block (ram,0x0001003b7a3c) */
/* WARNING: Removing unreachable block (ram,0x0001003b7a40) */
/* WARNING: Removing unreachable block (ram,0x0001003b7a48) */
/* WARNING: Removing unreachable block (ram,0x0001003b7c10) */
/* WARNING: Removing unreachable block (ram,0x0001003b78fc) */
/* WARNING: Removing unreachable block (ram,0x0001003b7c94) */
/* WARNING: Removing unreachable block (ram,0x0001003b7cfc) */

void FUN_1003b7820(long *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined8 ***pppuVar5;
  byte bVar6;
  byte bVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  undefined8 ****ppppuVar16;
  undefined8 ****ppppuVar17;
  undefined8 ****ppppuVar18;
  undefined8 ****ppppuVar19;
  undefined8 ****ppppuVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  undefined *puVar25;
  undefined *puVar26;
  long extraout_x8;
  long unaff_x21;
  long lVar27;
  undefined1 auStack_260 [12];
  uint local_254;
  undefined8 ***local_250;
  undefined8 ***local_248;
  undefined8 ***local_240;
  undefined *local_238;
  undefined *local_230;
  undefined8 ***local_1b8;
  undefined *puStack_1b0;
  undefined8 ***local_1a8;
  undefined *puStack_1a0;
  undefined8 ***local_198;
  undefined *puStack_190;
  undefined8 ***local_188;
  undefined *puStack_180;
  undefined8 **local_178;
  undefined4 uStack_170;
  undefined4 uStack_16c;
  undefined4 local_168;
  undefined4 uStack_164;
  undefined8 ***pppuStack_160;
  undefined *local_158;
  undefined8 ***pppuStack_150;
  undefined *local_148;
  undefined8 ***pppuStack_140;
  undefined *local_138;
  undefined4 uStack_130;
  undefined4 uStack_12c;
  long local_128;
  undefined8 ***local_120;
  undefined *puStack_118;
  undefined8 ***local_110;
  undefined *puStack_108;
  undefined8 ***local_100;
  undefined *puStack_f8;
  undefined8 ***local_f0;
  undefined *puStack_e8;
  undefined8 **local_e0;
  undefined4 local_d8;
  byte local_d4;
  undefined4 local_d0;
  byte local_cc;
  undefined8 ***local_c8;
  undefined *puStack_c0;
  undefined8 ***local_b8;
  undefined *puStack_b0;
  undefined8 ***local_a8;
  undefined *puStack_a0;
  undefined4 local_98;
  undefined1 local_94;
  undefined2 local_93;
  undefined1 local_91;
  long local_90;
  undefined1 local_81;
  long local_80;
  undefined2 local_77;
  undefined1 local_75;
  byte local_74;
  byte local_70;
  byte local_6c;
  
  puVar8 = &DAT_100a8c108;
  FUN_100004bb4(&DAT_100a8c108,&DAT_100822248);
  lVar27 = *(long *)(puVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar27 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar9 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_1003b3b08();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_260 + -extraout_x8,&DAT_1009b90c8,&DAT_1009b90c8,lVar9,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_120 = (undefined8 ***)((ulong)local_120 & 0xffffffffffffff00);
    ppppuVar10 = &local_120;
    puVar21 = puVar8;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_120._0_1_ = 1;
    ppppuVar11 = &local_120;
    puVar22 = puVar8;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_120._0_1_ = 2;
    ppppuVar12 = &local_120;
    puVar23 = puVar8;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_120 = (undefined8 ***)CONCAT71(local_120._1_7_,3);
    ppppuVar13 = &local_120;
    puVar24 = puVar8;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    puVar14 = &DAT_100a756e8;
    FUN_100004bb4(&DAT_100a756e8,&BYTE_100809720);
    local_1b8 = (undefined8 ***)CONCAT71(local_1b8._1_7_,4);
    puVar15 = &DAT_100a8c110;
    FUN_1003bd9a4(&DAT_100a8c110,PTR___sSSSesWP_100995828,PTR___sSayxGSesSeRzlMc_1009958a0);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_120,puVar14,&local_1b8,puVar8,puVar14);
    pppuVar5 = local_120;
    local_120._0_1_ = 5;
    ppppuVar16 = &local_120;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeys5Int32VSgAFm_xtKF(ppppuVar16,puVar8);
    local_6c = (byte)((ulong)ppppuVar16 >> 0x20) & 1;
    local_120._0_1_ = 6;
    ppppuVar17 = &local_120;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeys5Int32VSgAFm_xtKF(ppppuVar17,puVar8);
    local_70 = (byte)((ulong)ppppuVar17 >> 0x20) & 1;
    local_120._0_1_ = 7;
    ppppuVar18 = &local_120;
    puVar25 = puVar8;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_120._0_1_ = 8;
    ppppuVar19 = &local_120;
    puVar26 = puVar8;
    local_230 = puVar25;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_120._0_1_ = 9;
    ppppuVar20 = &local_120;
    puVar25 = puVar8;
    local_248 = ppppuVar18;
    local_240 = ppppuVar19;
    local_238 = puVar26;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_120._0_1_ = 10;
    ppppuVar18 = &local_120;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeys5Int32VSgAFm_xtKF(ppppuVar18,puVar8);
    local_74 = (byte)((ulong)ppppuVar18 >> 0x20) & 1;
    local_81 = 0xb;
    local_250 = ppppuVar18;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_80,puVar14,&local_81,puVar8,puVar14,puVar15);
    (**(code **)(lVar27 + 8))(auStack_260 + -extraout_x8,puVar8);
    bVar7 = local_6c;
    bVar6 = local_70;
    puVar14 = local_230;
    puVar8 = local_238;
    pppuVar4 = local_240;
    pppuVar3 = local_248;
    local_178 = pppuVar5;
    uStack_16c = CONCAT31(uStack_16c._1_3_,local_6c);
    uStack_164 = CONCAT31(uStack_164._1_3_,local_70);
    pppuStack_160 = local_248;
    local_158 = local_230;
    pppuStack_150 = local_240;
    local_148 = local_238;
    uStack_130 = SUB84(local_250,0);
    local_254 = (uint)local_74;
    uStack_12c = CONCAT31(uStack_12c._1_3_,local_74);
    local_128 = local_80;
    local_1b8 = ppppuVar10;
    puStack_1b0 = puVar21;
    local_1a8 = ppppuVar11;
    puStack_1a0 = puVar22;
    local_198 = ppppuVar12;
    puStack_190 = puVar23;
    local_188 = ppppuVar13;
    puStack_180 = puVar24;
    uStack_170 = (int)ppppuVar16;
    local_168 = (int)ppppuVar17;
    pppuStack_140 = ppppuVar20;
    local_138 = puVar25;
    FUN_1001bb944(&local_1b8,&local_120);
    FUN_10003f094(param_2);
    local_e0 = pppuVar5;
    local_d4 = bVar7;
    local_cc = bVar6;
    local_c8 = pppuVar3;
    puStack_c0 = puVar14;
    local_b8 = pppuVar4;
    puStack_b0 = puVar8;
    local_98 = SUB84(local_250,0);
    local_94 = (undefined1)local_254;
    local_93 = local_77;
    local_91 = local_75;
    local_90 = local_80;
    local_120 = ppppuVar10;
    puStack_118 = puVar21;
    local_110 = ppppuVar11;
    puStack_108 = puVar22;
    local_100 = ppppuVar12;
    puStack_f8 = puVar23;
    local_f0 = ppppuVar13;
    puStack_e8 = puVar24;
    local_d8 = (int)ppppuVar16;
    local_d0 = (int)ppppuVar17;
    local_a8 = ppppuVar20;
    puStack_a0 = puVar25;
    FUN_1001b5838(&local_120);
    param_1[0xd] = (long)pppuStack_150;
    param_1[0xc] = (long)local_158;
    param_1[0xf] = (long)pppuStack_140;
    param_1[0xe] = (long)local_148;
    param_1[0x11] = CONCAT44(uStack_12c,uStack_130);
    param_1[0x10] = (long)local_138;
    param_1[0x12] = local_128;
    param_1[5] = (long)puStack_190;
    param_1[4] = (long)local_198;
    param_1[7] = (long)puStack_180;
    param_1[6] = (long)local_188;
    param_1[9] = CONCAT44(uStack_16c,uStack_170);
    param_1[8] = (long)local_178;
    param_1[0xb] = (long)pppuStack_160;
    param_1[10] = CONCAT44(uStack_164,local_168);
    param_1[1] = (long)puStack_1b0;
    *param_1 = (long)local_1b8;
    param_1[3] = (long)puStack_1a0;
    param_1[2] = (long)local_1a8;
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

