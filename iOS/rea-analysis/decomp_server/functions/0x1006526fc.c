// rea decompile_all
// name: FUN_1006526fc
// address: 0x1006526fc
// body: available
// range: 0x1006526fc-0x10065278f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006526fc(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 local_60;
  undefined8 uStack_58;
  byte local_50;
  undefined8 local_48;
  undefined1 local_40;
  
  lVar1 = (long)&local_60 - (*(long *)(*(long *)(param_3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))(lVar1,param_2,param_3);
  FUN_100651a3c(&local_60,lVar1,param_3,param_4);
  param_1[1] = uStack_58;
  *param_1 = local_60;
  param_1[2] = (ulong)local_50;
  param_1[3] = local_48;
  *(undefined1 *)(param_1 + 4) = local_40;
  return;
}

