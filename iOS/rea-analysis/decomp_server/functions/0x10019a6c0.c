// rea decompile_all
// name: FUN_10019a6c0
// address: 0x10019a6c0
// body: available
// range: 0x10019a6c0-0x10019a73b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019a6c0(undefined8 param_1,long param_2)

{
  undefined1 auStack_80 [16];
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 local_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  uStack_28 = *(undefined8 *)(param_2 + 0x20);
  uStack_30 = *(undefined8 *)(param_2 + 0x18);
  uStack_38 = *(undefined8 *)(param_2 + 0x30);
  local_40 = *(undefined8 *)(param_2 + 0x28);
  uStack_68 = *(undefined8 *)(param_2 + 0x20);
  local_70 = *(undefined8 *)(param_2 + 0x18);
  uStack_58 = *(undefined8 *)(param_2 + 0x30);
  uStack_60 = *(undefined8 *)(param_2 + 0x28);
  uStack_48 = *(undefined8 *)(param_2 + 0x40);
  local_50 = *(undefined8 *)(param_2 + 0x38);
  FUN_100102fb4(&uStack_30,auStack_80);
  FUN_100102fb4(&local_40,auStack_80);
  FUN_10061630c(&local_70);
  FUN_1000a9ec8(&uStack_30);
  FUN_1000a9ec8(&local_40);
  return;
}

