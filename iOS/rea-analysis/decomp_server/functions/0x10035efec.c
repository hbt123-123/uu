// rea decompile_all
// name: FUN_10035efec
// address: 0x10035efec
// body: available
// range: 0x10035efec-0x10035f0eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10035f0e8 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_10035efec(undefined8 *param_1,ulong param_2)

{
  ID self;
  undefined8 uVar1;
  long lVar2;
  ID self_00;
  
  self = param_1[2];
  lVar2 = param_1[3];
  uVar1 = *param_1;
  self_00 = param_1[1];
  if ((param_2 & 1) == 0) {
    _objc_msgSend(self,"lock");
    *(undefined8 *)(self_00 + lVar2) = uVar1;
    _objc_msgSend(self_00,"reset");
    _objc_msgSend(self,"unlock");
  }
  else {
    _objc_msgSend(self,"lock");
    *(undefined8 *)(self_00 + lVar2) = uVar1;
    _objc_msgSend(self_00,"reset");
    _objc_msgSend(self,"unlock");
  }
  return 0;
}

