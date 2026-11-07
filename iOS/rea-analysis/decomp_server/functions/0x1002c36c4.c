// rea decompile_all
// name: FUN_1002c36c4
// address: 0x1002c36c4
// body: available
// range: 0x1002c36c4-0x1002c376b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002c36c4(long *param_1,undefined8 param_2,long param_3,long param_4,undefined8 param_5,
                  long *param_6)

{
  undefined1 *puVar1;
  long unaff_x21;
  undefined1 auStack_68 [24];
  long local_50;
  undefined8 uStack_48;
  
  local_50 = param_4;
  uStack_48 = param_5;
  FUN_1000efc08(auStack_68);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))();
  puVar1 = auStack_68;
  FUN_1003500bc();
  if (unaff_x21 == 0) {
    FUN_10003f094(auStack_68);
    *param_1 = (long)puVar1;
    param_1[1] = param_3;
  }
  else {
    FUN_10003f094(auStack_68);
    *param_6 = unaff_x21;
  }
  return;
}

