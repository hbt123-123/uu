// rea decompile_all
// name: FUN_100597d08
// address: 0x100597d08
// body: available
// range: 0x100597d08-0x100597ddf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100597dbc to 0x10051093c thunk_FUN_100511c8c (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_100597d08(ulong param_1,undefined8 param_2,undefined8 param_3,ulong param_4,undefined8 param_5,
             undefined8 param_6,undefined8 param_7,ulong param_8,code *param_9)

{
  ulong uVar1;
  
  if (param_4 != param_8) {
    _swift_retain(param_4);
    _swift_retain(param_8);
    uVar1 = param_4;
    (*param_9)(param_4,param_8);
    _swift_release(param_8);
    _swift_release(param_4);
    if ((uVar1 & 1) == 0) {
      return 0;
    }
  }
  FUN_1000094a4(param_1,param_2,param_5,param_6);
  if ((param_1 & 1) == 0) {
    return 0;
  }
  thunk_FUN_100511c8c(param_3,param_7);
  return param_3;
}

