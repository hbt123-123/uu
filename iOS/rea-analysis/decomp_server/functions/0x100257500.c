// rea decompile_all
// name: FUN_100257500
// address: 0x100257500
// body: available
// range: 0x100257500-0x100257673 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100257500(undefined8 param_1)

{
  dispatch_semaphore_t pdVar1;
  long *value;
  ID IVar2;
  long unaff_x20;
  long *plVar3;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  _swift_weakInit(unaff_x20 + 0x10,0);
  _swift_weakInit(unaff_x20 + 0x18,0);
  pdVar1 = _dispatch_semaphore_create(1);
  *(undefined8 *)(unaff_x20 + 0x30) = PTR___swiftEmptyArrayStorage_100995ea0;
  *(dispatch_semaphore_t *)(unaff_x20 + 0x28) = pdVar1;
  *(undefined8 *)(unaff_x20 + 0x40) = 0;
  if (DAT_100a7fea0 != -1) {
    _swift_once(&DAT_100a7fea0,FUN_10025674c);
  }
  plVar3 = *(long **)(DAT_100b36400 + 0x10);
  pcVar4 = *(code **)(*plVar3 + 0xe0);
  value = plVar3;
  _swift_retain();
  (*pcVar4)();
  _swift_release(plVar3);
  plVar3 = *(long **)(DAT_100b36400 + 0x10);
  pcVar4 = *(code **)(*plVar3 + 0xf8);
  _swift_retain(plVar3);
  (*pcVar4)();
  _swift_release(plVar3);
  pdVar1 = _dispatch_semaphore_create((long)value);
  *(dispatch_semaphore_t *)(unaff_x20 + 0x20) = pdVar1;
  _swift_beginAccess((undefined8 *)(unaff_x20 + 0x30),auStack_68,0x21,0);
  FUN_1002583bc(value);
  _swift_endAccess(auStack_68);
  *(long **)(unaff_x20 + 0x38) = value;
  IVar2 = NSTimer::scheduledTimerWithTimeInterval_target_selector_userInfo_repeats_
                    ((ID)&_OBJC_CLASS___NSTimer,
                     "scheduledTimerWithTimeInterval:target:selector:userInfo:repeats:",param_1);
  *(ID *)(unaff_x20 + 0x40) = IVar2;
  return;
}

