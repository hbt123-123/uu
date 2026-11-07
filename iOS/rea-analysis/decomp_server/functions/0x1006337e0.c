// rea decompile_all
// name: FUN_1006337e0
// address: 0x1006337e0
// body: available
// range: 0x1006337e0-0x100633857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_1006337e0(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,ulong param_5)

{
  code *pcVar1;
  ulong uVar2;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100633840);
    (*pcVar1)();
  }
  param_5 = param_5 >> 1;
  if (SBORROW8(param_5,param_4)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100633844);
    (*pcVar1)();
  }
  if (((param_1 == 0) || (uVar2 = param_5, param_1 <= param_5 - param_4)) &&
     (uVar2 = param_4 + param_1, SCARRY8(param_4,param_1))) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100633858);
    (*pcVar1)();
  }
  if ((long)uVar2 < param_4) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100633848);
    (*pcVar1)();
  }
  if (param_4 <= (long)param_5) {
    if ((long)param_5 < (long)uVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100633850);
      (*pcVar1)();
    }
    if (-1 < (long)uVar2) {
      return param_2;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100633854);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x10063384c);
  (*pcVar1)();
}

