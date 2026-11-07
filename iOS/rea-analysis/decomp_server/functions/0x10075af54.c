// rea decompile_all
// name: SentryCrashDoctor::registerNameForFamily:paramIndex:
// address: 0x10075af54
// body: available
// range: 0x10075af54-0x10075afb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x18 bytes */

ID SentryCrashDoctor::registerNameForFamily_paramIndex_
             (ID param_1,SEL param_2,int param_3,int param_4)

{
  undefined **ppuVar1;
  
  if (param_3 == 3) {
    if (3 < param_4) {
      return 0;
    }
    ppuVar1 = &PTR_cf_rdi_1009e8e80;
  }
  else if (param_3 == 2) {
    if (3 < param_4) {
      return 0;
    }
    ppuVar1 = &PTR_cf_edi_1009e8e60;
  }
  else {
    if ((param_3 != 1) || (3 < param_4)) {
      return 0;
    }
    ppuVar1 = &PTR_cf_r0_1009e8e40;
  }
  return (ID)ppuVar1[(int)param_4];
}

