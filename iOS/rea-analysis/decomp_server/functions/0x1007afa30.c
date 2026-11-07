// rea decompile_all
// name: FUN_1007afa30
// address: 0x1007afa30
// body: available
// range: 0x1007afa30-0x1007afabb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1007afa30(undefined8 param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  int iVar2;
  
  lVar1 = param_2;
  FUN_1007afb74(param_2,param_3,"<%s: 0x%016x>");
  lVar1 = param_2 + (int)lVar1;
  iVar2 = (int)lVar1;
  FUN_1007afb74(lVar1,((int)param_2 + (int)param_3) - iVar2,": %lld");
  return (iVar2 + (int)lVar1) - (int)param_2;
}

