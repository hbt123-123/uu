// rea decompile_all
// name: FUN_1000c51e8
// address: 0x1000c51e8
// body: available
// range: 0x1000c51e8-0x1000c52ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000c52fc to 0x1007df43c _swift_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000c51e8(void)

{
  undefined8 uVar1;
  long unaff_x20;
  long lVar2;
  
  if (*(long *)(unaff_x20 + 0x38) != 0) {
    _CFRunLoopGetMain();
    _CFRunLoopRemoveSource();
    *(undefined8 *)(unaff_x20 + 0x38) = 0;
  }
  if (*(long *)(unaff_x20 + 0x30) != 0) {
    _CFMachPortInvalidate(*(long *)(unaff_x20 + 0x30));
    *(undefined8 *)(unaff_x20 + 0x30) = 0;
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1000c58e0,0,0xd0000000000000ac,0x8000000100884780,0x2928706f7473,
                  0xe600000000000000,0x83,0);
  }
  *(undefined1 *)(unaff_x20 + 0x40) = 0;
  lVar2 = *(long *)(unaff_x20 + 0x48);
  if (lVar2 == 0) {
    uVar1 = 0;
  }
  else {
    _swift_retain(lVar2);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar2);
    uVar1 = *(undefined8 *)(unaff_x20 + 0x48);
  }
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  _swift_release(uVar1);
  return;
}

