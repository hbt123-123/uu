// rea decompile_all
// name: FUN_10039d108
// address: 0x10039d108
// body: available
// range: 0x10039d108-0x10039d17b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10039d174 to 0x1007de9c8 _objc_msgSend (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039d108(void)

{
  long lVar1;
  code *pcVar2;
  ID self;
  long unaff_x20;
  
  self = *(ID *)(unaff_x20 + 0x28);
  _objc_msgSend(self,"lock");
  lVar1 = *(long *)(unaff_x20 + 0x18) + -1;
  if (!SBORROW8(*(long *)(unaff_x20 + 0x18),1)) {
    *(long *)(unaff_x20 + 0x18) = lVar1;
    if (lVar1 == 0) {
      _flock(*(int *)(*(long *)(unaff_x20 + 0x10) + 0x10),8);
    }
    _objc_msgSend(self,"unlock");
    _objc_msgSend(*(ID *)(unaff_x20 + 0x20),"unlock");
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x10039d17c);
  (*pcVar2)();
}

