// rea decompile_all
// name: NEMUKeyCodes::shared
// address: 0x100393f58
// body: available
// range: 0x100393f58-0x100393fcb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100393fb4 to 0x1007dea4c _objc_retainAutoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleaseReturnValue replaced with injection: _objc_retain_fixup
    */
/* Function Stack Size: 0x10 bytes */

ID NEMUKeyCodes::shared(ID param_1,SEL param_2)

{
  undefined *local_38;
  undefined8 local_30;
  code *local_28;
  undefined *puStack_20;
  ID local_18;
  
  local_38 = PTR___NSConcreteStackBlock_100995490;
  local_30 = 0xc0000000;
  local_28 = FUN_100393fcc;
  puStack_20 = &DAT_1009b5638;
  if (DAT_100ad1460 != -1) {
    local_18 = param_1;
    _dispatch_once(&DAT_100ad1460,&local_38);
  }
  return DAT_100ad1458;
}

