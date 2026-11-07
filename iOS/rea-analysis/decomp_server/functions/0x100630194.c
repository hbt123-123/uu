// rea decompile_all
// name: FUN_100630194
// address: 0x100630194
// body: available
// range: 0x100630194-0x1006301eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_100630194(long param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5)

{
  long lVar1;
  code *pcVar2;
  
  if (param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006301e0);
    (*pcVar2)();
  }
  param_5 = param_5 >> 1;
  if (!SBORROW8(param_4,param_5)) {
    lVar1 = param_4;
    if ((long)(param_4 - param_5) <= -param_1 || 0 < (long)(param_4 - param_5)) {
      lVar1 = param_5 - param_1;
    }
    if (lVar1 <= (long)param_5) {
      if (param_4 <= lVar1) {
        return param_2;
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006301ec);
      (*pcVar2)();
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006301e8);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1006301e4);
  (*pcVar2)();
}

