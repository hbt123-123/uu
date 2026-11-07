// rea decompile_all
// name: FUN_1005661dc
// address: 0x1005661dc
// body: available
// range: 0x1005661dc-0x10056623f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005661dc(undefined8 param_1,long param_2)

{
  long lVar1;
  double *pdVar2;
  double dVar3;
  
  lVar1 = *(long *)(param_2 + 0x10);
  __ss6HasherV8_combineyySuF(lVar1);
  if (lVar1 != 0) {
    pdVar2 = (double *)(param_2 + 0x20);
    do {
      dVar3 = 0.0;
      if (*pdVar2 != 0.0) {
        dVar3 = *pdVar2;
      }
      __ss6HasherV8_combineyys6UInt64VF(dVar3);
      lVar1 = lVar1 + -1;
      pdVar2 = pdVar2 + 1;
    } while (lVar1 != 0);
  }
  return;
}

