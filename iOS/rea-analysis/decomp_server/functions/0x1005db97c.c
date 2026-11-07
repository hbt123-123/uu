// rea decompile_all
// name: FUN_1005db97c
// address: 0x1005db97c
// body: available
// range: 0x1005db97c-0x1005db9fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005db97c(undefined1 *param_1,undefined8 *param_2)

{
  undefined1 auStack_a8 [64];
  undefined7 uStack_68;
  undefined1 local_61;
  undefined7 uStack_60;
  undefined1 uStack_59;
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
  
  uStack_59 = (undefined1)param_2[1];
  uStack_58 = (undefined7)((ulong)param_2[1] >> 8);
  local_61 = (undefined1)*param_2;
  uStack_60 = (undefined7)((ulong)*param_2 >> 8);
  uStack_49 = (undefined1)param_2[3];
  uStack_48 = (undefined7)((ulong)param_2[3] >> 8);
  local_51 = (undefined1)param_2[2];
  uStack_50 = (undefined7)((ulong)param_2[2] >> 8);
  uStack_39 = (undefined1)param_2[5];
  uStack_38 = (undefined7)((ulong)param_2[5] >> 8);
  local_41 = (undefined1)param_2[4];
  uStack_40 = (undefined7)((ulong)param_2[4] >> 8);
  uStack_29 = (undefined1)param_2[7];
  uStack_28 = (undefined7)((ulong)param_2[7] >> 8);
  local_31 = (undefined1)param_2[6];
  uStack_30 = (undefined7)((ulong)param_2[6] >> 8);
  FUN_1005dd730(param_2,auStack_a8);
  *(ulong *)(param_1 + 0x19) = CONCAT17(uStack_49,uStack_50);
  *(ulong *)(param_1 + 0x11) = CONCAT17(local_51,uStack_58);
  *(ulong *)(param_1 + 0x29) = CONCAT17(uStack_39,uStack_40);
  *(ulong *)(param_1 + 0x21) = CONCAT17(local_41,uStack_48);
  *(ulong *)(param_1 + 0x39) = CONCAT17(uStack_29,uStack_30);
  *(ulong *)(param_1 + 0x31) = CONCAT17(local_31,uStack_38);
  *param_1 = 1;
  *(ulong *)(param_1 + 9) = CONCAT17(uStack_59,uStack_60);
  *(ulong *)(param_1 + 1) = CONCAT17(local_61,uStack_68);
  *(ulong *)(param_1 + 0x40) = CONCAT71(uStack_28,uStack_29);
  *(undefined8 *)(param_1 + 0x48) = 0;
  *(undefined8 *)(param_1 + 0x50) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0xe000000000000000;
  *(undefined8 *)(param_1 + 0x60) = 0;
  *(undefined8 *)(param_1 + 0x68) = 0xe000000000000000;
  return;
}

