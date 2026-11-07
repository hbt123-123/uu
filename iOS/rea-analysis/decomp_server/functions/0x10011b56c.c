// rea decompile_all
// name: FUN_10011b56c
// address: 0x10011b56c
// body: available
// range: 0x10011b56c-0x10011b623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

bool FUN_10011b56c(undefined8 param_1,undefined8 param_2,long param_3,long param_4)

{
  code *pcVar1;
  long lVar2;
  
  if (0x7fffffff < param_4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10011b618);
    (*pcVar1)();
  }
  if ((param_3 < -0x80000000) || (param_4 < -0x80000000)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10011b61c);
    (*pcVar1)();
  }
  if (0x7fffffff < param_3) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10011b620);
    (*pcVar1)();
  }
  if (!SBORROW4(0,(int)param_3)) {
    lVar2 = 0;
    _CGEventCreateScrollWheelEvent2(0,0,2,param_4,-(int)param_3,0);
    if (lVar2 != 0) {
      _CGEventSetLocation(param_1,param_2,lVar2);
      _CGEventPost(0,lVar2);
    }
    return lVar2 != 0;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10011b624);
  (*pcVar1)();
}

