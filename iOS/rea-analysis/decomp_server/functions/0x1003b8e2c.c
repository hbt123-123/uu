// rea decompile_all
// name: FUN_1003b8e2c
// address: 0x1003b8e2c
// body: available
// range: 0x1003b8e2c-0x1003b95cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001003b936c) */
/* WARNING: Removing unreachable block (ram,0x0001003b91e8) */
/* WARNING: Removing unreachable block (ram,0x0001003b90a4) */
/* WARNING: Removing unreachable block (ram,0x0001003b8fc0) */
/* WARNING: Removing unreachable block (ram,0x0001003b8f78) */
/* WARNING: Removing unreachable block (ram,0x0001003b9008) */
/* WARNING: Removing unreachable block (ram,0x0001003b90ec) */
/* WARNING: Removing unreachable block (ram,0x0001003b9118) */
/* WARNING: Removing unreachable block (ram,0x0001003b9028) */
/* WARNING: Removing unreachable block (ram,0x0001003b9060) */
/* WARNING: Removing unreachable block (ram,0x0001003b903c) */
/* WARNING: Removing unreachable block (ram,0x0001003b9040) */
/* WARNING: Removing unreachable block (ram,0x0001003b906c) */
/* WARNING: Removing unreachable block (ram,0x0001003b9070) */
/* WARNING: Removing unreachable block (ram,0x0001003b907c) */
/* WARNING: Removing unreachable block (ram,0x0001003b904c) */
/* WARNING: Removing unreachable block (ram,0x0001003b9050) */
/* WARNING: Removing unreachable block (ram,0x0001003b9058) */
/* WARNING: Removing unreachable block (ram,0x0001003b9268) */
/* WARNING: Removing unreachable block (ram,0x0001003b8f08) */
/* WARNING: Removing unreachable block (ram,0x0001003b92bc) */
/* WARNING: Removing unreachable block (ram,0x0001003b930c) */
/* WARNING: Removing unreachable block (ram,0x0001003b932c) */
/* WARNING: Removing unreachable block (ram,0x0001003b9370) */
/* WARNING: Removing unreachable block (ram,0x0001003b937c) */
/* WARNING: Removing unreachable block (ram,0x0001003b9398) */
/* WARNING: Removing unreachable block (ram,0x0001003b939c) */

void FUN_1003b8e2c(void *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined2 uVar4;
  undefined2 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 ****ppppuVar8;
  undefined8 ****ppppuVar9;
  undefined8 ****ppppuVar10;
  undefined8 ****ppppuVar11;
  undefined8 ****ppppuVar12;
  undefined8 ****ppppuVar13;
  undefined8 ****ppppuVar14;
  undefined8 ****ppppuVar15;
  undefined1 *puVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined *puVar19;
  undefined *puVar20;
  undefined *puVar21;
  undefined *puVar22;
  undefined *puVar23;
  undefined *puVar24;
  long extraout_x8;
  long unaff_x21;
  long lVar25;
  undefined1 auStack_3a0 [8];
  uint local_398;
  uint local_394;
  undefined *local_390;
  undefined1 *local_388;
  undefined8 ***local_380;
  uint local_374;
  undefined1 local_370;
  undefined7 uStack_36f;
  undefined8 local_368;
  undefined8 local_360;
  undefined8 local_358;
  undefined8 local_350;
  undefined8 local_348;
  uint local_33c;
  undefined1 local_338;
  undefined7 uStack_337;
  undefined8 uStack_330;
  undefined8 local_328;
  undefined8 uStack_320;
  undefined8 local_318;
  undefined8 uStack_310;
  undefined8 ***local_308;
  undefined8 ***local_298;
  undefined *puStack_290;
  undefined8 ***local_288;
  undefined *puStack_280;
  undefined8 ***local_278;
  undefined *puStack_270;
  undefined8 ***local_268;
  undefined *puStack_260;
  undefined8 ***local_258;
  undefined *puStack_250;
  undefined8 ***local_248;
  undefined8 ***pppuStack_240;
  byte local_238;
  undefined1 local_230;
  undefined7 uStack_22f;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 uStack_218;
  undefined8 local_210;
  undefined8 uStack_208;
  undefined2 local_200;
  undefined1 local_1fe;
  undefined1 local_1f8;
  undefined7 uStack_1f7;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined8 uStack_1d0;
  undefined2 local_1c8;
  undefined1 local_1c6;
  undefined8 ***local_1c0;
  undefined *puStack_1b8;
  undefined8 ***local_1b0;
  undefined *puStack_1a8;
  undefined1 *local_1a0;
  undefined *local_198;
  undefined8 ***local_190;
  undefined *local_188;
  undefined8 ***local_180;
  undefined *local_178;
  undefined8 ***local_170;
  undefined *local_168;
  undefined8 ***local_160;
  undefined *local_158;
  undefined8 ***local_150;
  undefined *local_148;
  undefined8 ***local_140;
  undefined8 ***local_138;
  undefined1 local_130;
  undefined1 local_128;
  undefined7 uStack_127;
  undefined8 local_120;
  undefined8 local_118;
  undefined8 local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined2 local_f8;
  undefined1 local_f6;
  undefined4 local_f5;
  undefined1 local_f1;
  undefined1 local_f0;
  undefined7 uStack_ef;
  undefined8 local_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 local_d0;
  undefined8 local_c8;
  undefined2 local_c0;
  undefined1 local_be;
  undefined4 local_bd;
  undefined1 local_b9;
  undefined8 ***local_b8;
  undefined *local_b0;
  undefined8 ***local_a8;
  undefined *local_a0;
  undefined1 *local_98;
  undefined *local_90;
  undefined1 local_82;
  undefined4 local_81;
  undefined1 local_7d;
  undefined4 local_7c;
  undefined1 local_78;
  byte local_70;
  
  puVar6 = &DAT_100a8c0c8;
  FUN_100004bb4(&DAT_100a8c0c8,&DAT_100822220);
  lVar25 = *(long *)(puVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar25 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar7 = param_2;
  FUN_10003f030(param_2,uVar1);
  FUN_1003b8d80();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_3a0 + -extraout_x8,&DAT_1009b8df8,&DAT_1009b8df8,lVar7,uVar1,uVar2);
  if (unaff_x21 == 0) {
    local_190 = (undefined8 ***)((ulong)local_190 & 0xffffffffffffff00);
    ppppuVar8 = &local_190;
    puVar17 = puVar6;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_190._0_1_ = 1;
    ppppuVar9 = &local_190;
    puVar18 = puVar6;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_190._0_1_ = 2;
    ppppuVar10 = &local_190;
    puVar19 = puVar6;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_190._0_1_ = 3;
    ppppuVar11 = &local_190;
    puVar20 = puVar6;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_190._0_1_ = 4;
    ppppuVar12 = &local_190;
    puVar21 = puVar6;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_190._0_1_ = 5;
    ppppuVar13 = &local_190;
    __ss22KeyedDecodingContainerV6decode_6forKeys6UInt64VAFm_xtKF(ppppuVar13,puVar6);
    local_190._0_1_ = 6;
    ppppuVar14 = &local_190;
    puVar22 = puVar6;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySiSgSim_xtKF();
    local_70 = (byte)puVar22 & 1;
    local_298._0_1_ = 7;
    local_308 = ppppuVar14;
    FUN_1003bd7f4();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_190,&DAT_1009e6360,&local_298,puVar6,&DAT_1009e6360);
    local_338 = local_190._0_1_;
    uStack_337 = local_190._1_7_;
    uStack_330 = local_188;
    local_328 = local_180;
    uStack_320 = local_178;
    local_318 = local_170;
    uStack_310 = local_168;
    local_33c = (uint)(uint3)local_160;
    local_298 = (undefined8 ***)CONCAT71(local_298._1_7_,8);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_190,&DAT_1009e6360,&local_298,puVar6,&DAT_1009e6360,ppppuVar14);
    local_370 = local_190._0_1_;
    uStack_36f = local_190._1_7_;
    local_368 = local_180;
    local_350 = local_178;
    local_348 = local_188;
    local_360 = local_168;
    local_358 = local_170;
    local_374 = (uint)(uint3)local_160;
    local_190._0_1_ = 9;
    ppppuVar14 = &local_190;
    puVar22 = puVar6;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_190 = (undefined8 ***)CONCAT71(local_190._1_7_,10);
    ppppuVar15 = &local_190;
    puVar23 = puVar6;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_82 = 0xb;
    puVar16 = &local_82;
    puVar24 = puVar6;
    local_380 = ppppuVar15;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_390 = puVar24;
    local_388 = puVar16;
    (**(code **)(lVar25 + 8))(auStack_3a0 + -extraout_x8,puVar6);
    pppuStack_240 = local_308;
    local_398 = (uint)local_70;
    local_238 = local_70;
    local_230 = local_338;
    uStack_22f = uStack_337;
    uStack_228 = uStack_330;
    local_220 = local_328;
    uStack_218 = uStack_320;
    local_210 = local_318;
    uStack_208 = uStack_310;
    local_394 = local_33c >> 0x10;
    local_1fe = (undefined1)(local_33c >> 0x10);
    uVar4 = (undefined2)local_33c;
    local_1f8 = local_370;
    uStack_1f7 = uStack_36f;
    uStack_1f0 = local_348;
    local_1e8 = local_368;
    uStack_1e0 = local_350;
    local_1d8 = local_358;
    uStack_1d0 = local_360;
    uVar3 = (undefined1)(local_374 >> 0x10);
    uVar5 = (undefined2)local_374;
    local_1b0 = local_380;
    local_1a0 = local_388;
    local_198 = local_390;
    local_298 = ppppuVar8;
    puStack_290 = puVar17;
    local_288 = ppppuVar9;
    puStack_280 = puVar18;
    local_278 = ppppuVar10;
    puStack_270 = puVar19;
    local_268 = ppppuVar11;
    puStack_260 = puVar20;
    local_258 = ppppuVar12;
    puStack_250 = puVar21;
    local_248 = ppppuVar13;
    local_200 = uVar4;
    local_1c8 = uVar5;
    local_1c6 = uVar3;
    local_1c0 = ppppuVar14;
    puStack_1b8 = puVar22;
    puStack_1a8 = puVar23;
    FUN_1003bd834(&local_298,&local_190);
    FUN_10003f094(param_2);
    local_138 = local_308;
    local_130 = (undefined1)local_398;
    local_128 = local_338;
    uStack_127 = uStack_337;
    local_120 = uStack_330;
    local_118 = local_328;
    local_110 = uStack_320;
    local_108 = local_318;
    local_100 = uStack_310;
    local_f6 = (undefined1)local_394;
    local_f5 = local_7c;
    local_f1 = local_78;
    local_f0 = local_370;
    uStack_ef = uStack_36f;
    local_e8 = local_348;
    local_e0 = local_368;
    local_d8 = local_350;
    local_d0 = local_358;
    local_c8 = local_360;
    local_bd = local_81;
    local_b9 = local_7d;
    local_a8 = local_380;
    local_98 = local_388;
    local_90 = local_390;
    local_190 = ppppuVar8;
    local_188 = puVar17;
    local_180 = ppppuVar9;
    local_178 = puVar18;
    local_170 = ppppuVar10;
    local_168 = puVar19;
    local_160 = ppppuVar11;
    local_158 = puVar20;
    local_150 = ppppuVar12;
    local_148 = puVar21;
    local_140 = ppppuVar13;
    local_f8 = uVar4;
    local_c0 = uVar5;
    local_be = uVar3;
    local_b8 = ppppuVar14;
    local_b0 = puVar22;
    local_a0 = puVar23;
    FUN_1003bd868(&local_190);
    _memcpy(param_1,&local_298,0x108);
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

