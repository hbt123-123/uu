// rea decompile_all
// name: FUN_1005fe2b8
// address: 0x1005fe2b8
// body: available
// range: 0x1005fe2b8-0x1005fe393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005fe2b8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
                  undefined4 param_9,undefined8 *param_10)

{
  undefined4 uStack_b8;
  undefined4 local_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 local_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 local_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 local_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  undefined4 uStack_10;
  undefined4 uStack_c;
  undefined4 uStack_8;
  
  uStack_3c = (undefined4)param_10[0xf];
  uStack_38 = (undefined4)((ulong)param_10[0xf] >> 0x20);
  local_44 = (undefined4)param_10[0xe];
  uStack_40 = (undefined4)((ulong)param_10[0xe] >> 0x20);
  uStack_2c = (undefined4)param_10[0x11];
  uStack_28 = (undefined4)((ulong)param_10[0x11] >> 0x20);
  local_34 = (undefined4)param_10[0x10];
  uStack_30 = (undefined4)((ulong)param_10[0x10] >> 0x20);
  uStack_1c = (undefined4)param_10[0x13];
  uStack_18 = (undefined4)((ulong)param_10[0x13] >> 0x20);
  local_24 = (undefined4)param_10[0x12];
  uStack_20 = (undefined4)((ulong)param_10[0x12] >> 0x20);
  uStack_c = (undefined4)param_10[0x15];
  uStack_8 = (undefined4)((ulong)param_10[0x15] >> 0x20);
  local_14 = (undefined4)param_10[0x14];
  uStack_10 = (undefined4)((ulong)param_10[0x14] >> 0x20);
  uStack_7c = (undefined4)param_10[7];
  uStack_78 = (undefined4)((ulong)param_10[7] >> 0x20);
  local_84 = (undefined4)param_10[6];
  uStack_80 = (undefined4)((ulong)param_10[6] >> 0x20);
  uStack_6c = (undefined4)param_10[9];
  uStack_68 = (undefined4)((ulong)param_10[9] >> 0x20);
  local_74 = (undefined4)param_10[8];
  uStack_70 = (undefined4)((ulong)param_10[8] >> 0x20);
  uStack_5c = (undefined4)param_10[0xb];
  uStack_58 = (undefined4)((ulong)param_10[0xb] >> 0x20);
  local_64 = (undefined4)param_10[10];
  uStack_60 = (undefined4)((ulong)param_10[10] >> 0x20);
  uStack_4c = (undefined4)param_10[0xd];
  uStack_48 = (undefined4)((ulong)param_10[0xd] >> 0x20);
  local_54 = (undefined4)param_10[0xc];
  uStack_50 = (undefined4)((ulong)param_10[0xc] >> 0x20);
  uStack_ac = (undefined4)param_10[1];
  uStack_a8 = (undefined4)((ulong)param_10[1] >> 0x20);
  local_b4 = (undefined4)*param_10;
  uStack_b0 = (undefined4)((ulong)*param_10 >> 0x20);
  uStack_9c = (undefined4)param_10[3];
  uStack_98 = (undefined4)((ulong)param_10[3] >> 0x20);
  local_a4 = (undefined4)param_10[2];
  uStack_a0 = (undefined4)((ulong)param_10[2] >> 0x20);
  uStack_8c = (undefined4)param_10[5];
  uStack_88 = (undefined4)((ulong)param_10[5] >> 0x20);
  local_94 = (undefined4)param_10[4];
  uStack_90 = (undefined4)((ulong)param_10[4] >> 0x20);
  *(ulong *)((long)param_1 + 0xc4) = CONCAT44(uStack_2c,uStack_30);
  *(ulong *)((long)param_1 + 0xbc) = CONCAT44(local_34,uStack_38);
  *(ulong *)((long)param_1 + 0xd4) = CONCAT44(uStack_1c,uStack_20);
  *(ulong *)((long)param_1 + 0xcc) = CONCAT44(local_24,uStack_28);
  *(ulong *)((long)param_1 + 0xe4) = CONCAT44(uStack_c,uStack_10);
  *(ulong *)((long)param_1 + 0xdc) = CONCAT44(local_14,uStack_18);
  *(ulong *)((long)param_1 + 0x84) = CONCAT44(uStack_6c,uStack_70);
  *(ulong *)((long)param_1 + 0x7c) = CONCAT44(local_74,uStack_78);
  *(ulong *)((long)param_1 + 0x94) = CONCAT44(uStack_5c,uStack_60);
  *(ulong *)((long)param_1 + 0x8c) = CONCAT44(local_64,uStack_68);
  *(ulong *)((long)param_1 + 0xa4) = CONCAT44(uStack_4c,uStack_50);
  *(ulong *)((long)param_1 + 0x9c) = CONCAT44(local_54,uStack_58);
  *(ulong *)((long)param_1 + 0xb4) = CONCAT44(uStack_3c,uStack_40);
  *(ulong *)((long)param_1 + 0xac) = CONCAT44(local_44,uStack_48);
  *(ulong *)((long)param_1 + 0x44) = CONCAT44(uStack_ac,uStack_b0);
  *(ulong *)((long)param_1 + 0x3c) = CONCAT44(local_b4,uStack_b8);
  *(ulong *)((long)param_1 + 0x54) = CONCAT44(uStack_9c,uStack_a0);
  *(ulong *)((long)param_1 + 0x4c) = CONCAT44(local_a4,uStack_a8);
  *(ulong *)((long)param_1 + 100) = CONCAT44(uStack_8c,uStack_90);
  *(ulong *)((long)param_1 + 0x5c) = CONCAT44(local_94,uStack_98);
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  param_1[3] = param_5;
  param_1[4] = param_6;
  param_1[5] = param_7;
  *(int *)(param_1 + 6) = (int)param_8;
  *(byte *)((long)param_1 + 0x34) = (byte)((ulong)param_8 >> 0x20) & 1;
  *(undefined4 *)(param_1 + 7) = param_9;
  *(undefined4 *)((long)param_1 + 0xec) = uStack_8;
  *(ulong *)((long)param_1 + 0x74) = CONCAT44(uStack_7c,uStack_80);
  *(ulong *)((long)param_1 + 0x6c) = CONCAT44(local_84,uStack_88);
  return;
}

