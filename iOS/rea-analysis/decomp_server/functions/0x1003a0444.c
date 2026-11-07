// rea decompile_all
// name: FUN_1003a0444
// address: 0x1003a0444
// body: available
// range: 0x1003a0444-0x1003a0587 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1003a0444(undefined8 param_1,code *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  long *plVar3;
  ID self;
  long unaff_x20;
  undefined8 uVar4;
  long local_48 [3];
  
  if (DAT_100a892f0 != -1) {
    param_2 = FUN_1003dbb88;
    _swift_once(&DAT_100a892f0,FUN_1003dbb88);
  }
  plVar2 = DAT_100a8ccf8;
  plVar3 = DAT_100a8ccf8;
  _swift_retain(DAT_100a8ccf8);
  FUN_1003d8888();
  (**(code **)(*plVar2 + 0x128))(local_48);
  _swift_release(plVar2);
  FUN_100006cc8(plVar3,param_2);
  if (local_48[0] != 0) {
    _swift_beginAccess(local_48[0] + 0x20,local_48,0,0);
    uVar1 = *(undefined8 *)(local_48[0] + 0x28);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    *(undefined8 *)(unaff_x20 + 0x10) = *(undefined8 *)(local_48[0] + 0x20);
    *(undefined8 *)(unaff_x20 + 0x18) = uVar1;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRelease(uVar4);
    self = NSNotificationCenter::defaultCenter
                     ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
    if (DAT_100a89200 != -1) {
      _swift_once(&DAT_100a89200,FUN_1003aa1e4);
    }
    NSNotificationCenter::postNotificationName_object_
              (self,"postNotificationName:object:",DAT_100b36768,0);
    _swift_release(local_48[0]);
  }
  return;
}

