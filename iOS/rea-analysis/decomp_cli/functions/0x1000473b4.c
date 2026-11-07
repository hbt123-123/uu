// rea decompile_all
// name: FUN_1000473b4
// address: 0x1000473b4
// body: available
// range: 0x1000473b4-0x100047853 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x000100047700) */
/* WARNING: Removing unreachable block (ram,0x000100047590) */

void FUN_1000473b4(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  ulong uVar3;
  uint uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  undefined8 *puVar11;
  long extraout_x8;
  long unaff_x21;
  long lVar12;
  long local_1e0;
  undefined8 *local_1d8;
  undefined *local_1d0;
  ulong local_1c8;
  uint local_1bc;
  undefined8 local_1b8;
  undefined8 local_1b0;
  ulong local_1a8;
  undefined8 local_1a0;
  uint local_194;
  undefined8 local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 local_178;
  undefined1 uStack_177;
  undefined6 uStack_176;
  undefined2 uStack_170;
  undefined6 uStack_16e;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  byte bStack_150;
  byte bStack_14f;
  undefined6 uStack_14e;
  undefined2 uStack_148;
  undefined6 uStack_146;
  undefined8 uStack_140;
  undefined1 local_131;
  undefined8 local_130;
  undefined8 uStack_128;
  byte local_120;
  byte local_11f;
  undefined6 local_11e;
  undefined2 uStack_118;
  undefined6 uStack_116;
  undefined8 uStack_110;
  undefined1 local_101;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined1 local_f0;
  byte local_ef;
  undefined6 local_ee;
  undefined2 uStack_e8;
  undefined6 uStack_e6;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  byte local_c8;
  byte local_c7;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined1 local_a0;
  undefined1 local_9f;
  undefined8 uStack_90;
  undefined6 local_78;
  undefined2 uStack_72;
  undefined6 uStack_70;
  
  puVar7 = &DAT_100103740;
  local_1d8 = param_1;
  FUN_10000eb08(&DAT_100103740,&DAT_1000d2730);
  lVar12 = *(long *)(puVar7 + -8);
  local_1d0 = puVar7;
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100060260();
  uVar2 = *puVar7;
  puVar8 = puVar7;
  FUN_100041830();
  uVar9 = 0;
  FUN_10006b084(&local_d8,0,0xe000000000000000,uVar2,&DAT_1000f5e28,puVar8);
  uVar6 = uStack_b8;
  uVar5 = uStack_d0;
  local_190 = local_d8;
  local_1c8 = CONCAT44(local_1c8._4_4_,(uint)local_c8);
  local_194 = (uint)local_c7;
  uVar2 = *puVar7;
  FUN_10002f0ec();
  FUN_10006b084(&local_d8,0,0xe000000000000000,uVar2,&DAT_1000f31f0,uVar9);
  local_1b8 = local_d8;
  local_1b0 = uStack_d0;
  local_1a8 = CONCAT44(local_1a8._4_4_,(uint)local_c8);
  local_1bc = (uint)local_c7;
  local_1a0 = uStack_b8;
  uVar9 = *(undefined8 *)(param_2 + 0x18);
  uVar1 = *(undefined8 *)(param_2 + 0x20);
  lVar10 = param_2;
  FUN_10000eba0(param_2,uVar9);
  FUN_1000491d0();
  __ss7DecoderP9container7keyedBys22KeyedDecodingContainerVyqd__Gqd__m_tKs9CodingKeyRd__lFTj
            ((long)&local_1e0 - extraout_x8,&DAT_1000f62b0,&DAT_1000f62b0,lVar10,uVar9,uVar1);
  local_d8 = local_190;
  uVar4 = local_194;
  if (unaff_x21 == 0) {
    puVar7 = &DAT_100103650;
    local_1e0 = lVar12;
    FUN_10000eb08(&DAT_100103650,&DAT_1000d2298);
    local_101 = 0;
    puVar8 = &DAT_100103658;
    FUN_10002cf3c(&DAT_100103658,&DAT_100103650,&DAT_1000d2298,
                  &TargetProtocolConformanceDescriptor_1000d4650);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_100,puVar7,&local_101,local_1d0,puVar7,puVar8);
    FUN_100044b38(local_190,uVar5,local_1c8 & 0xffffffff,local_194 & 1,FUN_10002d0ec);
    _swift_bridgeObjectRelease(uVar6);
    local_190 = local_100;
    local_194 = (uint)local_ef;
    local_78 = local_ee;
    local_1c8 = uStack_e0;
    uStack_72 = uStack_e8;
    uStack_70 = uStack_e6;
    puVar7 = &DAT_100103000;
    FUN_10000eb08(&DAT_100103000,&DAT_1000d2700);
    puVar8 = local_1d0;
    local_131 = 1;
    puVar11 = &DAT_100103030;
    FUN_10002cf3c(&DAT_100103030,&DAT_100103000,&DAT_1000d2700,
                  &TargetProtocolConformanceDescriptor_1000d4650);
    __ss22KeyedDecodingContainerV6decode_6forKeyqd__qd__m_xtKSeRd__lF
              (&local_130,puVar7,&local_131,puVar8,puVar7,puVar11);
    (**(code **)(local_1e0 + 8))((long)&local_1e0 - extraout_x8,puVar8);
    FUN_100044b38(local_1b8,local_1b0,local_1a8 & 0xffffffff,local_1bc & 1,FUN_10002c9fc);
    _swift_bridgeObjectRelease(local_1a0);
    uVar9 = local_190;
    uVar3 = local_1c8;
    local_1b0 = uStack_128;
    local_1a8 = local_130;
    local_1bc = (uint)local_11f;
    local_1b8 = CONCAT44(local_1b8._4_4_,(uint)local_120);
    local_1a0 = uStack_110;
    local_188 = local_190;
    uStack_180 = uStack_f8;
    local_178 = local_f0;
    uVar2 = (undefined1)local_194;
    uStack_176 = local_78;
    uStack_14e = local_11e;
    uStack_170 = uStack_72;
    uStack_16e = uStack_70;
    local_168 = local_1c8;
    uStack_160 = local_130;
    local_158 = uStack_128;
    bStack_150 = local_120;
    bStack_14f = local_11f;
    uStack_148 = uStack_118;
    uStack_146 = uStack_116;
    uStack_140 = uStack_110;
    uStack_177 = uVar2;
    FUN_10004923c(&local_188,&local_d8);
    FUN_100001428(param_2);
    local_d8 = uVar9;
    uStack_d0 = uStack_f8;
    local_c8 = local_f0;
    uStack_b8 = uVar3;
    local_b0 = local_1a8;
    uStack_a8 = local_1b0;
    local_a0 = (undefined1)local_1b8;
    local_9f = (undefined1)local_1bc;
    uStack_90 = local_1a0;
    local_c7 = uVar2;
    FUN_100049210(&local_d8);
    local_1d8[5] = uStack_160;
    local_1d8[4] = local_168;
    local_1d8[7] = CONCAT62(uStack_14e,CONCAT11(bStack_14f,bStack_150));
    local_1d8[6] = local_158;
    local_1d8[9] = uStack_140;
    local_1d8[8] = CONCAT62(uStack_146,uStack_148);
    local_1d8[1] = uStack_180;
    *local_1d8 = local_188;
    local_1d8[3] = CONCAT62(uStack_16e,uStack_170);
    local_1d8[2] = CONCAT62(uStack_176,CONCAT11(uStack_177,local_178));
  }
  else {
    uVar2 = (undefined1)local_1c8;
    FUN_100001428(param_2);
    local_c7 = (byte)uVar4;
    local_b0 = local_1b8;
    uStack_a8 = local_1b0;
    local_a0 = (undefined1)local_1a8;
    local_9f = (undefined1)local_1bc;
    uStack_90 = local_1a0;
    local_c8 = uVar2;
    FUN_100049210(&local_d8);
  }
  return;
}

