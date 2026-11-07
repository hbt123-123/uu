// rea decompile_all
// name: FUN_100198dac
// address: 0x100198dac
// body: available
// range: 0x100198dac-0x100198f9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100198dac(void)

{
  undefined *puVar1;
  void *aBlock;
  ID IVar2;
  ID self;
  long unaff_x20;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  code *local_40;
  undefined *local_38;
  
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1001996b4,0,0xd0000000000000a1,0x800000010088d6c0,0x6f72507472617473,
                0xee002928676e6962,0x2d,0);
  *(undefined1 *)(unaff_x20 + 0x10) = 0;
  if (*(ID *)(unaff_x20 + 0x20) != 0) {
    _objc_msgSend(*(ID *)(unaff_x20 + 0x20),"invalidate");
  }
  *(undefined8 *)(unaff_x20 + 0x20) = 0;
  *(undefined8 *)(unaff_x20 + 0x28) = 0;
  puVar1 = &DAT_1009a17f0;
  _swift_allocObject(&DAT_1009a17f0,0x18,7);
  _swift_weakInit(puVar1 + 0x10);
  local_40 = FUN_100199e48;
  local_60 = PTR___NSConcreteStackBlock_100995490;
  local_58 = 0x42000000;
  local_50 = FUN_1000a8c3c;
  puStack_48 = &DAT_1009a1808;
  local_38 = puVar1;
  aBlock = __Block_copy(&local_60);
  _swift_release(local_38);
  IVar2 = NSTimer::scheduledTimerWithTimeInterval_repeats_block_
                    ((ID)&_OBJC_CLASS___NSTimer,"scheduledTimerWithTimeInterval:repeats:block:",
                     0x3fb999999999999a,1,aBlock);
  __Block_release(aBlock);
  self = NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop,"mainRunLoop");
  NSRunLoop::addTimer_forMode_
            (self,"addTimer:forMode:",IVar2,*(undefined8 *)PTR__NSRunLoopCommonModes_100995350);
  *(ID *)(unaff_x20 + 0x20) = IVar2;
  if (*(ID *)(unaff_x20 + 0x20) != 0) {
    _objc_msgSend(*(ID *)(unaff_x20 + 0x20),"fire");
  }
  return 0;
}

