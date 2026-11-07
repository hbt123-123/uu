// rea decompile_all
// name: FUN_10064afb0
// address: 0x10064afb0
// body: available
// range: 0x10064afb0-0x10064afeb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10064afb0(long *param_1,undefined8 *param_2)

{
  long lVar1;
  
  lVar1 = *param_1;
  FUN_10064b1b4(lVar1,param_1[1],(char)param_1[2],param_1[3],*param_2,param_2[1],
                *(undefined1 *)(param_2 + 2),param_2[3]);
  return lVar1 == -1;
}

