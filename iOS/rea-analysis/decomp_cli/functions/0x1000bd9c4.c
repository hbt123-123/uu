// rea decompile_all
// name: FUN_1000bd9c4
// address: 0x1000bd9c4
// body: available
// range: 0x1000bd9c4-0x1000be237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000bdd04) */
/* WARNING: Removing unreachable block (ram,0x0001000bdc80) */
/* WARNING: Removing unreachable block (ram,0x0001000bdd78) */
/* WARNING: Removing unreachable block (ram,0x0001000bdaec) */
/* WARNING: Removing unreachable block (ram,0x0001000be024) */
/* WARNING: Removing unreachable block (ram,0x0001000bdf34) */
/* WARNING: Removing unreachable block (ram,0x0001000bde8c) */
/* WARNING: Removing unreachable block (ram,0x0001000bdfb0) */
/* WARNING: Removing unreachable block (ram,0x0001000be064) */
/* WARNING: Removing unreachable block (ram,0x0001000be074) */
/* WARNING: Removing unreachable block (ram,0x0001000bdde8) */

void FUN_1000bd9c4(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  byte bVar7;
  undefined *puVar8;
  undefined *puVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  undefined *puVar13;
  undefined1 *puVar14;
  long lVar15;
  long unaff_x21;
  long lVar16;
  undefined1 auStack_280 [8];
  byte *local_278;
  undefined1 *local_270;
  undefined *puStack_268;
  byte *local_260;
  uint local_254;
  undefined8 local_250;
  undefined8 local_248;
  byte *local_240;
  undefined *local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined *local_220;
  undefined8 local_218;
  undefined8 local_210;
  uint local_208;
  uint local_204;
  uint local_200;
  uint local_1fc;
  undefined *local_1f8;
  undefined8 local_1f0;
  long local_1e8;
  undefined8 local_1e0;
  undefined *local_1d8;
  byte local_1d0;
  undefined1 uStack_1cf;
  undefined6 uStack_1ce;
  byte *pbStack_1c8;
  undefined *puStack_1c0;
  undefined1 local_1b8;
  undefined1 local_1b7;
  undefined1 local_1b6;
  undefined5 uStack_1b5;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  byte *local_190;
  undefined *puStack_188;
  byte *local_180;
  undefined *puStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined1 local_150;
  undefined7 uStack_14f;
  byte *pbStack_148;
  undefined *puStack_140;
  undefined1 *local_138;
  undefined *local_130;
  byte local_128;
  undefined1 uStack_127;
  undefined4 uStack_126;
  undefined2 uStack_122;
  byte *local_120;
  undefined *local_118;
  undefined1 local_110;
  undefined1 local_10f;
  undefined1 local_10e;
  undefined4 local_10d;
  undefined1 local_109;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 local_f0;
  byte *pbStack_e8;
  undefined *local_e0;
  byte *pbStack_d8;
  undefined *local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined4 uStack_a7;
  byte *local_a0;
  undefined *puStack_98;
  undefined1 *local_90;
  undefined *puStack_88;
  undefined1 local_7b;
  undefined4 uStack_7a;
  undefined4 local_73;
  undefined1 local_6f;
  undefined4 local_6e;
  undefined2 local_6a;
  
  puVar8 = &DAT_1001052c0;
  FUN_10000eb08(&DAT_1001052c0,&DAT_1000d8288);
  lVar16 = *(long *)(puVar8 + -8);
  lVar15 = *(long *)(lVar16 + 0x40);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  local_1e8 = param_2;
  FUN_10000eba0(param_2,uVar2);
  FUN_1000bd330();
  puVar9 = &DAT_1000fbc30;
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_280 + -(lVar15 + 0xfU & 0xfffffffffffffff0),&DAT_1000fbc30,&DAT_1000fbc30,
             param_2,uVar2,uVar3);
  if (unaff_x21 == 0) {
    local_1d0 = 0;
    FUN_1000c0198();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_128,&DAT_1000fba80,&local_1d0,puVar8,&DAT_1000fba80,puVar9);
    bVar7 = local_128;
    local_128 = 1;
    pbVar10 = &local_128;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(pbVar10,puVar8);
    local_128 = 2;
    pbVar11 = &local_128;
    puVar9 = puVar8;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_128 = 3;
    pbVar12 = &local_128;
    local_1f8 = puVar9;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(pbVar12,puVar8);
    local_1fc = (uint)pbVar12;
    local_128 = 4;
    pbVar12 = &local_128;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(pbVar12,puVar8);
    local_204 = (uint)pbVar12;
    local_200 = (uint)pbVar10;
    local_1d0 = 5;
    FUN_1000c01d8();
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_128,&DAT_1000fbb10,&local_1d0,puVar8,&DAT_1000fbb10,pbVar12);
    local_208 = (uint)local_128;
    puVar9 = &DAT_100105238;
    FUN_10000eb08(&DAT_100105238,&BYTE_1000d6eb0);
    local_1d0 = 6;
    puVar13 = puVar9;
    FUN_1000c0218();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_128,puVar9,&local_1d0,puVar8,puVar9,puVar13);
    local_210 = CONCAT26(uStack_122,CONCAT42(uStack_126,CONCAT11(uStack_127,local_128)));
    local_1d0 = 7;
    FUN_1000c0288();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_128,&DAT_1000fb958,&local_1d0,puVar8,&DAT_1000fb958,puVar9);
    local_230 = CONCAT26(uStack_122,CONCAT42(uStack_126,CONCAT11(uStack_127,local_128)));
    uStack_228 = local_120;
    local_218 = local_118;
    local_128 = 8;
    pbVar10 = &local_128;
    puVar9 = puVar8;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_128 = 9;
    pbVar12 = &local_128;
    puVar13 = puVar8;
    local_240 = pbVar11;
    local_220 = puVar9;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    puVar9 = &DAT_100105198;
    local_238 = puVar13;
    FUN_10000eb08(&DAT_100105198,&BYTE_1000d6e48);
    local_1d0 = 10;
    puVar13 = &DAT_1001052e8;
    FUN_1000c02c8(&DAT_1001052e8,PTR___sSSSesWP_1000f0318,PTR___sSayxGSesSeRzlMc_1000f0388);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_128,puVar9,&local_1d0,puVar8,puVar9,puVar13);
    local_248 = CONCAT26(uStack_122,CONCAT42(uStack_126,CONCAT11(uStack_127,local_128)));
    puVar9 = &DAT_100105250;
    FUN_10000eb08(&DAT_100105250,&BYTE_1000d6eb8);
    local_1d0 = 0xb;
    puVar13 = &DAT_1001052f0;
    FUN_1000c0330(&DAT_1001052f0,PTR___sSSSesWP_1000f0318,PTR___sSDyxq_GSesSeRzSeR_rlMc_1000f02e8);
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_128,puVar9,&local_1d0,puVar8,puVar9,puVar13);
    local_250 = CONCAT26(uStack_122,CONCAT42(uStack_126,CONCAT11(uStack_127,local_128)));
    local_1d0 = 0xc;
    FUN_1000c0398();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (&local_128,&DAT_1000fbba0,&local_1d0,puVar8,&DAT_1000fbba0,puVar9);
    local_1f0 = CONCAT26(uStack_122,CONCAT42(uStack_126,CONCAT11(uStack_127,local_128)));
    local_1e0 = local_120;
    local_254 = (uint)(byte)local_118;
    local_128 = 0xd;
    pbVar11 = &local_128;
    puVar9 = puVar8;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_7b = 0xe;
    puVar14 = &local_7b;
    puVar13 = puVar8;
    local_260 = pbVar11;
    local_1d8 = puVar9;
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeySSSgSSm_xtKF();
    local_200 = local_200 & 1;
    uVar1 = local_1fc & 1;
    local_204 = local_204 & 1;
    local_270 = puVar14;
    puStack_268 = puVar13;
    local_1fc = uVar1;
    (**(code **)(lVar16 + 8))(auStack_280 + -(lVar15 + 0xfU & 0xfffffffffffffff0),puVar8);
    uVar2 = local_1f0;
    puVar8 = local_1f8;
    local_1d0 = bVar7;
    uVar4 = (undefined1)local_200;
    pbStack_1c8 = local_240;
    puStack_1c0 = local_1f8;
    local_1b8 = (undefined1)uVar1;
    uVar5 = (undefined1)local_204;
    uVar6 = (undefined1)local_208;
    local_1b0 = local_210;
    uStack_1a8 = local_230;
    local_1a0 = uStack_228;
    uStack_198 = local_218;
    puStack_188 = local_220;
    puStack_178 = local_238;
    local_170 = local_248;
    uStack_168 = local_250;
    local_160 = local_1f0;
    uStack_158 = local_1e0;
    local_150 = (undefined1)local_254;
    pbStack_148 = local_260;
    puStack_140 = local_1d8;
    local_138 = local_270;
    local_130 = puStack_268;
    local_278 = pbVar12;
    uStack_1cf = uVar4;
    local_1b7 = uVar5;
    local_1b6 = uVar6;
    local_190 = pbVar10;
    local_180 = pbVar12;
    FUN_1000bbe94(&local_1d0,&local_128);
    FUN_100001428(local_1e8);
    uStack_126 = local_6e;
    uStack_122 = local_6a;
    local_120 = local_240;
    local_118 = puVar8;
    local_110 = (undefined1)local_1fc;
    local_10d = local_73;
    local_109 = local_6f;
    local_108 = local_210;
    uStack_100 = local_230;
    local_f8 = uStack_228;
    local_f0 = local_218;
    local_e0 = local_220;
    pbStack_d8 = local_278;
    local_d0 = local_238;
    uStack_c8 = local_248;
    local_c0 = local_250;
    uStack_b8 = uVar2;
    local_b0 = local_1e0;
    local_a8 = (undefined1)local_254;
    uStack_a7 = uStack_7a;
    local_a0 = local_260;
    puStack_98 = local_1d8;
    local_90 = local_270;
    puStack_88 = puStack_268;
    uStack_127 = uVar4;
    local_10f = uVar5;
    local_10e = uVar6;
    pbStack_e8 = pbVar10;
    FUN_1000bbea4(&local_128);
    param_1[0x11] = pbStack_148;
    param_1[0x10] = CONCAT71(uStack_14f,local_150);
    param_1[0x13] = local_138;
    param_1[0x12] = puStack_140;
    param_1[0x14] = local_130;
    param_1[9] = puStack_188;
    param_1[8] = local_190;
    param_1[0xb] = puStack_178;
    param_1[10] = local_180;
    param_1[0xd] = uStack_168;
    param_1[0xc] = local_170;
    param_1[0xf] = uStack_158;
    param_1[0xe] = local_160;
    param_1[1] = pbStack_1c8;
    *param_1 = CONCAT62(uStack_1ce,CONCAT11(uStack_1cf,local_1d0));
    param_1[3] = CONCAT53(uStack_1b5,CONCAT12(local_1b6,CONCAT11(local_1b7,local_1b8)));
    param_1[2] = puStack_1c0;
    param_1[5] = uStack_1a8;
    param_1[4] = local_1b0;
    param_1[7] = uStack_198;
    param_1[6] = local_1a0;
  }
  else {
    local_1d8 = (undefined *)0x0;
    local_1e0 = 0;
    local_1f0 = 0;
    FUN_100001428(local_1e8);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(0);
    _swift_bridgeObjectRelease(0);
    FUN_1000bd300(local_1f0,local_1e0,0xff);
    _swift_bridgeObjectRelease(local_1d8);
  }
  return;
}

