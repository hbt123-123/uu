// rea decompile_all
// name: FUN_10063e8ec
// address: 0x10063e8ec
// body: available
// range: 0x10063e8ec-0x10063e96f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10063e93c to 0x100634178 FUN_100634178 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10063e8ec(undefined8 param_1,long param_2,ulong param_3,ulong param_4,ulong param_5,
                  ulong param_6)

{
  code *pcVar1;
  ulong uVar2;
  long *unaff_x20;
  
  if ((long)param_5 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063e964);
    (*pcVar1)();
  }
  uVar2 = *(ulong *)(*unaff_x20 + 0x10);
  if (uVar2 < param_5 || (long)uVar2 < (long)param_6) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063e968);
    (*pcVar1)();
  }
  if ((long)param_6 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10063e96c);
    (*pcVar1)();
  }
  if (*unaff_x20 + param_5 + 0x20 == param_2 + param_3) {
    if ((long)(param_4 >> 1) < (long)param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10063e970);
      (*pcVar1)();
    }
    if ((param_5 == param_3) && (param_4 >> 1 == param_6)) {
      return;
    }
  }
  FUN_100634178(param_5,param_6,param_1,param_2,param_3,param_4);
  return;
}

