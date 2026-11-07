// rea decompile_all
// name: FUN_10022e030
// address: 0x10022e030
// body: available
// range: 0x10022e030-0x10022e1d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10022e030(long param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  ID IVar3;
  ID self;
  undefined1 auStack_88 [24];
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + 0x10,auStack_70,0x21,0);
    _swift_bridgeObjectRetain(param_2);
    FUN_10022e1d8();
    _swift_endAccess(auStack_70);
    if (*(long *)(param_1 + 0x18) == 0) {
      if (DAT_100a7de18 != -1) {
        _swift_once(&DAT_100a7de18,FUN_100234ab4);
      }
      _swift_beginAccess(&DAT_100b36340,auStack_70,0,0);
      lVar2 = DAT_100b36340;
      lVar1 = FCountAppConfig::uploadTimeInterval;
      _swift_beginAccess(DAT_100b36340 + FCountAppConfig::uploadTimeInterval,auStack_88,0,0);
      IVar3 = NSTimer::timerWithTimeInterval_target_selector_userInfo_repeats_
                        ((ID)&_OBJC_CLASS___NSTimer,
                         "timerWithTimeInterval:target:selector:userInfo:repeats:",
                         *(undefined8 *)(lVar2 + lVar1),param_1,"postEvents",0,1);
      self = NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop,"mainRunLoop");
      NSRunLoop::addTimer_forMode_
                (self,"addTimer:forMode:",IVar3,*(undefined8 *)PTR__NSDefaultRunLoopMode_100995338);
      *(ID *)(param_1 + 0x18) = IVar3;
      _swift_release(param_1);
    }
    else {
      _swift_release(param_1);
    }
  }
  return;
}

