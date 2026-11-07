// rea decompile_all
// name: FUN_100495a08
// address: 0x100495a08
// body: available
// range: 0x100495a08-0x100495ac3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100495ac0 to 0x100006cdc FUN_100006cdc (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100495a08(long param_1)

{
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 8));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x18));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x28));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x38));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x48));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x58));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x68));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x78));
  _swift_bridgeObjectRelease(*(undefined8 *)(param_1 + 0x80));
  FUN_100006cdc(*(undefined8 *)(param_1 + 0x88),*(undefined8 *)(param_1 + 0x90));
  if (*(ulong *)(param_1 + 0xa8) >> 0x3c < 0xf) {
    FUN_100006cdc(*(undefined8 *)(param_1 + 0xa0));
  }
  if (*(ulong *)(param_1 + 0xc0) >> 0x3c < 0xf) {
    FUN_100006cdc(*(undefined8 *)(param_1 + 0xb8));
  }
  if (0xe < *(ulong *)(param_1 + 0xd8) >> 0x3c) {
    return;
  }
  FUN_100006cdc(*(undefined8 *)(param_1 + 0xd0));
  return;
}

