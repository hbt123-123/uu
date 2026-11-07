// rea decompile_all
// name: FUN_100317838
// address: 0x100317838
// body: available
// range: 0x100317838-0x1003178df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003178dc to 0x1003178e0 FUN_1003178e0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100317838(undefined8 param_1,undefined8 param_2,code *param_3,undefined8 param_4,
                  code *param_5,undefined8 param_6)

{
  if (param_5 != (code *)0x0) {
    if (param_5 != (code *)0x1) {
      _swift_retain(param_6);
      (*param_5)(param_1,param_2);
      (*param_3)();
      FUN_1003178e0(param_5,param_6);
      return;
    }
    param_2 = 0;
  }
  (*param_3)(param_2);
  return;
}

