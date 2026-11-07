// rea decompile_all
// name: FUN_10003eb20
// address: 0x10003eb20
// body: available
// range: 0x10003eb20-0x10003f1a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010003ef98) */
/* WARNING: Removing unreachable block (ram,0x00010003eef8) */
/* WARNING: Removing unreachable block (ram,0x00010003f03c) */
/* WARNING: Removing unreachable block (ram,0x00010003edd0) */

void FUN_10003eb20(ulong *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  byte bVar11;
  ulong uVar12;
  byte bVar13;
  undefined *puVar14;
  undefined8 uVar15;
  undefined1 *puVar16;
  undefined1 *puVar17;
  long lVar18;
  undefined *puVar19;
  undefined8 *puVar20;
  uint uVar21;
  long extraout_x8;
  long unaff_x21;
  uint uVar22;
  uint local_300;
  uint local_2fc;
  ulong *local_2f8;
  long local_2f0;
  undefined *local_2e8;
  ulong local_280;
  ulong uStack_278;
  byte local_270;
  undefined7 uStack_26f;
  ulong local_268;
  ulong local_260;
  byte bStack_258;
  undefined7 uStack_257;
  ulong local_250;
  ulong local_248;
  byte local_240;
  undefined7 uStack_23f;
  ulong uStack_238;
  ulong uStack_230;
  undefined1 local_228;
  undefined1 local_227;
  undefined6 local_226;
  undefined2 uStack_220;
  undefined6 uStack_21e;
  ulong uStack_218;
  undefined1 local_209;
  ulong local_208;
  ulong uStack_200;
  undefined1 local_1f8;
  undefined1 local_1f7;
  undefined6 local_1f6;
  undefined2 uStack_1f0;
  undefined6 uStack_1ee;
  ulong uStack_1e8;
  ulong local_1e0;
  ulong uStack_1d8;
  byte local_1d0;
  byte local_1cf;
  undefined2 uStack_1ce;
  undefined4 uStack_1cc;
  undefined2 uStack_1c8;
  undefined6 uStack_1c6;
  ulong uStack_1c0;
  byte local_1b8;
  undefined1 *local_1b0;
  ulong uStack_1a8;
  byte local_1a0;
  ulong local_198;
  ulong uStack_190;
  ulong uStack_178;
  byte local_158;
  byte local_150;
  undefined4 local_14f;
  undefined1 uStack_14c;
  undefined3 uStack_14b;
  byte local_148;
  undefined1 auStack_140 [72];
  undefined1 auStack_f8 [72];
  undefined1 auStack_b0 [80];
  
  puVar14 = &DAT_100103518;
  local_2f8 = param_1;
  FUN_10000eb08(&DAT_100103518,&DAT_1000d1ba0);
  local_2f0 = *(long *)(puVar14 + -8);
  local_2e8 = puVar14;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(local_2f0 + 0x40) + 0xfU & 0xfffffffffffffff0)
  ;
  FUN_10005fe24(auStack_b0,0x4920747369737341,0xe900000000000044);
  puVar14 = PTR___sSSN_1000f02f8;
  FUN_10005cdf0(&local_1e0,auStack_b0,0,0,0xff,PTR___sSSN_1000f02f8,&PTR_PTR_1000f88f0);
  bVar10 = local_1d0;
  uVar7 = uStack_1d8;
  uVar4 = local_1e0;
  local_148 = local_1d0;
  FUN_10005fe24(auStack_f8,0xd000000000000038,0x80000001000c6300);
  FUN_10005cdf0(&local_1e0,auStack_f8,0,0,0xff,puVar14,&PTR_PTR_1000f88f0);
  uVar8 = uStack_1d8;
  uVar5 = local_1e0;
  uVar22 = (uint)local_1d0;
  local_150 = local_1d0;
  uVar15 = 0x6474732d65646f63;
  FUN_100065ca0(0x6474732d65646f63,0xea00000000006e69,0);
  FUN_10005fe24(auStack_140,0xd000000000000057,0x80000001000c6340);
  uVar21 = (uint)auStack_140;
  puVar16 = (undefined1 *)0x0;
  FUN_100061924();
  local_158 = (byte)uVar21 & 1;
  puVar17 = puVar16;
  FUN_100060260();
  uVar3 = *puVar17;
  FUN_10002f0ec();
  FUN_10006b084(&local_1e0,0,0xe000000000000000,uVar3,&DAT_1000f31f0,puVar17);
  uVar12 = uStack_1c0;
  bVar11 = local_1d0;
  uVar9 = uStack_1d8;
  uVar6 = local_1e0;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar18 = param_2;
  FUN_10000eba0(param_2,uVar1);
  FUN_10003f724();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_300 - extraout_x8,&DAT_1000f57e8,&DAT_1000f57e8,lVar18,uVar1,uVar2);
  lVar18 = local_2f0;
  if (unaff_x21 == 0) {
    puVar14 = &DAT_1001031b8;
    local_300 = uVar21;
    local_2fc = uVar22;
    FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
    local_280 = local_280 & 0xffffffffffffff00;
    puVar19 = &DAT_1001031e0;
    FUN_10002cf3c(&DAT_1001031e0,&DAT_1001031b8,&DAT_1000d31f0,
                  &TargetProtocolConformanceDescriptor_1000d3a00);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_1e0,puVar14,&local_280,local_2e8,puVar14,puVar19);
    FUN_10002d0ec(uVar4,uVar7,bVar10);
    uVar7 = uStack_1d8;
    uVar4 = local_1e0;
    local_148 = local_1d0;
    local_280._0_1_ = 1;
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_1e0,puVar14,&local_280,local_2e8,puVar14,puVar19);
    FUN_10002d0ec(uVar5,uVar8,local_2fc);
    uVar8 = uStack_1d8;
    uVar5 = local_1e0;
    local_150 = local_1d0;
    puVar14 = &DAT_100102fa8;
    FUN_10000eb08(&DAT_100102fa8,&DAT_1000cfa80);
    local_280 = CONCAT71(local_280._1_7_,2);
    puVar19 = &DAT_100102fb0;
    FUN_10002cf3c(&DAT_100102fb0,&DAT_100102fa8,&DAT_1000cfa80,
                  &TargetProtocolConformanceDescriptor_1000d4060);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_1e0,puVar14,&local_280,local_2e8,puVar14,puVar19);
    FUN_10002c9fc(puVar16,uVar15,local_300 & 1);
    local_158 = local_1d0;
    puVar14 = &DAT_100103000;
    FUN_10000eb08(&DAT_100103000,&DAT_1000d2700);
    local_209 = 3;
    puVar20 = &DAT_100103030;
    FUN_10002cf3c(&DAT_100103030,&DAT_100103000,&DAT_1000d2700,
                  &TargetProtocolConformanceDescriptor_1000d4650);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_208,puVar14,&local_209,local_2e8,puVar14,puVar20);
    (**(code **)(lVar18 + 8))((long)&local_300 - extraout_x8,local_2e8);
    FUN_10002d0fc(uVar6,uVar9,bVar11,local_1cf & 1);
    _swift_bridgeObjectRelease(uStack_1c0);
    bVar13 = local_148;
    bVar11 = local_150;
    bVar10 = local_158;
    local_280 = uVar4;
    uStack_278 = uVar7;
    local_270 = local_148;
    local_268 = uVar5;
    local_260 = uVar8;
    bStack_258 = local_150;
    local_250 = local_1e0;
    local_248 = uStack_1d8;
    local_226 = local_1f6;
    local_240 = local_158;
    uStack_238 = local_208;
    uStack_230 = uStack_200;
    local_228 = local_1f8;
    local_227 = local_1f7;
    uStack_220 = uStack_1f0;
    uStack_21e = uStack_1ee;
    uStack_218 = uStack_1e8;
    FUN_10003f790(&local_280,&local_1e0);
    FUN_100001428(param_2);
    local_1d0 = bVar13;
    uStack_1c8 = (undefined2)uVar5;
    uStack_1c6 = (undefined6)(uVar5 >> 0x10);
    uStack_1c0 = uVar8;
    local_1b8 = bVar11;
    local_1b0 = (undefined1 *)local_1e0;
    uStack_1a8 = uStack_1d8;
    local_1a0 = bVar10;
    local_198 = local_208;
    uStack_190 = uStack_200;
    uStack_178 = uStack_1e8;
    FUN_10003f764(&local_1e0);
    local_2f8[9] = uStack_238;
    local_2f8[8] = CONCAT71(uStack_23f,local_240);
    local_2f8[0xb] = CONCAT62(local_226,CONCAT11(local_227,local_228));
    local_2f8[10] = uStack_230;
    local_2f8[0xd] = uStack_218;
    local_2f8[0xc] = CONCAT62(uStack_21e,uStack_220);
    local_2f8[1] = uStack_278;
    *local_2f8 = local_280;
    local_2f8[3] = local_268;
    local_2f8[2] = CONCAT71(uStack_26f,local_270);
    local_2f8[5] = CONCAT71(uStack_257,bStack_258);
    local_2f8[4] = local_260;
    local_2f8[7] = local_248;
    local_2f8[6] = local_250;
  }
  else {
    FUN_100001428(param_2);
    local_1d0 = local_148;
    local_1cf = (byte)local_14f;
    uStack_1ce = (undefined2)((uint)local_14f >> 8);
    uStack_1cc = CONCAT31(uStack_14b,uStack_14c);
    uStack_1c8 = (undefined2)uVar5;
    uStack_1c6 = (undefined6)(uVar5 >> 0x10);
    uStack_1c0 = uVar8;
    local_1b8 = local_150;
    local_1a0 = local_158;
    local_198 = uVar6;
    uStack_190 = uVar9;
    uStack_178 = uVar12;
    local_1b0 = puVar16;
    uStack_1a8 = uVar15;
    FUN_10003f764(&local_1e0);
  }
  return;
}

