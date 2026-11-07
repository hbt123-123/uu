// rea decompile_all
// name: FUN_100198fa0
// address: 0x100198fa0
// body: available
// range: 0x100198fa0-0x100199033 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100199030 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100198fa0(void)

{
  long unaff_x20;
  
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_100199b18,0,0xd0000000000000a1,0x800000010088d6c0,0x626f7250706f7473,
                0xed00002928676e69,0x4b,0);
  if (*(ID *)(unaff_x20 + 0x20) != 0) {
    _objc_msgSend(*(ID *)(unaff_x20 + 0x20),"invalidate");
  }
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  return 0;
}

