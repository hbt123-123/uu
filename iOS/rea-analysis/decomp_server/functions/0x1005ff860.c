// rea decompile_all
// name: FUN_1005ff860
// address: 0x1005ff860
// body: available
// range: 0x1005ff860-0x1005ffe4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005ffc84) */
/* WARNING: Removing unreachable block (ram,0x0001005ffa60) */
/* WARNING: Removing unreachable block (ram,0x0001005ff9b0) */
/* WARNING: Removing unreachable block (ram,0x0001005ffa14) */
/* WARNING: Removing unreachable block (ram,0x0001005ffafc) */
/* WARNING: Removing unreachable block (ram,0x0001005ffb14) */
/* WARNING: Removing unreachable block (ram,0x0001005ffb28) */
/* WARNING: Removing unreachable block (ram,0x0001005ffba8) */
/* WARNING: Removing unreachable block (ram,0x0001005ffcd0) */
/* WARNING: Removing unreachable block (ram,0x0001005ffbc4) */
/* WARNING: Removing unreachable block (ram,0x0001005ffbe0) */
/* WARNING: Removing unreachable block (ram,0x0001005ff944) */

void FUN_1005ff860(long *param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 ***pppuVar3;
  undefined8 ***pppuVar4;
  undefined *puVar5;
  long lVar6;
  undefined8 ****ppppuVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 *puVar12;
  long extraout_x8;
  long unaff_x21;
  long lVar13;
  undefined1 auStack_2c0 [12];
  uint local_2b4;
  undefined8 ***local_2b0;
  undefined8 ***local_2a8;
  undefined *local_2a0;
  undefined4 local_298;
  undefined4 local_294;
  undefined8 ***local_290;
  long local_288;
  undefined8 **local_280;
  undefined *local_278;
  long *local_270;
  undefined *local_268;
  undefined8 ***local_260;
  undefined *puStack_258;
  undefined4 local_250;
  undefined4 local_24c;
  undefined8 **local_248;
  long local_240;
  undefined4 uStack_238;
  undefined4 uStack_234;
  long local_230;
  undefined8 ***local_228;
  undefined *local_220;
  undefined8 ***pppuStack_218;
  byte local_210;
  undefined7 local_20f;
  undefined1 uStack_208;
  undefined7 uStack_207;
  undefined1 uStack_200;
  undefined7 local_1ff;
  undefined1 uStack_1f8;
  undefined7 uStack_1f7;
  undefined1 uStack_1f0;
  undefined7 local_1ef;
  undefined1 uStack_1e8;
  undefined7 uStack_1e7;
  undefined1 uStack_1e0;
  undefined7 local_1df;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined4 local_1cf;
  undefined3 uStack_1cb;
  undefined8 **local_1c8;
  undefined1 *local_1c0;
  undefined *puStack_1b8;
  undefined8 ***local_1b0;
  undefined *puStack_1a8;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined8 **local_198;
  long lStack_190;
  undefined4 local_188;
  undefined4 local_184;
  long local_180;
  undefined8 ***local_178;
  undefined *puStack_170;
  undefined8 ***local_168;
  undefined1 local_160;
  undefined8 local_15f;
  undefined8 uStack_157;
  undefined8 local_14f;
  undefined8 uStack_147;
  undefined8 local_13f;
  undefined8 uStack_137;
  undefined8 local_12f;
  undefined8 uStack_127;
  undefined4 local_11f;
  undefined8 **local_118;
  undefined1 *puStack_110;
  undefined *local_108;
  undefined1 local_fe;
  undefined1 local_fd;
  undefined1 local_fc [64];
  undefined1 local_bc;
  undefined3 uStack_b8;
  undefined5 local_b5;
  undefined3 uStack_b0;
  undefined5 uStack_ad;
  undefined3 uStack_a8;
  undefined5 local_a5;
  undefined3 uStack_a0;
  undefined5 uStack_9d;
  undefined3 uStack_98;
  undefined5 local_95;
  undefined3 uStack_90;
  undefined5 uStack_8d;
  undefined3 uStack_88;
  undefined5 local_85;
  undefined3 uStack_80;
  undefined5 uStack_7d;
  undefined4 uStack_78;
  byte local_70;
  byte local_6c;
  
  puVar5 = &DAT_100aafa40;
  FUN_100004bb4(&DAT_100aafa40,&DAT_100847b48);
  lVar13 = *(long *)(puVar5 + -8);
  local_268 = puVar5;
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar13 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  uVar2 = *(undefined8 *)(param_3 + 0x20);
  lVar6 = param_3;
  FUN_10003f030(param_3,uVar1);
  FUN_1005fe178();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_2c0 + -extraout_x8,&DAT_1009dd7f0,&DAT_1009dd7f0,lVar6,uVar1,uVar2);
  puVar5 = local_268;
  if (unaff_x21 == 0) {
    local_1b0 = (undefined8 ***)((ulong)local_1b0 & 0xffffffffffffff00);
    ppppuVar7 = &local_1b0;
    puVar10 = local_268;
    local_270 = param_1;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_1b0 = (undefined8 ***)CONCAT71(local_1b0._1_7_,1);
    ppppuVar8 = &local_1b0;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeys5Int32VSgAFm_xtKF(ppppuVar8,puVar5);
    local_6c = (byte)((ulong)ppppuVar8 >> 0x20) & 1;
    local_260._0_1_ = 2;
    ppppuVar9 = ppppuVar8;
    local_278 = puVar10;
    FUN_1005fc634();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_1b0,PTR___s10Foundation4DataVN_1009961e8,&local_260,puVar5,
               PTR___s10Foundation4DataVN_1009961e8,ppppuVar9);
    local_280 = local_1b0;
    local_288 = (long)puStack_1a8;
    local_1b0._0_1_ = 3;
    ppppuVar9 = &local_1b0;
    local_290 = ppppuVar8;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(ppppuVar9,puVar5);
    local_294 = SUB84(ppppuVar9,0);
    local_1b0._0_1_ = 4;
    ppppuVar8 = &local_1b0;
    __ss22KeyedDecodingContainerV6decode_6forKeys5Int32VAFm_xtKF(ppppuVar8,puVar5);
    local_298 = SUB84(ppppuVar8,0);
    local_1b0._0_1_ = 5;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2dm_xtKF(&local_1b0,puVar5);
    local_1b0._0_1_ = 6;
    ppppuVar8 = &local_1b0;
    puVar10 = puVar5;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_1b0 = (undefined8 ***)CONCAT71(local_1b0._1_7_,7);
    ppppuVar9 = &local_1b0;
    puVar11 = puVar5;
    local_2a8 = ppppuVar8;
    local_2a0 = puVar10;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeys6UInt64VSgAFm_xtKF();
    local_70 = (byte)puVar11 & 1;
    local_fd = 8;
    local_2b0 = ppppuVar9;
    FUN_1005f13b8();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (local_fc,&DAT_1009dd440,&local_fd,puVar5,&DAT_1009dd440,ppppuVar9);
    uStack_9d = (undefined5)local_fc._24_8_;
    uStack_98 = SUB83(local_fc._24_8_,5);
    local_a5 = (undefined5)local_fc._16_8_;
    uStack_a0 = SUB83(local_fc._16_8_,5);
    uStack_8d = (undefined5)local_fc._40_8_;
    uStack_88 = SUB83(local_fc._40_8_,5);
    local_95 = (undefined5)local_fc._32_8_;
    uStack_90 = SUB83(local_fc._32_8_,5);
    uStack_7d = (undefined5)local_fc._56_8_;
    local_85 = (undefined5)local_fc._48_8_;
    uStack_80 = SUB83(local_fc._48_8_,5);
    uStack_78 = CONCAT13(local_bc,SUB83(local_fc._56_8_,5));
    uStack_ad = (undefined5)local_fc._8_8_;
    uStack_a8 = SUB83(local_fc._8_8_,5);
    local_b5 = (undefined5)local_fc._0_8_;
    uStack_b0 = SUB83(local_fc._0_8_,5);
    puVar10 = &DAT_100aaf958;
    FUN_100004bb4(&DAT_100aaf958,&BYTE_1008473a8);
    local_260 = (undefined8 ***)CONCAT71(local_260._1_7_,9);
    puVar11 = &DAT_100aafa48;
    FUN_100602728(&DAT_100aafa48,FUN_100602798,PTR___sSayxGSesSeRzlMc_1009958a0);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_1b0,puVar10,&local_260,puVar5,puVar10,puVar11);
    pppuVar4 = local_1b0;
    local_fe = 10;
    puVar12 = &local_fe;
    puVar5 = local_268;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    (**(code **)(lVar13 + 8))(auStack_2c0 + -extraout_x8,local_268);
    pppuVar3 = local_2b0;
    puStack_258 = local_278;
    local_250 = SUB84(local_290,0);
    local_268 = (undefined *)CONCAT44(local_268._4_4_,(uint)local_6c);
    local_24c = CONCAT31(local_24c._1_3_,local_6c);
    local_248 = local_280;
    local_240 = local_288;
    uStack_238 = local_294;
    uStack_234 = local_298;
    local_228 = local_2a8;
    local_220 = local_2a0;
    pppuStack_218 = local_2b0;
    local_2b4 = (uint)local_70;
    local_210 = local_70;
    uStack_207 = (undefined7)CONCAT53(uStack_ad,uStack_b0);
    uStack_200 = (undefined1)((uint5)uStack_ad >> 0x20);
    local_20f = (undefined7)CONCAT53(local_b5,uStack_b8);
    uStack_208 = (undefined1)((uint5)local_b5 >> 0x20);
    local_1cf = uStack_78;
    uStack_1d7 = (undefined7)CONCAT53(uStack_7d,uStack_80);
    uStack_1d0 = (undefined1)((uint5)uStack_7d >> 0x20);
    local_1df = (undefined7)CONCAT53(local_85,uStack_88);
    uStack_1d8 = (undefined1)((uint5)local_85 >> 0x20);
    uStack_1e7 = (undefined7)CONCAT53(uStack_8d,uStack_90);
    uStack_1e0 = (undefined1)((uint5)uStack_8d >> 0x20);
    local_1ef = (undefined7)CONCAT53(local_95,uStack_98);
    uStack_1e8 = (undefined1)((uint5)local_95 >> 0x20);
    uStack_1f7 = (undefined7)CONCAT53(uStack_9d,uStack_a0);
    uStack_1f0 = (undefined1)((uint5)uStack_9d >> 0x20);
    local_1ff = (undefined7)CONCAT53(local_a5,uStack_a8);
    uStack_1f8 = (undefined1)((uint5)local_a5 >> 0x20);
    local_1c8 = pppuVar4;
    local_260 = ppppuVar7;
    local_230 = param_2;
    local_1c0 = puVar12;
    puStack_1b8 = puVar5;
    FUN_1006027d8(&local_260,&local_1b0);
    FUN_10003f094(param_3);
    uStack_157 = CONCAT53(uStack_ad,uStack_b0);
    local_15f = CONCAT53(local_b5,uStack_b8);
    uStack_147 = CONCAT53(uStack_9d,uStack_a0);
    local_14f = CONCAT53(local_a5,uStack_a8);
    uStack_137 = CONCAT53(uStack_8d,uStack_90);
    local_13f = CONCAT53(local_95,uStack_98);
    uStack_127 = CONCAT53(uStack_7d,uStack_80);
    local_12f = CONCAT53(local_85,uStack_88);
    puStack_1a8 = local_278;
    local_1a0 = SUB84(local_290,0);
    local_19c = SUB81(local_268,0);
    local_198 = local_280;
    lStack_190 = local_288;
    local_188 = local_294;
    local_184 = local_298;
    local_178 = local_2a8;
    puStack_170 = local_2a0;
    local_168 = pppuVar3;
    local_160 = (undefined1)local_2b4;
    local_11f = uStack_78;
    local_118 = pppuVar4;
    local_1b0 = ppppuVar7;
    local_180 = param_2;
    puStack_110 = puVar12;
    local_108 = puVar5;
    FUN_100601db8(&local_1b0);
    local_270[0x11] = CONCAT71(uStack_1d7,uStack_1d8);
    local_270[0x10] = CONCAT71(local_1df,uStack_1e0);
    local_270[0x13] = (long)local_1c8;
    local_270[0x12] = CONCAT35(uStack_1cb,CONCAT41(local_1cf,uStack_1d0));
    local_270[0x15] = (long)puStack_1b8;
    local_270[0x14] = (long)local_1c0;
    local_270[9] = (long)pppuStack_218;
    local_270[8] = (long)local_220;
    local_270[0xb] = CONCAT71(uStack_207,uStack_208);
    local_270[10] = CONCAT71(local_20f,local_210);
    local_270[0xd] = CONCAT71(uStack_1f7,uStack_1f8);
    local_270[0xc] = CONCAT71(local_1ff,uStack_200);
    local_270[0xf] = CONCAT71(uStack_1e7,uStack_1e8);
    local_270[0xe] = CONCAT71(local_1ef,uStack_1f0);
    local_270[1] = (long)puStack_258;
    *local_270 = (long)local_260;
    local_270[3] = (long)local_248;
    local_270[2] = CONCAT44(local_24c,local_250);
    local_270[5] = CONCAT44(uStack_234,uStack_238);
    local_270[4] = local_240;
    local_270[7] = (long)local_228;
    local_270[6] = local_230;
  }
  else {
    FUN_10003f094(param_3);
  }
  return;
}

