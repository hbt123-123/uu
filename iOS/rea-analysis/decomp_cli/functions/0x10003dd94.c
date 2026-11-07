// rea decompile_all
// name: FUN_10003dd94
// address: 0x10003dd94
// body: available
// range: 0x10003dd94-0x10003e307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010003e130) */
/* WARNING: Removing unreachable block (ram,0x00010003e1d4) */
/* WARNING: Removing unreachable block (ram,0x00010003dfe0) */

void FUN_10003dd94(ulong *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  undefined *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 uVar9;
  byte bVar10;
  undefined *puVar11;
  undefined8 uVar12;
  undefined1 *puVar13;
  undefined1 *puVar14;
  long lVar15;
  undefined *puVar16;
  undefined8 *puVar17;
  uint uVar18;
  long extraout_x8;
  long unaff_x21;
  long lVar19;
  ulong *local_260;
  undefined *local_258;
  ulong local_200;
  ulong uStack_1f8;
  undefined1 local_1f0;
  undefined7 uStack_1ef;
  ulong local_1e8;
  ulong local_1e0;
  undefined1 uStack_1d8;
  undefined7 uStack_1d7;
  ulong local_1d0;
  ulong uStack_1c8;
  undefined1 local_1c0;
  undefined1 uStack_1bf;
  undefined6 uStack_1be;
  undefined2 uStack_1b8;
  undefined6 uStack_1b6;
  ulong local_1b0;
  undefined1 local_1a1;
  ulong local_1a0;
  ulong uStack_198;
  undefined1 local_190;
  undefined1 local_18f;
  undefined6 local_18e;
  undefined2 uStack_188;
  undefined6 uStack_186;
  ulong uStack_180;
  ulong local_178;
  ulong uStack_170;
  undefined1 local_168;
  byte local_167;
  undefined2 uStack_166;
  undefined4 uStack_164;
  undefined2 uStack_160;
  undefined6 uStack_15e;
  ulong uStack_158;
  byte local_150;
  ulong local_148;
  ulong uStack_140;
  ulong uStack_128;
  byte local_108;
  undefined4 local_107;
  undefined1 uStack_104;
  undefined3 uStack_103;
  undefined1 local_100;
  undefined1 auStack_f8 [72];
  undefined1 auStack_b0 [80];
  
  puVar11 = &DAT_100103538;
  local_260 = param_1;
  FUN_10000eb08(&DAT_100103538,&DAT_1000d1bb0);
  lVar19 = *(long *)(puVar11 + -8);
  local_258 = puVar11;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar19 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10005fe24(auStack_b0,0xd00000000000004a,0x80000001000c63a0);
  FUN_10005cdf0(&local_178,auStack_b0,0,0,0xff,PTR___sSSN_1000f02f8,&PTR_PTR_1000f88f0);
  uVar9 = local_168;
  uVar7 = uStack_170;
  uVar5 = local_178;
  local_100 = local_168;
  uVar12 = 0x6474732d65646f63;
  FUN_100065ca0(0x6474732d65646f63,0xea00000000006e69,0);
  FUN_10005fe24(auStack_f8,0xd000000000000057,0x80000001000c6340);
  uVar18 = 0;
  puVar13 = (undefined1 *)0x0;
  FUN_100061924();
  local_108 = (byte)uVar18 & 1;
  puVar14 = puVar13;
  FUN_100060260();
  uVar3 = *puVar14;
  FUN_10002f0ec();
  FUN_10006b084(&local_178,0,0xe000000000000000,uVar3,&DAT_1000f31f0,puVar14);
  uVar3 = local_168;
  uVar8 = uStack_170;
  uVar6 = local_178;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar15 = param_2;
  FUN_10000eba0(param_2,uVar1);
  FUN_10003f864();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_260 - extraout_x8,&DAT_1000f56c8,&DAT_1000f56c8,lVar15,uVar1,uVar2);
  if (unaff_x21 == 0) {
    puVar11 = &DAT_1001031b8;
    FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
    local_200 = local_200 & 0xffffffffffffff00;
    puVar16 = &DAT_1001031e0;
    FUN_10002cf3c(&DAT_1001031e0,&DAT_1001031b8,&DAT_1000d31f0,
                  &TargetProtocolConformanceDescriptor_1000d3a00);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_178,puVar11,&local_200,local_258,puVar11,puVar16);
    FUN_10002d0ec(uVar5,uVar7,uVar9);
    uVar7 = uStack_170;
    uVar5 = local_178;
    local_100 = local_168;
    puVar11 = &DAT_100102fa8;
    FUN_10000eb08(&DAT_100102fa8,&DAT_1000cfa80);
    puVar4 = local_258;
    local_200 = CONCAT71(local_200._1_7_,1);
    puVar16 = &DAT_100102fb0;
    FUN_10002cf3c(&DAT_100102fb0,&DAT_100102fa8,&DAT_1000cfa80,
                  &TargetProtocolConformanceDescriptor_1000d4060);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_178,puVar11,&local_200,puVar4,puVar11,puVar16);
    FUN_10002c9fc(puVar13,uVar12,uVar18 & 1);
    local_108 = local_168;
    puVar11 = &DAT_100103000;
    FUN_10000eb08(&DAT_100103000,&DAT_1000d2700);
    puVar16 = local_258;
    local_1a1 = 2;
    puVar17 = &DAT_100103030;
    FUN_10002cf3c(&DAT_100103030,&DAT_100103000,&DAT_1000d2700,
                  &TargetProtocolConformanceDescriptor_1000d4650);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_1a0,puVar11,&local_1a1,puVar16,puVar11,puVar17);
    (**(code **)(lVar19 + 8))((long)&local_260 - extraout_x8,puVar16);
    FUN_10002d0fc(uVar6,uVar8,uVar3,local_167 & 1);
    _swift_bridgeObjectRelease(uStack_158);
    uVar3 = local_100;
    bVar10 = local_108;
    local_200 = uVar5;
    uStack_1f8 = uVar7;
    local_1f0 = local_100;
    local_1e8 = local_178;
    local_1e0 = uStack_170;
    uStack_1be = local_18e;
    uStack_1d8 = local_108;
    local_1d0 = local_1a0;
    uStack_1c8 = uStack_198;
    local_1c0 = local_190;
    uStack_1bf = local_18f;
    uStack_1b8 = uStack_188;
    uStack_1b6 = uStack_186;
    local_1b0 = uStack_180;
    FUN_10003f8d0(&local_200,&local_178);
    FUN_100001428(param_2);
    local_168 = uVar3;
    uStack_160 = (undefined2)local_178;
    uStack_15e = (undefined6)(local_178 >> 0x10);
    uStack_158 = uStack_170;
    local_150 = bVar10;
    local_148 = local_1a0;
    uStack_140 = uStack_198;
    uStack_128 = uStack_180;
    FUN_10003f8a4(&local_178);
    local_260[5] = CONCAT71(uStack_1d7,uStack_1d8);
    local_260[4] = local_1e0;
    local_260[7] = uStack_1c8;
    local_260[6] = local_1d0;
    local_260[9] = CONCAT62(uStack_1b6,uStack_1b8);
    local_260[8] = CONCAT62(uStack_1be,CONCAT11(uStack_1bf,local_1c0));
    local_260[10] = local_1b0;
    local_260[1] = uStack_1f8;
    *local_260 = local_200;
    local_260[3] = local_1e8;
    local_260[2] = CONCAT71(uStack_1ef,local_1f0);
  }
  else {
    FUN_100001428(param_2);
    local_168 = local_100;
    local_167 = (byte)local_107;
    uStack_166 = (undefined2)((uint)local_107 >> 8);
    uStack_164 = CONCAT31(uStack_103,uStack_104);
    uStack_160 = SUB82(puVar13,0);
    uStack_15e = (undefined6)((ulong)puVar13 >> 0x10);
    local_150 = local_108;
    local_148 = uVar6;
    uStack_140 = uVar8;
    uStack_128 = uStack_158;
    uStack_158 = uVar12;
    FUN_10003f8a4(&local_178);
  }
  return;
}

