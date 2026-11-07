// rea decompile_all
// name: SentryCoreDataSwizzling::startWithTracker:
// address: 0x1007a3034
// body: available
// range: 0x1007a3034-0x1007a30df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007a30c8 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

void SentryCoreDataSwizzling::startWithTracker_(ID param_1,SEL param_2,ID param_3)

{
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  ID local_38;
  
  local_58 = PTR___NSConcreteStackBlock_100995490;
  local_50 = 0xc2000000;
  local_48 = FUN_1007a30e0;
  puStack_40 = &DAT_1009e8720;
  if (DAT_100b2e318 != -1) {
    local_38 = param_1;
    _dispatch_once(&DAT_100b2e318,&local_58);
  }
  *(ID *)(param_1 + 8) = param_3;
  return;
}

