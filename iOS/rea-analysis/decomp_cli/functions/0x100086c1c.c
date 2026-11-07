// rea decompile_all
// name: FUN_100086c1c
// address: 0x100086c1c
// body: available
// range: 0x100086c1c-0x100086ee3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100086c1c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined8 param_9,undefined8 param_10,long param_11,byte param_12,
                  undefined4 param_13,undefined8 param_14,long param_15)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined *puVar6;
  undefined8 uVar7;
  uint uVar8;
  long lVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 uStack_1e0;
  undefined1 auStack_1d8 [8];
  long alStack_1d0 [5];
  undefined1 auStack_1a8 [8];
  undefined8 auStack_1a0 [2];
  long local_190;
  undefined8 local_188;
  undefined8 local_180;
  uint local_174;
  undefined8 local_170;
  undefined8 local_168;
  undefined4 local_15c;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 local_140;
  undefined8 local_138;
  undefined8 uStack_130;
  undefined8 local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  local_174 = (uint)param_12;
  uVar10 = *(undefined8 *)(param_15 + 8);
  uVar2 = 0xff;
  local_168 = param_3;
  local_15c = param_8;
  local_158 = param_4;
  local_150 = param_5;
  local_148 = param_6;
  local_140 = param_7;
  _swift_getAssociatedTypeWitness
            (0xff,uVar10,param_14,0x1000e2040,&TargetProtocolRequirement_1000e2050);
  lVar3 = 0;
  __sSqMa(0,uVar2);
  lVar11 = *(long *)(lVar3 + -8);
  lVar1 = -(*(long *)(lVar11 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)&local_190 + lVar1;
  uVar4 = 0;
  local_190 = lVar3;
  local_170 = uVar10;
  _swift_getAssociatedTypeWitness
            (0,uVar10,param_14,0x1000e2040,&TargetProtocolRequirement_1000e2048);
  lVar5 = param_15;
  _swift_getAssociatedConformanceWitness
            (param_15,param_14,uVar4,0x1000e2090,&TargetProtocolRequirement_1000e20a0);
  uVar2 = uVar4;
  (**(code **)(lVar5 + 0x18))(uVar4,lVar5);
  uVar10 = param_9;
  uVar7 = param_14;
  local_180 = uVar2;
  (**(code **)(param_15 + 0x18))(param_9,param_14,param_15);
  puVar6 = &DAT_1000f97b0;
  local_188 = uVar7;
  _swift_allocObject(&DAT_1000f97b0,0x20,7);
  lVar3 = local_190;
  *(undefined8 *)(puVar6 + 0x10) = param_14;
  *(long *)(puVar6 + 0x18) = param_15;
  (**(code **)(lVar11 + 0x10))(lVar9,param_9,local_190);
  uVar8 = local_174;
  if (local_174 == 0xff) {
    (**(code **)(lVar5 + 0x28))();
    param_10 = uVar4;
    param_11 = lVar5;
  }
  uVar2 = local_170;
  *(undefined8 *)((long)auStack_1a0 + lVar1) = param_14;
  *(undefined8 *)((long)auStack_1a0 + lVar1 + 8) = uVar2;
  auStack_1a8[lVar1] = (char)uVar8;
  *(undefined8 *)((long)alStack_1d0 + lVar1 + 0x18) = param_10;
  *(long *)((long)alStack_1d0 + lVar1 + 0x20) = param_11;
  *(undefined **)((long)alStack_1d0 + lVar1 + 8) = puVar6;
  *(long *)((long)alStack_1d0 + lVar1 + 0x10) = lVar9;
  *(code **)((long)alStack_1d0 + lVar1) = FUN_1000872b4;
  auStack_1d8[lVar1] = (char)local_15c;
  *(undefined8 *)((long)&uStack_1e0 + lVar1) = local_188;
  FUN_100086778(&local_138,param_14,local_168,local_158,local_150,local_148,local_180,local_140,
                uVar10);
  (**(code **)(lVar11 + 8))(lVar9,lVar3);
  param_1[0x15] = uStack_90;
  param_1[0x14] = local_98;
  param_1[0x17] = uStack_80;
  param_1[0x16] = local_88;
  param_1[0x19] = uStack_70;
  param_1[0x18] = local_78;
  param_1[0xd] = uStack_d0;
  param_1[0xc] = local_d8;
  param_1[0xf] = uStack_c0;
  param_1[0xe] = local_c8;
  param_1[0x11] = uStack_b0;
  param_1[0x10] = local_b8;
  param_1[0x13] = uStack_a0;
  param_1[0x12] = local_a8;
  param_1[5] = uStack_110;
  param_1[4] = local_118;
  param_1[7] = uStack_100;
  param_1[6] = local_108;
  param_1[9] = uStack_f0;
  param_1[8] = local_f8;
  param_1[0xb] = uStack_e0;
  param_1[10] = local_e8;
  param_1[1] = uStack_130;
  *param_1 = local_138;
  param_1[3] = uStack_120;
  param_1[2] = local_128;
  return;
}

