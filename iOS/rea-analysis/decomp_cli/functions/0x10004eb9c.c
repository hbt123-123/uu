// rea decompile_all
// name: FUN_10004eb9c
// address: 0x10004eb9c
// body: available
// range: 0x10004eb9c-0x10004ef93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010004ee98) */
/* WARNING: Removing unreachable block (ram,0x00010004ed7c) */

void FUN_10004eb9c(ulong *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 uVar3;
  byte bVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined8 *puVar9;
  long extraout_x8;
  long unaff_x21;
  long lVar10;
  ulong uVar11;
  long local_1c0;
  ulong *local_1b8;
  undefined *local_1b0;
  uint local_1a4;
  ulong local_1a0;
  ulong uStack_198;
  uint local_18c;
  undefined8 local_188;
  ulong local_180;
  ulong local_178;
  ulong uStack_170;
  byte local_168;
  undefined7 uStack_167;
  ulong uStack_160;
  ulong local_158;
  undefined1 uStack_150;
  byte bStack_14f;
  undefined6 uStack_14e;
  undefined2 local_148;
  undefined6 uStack_146;
  ulong uStack_140;
  undefined1 local_131;
  ulong local_130;
  ulong uStack_128;
  undefined1 local_120;
  byte local_11f;
  undefined6 local_11e;
  undefined2 uStack_118;
  undefined6 uStack_116;
  ulong uStack_110;
  ulong local_108;
  ulong uStack_100;
  byte local_f8;
  byte local_f7;
  undefined2 uStack_f0;
  undefined6 uStack_ee;
  ulong uStack_e8;
  undefined1 local_e0;
  undefined1 local_df;
  ulong uStack_d0;
  byte local_b8;
  undefined1 auStack_b0 [80];
  
  puVar5 = &DAT_1001038e0;
  local_1b8 = param_1;
  FUN_10000eb08(&DAT_1001038e0,&DAT_1000d3220);
  lVar10 = *(long *)(puVar5 + -8);
  local_1b0 = puVar5;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar10 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10005fe24(auStack_b0,0xd000000000000013,0x80000001000c7410);
  puVar6 = auStack_b0;
  FUN_10005cdf0(&local_108,puVar6,0,0,0xff,PTR___sSSN_1000f02f8,&PTR_PTR_1000f88f0);
  bVar4 = local_f8;
  uVar11 = local_108;
  local_180 = uStack_100;
  local_b8 = local_f8;
  FUN_100060260();
  uVar3 = *puVar6;
  FUN_10002f0ec();
  FUN_10006b084(&local_108,0,0xe000000000000000,uVar3,&DAT_1000f31f0,puVar6);
  local_1a0 = local_108;
  uStack_198 = uStack_100;
  local_18c = (uint)local_f8;
  local_1a4 = (uint)local_f7;
  local_188 = uStack_e8;
  uVar1 = *(undefined8 *)(param_2 + 0x18);
  uVar2 = *(undefined8 *)(param_2 + 0x20);
  lVar7 = param_2;
  FUN_10000eba0(param_2,uVar1);
  FUN_10004ef94();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_1c0 - extraout_x8,&DAT_1000f6e00,&DAT_1000f6e00,lVar7,uVar1,uVar2);
  if (unaff_x21 == 0) {
    puVar5 = &DAT_1001031b8;
    local_1c0 = lVar10;
    FUN_10000eb08(&DAT_1001031b8,&DAT_1000d31f0);
    local_178 = local_178 & 0xffffffffffffff00;
    puVar8 = &DAT_1001031e0;
    FUN_10002cf3c(&DAT_1001031e0,&DAT_1001031b8,&DAT_1000d31f0,
                  &TargetProtocolConformanceDescriptor_1000d3a00);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_108,puVar5,&local_178,local_1b0,puVar5,puVar8);
    FUN_10002d0ec(uVar11,local_180,bVar4);
    local_b8 = local_f8;
    puVar5 = &DAT_100103000;
    FUN_10000eb08(&DAT_100103000,&DAT_1000d2700);
    puVar8 = local_1b0;
    local_131 = 1;
    puVar9 = &DAT_100103030;
    FUN_10002cf3c(&DAT_100103030,&DAT_100103000,&DAT_1000d2700,
                  &TargetProtocolConformanceDescriptor_1000d4650);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_130,puVar5,&local_131,puVar8,puVar5,puVar9);
    (**(code **)(local_1c0 + 8))((long)&local_1c0 - extraout_x8,puVar8);
    FUN_10002d0fc(local_1a0,uStack_198,local_18c,local_1a4 & 1);
    _swift_bridgeObjectRelease(local_188);
    bVar4 = local_b8;
    local_180 = CONCAT44(local_180._4_4_,(uint)local_11f);
    local_178 = local_108;
    uStack_170 = uStack_100;
    local_168 = local_b8;
    uStack_160 = local_130;
    local_158 = uStack_128;
    uStack_150 = local_120;
    bStack_14f = local_11f;
    uStack_146 = uStack_116;
    uStack_140 = uStack_110;
    uStack_14e = local_11e;
    local_148 = uStack_118;
    FUN_10004f000(&local_178,&local_108);
    FUN_100001428(param_2);
    local_f8 = bVar4;
    uStack_f0 = (undefined2)local_130;
    uStack_ee = (undefined6)(local_130 >> 0x10);
    uStack_e8 = uStack_128;
    local_e0 = local_120;
    local_df = (undefined1)local_180;
    uStack_d0 = uStack_110;
    FUN_10004efd4(&local_108);
    local_1b8[1] = uStack_170;
    *local_1b8 = local_178;
    local_1b8[3] = uStack_160;
    local_1b8[2] = CONCAT71(uStack_167,local_168);
    local_1b8[5] = CONCAT62(uStack_14e,CONCAT11(bStack_14f,uStack_150));
    local_1b8[4] = local_158;
    local_1b8[7] = uStack_140;
    local_1b8[6] = CONCAT62(uStack_146,local_148);
  }
  else {
    uVar11 = local_180;
    FUN_100001428(param_2);
    local_f8 = local_b8;
    uStack_f0 = (undefined2)local_1a0;
    uStack_ee = (undefined6)(local_1a0 >> 0x10);
    uStack_e8 = uStack_198;
    local_e0 = (undefined1)local_18c;
    local_df = (undefined1)local_1a4;
    uStack_d0 = local_188;
    uStack_100 = uVar11;
    FUN_10004efd4(&local_108);
  }
  return;
}

