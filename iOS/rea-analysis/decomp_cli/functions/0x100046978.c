// rea decompile_all
// name: FUN_100046978
// address: 0x100046978
// body: available
// range: 0x100046978-0x100046ed3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100046dbc) */
/* WARNING: Removing unreachable block (ram,0x000100046c84) */

void FUN_100046978(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined1 uVar9;
  undefined1 uVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  long lVar14;
  undefined *puVar15;
  long extraout_x8;
  long unaff_x21;
  long lVar16;
  undefined8 *local_260;
  undefined *local_258;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined1 local_1f8;
  undefined1 uStack_1f7;
  undefined6 uStack_1f6;
  undefined2 uStack_1f0;
  undefined6 uStack_1ee;
  undefined8 local_1e8;
  undefined8 uStack_1e0;
  undefined8 local_1d8;
  undefined1 uStack_1d0;
  undefined7 uStack_1cf;
  undefined8 local_1c8;
  undefined8 uStack_1c0;
  undefined1 local_1b8;
  undefined1 local_1b1;
  undefined8 local_1b0;
  undefined8 uStack_1a8;
  undefined1 local_1a0;
  undefined1 local_199;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined1 local_188;
  undefined1 local_187;
  undefined6 local_186;
  undefined2 uStack_180;
  undefined6 uStack_17e;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined1 local_160;
  byte local_15f;
  undefined8 uStack_150;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined1 local_120;
  undefined1 local_118;
  undefined1 local_110;
  undefined6 local_108;
  undefined2 uStack_102;
  undefined6 uStack_100;
  undefined1 auStack_f8 [72];
  undefined1 auStack_b0 [80];
  
  puVar11 = &DAT_100103760;
  local_260 = param_1;
  FUN_10000eb08(&DAT_100103760,&DAT_1000d2740);
  lVar16 = *(long *)(puVar11 + -8);
  local_258 = puVar11;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar16 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100060260();
  uVar1 = *puVar11;
  FUN_100041830();
  FUN_10006b084(&local_170,0,0xe000000000000000,uVar1,&DAT_1000f5e28,puVar11);
  uVar1 = local_160;
  uVar6 = uStack_168;
  uVar3 = local_170;
  FUN_10005fe24(auStack_b0,0xd000000000000049,0x80000001000c6c90);
  puVar11 = PTR___sSSN_1000f02f8;
  FUN_10005cdf0(&local_170,auStack_b0,0,0,0xff,PTR___sSSN_1000f02f8,&PTR_PTR_1000f88f0);
  uVar9 = local_160;
  uVar7 = uStack_168;
  uVar4 = local_170;
  local_110 = local_160;
  uVar12 = 0xd000000000000057;
  FUN_10005fe24(auStack_f8,0xd000000000000057,0x80000001000c6ce0);
  FUN_1000657bc();
  uVar13 = uVar12;
  FUN_10001d358();
  FUN_1000689d4(&local_170,uVar12,uVar13,auStack_f8,0,0,0xff,puVar11,&PTR_PTR_1000f88f0);
  uVar10 = local_160;
  uVar8 = uStack_168;
  uVar5 = local_170;
  local_118 = local_160;
  uVar12 = *(undefined8 *)(param_2 + 0x18);
  uVar13 = *(undefined8 *)(param_2 + 0x20);
  lVar14 = param_2;
  FUN_10000eba0(param_2,uVar12);
  FUN_100049310();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_260 - extraout_x8,&DAT_1000f6190,&DAT_1000f6190,lVar14,uVar12,uVar13);
  if (unaff_x21 == 0) {
    puVar11 = &DAT_100103650;
    FUN_10000eb08(&DAT_100103650,&DAT_1000d2298);
    local_199 = 0;
    puVar15 = &DAT_100103658;
    FUN_10002cf3c(&DAT_100103658,&DAT_100103650,&DAT_1000d2298,
                  &TargetProtocolConformanceDescriptor_1000d4650);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_198,puVar11,&local_199,local_258,puVar11,puVar15);
    FUN_100044b38(uVar3,uVar6,uVar1,local_15f & 1,FUN_10002d0ec);
    _swift_bridgeObjectRelease(uStack_150);
    local_108 = local_186;
    uStack_102 = uStack_180;
    uStack_100 = uStack_17e;
    puVar11 = &DAT_1001031b8;
    FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
    puVar2 = local_258;
    local_208 = CONCAT71(local_208._1_7_,1);
    puVar15 = &DAT_1001031e0;
    FUN_10002cf3c(&DAT_1001031e0,&DAT_1001031b8,&DAT_1000d31f0,
                  &TargetProtocolConformanceDescriptor_1000d3a00);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_170,puVar11,&local_208,puVar2,puVar11,puVar15);
    FUN_10002d0ec(uVar4,uVar7,uVar9);
    uVar13 = uStack_168;
    uVar12 = local_170;
    local_110 = local_160;
    puVar11 = &DAT_1001036e0;
    FUN_10000eb08(&DAT_1001036e0,&DAT_1000d26d0);
    local_1b1 = 2;
    puVar15 = &DAT_100103770;
    FUN_10002cf3c(&DAT_100103770,&DAT_1001036e0,&DAT_1000d26d0,
                  &TargetProtocolConformanceDescriptor_1000d4460);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_1b0,puVar11,&local_1b1,puVar2,puVar11,puVar15);
    (**(code **)(lVar16 + 8))((long)&local_260 - extraout_x8,local_258);
    FUN_10002d0ec(uVar5,uVar8,uVar10);
    uVar1 = local_110;
    local_118 = local_1a0;
    local_208 = local_198;
    uStack_200 = uStack_190;
    local_1f8 = local_188;
    uStack_1f7 = local_187;
    uStack_1f6 = local_108;
    uStack_1f0 = uStack_102;
    uStack_1ee = uStack_100;
    local_1e8 = uStack_178;
    uStack_1e0 = local_170;
    local_1d8 = uStack_168;
    uStack_1d0 = local_110;
    local_1c8 = local_1b0;
    uStack_1c0 = uStack_1a8;
    local_1b8 = local_1a0;
    FUN_10004937c(&local_208,&local_170);
    FUN_100001428(param_2);
    local_170 = local_198;
    uStack_168 = uStack_190;
    local_160 = local_188;
    local_15f = local_187;
    uStack_150 = uStack_178;
    local_148 = uVar12;
    uStack_140 = uVar13;
    local_138 = uVar1;
    local_130 = local_1b0;
    uStack_128 = uStack_1a8;
    local_120 = local_1a0;
    FUN_100049350(&local_170);
    local_260[5] = uStack_1e0;
    local_260[4] = local_1e8;
    local_260[7] = CONCAT71(uStack_1cf,uStack_1d0);
    local_260[6] = local_1d8;
    local_260[9] = uStack_1c0;
    local_260[8] = local_1c8;
    *(undefined1 *)(local_260 + 10) = local_1b8;
    local_260[1] = uStack_200;
    *local_260 = local_208;
    local_260[3] = CONCAT62(uStack_1ee,uStack_1f0);
    local_260[2] = CONCAT62(uStack_1f6,CONCAT11(uStack_1f7,local_1f8));
  }
  else {
    FUN_100001428(param_2);
    local_148 = uVar4;
    local_138 = local_110;
    local_130 = uVar5;
    uStack_128 = uVar8;
    local_120 = local_118;
    FUN_100049350(&local_170);
  }
  return;
}

