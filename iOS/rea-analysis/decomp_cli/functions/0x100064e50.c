// rea decompile_all
// name: FUN_100064e50
// address: 0x100064e50
// body: available
// range: 0x100064e50-0x100065067 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100064e50(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 *param_8,
                  undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  byte param_13,undefined4 param_14,undefined8 param_15)

{
  undefined8 *puVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  undefined8 uVar5;
  undefined *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  undefined1 auStack_1d0 [8];
  undefined8 local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  uint local_19c;
  undefined8 local_198;
  undefined8 local_190;
  undefined4 local_184;
  undefined4 local_180;
  undefined3 uStack_17c;
  undefined4 local_f6;
  undefined2 local_f2;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  
  local_198 = param_12;
  local_19c = (uint)param_13;
  local_1a8 = param_11;
  lVar4 = 0;
  local_1c8 = param_6;
  local_1c0 = param_3;
  local_1b8 = param_4;
  local_1b0 = param_5;
  local_190 = param_7;
  local_184 = param_9;
  __sSqMa(0,param_15);
  lVar10 = *(long *)(lVar4 + -8);
  lVar11 = *(long *)(lVar10 + 0x40);
  uVar5 = local_1c8;
  FUN_100067074(local_1c8,local_190,param_2);
  local_190 = uVar5;
  (**(code **)(lVar10 + 0x10))(auStack_1d0 + -(lVar11 + 0xfU & 0xfffffffffffffff0),param_10,lVar4);
  uVar7 = (ulong)*(byte *)(lVar10 + 0x50);
  uVar9 = uVar7 + 0x18 & (uVar7 ^ 0xffffffffffffffff);
  uVar8 = lVar11 + uVar9 + 7 & 0xfffffffffffffff8;
  puVar6 = &DAT_1000f7eb0;
  _swift_allocObject(&DAT_1000f7eb0,uVar8 + 0x18,uVar7 | 7);
  *(undefined8 *)(puVar6 + 0x10) = param_15;
  (**(code **)(lVar10 + 0x20))
            (puVar6 + uVar9,auStack_1d0 + -(lVar11 + 0xfU & 0xfffffffffffffff0),lVar4);
  uVar5 = local_1b0;
  puVar1 = (undefined8 *)(puVar6 + uVar8);
  *puVar1 = local_1c0;
  puVar1[1] = local_1b8;
  puVar1[2] = local_1b0;
  uStack_88 = param_8[0xd];
  local_90 = param_8[0xc];
  uStack_78 = param_8[0xf];
  uStack_80 = param_8[0xe];
  local_70 = param_8[0x10];
  uStack_c8 = param_8[5];
  local_d0 = param_8[4];
  uStack_b8 = param_8[7];
  uStack_c0 = param_8[6];
  uStack_a8 = param_8[9];
  local_b0 = param_8[8];
  uStack_98 = param_8[0xb];
  uStack_a0 = param_8[10];
  uStack_e8 = param_8[1];
  local_f0 = *param_8;
  uStack_d8 = param_8[3];
  uStack_e0 = param_8[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar5);
  FUN_100064cb0(param_8,&local_180);
  uVar3 = local_198;
  uVar5 = local_1a8;
  uVar2 = local_19c & 1;
  FUN_10006518c(local_1a8,local_198,uVar2);
  param_1[0xc] = uStack_98;
  param_1[0xb] = uStack_a0;
  param_1[0xe] = uStack_88;
  param_1[0xd] = local_90;
  param_1[0x10] = uStack_78;
  param_1[0xf] = uStack_80;
  param_1[4] = uStack_d8;
  param_1[3] = uStack_e0;
  param_1[6] = uStack_c8;
  param_1[5] = local_d0;
  param_1[8] = uStack_b8;
  param_1[7] = uStack_c0;
  param_1[10] = uStack_a8;
  param_1[9] = local_b0;
  *param_1 = local_190;
  param_1[2] = uStack_e8;
  param_1[1] = local_f0;
  param_1[0x12] = 0;
  param_1[0x13] = 0;
  param_1[0x11] = local_70;
  *(undefined1 *)(param_1 + 0x14) = 6;
  *(char *)((long)param_1 + 0xa1) = (char)local_184;
  *(undefined4 *)((long)param_1 + 0xa2) = local_f6;
  *(undefined2 *)((long)param_1 + 0xa6) = local_f2;
  param_1[0x15] = uVar5;
  param_1[0x16] = uVar3;
  *(char *)(param_1 + 0x17) = (char)uVar2;
  *(undefined4 *)((long)param_1 + 0xb9) = local_180;
  *(uint *)((long)param_1 + 0xbc) = CONCAT31(uStack_17c,local_180._3_1_);
  param_1[0x18] = FUN_10006510c;
  param_1[0x19] = puVar6;
  return;
}

