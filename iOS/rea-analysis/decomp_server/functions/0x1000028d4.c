// rea decompile_all
// name: FUN_1000028d4
// address: 0x1000028d4
// body: available
// range: 0x1000028d4-0x10000290b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000028d4(long param_1,int param_2,int param_3,int param_4,uint param_5,uint param_6)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (param_1 < 0xe) {
    param_2 = 1;
  }
  uVar1 = 2;
  if ((param_5 & param_6) == 0 && param_4 == 1) {
    uVar1 = 5;
  }
  uVar2 = 5;
  if (param_2 == 0 && param_3 == 1) {
    uVar2 = uVar1;
  }
  return uVar2;
}

