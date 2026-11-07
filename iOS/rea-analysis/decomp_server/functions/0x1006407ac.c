// rea decompile_all
// name: FUN_1006407ac
// address: 0x1006407ac
// body: available
// range: 0x1006407ac-0x1006407ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006407fc to 0x1007df19c _swift_deallocClassInstance (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006407ac(void)

{
  long unaff_x20;
  
  FUN_10003f094(unaff_x20 + 0x18);
  FUN_100640764(unaff_x20 + 0x48);
  FUN_100640764(unaff_x20 + 0x70);
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xa0));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xa8));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xb0));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 0xb8));
  _swift_deallocClassInstance();
  return;
}

