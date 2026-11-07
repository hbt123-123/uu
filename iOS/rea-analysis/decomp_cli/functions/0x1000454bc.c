// rea decompile_all
// name: FUN_1000454bc
// address: 0x1000454bc
// body: available
// range: 0x1000454bc-0x100045517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100045514 to 0x1000c2aa4 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000454bc(undefined8 *param_1)

{
  FUN_100044b38(*param_1,param_1[1],*(undefined1 *)(param_1 + 2),
                *(undefined1 *)((long)param_1 + 0x11),FUN_10002d0ec);
  _swift_bridgeObjectRelease(param_1[4]);
  FUN_100044b38(param_1[5],param_1[6],*(undefined1 *)(param_1 + 7),
                *(undefined1 *)((long)param_1 + 0x39),FUN_10002c9fc);
  _swift_bridgeObjectRelease(param_1[9]);
  return;
}

