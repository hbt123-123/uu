// rea decompile_all
// name: FUN_100255d28
// address: 0x100255d28
// body: available
// range: 0x100255d28-0x100255d67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100255d4c to 0x1007df52c _swift_unknownObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100255d5c to 0x1007dc9e8 _$ss18_CocoaArrayWrapperVyyXlSicig (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100255d28(ulong param_1,ulong param_2)

{
  ulong uVar1;
  code *pcVar2;
  
  if (param_2 >> 0x3e != 0) {
    uVar1 = param_2 & 0xffffffffffffff8;
    if ((long)param_2 < 0) {
      uVar1 = param_2;
    }
    __ss18_CocoaArrayWrapperVyyXlSicig(param_1,uVar1);
    return;
  }
  if (-1 < (long)param_1) {
    if (param_1 < *(ulong *)((param_2 & 0xffffffffffffff8) + 0x10)) {
      _swift_unknownObjectRetain
                (*(undefined8 *)((param_2 & 0xffffffffffffff8) + param_1 * 8 + 0x20));
      return;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100255d68);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100255d64);
  (*pcVar2)();
}

