// rea decompile_all
// name: FUN_100737b5c
// address: 0x100737b5c
// body: available
// range: 0x100737b5c-0x100737bdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100737b5c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  undefined4 local_34;
  
  if (((param_3 != 0) &&
      ((lVar1 = param_3, FUN_1007af77c(), (int)lVar1 == 0 ||
       (lVar1 = param_3, FUN_1007af784(), (int)lVar1 != 0)))) &&
     ((lVar1 = param_3, FUN_1007aebf4(), (int)lVar1 != 0 ||
      (lVar1 = param_3, FUN_100737ecc(), (int)lVar1 != 0)))) {
    local_34 = 0xf;
    FUN_100737be0(param_1,param_2,param_3,&local_34);
  }
  return;
}

