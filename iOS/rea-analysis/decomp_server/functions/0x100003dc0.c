// rea decompile_all
// name: FUN_100003dc0
// address: 0x100003dc0
// body: available
// range: 0x100003dc0-0x100003e1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_100003dc0(ID param_1)

{
  class_t *pcVar1;
  ID IVar2;
  
  pcVar1 = &objc::class_t::NRDVirtualDisplayBox;
  _objc_opt_class(&objc::class_t::NRDVirtualDisplayBox);
  IVar2 = param_1;
  _objc_opt_isKindOfClass(param_1,pcVar1);
  if ((IVar2 & 1) == 0) {
    IVar2 = 0;
  }
  else {
    IVar2 = objc_stub::vendorID(param_1);
  }
  return IVar2;
}

