// rea decompile_all
// name: FUN_100256f34
// address: 0x100256f34
// body: available
// range: 0x100256f34-0x100256f9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100256f80 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100256f34(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  
  if (DAT_100a7fea0 != -1) {
    _swift_once(&DAT_100a7fea0,FUN_10025674c);
  }
  lVar2 = *(long *)(DAT_100b36400 + 0x20);
  if (lVar2 != 0) {
    _swift_retain(lVar2);
    FUN_100257674(param_1);
    _swift_release(lVar2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100256fa0);
  (*pcVar1)();
}

