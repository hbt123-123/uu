// rea decompile_all
// name: FUN_100566240
// address: 0x100566240
// body: available
// range: 0x100566240-0x1005662a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100566240(undefined8 param_1,long param_2)

{
  long lVar1;
  float *pfVar2;
  float fVar3;
  
  lVar1 = *(long *)(param_2 + 0x10);
  __ss6HasherV8_combineyySuF(lVar1);
  if (lVar1 != 0) {
    pfVar2 = (float *)(param_2 + 0x20);
    do {
      fVar3 = 0.0;
      if (*pfVar2 != 0.0) {
        fVar3 = *pfVar2;
      }
      __ss6HasherV8_combineyys6UInt32VF(fVar3);
      lVar1 = lVar1 + -1;
      pfVar2 = pfVar2 + 1;
    } while (lVar1 != 0);
  }
  return;
}

