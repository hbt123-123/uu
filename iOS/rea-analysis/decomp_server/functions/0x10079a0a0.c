// rea decompile_all
// name: FUN_10079a0a0
// address: 0x10079a0a0
// body: available
// range: 0x10079a0a0-0x10079a113 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_10079a0a0(ulong param_1)

{
  ulong uVar1;
  void *pvVar2;
  
  uVar1 = param_1;
  FUN_100741008(param_1,0,0);
  if (0 < (int)uVar1) {
    pvVar2 = _malloc(uVar1 & 0xffffffff);
    if (pvVar2 == (void *)0x0) {
      return (void *)0x0;
    }
    FUN_100741008(param_1,pvVar2,uVar1);
    if (0 < (int)param_1) {
      return pvVar2;
    }
    _free(pvVar2);
  }
  return (void *)0x0;
}

