// rea decompile_all
// name: FUN_100045900
// address: 0x100045900
// body: available
// range: 0x100045900-0x1000459c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100045900(long param_1,long param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  
  if (param_2 < -0x80000000) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000459ac);
    (*pcVar1)();
  }
  if (0x7fffffff < param_2) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1000459b0);
    (*pcVar1)();
  }
  if (*(int *)(param_1 + 4) == (int)param_2) {
    if (param_3 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000459b4);
      (*pcVar1)();
    }
    if (0x7fffffff < param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000459b8);
      (*pcVar1)();
    }
    if (*(int *)(param_1 + 8) == (int)param_3) {
      param_2 = param_2 << (param_4 & 1);
      if (param_2 < -0x80000000) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000459bc);
        (*pcVar1)();
      }
      if (0x7fffffff < param_2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000459c0);
        (*pcVar1)();
      }
      if (*(int *)(param_1 + 0xc) == (int)param_2) {
        param_3 = param_3 << (param_4 & 1);
        if (param_3 < -0x80000000) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x1000459c4);
          (*pcVar1)();
        }
        if (param_3 < 0x80000000) {
          return *(int *)(param_1 + 0x10) == (int)param_3;
        }
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1000459c8);
        (*pcVar1)();
      }
    }
  }
  return false;
}

