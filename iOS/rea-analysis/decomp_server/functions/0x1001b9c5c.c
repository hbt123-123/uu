// rea decompile_all
// name: FUN_1001b9c5c
// address: 0x1001b9c5c
// body: available
// range: 0x1001b9c5c-0x1001b9cd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001b9cd4 to 0x1007df19c _swift_deallocClassInstance (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b9c5c(void)

{
  long unaff_x20;
  
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1001b9c30,0,0xd000000000000099,0x800000010089ad60,0x74696e696564,
                0xe600000000000000,0x46,0);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x10));
  _swift_deallocClassInstance();
  return;
}

