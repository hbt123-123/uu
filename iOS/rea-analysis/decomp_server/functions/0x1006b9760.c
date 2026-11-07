// rea decompile_all
// name: FUN_1006b9760
// address: 0x1006b9760
// body: available
// range: 0x1006b9760-0x1006b97ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 *
FUN_1006b9760(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5)

{
  undefined1 *puVar1;
  undefined1 auStack_4b8 [1144];
  
  _bzero(auStack_4b8,0x478);
  FUN_1006b7320(auStack_4b8,2);
  puVar1 = auStack_4b8;
  FUN_1006b952c(puVar1,param_1,param_2,param_3,param_4,0,0,param_5);
  FUN_1006b63a0(auStack_4b8);
  return puVar1;
}

