// rea decompile_all
// name: FUN_100223f1c
// address: 0x100223f1c
// body: available
// range: 0x100223f1c-0x100223f7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100223f78 to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100223f1c(code *param_1)

{
  code *pcVar1;
  
  pcVar1 = param_1;
  FUN_1002236f4();
  _swift_allocObject();
  *(undefined8 *)(pcVar1 + 0x18) = 0xc000000000000000;
  *(undefined8 *)(pcVar1 + 0x10) = 0;
  *(undefined8 *)(pcVar1 + 0x28) = 0;
  *(undefined8 *)(pcVar1 + 0x30) = 0;
  *(undefined8 *)(pcVar1 + 0x20) = 0x194;
  (*param_1)((ulong)pcVar1 | 0x8000000000000000);
  _swift_release(pcVar1);
  return;
}

