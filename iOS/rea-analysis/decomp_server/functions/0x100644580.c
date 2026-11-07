// rea decompile_all
// name: FUN_100644580
// address: 0x100644580
// body: available
// range: 0x100644580-0x100644613 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100644580(ulong param_1,long param_2,long param_3,char param_4,long param_5)

{
  code *pcVar1;
  bool bVar2;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100644604);
    (*pcVar1)();
  }
  if (param_4 == '\0') {
    if ((param_1 == 0) || (param_2 = param_3, param_1 == 1)) {
      return param_2;
    }
  }
  else if (param_4 == '\x01') {
    if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100644608);
      (*pcVar1)();
    }
    if ((long)param_1 < param_3 - param_2) {
      bVar2 = SCARRY8(param_2,param_1);
      param_1 = param_2 + param_1;
      if (bVar2) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10064460c);
        (*pcVar1)();
      }
      if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100644610);
        (*pcVar1)();
      }
      if (*(ulong *)(param_5 + 0x10) <= param_1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100644614);
        (*pcVar1)();
      }
LAB_1006445ec:
      return *(long *)(param_5 + param_1 * 8 + 0x20);
    }
  }
  else if (param_1 < *(ulong *)(param_5 + 0x10)) goto LAB_1006445ec;
  return 0;
}

