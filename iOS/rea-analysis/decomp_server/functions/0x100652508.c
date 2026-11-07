// rea decompile_all
// name: thunk_FUN_100652670
// address: 0x100652508
// body: available
// range: 0x100652508-0x10065250b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_100652670(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  long lVar1;
  undefined1 auStack_60 [8];
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined1 uStack_38;
  
  lVar1 = *(long *)(*(long *)(param_3 + -8) + 0x40);
  (**(code **)(*(long *)(param_3 + -8) + 0x10))
            (auStack_60 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_2,param_3);
  FUN_100651a3c(&uStack_58,auStack_60 + -(lVar1 + 0xfU & 0xfffffffffffffff0),param_3,param_4);
  param_1[1] = uStack_50;
  *param_1 = uStack_58;
  param_1[3] = uStack_40;
  param_1[2] = uStack_48;
  *(undefined1 *)(param_1 + 4) = uStack_38;
  return;
}

