// rea decompile_all
// name: FUN_10040eab0
// address: 0x10040eab0
// body: available
// range: 0x10040eab0-0x10040eb0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10040eab0(undefined1 *param_1,undefined1 param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined7 uStack_58;
  undefined1 local_51;
  undefined7 uStack_50;
  undefined1 uStack_49;
  undefined7 uStack_48;
  undefined1 local_41;
  undefined7 uStack_40;
  undefined1 uStack_39;
  undefined7 uStack_38;
  undefined1 local_31;
  undefined7 uStack_30;
  undefined1 uStack_29;
  undefined7 uStack_28;
  undefined1 local_21;
  undefined7 uStack_20;
  undefined1 uStack_19;
  undefined7 uStack_18;
  undefined1 local_11;
  undefined7 uStack_10;
  undefined1 uStack_9;
  
  uStack_29 = (undefined1)param_3[5];
  uStack_28 = (undefined7)((ulong)param_3[5] >> 8);
  local_31 = (undefined1)param_3[4];
  uStack_30 = (undefined7)((ulong)param_3[4] >> 8);
  uStack_39 = (undefined1)param_3[3];
  uStack_38 = (undefined7)((ulong)param_3[3] >> 8);
  local_41 = (undefined1)param_3[2];
  uStack_40 = (undefined7)((ulong)param_3[2] >> 8);
  uStack_19 = (undefined1)param_3[7];
  uStack_18 = (undefined7)((ulong)param_3[7] >> 8);
  local_21 = (undefined1)param_3[6];
  uStack_20 = (undefined7)((ulong)param_3[6] >> 8);
  uVar1 = param_3[9];
  uStack_9 = (undefined1)uVar1;
  local_11 = (undefined1)param_3[8];
  uStack_10 = (undefined7)((ulong)param_3[8] >> 8);
  uStack_49 = (undefined1)param_3[1];
  uStack_48 = (undefined7)((ulong)param_3[1] >> 8);
  local_51 = (undefined1)*param_3;
  uStack_50 = (undefined7)((ulong)*param_3 >> 8);
  *(ulong *)(param_1 + 0x29) = CONCAT17(uStack_29,uStack_30);
  *(ulong *)(param_1 + 0x21) = CONCAT17(local_31,uStack_38);
  *(ulong *)(param_1 + 0x39) = CONCAT17(uStack_19,uStack_20);
  *(ulong *)(param_1 + 0x31) = CONCAT17(local_21,uStack_28);
  *(ulong *)(param_1 + 0x49) = CONCAT17(uStack_9,uStack_10);
  *(ulong *)(param_1 + 0x41) = CONCAT17(local_11,uStack_18);
  *(ulong *)(param_1 + 9) = CONCAT17(uStack_49,uStack_50);
  *(ulong *)(param_1 + 1) = CONCAT17(local_51,uStack_58);
  *param_1 = param_2;
  *(undefined8 *)(param_1 + 0x50) = uVar1;
  *(ulong *)(param_1 + 0x19) = CONCAT17(uStack_39,uStack_40);
  *(ulong *)(param_1 + 0x11) = CONCAT17(local_41,uStack_48);
  return;
}

