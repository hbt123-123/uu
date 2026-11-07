// rea decompile_all
// name: FUN_100693708
// address: 0x100693708
// body: available
// range: 0x100693708-0x100693767 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100693708(long *param_1)

{
  long *plVar1;
  __darwin_ct_rune_t _Var2;
  long *plVar3;
  
  plVar3 = (long *)*param_1;
  plVar1 = (long *)(*param_1 + param_1[1]);
  if (-1 < (char)*(byte *)((long)param_1 + 0x17)) {
    plVar3 = param_1;
    plVar1 = (long *)((long)param_1 + (ulong)*(byte *)((long)param_1 + 0x17));
  }
  for (; plVar3 != plVar1; plVar3 = (long *)((long)plVar3 + 1)) {
    _Var2 = ___tolower((int)(char)*plVar3);
    *(char *)plVar3 = (char)_Var2;
  }
  return param_1;
}

