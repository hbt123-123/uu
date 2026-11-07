// rea decompile_all
// name: FUN_100188a9c
// address: 0x100188a9c
// body: available
// range: 0x100188a9c-0x100188b53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100188a9c(undefined8 param_1,undefined8 param_2)

{
  ID IVar1;
  long unaff_x20;
  
  *(undefined8 *)(unaff_x20 + 0x18) = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + 0x10,0);
  IVar1 = NSPasteboard::generalPasteboard((ID)&_OBJC_CLASS___NSPasteboard,"generalPasteboard");
  *(ID *)(unaff_x20 + 0x20) = IVar1;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined1 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  _swift_unknownObjectWeakInit(unaff_x20 + 0x38,0);
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = param_2;
  _swift_unknownObjectWeakAssign(unaff_x20 + 0x38,param_1);
  IVar1 = _objc_msgSend(*(ID *)(unaff_x20 + 0x20),"changeCount");
  _swift_unknownObjectRelease(param_1);
  *(ID *)(unaff_x20 + 0x28) = IVar1;
  return;
}

