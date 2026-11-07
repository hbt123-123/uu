// rea decompile_all
// name: FUN_10024eb48
// address: 0x10024eb48
// body: available
// range: 0x10024eb48-0x10024eb57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10024eb48(undefined8 param_1,undefined8 *param_2,long param_3,uint param_4)

{
  int iVar1;
  long lVar2;
  
  lVar2 = -1;
  if ((param_2 != (undefined8 *)0x0) && (param_4 < 3)) {
    iVar1 = _fseek((FILE *)*param_2,param_3,param_4);
    lVar2 = -(ulong)(iVar1 != 0);
  }
  return lVar2;
}

