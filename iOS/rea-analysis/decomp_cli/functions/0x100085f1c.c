// rea decompile_all
// name: FUN_100085f1c
// address: 0x100085f1c
// body: available
// range: 0x100085f1c-0x100085faf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100085fac to 0x1000c2cb4 _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100085f1c(ulong *param_1)

{
  if (1 < *param_1) {
    _swift_bridgeObjectRelease();
  }
  _swift_bridgeObjectRelease(param_1[3]);
  _swift_bridgeObjectRelease(param_1[4]);
  _swift_bridgeObjectRelease(param_1[5]);
  _swift_bridgeObjectRelease(param_1[8]);
  if (((param_1[0xb] & param_1[0xc] ^ 0xffffffffffffffff) & 0xf000000000000007) != 0) {
    FUN_10005f5ac(param_1[9],param_1[10]);
  }
  _swift_bridgeObjectRelease(param_1[0xe]);
  _swift_bridgeObjectRelease(param_1[0x11]);
  FUN_10005e218(param_1[0x12],param_1[0x13],(char)param_1[0x14]);
  FUN_100085fb0(param_1[0x15],param_1[0x16],(char)param_1[0x17]);
  _swift_release(param_1[0x19]);
  return;
}

