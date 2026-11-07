// rea decompile_all
// name: FUN_100047854
// address: 0x100047854
// body: available
// range: 0x100047854-0x100047e1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100047cbc) */
/* WARNING: Removing unreachable block (ram,0x000100047cc0) */
/* WARNING: Removing unreachable block (ram,0x000100047a8c) */

void FUN_100047854(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  byte bVar5;
  byte bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long unaff_x21;
  long lVar12;
  undefined1 auStack_290 [12];
  uint local_284;
  long local_280;
  undefined8 *local_278;
  undefined *local_270;
  undefined8 local_268;
  undefined8 local_260;
  undefined8 local_258;
  uint local_24c;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 local_238;
  undefined8 local_230;
  undefined8 uStack_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined1 local_208;
  undefined1 uStack_207;
  undefined6 uStack_206;
  undefined2 uStack_200;
  undefined6 uStack_1fe;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined8 local_1e8;
  undefined1 uStack_1e0;
  undefined1 uStack_1df;
  undefined6 uStack_1de;
  undefined2 local_1d8;
  undefined6 uStack_1d6;
  undefined8 uStack_1d0;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  byte local_1b8;
  undefined1 local_1b1;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  byte local_1a0;
  undefined1 local_199;
  undefined8 local_198;
  undefined8 uStack_190;
  byte local_188;
  undefined1 local_187;
  undefined6 local_186;
  undefined2 uStack_180;
  undefined6 uStack_17e;
  undefined8 uStack_178;
  undefined1 local_169;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined1 local_158;
  undefined1 local_157;
  undefined6 local_156;
  undefined2 uStack_150;
  undefined6 uStack_14e;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  byte local_130;
  byte local_12f;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined1 local_108;
  undefined1 local_107;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  byte local_e0;
  byte local_d8;
  undefined6 local_d0;
  undefined2 uStack_ca;
  undefined6 uStack_c8;
  undefined6 local_c0;
  undefined2 uStack_ba;
  undefined6 uStack_b8;
  undefined1 auStack_b0 [80];
  
  puVar7 = &DAT_100103730;
  local_278 = param_1;
  FUN_10000eb08(&DAT_100103730,&DAT_1000d2728);
  lVar12 = *(long *)(puVar7 + -8);
  local_270 = puVar7;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100060260();
  uVar2 = *puVar7;
  puVar8 = puVar7;
  FUN_100041830();
  uVar9 = 0;
  FUN_10006b084(&local_140,0,0xe000000000000000,uVar2,&DAT_1000f5e28,puVar8);
  bVar6 = local_12f;
  bVar5 = local_130;
  local_230 = local_140;
  uStack_228 = uStack_138;
  local_220 = uStack_120;
  uVar2 = *puVar7;
  FUN_10002f0ec();
  FUN_10006b084(&local_140,0,0xe000000000000000,uVar2,&DAT_1000f31f0,uVar9);
  local_248 = uStack_138;
  local_240 = local_140;
  local_24c = (uint)local_130;
  local_258._0_4_ = (uint)local_12f;
  local_238 = uStack_120;
  FUN_10005fe24(auStack_b0,0x206e6f6973736553,0xec000000656d616e);
  FUN_10005cdf0(&local_140,auStack_b0,0,0,0xff,PTR___sSSN_1000f02f8,&PTR_PTR_1000f88f0);
  local_268 = local_140;
  local_260 = uStack_138;
  local_d8 = local_130;
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  lVar10 = param_2;
  FUN_10000eba0(param_2,uVar9);
  FUN_100049130();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_290 + -extraout_x8,&DAT_1000f6340,&DAT_1000f6340,lVar10,uVar9,uVar1);
  uStack_f8 = local_238;
  local_118 = local_240;
  uStack_110 = local_248;
  if (unaff_x21 == 0) {
    puVar7 = &DAT_100103650;
    local_284 = (uint)local_130;
    local_280 = lVar12;
    FUN_10000eb08(&DAT_100103650,&DAT_1000d2298);
    local_169 = 0;
    puVar8 = &DAT_100103658;
    FUN_10002cf3c(&DAT_100103658,&DAT_100103650,&DAT_1000d2298,
                  &TargetProtocolConformanceDescriptor_1000d4650);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_168,puVar7,&local_169,local_270,puVar7,puVar8);
    FUN_100044b38(local_230,uStack_228,bVar5,bVar6 & 1,FUN_10002d0ec);
    _swift_bridgeObjectRelease(local_220);
    local_230 = local_168;
    uStack_228 = uStack_160;
    local_c0 = local_156;
    local_220 = uStack_148;
    uStack_ba = uStack_150;
    uStack_b8 = uStack_14e;
    puVar7 = &DAT_100103000;
    FUN_10000eb08(&DAT_100103000,&DAT_1000d2700);
    puVar8 = local_270;
    local_199 = 1;
    puVar11 = &DAT_100103030;
    FUN_10002cf3c(&DAT_100103030,&DAT_100103000,&DAT_1000d2700,
                  &TargetProtocolConformanceDescriptor_1000d4650);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_198,puVar7,&local_199,puVar8,puVar7,puVar11);
    FUN_100044b38(local_240,local_248,local_24c,(uint)local_258 & 1,FUN_10002c9fc);
    _swift_bridgeObjectRelease(local_238);
    local_248 = uStack_190;
    local_240 = local_198;
    local_24c = (uint)local_188;
    local_d0 = local_186;
    local_238 = uStack_178;
    uStack_ca = uStack_180;
    uStack_c8 = uStack_17e;
    puVar7 = &DAT_1001031b8;
    FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
    puVar3 = local_270;
    local_1b1 = 2;
    puVar8 = &DAT_1001031e0;
    FUN_10002cf3c(&DAT_1001031e0,&DAT_1001031b8,&DAT_1000d31f0,
                  &TargetProtocolConformanceDescriptor_1000d3a00);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_1b0,puVar7,&local_1b1,puVar3,puVar7,puVar8);
    (**(code **)(local_280 + 8))(auStack_290 + -extraout_x8,puVar3);
    FUN_10002d0ec(local_268,local_260,local_284);
    uVar4 = local_220;
    uVar1 = uStack_228;
    uVar9 = local_230;
    local_260 = uStack_1a8;
    local_258 = local_1b0;
    local_d8 = local_1a0;
    local_218 = local_230;
    uStack_210 = uStack_228;
    local_208 = local_158;
    uStack_207 = local_157;
    uStack_206 = local_c0;
    uStack_200 = uStack_ba;
    uStack_1fe = uStack_b8;
    local_1f8 = local_220;
    uStack_1f0 = local_240;
    local_1e8 = local_248;
    uStack_1e0 = (undefined1)local_24c;
    uStack_1df = local_187;
    uStack_1d6 = uStack_c8;
    uStack_1de = local_d0;
    local_1d8 = uStack_ca;
    uStack_1d0 = local_238;
    local_1c8 = local_1b0;
    uStack_1c0 = uStack_1a8;
    local_268 = CONCAT44(local_268._4_4_,(uint)local_1a0);
    local_1b8 = local_1a0;
    FUN_10004919c(&local_218,&local_140);
    FUN_100001428(param_2);
    local_140 = uVar9;
    uStack_138 = uVar1;
    local_12f = local_157;
    uStack_120 = uVar4;
    local_118 = local_240;
    uStack_110 = local_248;
    local_108 = (undefined1)local_24c;
    local_107 = local_187;
    uStack_f8 = local_238;
    local_f0 = local_258;
    uStack_e8 = local_260;
    local_e0 = (byte)local_268;
    FUN_100049170(&local_140);
    local_278[9] = uStack_1d0;
    local_278[8] = CONCAT62(uStack_1d6,local_1d8);
    local_278[0xb] = uStack_1c0;
    local_278[10] = local_1c8;
    *(byte *)(local_278 + 0xc) = local_1b8;
    local_278[1] = uStack_210;
    *local_278 = local_218;
    local_278[3] = CONCAT62(uStack_1fe,uStack_200);
    local_278[2] = CONCAT62(uStack_206,CONCAT11(uStack_207,local_208));
    local_278[5] = uStack_1f0;
    local_278[4] = local_1f8;
    local_278[7] = CONCAT62(uStack_1de,CONCAT11(uStack_1df,uStack_1e0));
    local_278[6] = local_1e8;
  }
  else {
    FUN_100001428(param_2);
    local_140 = local_230;
    uStack_138 = uStack_228;
    uStack_120 = local_220;
    local_108 = (undefined1)local_24c;
    local_107 = (undefined1)(uint)local_258;
    local_f0 = local_268;
    uStack_e8 = local_260;
    local_e0 = local_d8;
    FUN_100049170(&local_140);
  }
  return;
}

