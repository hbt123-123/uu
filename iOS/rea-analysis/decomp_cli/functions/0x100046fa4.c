// rea decompile_all
// name: FUN_100046fa4
// address: 0x100046fa4
// body: available
// range: 0x100046fa4-0x1000473b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001000472cc) */
/* WARNING: Removing unreachable block (ram,0x000100047184) */

void FUN_100046fa4(undefined8 *param_1,long param_2)

{
  undefined1 uVar1;
  undefined1 uVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  long lVar8;
  undefined *puVar9;
  long extraout_x8;
  long unaff_x21;
  undefined8 uVar10;
  long lVar11;
  undefined8 uVar12;
  undefined1 auStack_1d0 [4];
  uint local_1cc;
  long local_1c8;
  undefined8 *local_1c0;
  undefined *local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined8 local_198;
  uint local_190;
  uint uStack_18c;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178;
  undefined1 uStack_177;
  undefined6 uStack_176;
  undefined2 uStack_170;
  undefined6 uStack_16e;
  undefined8 local_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  undefined1 uStack_158;
  undefined7 uStack_157;
  undefined1 local_150;
  undefined1 local_149;
  undefined8 local_148;
  undefined8 uStack_140;
  undefined1 local_138;
  undefined1 local_131;
  undefined8 local_130;
  undefined8 uStack_128;
  byte local_120;
  byte local_11f;
  undefined6 local_11e;
  undefined2 uStack_118;
  undefined6 uStack_116;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  byte local_f8;
  byte local_f7;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  byte local_d0;
  byte local_c8;
  undefined6 local_c0;
  undefined2 uStack_ba;
  undefined6 uStack_b8;
  undefined1 auStack_b0 [80];
  
  puVar7 = &DAT_100103750;
  local_1c0 = param_1;
  FUN_10000eb08(&DAT_100103750,&DAT_1000d2738);
  lVar11 = *(long *)(puVar7 + -8);
  local_1b8 = puVar7;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100060260();
  uVar1 = *puVar7;
  FUN_100041830();
  FUN_10006b084(&local_108,0,0xe000000000000000,uVar1,&DAT_1000f5e28,puVar7);
  uVar6 = uStack_100;
  local_198 = local_108;
  local_190 = (uint)local_f7;
  uStack_18c = (uint)local_f8;
  local_1b0 = uStack_e8;
  FUN_10005fe24(auStack_b0,0xd00000000000003d,0x80000001000c6c50);
  FUN_10005cdf0(&local_108,auStack_b0,0,0,0xff,PTR___sSSN_1000f02f8,&PTR_PTR_1000f88f0);
  local_1a8 = local_108;
  local_1a0 = uStack_100;
  local_c8 = local_f8;
  uVar10 = *(undefined8 *)(param_2 + 0x18);
  uVar12 = *(undefined8 *)(param_2 + 0x20);
  lVar8 = param_2;
  FUN_10000eba0(param_2,uVar10);
  FUN_100049270();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            (auStack_1d0 + -extraout_x8,&DAT_1000f6220,&DAT_1000f6220,lVar8,uVar10,uVar12);
  uVar5 = uStack_18c;
  uVar4 = local_190;
  if (unaff_x21 == 0) {
    puVar7 = &DAT_100103650;
    local_1cc = (uint)local_f8;
    local_1c8 = lVar11;
    FUN_10000eb08(&DAT_100103650,&DAT_1000d2298);
    local_131 = 0;
    puVar9 = &DAT_100103658;
    FUN_10002cf3c(&DAT_100103658,&DAT_100103650,&DAT_1000d2298,
                  &TargetProtocolConformanceDescriptor_1000d4650);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_130,puVar7,&local_131,local_1b8,puVar7,puVar9);
    FUN_100044b38(local_198,uVar6,uStack_18c,local_190 & 1,FUN_10002d0ec);
    _swift_bridgeObjectRelease(local_1b0);
    local_190 = (uint)local_11f;
    uStack_18c = (uint)local_120;
    local_c0 = local_11e;
    uStack_ba = uStack_118;
    uStack_b8 = uStack_116;
    puVar7 = &DAT_1001031b8;
    FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
    puVar3 = local_1b8;
    local_149 = 1;
    puVar9 = &DAT_1001031e0;
    FUN_10002cf3c(&DAT_1001031e0,&DAT_1001031b8,&DAT_1000d31f0,
                  &TargetProtocolConformanceDescriptor_1000d3a00);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_148,puVar7,&local_149,puVar3,puVar7,puVar9);
    (**(code **)(local_1c8 + 8))(auStack_1d0 + -extraout_x8,puVar3);
    FUN_10002d0ec(local_1a8,local_1a0,local_1cc);
    local_1a0 = uStack_140;
    local_198 = local_148;
    local_c8 = local_138;
    local_188 = local_130;
    uStack_180 = uStack_128;
    uVar1 = (undefined1)uStack_18c;
    uVar2 = (undefined1)local_190;
    uStack_176 = local_c0;
    uStack_170 = uStack_ba;
    uStack_16e = uStack_b8;
    local_168 = uStack_110;
    uStack_160 = (undefined1)local_148;
    uStack_15f = (undefined7)((ulong)local_148 >> 8);
    uStack_158 = (undefined1)uStack_140;
    uStack_157 = (undefined7)((ulong)uStack_140 >> 8);
    local_150 = local_138;
    local_178 = uVar1;
    uStack_177 = uVar2;
    FUN_1000492dc(&local_188,&local_108);
    FUN_100001428(param_2);
    local_108 = local_130;
    uStack_100 = uStack_128;
    uStack_e8 = uStack_110;
    local_e0 = local_198;
    uStack_d8 = local_1a0;
    local_d0 = local_138;
    local_f8 = uVar1;
    local_f7 = uVar2;
    FUN_1000492b0(&local_108);
    local_1c0[1] = uStack_180;
    *local_1c0 = local_188;
    local_1c0[3] = CONCAT62(uStack_16e,uStack_170);
    local_1c0[2] = CONCAT62(uStack_176,CONCAT11(uStack_177,local_178));
    local_1c0[5] = CONCAT71(uStack_15f,uStack_160);
    local_1c0[4] = local_168;
    *(ulong *)((long)local_1c0 + 0x31) = CONCAT17(local_150,uStack_157);
    *(ulong *)((long)local_1c0 + 0x29) = CONCAT17(uStack_158,uStack_15f);
  }
  else {
    uVar12 = local_198;
    uVar10 = local_1b0;
    FUN_100001428(param_2);
    local_f8 = (byte)uVar5;
    local_f7 = (byte)uVar4;
    local_e0 = local_1a8;
    uStack_d8 = local_1a0;
    local_d0 = local_c8;
    local_108 = uVar12;
    uStack_e8 = uVar10;
    FUN_1000492b0(&local_108);
  }
  return;
}

