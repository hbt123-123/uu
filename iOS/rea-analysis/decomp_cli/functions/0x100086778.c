// rea decompile_all
// name: FUN_100086778
// address: 0x100086778
// body: available
// range: 0x100086778-0x100086c1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100086778(long *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6,long param_7,ulong *param_8,long param_9,
                  long param_10,byte param_11,undefined4 param_12,undefined8 param_13,
                  undefined8 param_14,undefined8 param_15,long param_16,long param_17,byte param_18,
                  undefined4 param_19,ulong param_20,long param_21)

{
  undefined8 *puVar1;
  undefined1 uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  long lVar5;
  long lVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  undefined *puVar10;
  undefined *puVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  uint uVar17;
  ulong uVar18;
  undefined1 auStack_300 [8];
  ulong local_2f8;
  uint local_2ec;
  ulong local_2e8;
  ulong local_2e0;
  long local_2d8;
  ulong local_2d0;
  ulong uStack_2c8;
  undefined8 local_2c0;
  ulong local_2b8;
  ulong local_2b0;
  ulong local_2a8;
  long local_2a0;
  long lStack_298;
  long local_290;
  undefined1 *local_288;
  long local_280;
  long local_278;
  undefined8 local_270;
  long *local_268;
  ulong local_260;
  long lStack_258;
  long local_250;
  ulong local_248;
  ulong local_240;
  ulong local_238;
  ulong local_230;
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_218;
  undefined1 local_210 [136];
  ulong local_188;
  long lStack_180;
  long local_178;
  undefined *puStack_170;
  long local_168;
  undefined1 uStack_160;
  undefined7 uStack_15f;
  ulong local_158;
  ulong uStack_150;
  ulong local_148;
  ulong uStack_140;
  ulong local_138;
  ulong uStack_130;
  ulong local_128;
  ulong uStack_120;
  undefined1 local_118;
  undefined7 uStack_117;
  long local_110;
  long local_108;
  ulong local_100;
  ulong uStack_f8;
  ulong local_f0;
  undefined *puStack_e8;
  ulong local_e0;
  ulong local_d8;
  ulong local_d0;
  ulong local_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  undefined1 local_90;
  undefined8 local_88;
  undefined8 uStack_80;
  ulong local_78;
  ulong uStack_70;
  
  local_248 = *param_8;
  local_2b8 = param_8[1];
  local_230 = param_8[2];
  uVar18 = param_8[3];
  local_2f8 = param_8[4];
  local_2b0 = param_8[5];
  local_2ec = (uint)(byte)param_8[6];
  local_238 = param_8[7];
  local_240 = param_8[8];
  lVar8 = 0xff;
  local_2a0 = param_9;
  lStack_298 = param_7;
  local_268 = param_1;
  local_250 = param_6;
  _swift_getAssociatedTypeWitness
            (0xff,param_21,param_20,0x1000e2040,&TargetProtocolRequirement_1000e2050);
  lVar9 = 0;
  __sSqMa(0,lVar8);
  local_280 = *(long *)(lVar9 + -8);
  local_290 = *(long *)(local_280 + 0x40);
  local_288 = auStack_300 + -(local_290 + 0xfU & 0xfffffffffffffff0);
  local_260 = param_20;
  lStack_258 = param_21;
  local_278 = lVar9;
  (**(code **)(param_21 + 0x18))(param_20,param_21);
  local_270 = param_15;
  (**(code **)(*(long *)(lVar8 + -8) + 0x30))(param_15,1,lVar8);
  puVar10 = &DAT_100104190;
  FUN_10000eb08(&DAT_100104190,&DAT_1000d4cb0);
  _swift_allocObject();
  uStack_2c8 = local_248;
  uVar12 = local_2b8;
  *(undefined8 *)(puVar10 + 0x18) = 2;
  *(undefined8 *)(puVar10 + 0x10) = 1;
  *(undefined8 *)(puVar10 + 0x20) = param_3;
  *(undefined8 *)(puVar10 + 0x28) = param_4;
  *(undefined8 *)(puVar10 + 0x30) = param_5;
  local_2a8 = uVar18;
  local_228 = param_3;
  local_220 = param_4;
  local_218 = param_5;
  if (local_2b8 == 0) {
    uVar14 = 0;
    uVar16 = 0;
    uVar18 = 0;
    local_2e8 = 0;
    local_2d0 = 0xe000000000000000;
    uStack_2c8 = 0;
  }
  else {
    local_78 = local_248;
    uStack_70 = local_2b8;
    FUN_10000eb58(&local_78,&local_100);
    _swift_bridgeObjectRetain(uVar18);
    local_2d0 = uVar12;
    uVar14 = local_238;
    uVar16 = local_240;
    local_2e8 = uVar18;
    uVar18 = local_230;
  }
  local_2b8 = param_14;
  local_2c0 = param_13;
  local_2e0 = param_20 | (int)param_15 != 1;
  local_2d8 = param_10;
  _swift_bridgeObjectRetain(local_220);
  _swift_bridgeObjectRetain(local_218);
  FUN_10005fa9c();
  uVar3 = local_2b0;
  if ((uVar12 == 0) || (local_2b0 == 0)) {
    _swift_bridgeObjectRelease(0);
    uVar13 = 0;
    uVar15 = 0xe000000000000000;
    if (uVar12 == 0) {
      uVar17 = 0;
      goto LAB_1000869ec;
    }
  }
  else {
    _swift_bridgeObjectRetain(local_2b0);
    uVar13 = local_2f8;
    uVar15 = uVar3;
  }
  uVar17 = local_2ec;
  local_100 = local_248;
  uStack_f8 = uVar12;
  local_f0 = local_230;
  puStack_e8 = (undefined *)local_2a8;
  local_e0 = local_2f8;
  local_d8 = uVar3;
  local_d0 = CONCAT71(local_d0._1_7_,(char)local_2ec);
  local_c8 = local_238;
  local_c0 = local_240;
  FUN_10005fcf0(&local_100);
LAB_1000869ec:
  local_238 = CONCAT44(local_238._4_4_,(uint)param_18);
  local_240 = param_17;
  local_248 = param_16;
  local_230 = CONCAT44(local_230._4_4_,(uint)param_11);
  local_188 = local_2e0;
  lStack_180 = local_2a0;
  local_178 = local_2d8;
  local_168 = lStack_298;
  uStack_160 = 0;
  local_158 = uStack_2c8;
  uStack_150 = local_2d0;
  uStack_140 = local_2e8;
  local_118 = (undefined1)uVar17;
  local_110 = 0;
  local_108 = -0x2000000000000000;
  local_100 = local_2e0;
  uStack_f8 = local_2a0;
  local_f0 = local_2d8;
  local_e0 = lStack_298;
  local_d8 = local_d8 & 0xffffffffffffff00;
  local_d0 = uStack_2c8;
  local_c8 = local_2d0;
  uStack_b8 = local_2e8;
  local_88 = 0;
  uStack_80 = 0xe000000000000000;
  puStack_170 = puVar10;
  local_148 = uVar18;
  local_138 = uVar14;
  uStack_130 = uVar16;
  local_128 = uVar13;
  uStack_120 = uVar15;
  puStack_e8 = puVar10;
  local_c0 = uVar18;
  local_b0 = uVar14;
  uStack_a8 = uVar16;
  local_a0 = uVar13;
  uStack_98 = uVar15;
  local_90 = local_118;
  FUN_100064cb0(&local_188,local_210);
  FUN_100064cec(&local_100);
  puVar10 = &DAT_1000f9760;
  _swift_allocObject(&DAT_1000f9760,0x48,7);
  lVar5 = lStack_258;
  uVar18 = local_260;
  lVar9 = local_278;
  lVar8 = local_280;
  puVar4 = local_288;
  *(ulong *)(puVar10 + 0x10) = local_260;
  *(long *)(puVar10 + 0x18) = lStack_258;
  *(undefined8 *)(puVar10 + 0x20) = local_2c0;
  *(ulong *)(puVar10 + 0x28) = local_2b8;
  *(undefined8 *)(puVar10 + 0x30) = local_228;
  *(undefined8 *)(puVar10 + 0x38) = local_220;
  *(undefined8 *)(puVar10 + 0x40) = local_218;
  (**(code **)(local_280 + 0x10))(local_288,local_270,local_278);
  uVar12 = (ulong)*(byte *)(lVar8 + 0x50);
  uVar14 = uVar12 + 0x28 & (uVar12 ^ 0xffffffffffffffff);
  uVar16 = local_290 + uVar14 + 7 & 0xfffffffffffffff8;
  puVar11 = &DAT_1000f9788;
  _swift_allocObject(&DAT_1000f9788,uVar16 + 0x18,uVar12 | 7);
  lVar6 = local_250;
  *(ulong *)(puVar11 + 0x10) = uVar18;
  *(long *)(puVar11 + 0x18) = lVar5;
  *(long *)(puVar11 + 0x20) = local_250;
  (**(code **)(lVar8 + 0x20))(puVar11 + uVar14,puVar4,lVar9);
  puVar1 = (undefined8 *)(puVar11 + uVar16);
  *puVar1 = local_228;
  puVar1[1] = local_220;
  puVar1[2] = local_218;
  if (lVar6 != 0) {
    FUN_10008726c(lVar6);
  }
  local_268[0xc] = uStack_130;
  local_268[0xb] = local_138;
  local_268[0xe] = uStack_120;
  local_268[0xd] = local_128;
  local_268[0x10] = local_110;
  local_268[0xf] = CONCAT71(uStack_117,local_118);
  local_268[4] = (long)puStack_170;
  local_268[3] = local_178;
  local_268[6] = CONCAT71(uStack_15f,uStack_160);
  local_268[5] = local_168;
  local_268[8] = uStack_150;
  local_268[7] = local_158;
  local_268[10] = uStack_140;
  local_268[9] = local_148;
  bVar7 = ((uint)local_238 & 0xff) != 0xff;
  uVar2 = 6;
  if (bVar7) {
    uVar2 = (char)local_238;
  }
  uVar18 = 0;
  if (bVar7) {
    uVar18 = local_240;
  }
  uVar12 = 0;
  if (bVar7) {
    uVar12 = local_248;
  }
  local_210[0] = 1;
  *local_268 = lVar6;
  local_268[2] = lStack_180;
  local_268[1] = local_188;
  local_268[0x11] = local_108;
  local_268[0x12] = uVar12;
  local_268[0x13] = uVar18;
  *(undefined1 *)(local_268 + 0x14) = uVar2;
  *(char *)((long)local_268 + 0xa1) = (char)local_230;
  local_268[0x15] = (long)FUN_1000870b0;
  local_268[0x16] = (long)puVar10;
  *(undefined1 *)(local_268 + 0x17) = 1;
  local_268[0x18] = (long)FUN_1000871b4;
  local_268[0x19] = (long)puVar11;
  _swift_bridgeObjectRetain(local_220);
  _swift_bridgeObjectRetain(local_218);
  return;
}

