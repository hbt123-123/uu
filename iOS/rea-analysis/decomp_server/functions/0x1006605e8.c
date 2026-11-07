// rea decompile_all
// name: FUN_1006605e8
// address: 0x1006605e8
// body: available
// range: 0x1006605e8-0x10066067b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006605e8(ulong param_1,long param_2,long param_3,char param_4,long param_5)

{
  ulong uVar1;
  code *pcVar2;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10066066c);
    (*pcVar2)();
  }
  if (param_4 == '\0') {
    if ((param_1 == 0) || (param_2 = param_3, param_1 == 1)) {
      return param_2;
    }
  }
  else if (param_4 == '\x01') {
    if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100660670);
      (*pcVar2)();
    }
    if ((long)param_1 < param_3 - param_2) {
      uVar1 = param_2 + param_1;
      if (SCARRY8(param_2,param_1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100660674);
        (*pcVar2)();
      }
      if (-1 < (long)uVar1) {
        if (uVar1 < *(ulong *)(param_5 + 0x10)) {
          return *(long *)(param_5 + uVar1 * 8 + 0x20);
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10066067c);
        (*pcVar2)();
      }
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100660678);
      (*pcVar2)();
    }
  }
  else if (param_1 < *(ulong *)(param_5 + 0x10)) {
    return *(long *)(param_5 + param_1 * 8 + 0x20);
  }
  return 0;
}

