// rea decompile_all
// name: FUN_1005fdb90
// address: 0x1005fdb90
// body: available
// range: 0x1005fdb90-0x1005fdc2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005fdb90(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined4 param_8,
                  undefined4 param_9,undefined8 param_10,undefined8 param_11,undefined8 param_12,
                  undefined8 param_13,undefined8 param_14,byte param_15,undefined4 param_16,
                  undefined8 *param_17,undefined8 param_18)

{
  undefined3 uStack_50;
  undefined5 local_4d;
  undefined3 uStack_48;
  undefined5 uStack_45;
  undefined3 uStack_40;
  undefined5 local_3d;
  undefined3 uStack_38;
  undefined5 uStack_35;
  undefined3 uStack_30;
  undefined5 local_2d;
  undefined3 uStack_28;
  undefined5 uStack_25;
  undefined3 uStack_20;
  undefined5 local_1d;
  undefined3 uStack_18;
  undefined5 uStack_15;
  undefined4 uStack_10;
  
  uStack_35 = (undefined5)param_17[3];
  uStack_30 = (undefined3)((ulong)param_17[3] >> 0x28);
  local_3d = (undefined5)param_17[2];
  uStack_38 = (undefined3)((ulong)param_17[2] >> 0x28);
  uStack_25 = (undefined5)param_17[5];
  uStack_20 = (undefined3)((ulong)param_17[5] >> 0x28);
  local_2d = (undefined5)param_17[4];
  uStack_28 = (undefined3)((ulong)param_17[4] >> 0x28);
  uStack_15 = (undefined5)param_17[7];
  local_1d = (undefined5)param_17[6];
  uStack_18 = (undefined3)((ulong)param_17[6] >> 0x28);
  uStack_10 = CONCAT13(*(undefined1 *)(param_17 + 8),(int3)((ulong)param_17[7] >> 0x28));
  uStack_45 = (undefined5)param_17[1];
  uStack_40 = (undefined3)((ulong)param_17[1] >> 0x28);
  local_4d = (undefined5)*param_17;
  uStack_48 = (undefined3)((ulong)*param_17 >> 0x28);
  *param_1 = param_3;
  param_1[1] = param_4;
  *(int *)(param_1 + 2) = (int)param_5;
  *(byte *)((long)param_1 + 0x14) = (byte)((ulong)param_5 >> 0x20) & 1;
  param_1[3] = param_6;
  param_1[4] = param_7;
  *(undefined4 *)(param_1 + 5) = param_8;
  *(undefined4 *)((long)param_1 + 0x2c) = param_9;
  param_1[6] = param_2;
  param_1[8] = param_13;
  param_1[7] = param_12;
  param_1[9] = param_14;
  *(byte *)(param_1 + 10) = param_15 & 1;
  *(ulong *)((long)param_1 + 0x69) = CONCAT53(uStack_35,uStack_38);
  *(ulong *)((long)param_1 + 0x61) = CONCAT53(local_3d,uStack_40);
  *(ulong *)((long)param_1 + 0x79) = CONCAT53(uStack_25,uStack_28);
  *(ulong *)((long)param_1 + 0x71) = CONCAT53(local_2d,uStack_30);
  *(ulong *)((long)param_1 + 0x89) = CONCAT53(uStack_15,uStack_18);
  *(ulong *)((long)param_1 + 0x81) = CONCAT53(local_1d,uStack_20);
  *(undefined4 *)((long)param_1 + 0x91) = uStack_10;
  *(ulong *)((long)param_1 + 0x59) = CONCAT53(uStack_45,uStack_48);
  *(ulong *)((long)param_1 + 0x51) = CONCAT53(local_4d,uStack_50);
  param_1[0x13] = param_18;
  param_1[0x14] = param_10;
  param_1[0x15] = param_11;
  return;
}

