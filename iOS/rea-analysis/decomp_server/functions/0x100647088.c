// rea decompile_all
// name: FUN_100647088
// address: 0x100647088
// body: available
// range: 0x100647088-0x100647127 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006470f8 to 0x100645d2c FUN_100645d2c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100647088(ulong param_1,long param_2)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_x20;
  ulong uVar3;
  
  FUN_100646b94();
  uVar3 = *(ulong *)(unaff_x20 + 0x18);
  if (*(long *)(uVar3 + 0x10) <= (long)param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100647110);
    (*pcVar1)();
  }
  uVar2 = uVar3;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar2 & 1) == 0) {
    FUN_1006541a4();
  }
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100647124);
    (*pcVar1)();
  }
  uVar2 = *(ulong *)(uVar3 + 0x10);
  if (uVar2 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100647128);
    (*pcVar1)();
  }
  *(long *)(uVar3 + param_1 * 8 + 0x20) = param_2;
  *(ulong *)(unaff_x20 + 0x18) = uVar3;
  if ((param_2 == 0) && (uVar2 - 1 == param_1)) {
    FUN_100645d2c();
    return;
  }
  return;
}

