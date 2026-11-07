// rea decompile_all
// name: FUN_1005dd9c4
// address: 0x1005dd9c4
// body: available
// range: 0x1005dd9c4-0x1005ddd17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001005ddb88) */
/* WARNING: Removing unreachable block (ram,0x0001005ddbf4) */
/* WARNING: Removing unreachable block (ram,0x0001005ddae0) */
/* WARNING: Removing unreachable block (ram,0x0001005ddae4) */

void FUN_1005dd9c4(undefined8 *param_1,long param_2)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long extraout_x8;
  long unaff_x21;
  long lVar11;
  undefined1 *local_200;
  undefined *local_1f8;
  undefined1 *local_1f0;
  uint local_1e4;
  undefined1 local_1e0;
  undefined7 uStack_1df;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  undefined1 uStack_1d0;
  undefined7 local_1cf;
  undefined1 uStack_1c8;
  undefined7 uStack_1c7;
  undefined1 uStack_1c0;
  undefined7 local_1bf;
  undefined1 uStack_1b8;
  undefined7 uStack_1b7;
  undefined1 uStack_1b0;
  undefined7 local_1af;
  undefined1 uStack_1a8;
  undefined7 uStack_1a7;
  undefined1 uStack_1a0;
  undefined7 uStack_19f;
  undefined1 *puStack_198;
  undefined1 *local_190;
  undefined *puStack_188;
  undefined1 *local_180;
  undefined *puStack_178;
  undefined1 local_170 [8];
  undefined1 uStack_168;
  undefined7 uStack_167;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 local_150;
  undefined7 uStack_14f;
  undefined1 uStack_148;
  undefined7 uStack_147;
  undefined1 uStack_140;
  undefined7 local_13f;
  undefined1 uStack_138;
  undefined7 uStack_137;
  undefined1 uStack_130;
  undefined7 uStack_12f;
  undefined1 *puStack_128;
  undefined1 *local_120;
  undefined *puStack_118;
  undefined1 *local_110;
  undefined *puStack_108;
  undefined1 local_fa;
  undefined1 local_f9;
  undefined1 local_f8 [64];
  undefined7 uStack_b8;
  undefined1 local_b1;
  undefined7 uStack_b0;
  undefined1 uStack_a9;
  undefined7 uStack_a8;
  undefined1 local_a1;
  undefined7 uStack_a0;
  undefined1 uStack_99;
  undefined7 uStack_98;
  undefined1 local_91;
  undefined7 uStack_90;
  undefined1 uStack_89;
  undefined7 uStack_88;
  undefined1 local_81;
  undefined7 uStack_80;
  undefined1 uStack_79;
  undefined7 uStack_78;
  
  puVar4 = &DAT_100aae270;
  FUN_100004bb4(&DAT_100aae270,&DAT_100840440);
  lVar11 = *(long *)(puVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar2 = *(undefined8 *)(param_2 + 0x18);
  uVar3 = *(undefined8 *)(param_2 + 0x20);
  lVar5 = param_2;
  FUN_10003f030(param_2,uVar2);
  FUN_1005dd7a0();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_200 - extraout_x8,&DAT_1009d9b48,&DAT_1009d9b48,lVar5,uVar2,uVar3);
  if (unaff_x21 == 0) {
    local_170[0] = 0;
    puVar6 = local_170;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2bm_xtKF(puVar6,puVar4);
    local_1e4 = (uint)puVar6;
    local_f9 = 1;
    FUN_1005df93c();
    __ss22KeyedDecodingContainerV15decodeIfPresent_6forKeyqd__Sgqd__m_xtKSeRd__lF
              (local_f8,&DAT_1009d9728,&local_f9,puVar4,&DAT_1009d9728,puVar6);
    uStack_a9 = (undefined1)local_f8._8_8_;
    uStack_a8 = SUB87(local_f8._8_8_,1);
    local_b1 = (undefined1)local_f8._0_8_;
    uStack_b0 = SUB87(local_f8._0_8_,1);
    uStack_99 = (undefined1)local_f8._24_8_;
    uStack_98 = SUB87(local_f8._24_8_,1);
    local_a1 = (undefined1)local_f8._16_8_;
    uStack_a0 = SUB87(local_f8._16_8_,1);
    uStack_89 = (undefined1)local_f8._40_8_;
    uStack_88 = SUB87(local_f8._40_8_,1);
    local_91 = (undefined1)local_f8._32_8_;
    uStack_90 = SUB87(local_f8._32_8_,1);
    uStack_79 = (undefined1)local_f8._56_8_;
    uStack_78 = SUB87(local_f8._56_8_,1);
    local_81 = (undefined1)local_f8._48_8_;
    uStack_80 = SUB87(local_f8._48_8_,1);
    local_170[0] = 2;
    puVar6 = local_170;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2im_xtKF(puVar6,puVar4);
    local_170[0] = 3;
    puVar7 = local_170;
    puVar9 = puVar4;
    local_1f0 = puVar6;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    local_fa = 4;
    puVar8 = &local_fa;
    puVar10 = puVar4;
    local_200 = puVar7;
    local_1f8 = puVar9;
    __ss22KeyedDecodingContainerV6decode_6forKeyS2Sm_xtKF();
    uVar1 = local_1e4 & 1;
    local_1e4 = uVar1;
    (**(code **)(lVar11 + 8))((long)&local_200 - extraout_x8,puVar4);
    puVar7 = local_1f0;
    puVar4 = local_1f8;
    puVar6 = local_200;
    local_1e0 = (undefined1)uVar1;
    uStack_1c7 = uStack_a0;
    uStack_1c0 = uStack_99;
    local_1cf = uStack_a8;
    uStack_1c8 = local_a1;
    uStack_1b7 = uStack_90;
    uStack_1b0 = uStack_89;
    local_1bf = uStack_98;
    uStack_1b8 = local_91;
    uStack_1a7 = uStack_80;
    local_1af = uStack_88;
    uStack_1a8 = local_81;
    uStack_1d7 = uStack_b0;
    uStack_1d0 = uStack_a9;
    uStack_1df = uStack_b8;
    uStack_1d8 = local_b1;
    uStack_1a0 = uStack_79;
    uStack_19f = uStack_78;
    puStack_198 = local_1f0;
    local_190 = local_200;
    puStack_188 = local_1f8;
    local_180 = puVar8;
    puStack_178 = puVar10;
    FUN_1005df97c(&local_1e0,local_170);
    FUN_10003f094(param_2);
    local_170[0] = (undefined1)local_1e4;
    uStack_157 = uStack_a0;
    local_150 = uStack_99;
    uStack_15f = uStack_a8;
    uStack_158 = local_a1;
    uStack_147 = uStack_90;
    uStack_140 = uStack_89;
    uStack_14f = uStack_98;
    uStack_148 = local_91;
    uStack_137 = uStack_80;
    local_13f = uStack_88;
    uStack_138 = local_81;
    uStack_167 = uStack_b0;
    uStack_160 = uStack_a9;
    uStack_168 = local_b1;
    uStack_130 = uStack_79;
    uStack_12f = uStack_78;
    puStack_128 = puVar7;
    local_120 = puVar6;
    puStack_118 = puVar4;
    local_110 = puVar8;
    puStack_108 = puVar10;
    FUN_1005df9b0(local_170);
    param_1[9] = puStack_198;
    param_1[8] = CONCAT71(uStack_19f,uStack_1a0);
    param_1[0xb] = puStack_188;
    param_1[10] = local_190;
    param_1[0xd] = puStack_178;
    param_1[0xc] = local_180;
    param_1[1] = CONCAT71(uStack_1d7,uStack_1d8);
    *param_1 = CONCAT71(uStack_1df,local_1e0);
    param_1[3] = CONCAT71(uStack_1c7,uStack_1c8);
    param_1[2] = CONCAT71(local_1cf,uStack_1d0);
    param_1[5] = CONCAT71(uStack_1b7,uStack_1b8);
    param_1[4] = CONCAT71(local_1bf,uStack_1c0);
    param_1[7] = CONCAT71(uStack_1a7,uStack_1a8);
    param_1[6] = CONCAT71(local_1af,uStack_1b0);
  }
  else {
    FUN_10003f094(param_2);
  }
  return;
}

