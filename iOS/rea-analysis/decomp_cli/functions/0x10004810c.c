// rea decompile_all
// name: FUN_10004810c
// address: 0x10004810c
// body: available
// range: 0x10004810c-0x1000487e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100048604) */
/* WARNING: Removing unreachable block (ram,0x00010004852c) */
/* WARNING: Removing unreachable block (ram,0x000100048618) */
/* WARNING: Removing unreachable block (ram,0x00010004866c) */
/* WARNING: Removing unreachable block (ram,0x0001000483a0) */

void FUN_10004810c(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  undefined8 uVar16;
  undefined *puVar17;
  undefined *puVar18;
  undefined8 uVar19;
  long lVar20;
  undefined8 *puVar21;
  long extraout_x8;
  long unaff_x21;
  uint uVar22;
  long lVar23;
  undefined *local_320;
  uint local_314;
  undefined8 *local_310;
  undefined *local_308;
  undefined8 local_298;
  undefined8 uStack_290;
  undefined1 local_288;
  undefined1 uStack_287;
  undefined6 uStack_286;
  undefined2 uStack_280;
  undefined6 uStack_27e;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined1 uStack_260;
  undefined1 uStack_25f;
  undefined6 uStack_25e;
  undefined2 local_258;
  undefined6 uStack_256;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  byte local_238;
  undefined7 uStack_237;
  undefined1 uStack_230;
  undefined7 uStack_22f;
  undefined1 uStack_228;
  undefined7 uStack_227;
  undefined1 local_220;
  undefined1 local_219;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 local_208;
  undefined1 local_201;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined1 local_1f0;
  undefined1 local_1ef;
  undefined6 local_1ee;
  undefined2 uStack_1e8;
  undefined6 uStack_1e6;
  undefined8 uStack_1e0;
  undefined1 local_1d1;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined1 local_1c0;
  undefined1 local_1bf;
  undefined6 local_1be;
  undefined2 uStack_1b8;
  undefined6 uStack_1b6;
  undefined8 uStack_1b0;
  undefined8 local_1a8;
  undefined8 uStack_1a0;
  byte local_198;
  byte local_197;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  byte local_148;
  undefined8 local_140;
  undefined8 uStack_138;
  byte local_130;
  byte local_128;
  byte local_120;
  undefined6 local_118;
  undefined2 uStack_112;
  undefined6 uStack_110;
  undefined6 local_108;
  undefined2 uStack_102;
  undefined6 uStack_100;
  undefined1 auStack_f8 [72];
  undefined1 auStack_b0 [80];
  
  puVar17 = &DAT_100103720;
  local_310 = param_1;
  FUN_10000eb08(&DAT_100103720,&DAT_1000d2720);
  lVar23 = *(long *)(puVar17 + -8);
  local_308 = puVar17;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar23 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100060260();
  uVar2 = *puVar17;
  puVar18 = puVar17;
  FUN_100041830();
  uVar19 = 0;
  FUN_10006b084(&local_1a8,0,0xe000000000000000,uVar2,&DAT_1000f5e28,puVar18);
  uVar16 = uStack_188;
  bVar15 = local_197;
  bVar12 = local_198;
  uVar8 = uStack_1a0;
  uVar4 = local_1a8;
  uVar2 = *puVar17;
  FUN_10002f0ec();
  FUN_10006b084(&local_1a8,0,0xe000000000000000,uVar2,&DAT_1000f31f0,uVar19);
  bVar13 = local_198;
  uVar9 = uStack_1a0;
  uVar5 = local_1a8;
  FUN_10005fe24(auStack_b0,0xd000000000000014,0x80000001000c6c10);
  puVar17 = PTR___sSSN_1000f02f8;
  FUN_10005cdf0(&local_1a8,auStack_b0,0,0,0xff,PTR___sSSN_1000f02f8,&PTR_PTR_1000f88f0);
  bVar14 = local_198;
  uVar10 = uStack_1a0;
  uVar6 = local_1a8;
  local_120 = local_198;
  FUN_10005fe24(auStack_f8,0xd000000000000010,0x80000001000c6c30);
  FUN_10005cdf0(&local_1a8,auStack_f8,0,0,0xff,puVar17,&PTR_PTR_1000f88f0);
  uVar11 = uStack_1a0;
  uVar7 = local_1a8;
  uVar22 = (uint)local_198;
  local_128 = local_198;
  uVar19 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  lVar20 = param_2;
  FUN_10000eba0(param_2,uVar19);
  FUN_100049090();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_320 - extraout_x8,&DAT_1000f63d0,&DAT_1000f63d0,lVar20,uVar19,uVar1);
  if (unaff_x21 == 0) {
    puVar17 = &DAT_100103650;
    local_314 = uVar22;
    FUN_10000eb08(&DAT_100103650,&DAT_1000d2298);
    local_1d1 = 0;
    puVar18 = &DAT_100103658;
    FUN_10002cf3c(&DAT_100103658,&DAT_100103650,&DAT_1000d2298,
                  &TargetProtocolConformanceDescriptor_1000d4650);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_1d0,puVar17,&local_1d1,local_308,puVar17,puVar18);
    FUN_100044b38(uVar4,uVar8,bVar12,bVar15 & 1,FUN_10002d0ec);
    _swift_bridgeObjectRelease(uVar16);
    local_108 = local_1be;
    uStack_102 = uStack_1b8;
    uStack_100 = uStack_1b6;
    puVar17 = &DAT_100103000;
    FUN_10000eb08(&DAT_100103000,&DAT_1000d2700);
    puVar18 = local_308;
    local_201 = 1;
    puVar21 = &DAT_100103030;
    FUN_10002cf3c(&DAT_100103030,&DAT_100103000,&DAT_1000d2700,
                  &TargetProtocolConformanceDescriptor_1000d4650);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_200,puVar17,&local_201,puVar18,puVar17,puVar21);
    FUN_100044b38(uVar5,uVar9,bVar13,local_197 & 1,FUN_10002c9fc);
    _swift_bridgeObjectRelease(uStack_188);
    local_118 = local_1ee;
    uStack_112 = uStack_1e8;
    uStack_110 = uStack_1e6;
    puVar17 = &DAT_1001031b8;
    FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
    puVar3 = local_308;
    local_298 = CONCAT71(local_298._1_7_,2);
    puVar18 = &DAT_1001031e0;
    FUN_10002cf3c(&DAT_1001031e0,&DAT_1001031b8,&DAT_1000d31f0,
                  &TargetProtocolConformanceDescriptor_1000d3a00);
    local_320 = puVar18;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_1a8,puVar17,&local_298,puVar3,puVar17);
    FUN_10002d0ec(uVar6,uVar10,bVar14);
    uVar1 = uStack_1a0;
    uVar19 = local_1a8;
    local_120 = local_198;
    local_219 = 3;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_218,puVar17,&local_219,puVar3,puVar17,local_320);
    (**(code **)(lVar23 + 8))((long)&local_320 - extraout_x8,local_308);
    FUN_10002d0ec(uVar7,uVar11,local_314);
    bVar12 = local_120;
    local_128 = local_208;
    local_298 = local_1d0;
    uStack_290 = uStack_1c8;
    local_288 = local_1c0;
    uStack_287 = local_1bf;
    uStack_286 = local_108;
    uStack_280 = uStack_102;
    uStack_27e = uStack_100;
    local_278 = uStack_1b0;
    uStack_270 = local_200;
    local_268 = uStack_1f8;
    uStack_260 = local_1f0;
    uStack_25f = local_1ef;
    uStack_256 = uStack_110;
    uStack_250 = uStack_1e0;
    uStack_25e = local_118;
    local_258 = uStack_112;
    local_248 = local_1a8;
    uStack_240 = uStack_1a0;
    local_238 = local_120;
    uStack_230 = (undefined1)local_218;
    uStack_22f = (undefined7)((ulong)local_218 >> 8);
    uStack_228 = (undefined1)uStack_210;
    uStack_227 = (undefined7)((ulong)uStack_210 >> 8);
    local_220 = local_208;
    FUN_1000490fc(&local_298,&local_1a8);
    FUN_100001428(param_2);
    local_1a8 = local_1d0;
    uStack_1a0 = uStack_1c8;
    local_198 = local_1c0;
    uStack_188 = uStack_1b0;
    local_180 = local_200;
    uStack_178 = uStack_1f8;
    uStack_160 = uStack_1e0;
    local_158 = uVar19;
    uStack_150 = uVar1;
    local_148 = bVar12;
    local_140 = local_218;
    uStack_138 = uStack_210;
    local_130 = local_208;
    FUN_1000490d0(&local_1a8);
    local_310[9] = uStack_250;
    local_310[8] = CONCAT62(uStack_256,local_258);
    local_310[0xb] = uStack_240;
    local_310[10] = local_248;
    local_310[0xd] = CONCAT71(uStack_22f,uStack_230);
    local_310[0xc] = CONCAT71(uStack_237,local_238);
    *(ulong *)((long)local_310 + 0x71) = CONCAT17(local_220,uStack_227);
    *(ulong *)((long)local_310 + 0x69) = CONCAT17(uStack_228,uStack_22f);
    local_310[1] = uStack_290;
    *local_310 = local_298;
    local_310[3] = CONCAT62(uStack_27e,uStack_280);
    local_310[2] = CONCAT62(uStack_286,CONCAT11(uStack_287,local_288));
    local_310[5] = uStack_270;
    local_310[4] = local_278;
    local_310[7] = CONCAT62(uStack_25e,CONCAT11(uStack_25f,uStack_260));
    local_310[6] = local_268;
  }
  else {
    FUN_100001428(param_2);
    local_180 = uVar5;
    uStack_178 = uVar9;
    local_148 = local_120;
    local_140 = uVar7;
    uStack_138 = uVar11;
    local_130 = local_128;
    FUN_1000490d0(&local_1a8);
  }
  return;
}

