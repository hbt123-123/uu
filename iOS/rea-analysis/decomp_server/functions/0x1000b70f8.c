// rea decompile_all
// name: FUN_1000b70f8
// address: 0x1000b70f8
// body: available
// range: 0x1000b70f8-0x1000b7213 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000b70f8(void)

{
  undefined *puVar1;
  ID IVar2;
  long unaff_x20;
  
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(unaff_x20 + 0x10) = PTR___swiftEmptyArrayStorage_100995ea0;
  *(undefined **)(unaff_x20 + 0x18) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x38) = 0;
  *(undefined8 *)(unaff_x20 + 0x30) = 0;
  *(undefined8 *)(unaff_x20 + 0x48) = 0;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  *(undefined2 *)(unaff_x20 + 0x50) = 0;
  *(undefined8 *)(unaff_x20 + 0x58) = 0;
  *(undefined8 *)(unaff_x20 + 0x60) = 0;
  *(undefined1 *)(unaff_x20 + 0x68) = 0;
  *(undefined8 *)(unaff_x20 + 0x78) = 0;
  *(undefined8 *)(unaff_x20 + 0x70) = 0;
  *(undefined8 *)(unaff_x20 + 0x88) = 0;
  *(undefined8 *)(unaff_x20 + 0x80) = 0;
  *(undefined1 *)(unaff_x20 + 0x90) = 0xff;
  *(undefined8 *)(unaff_x20 + 0xa0) = 0;
  *(undefined8 *)(unaff_x20 + 0x98) = 0;
  *(undefined8 *)(unaff_x20 + 0xb0) = 0;
  *(undefined8 *)(unaff_x20 + 0xa8) = 0;
  *(undefined1 *)(unaff_x20 + 0xb8) = 0xff;
  *(undefined8 *)(unaff_x20 + 0xc0) = 0;
  IVar2 = NSNotificationCenter::defaultCenter
                    ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  NSNotificationCenter::addObserver_selector_name_object_(IVar2,"addObserver:selector:name:object:")
  ;
  IVar2 = NSNotificationCenter::defaultCenter
                    ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  _swift_retain();
  FUN_1003a9e68();
  NSNotificationCenter::addObserver_selector_name_object_(IVar2,"addObserver:selector:name:object:")
  ;
  _swift_release();
  return;
}

