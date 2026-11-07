// rea decompile_all
// name: FUN_100162714
// address: 0x100162714
// body: available
// range: 0x100162714-0x100162873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_100162714(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined *puVar2;
  void *aBlock;
  ID IVar3;
  ID self;
  long unaff_x20;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  undefined *local_48;
  
  lVar1 = _TtC14UURemoteServer18ClipboardPCManager::timer;
  if (*(long *)(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::timer) == 0) {
    puVar2 = &DAT_10099f2e0;
    _swift_allocObject(&DAT_10099f2e0,0x18,7);
    _swift_unknownObjectWeakInit(puVar2 + 0x10);
    local_70 = PTR___NSConcreteStackBlock_100995490;
    local_68 = 0x42000000;
    local_60 = FUN_1000a8c3c;
    uStack_58 = param_2;
    local_50 = param_1;
    local_48 = puVar2;
    aBlock = __Block_copy(&local_70);
    _swift_release(local_48);
    IVar3 = NSTimer::scheduledTimerWithTimeInterval_repeats_block_
                      ((ID)&_OBJC_CLASS___NSTimer,"scheduledTimerWithTimeInterval:repeats:block:",
                       0x3fc999999999999a,1,aBlock);
    __Block_release(aBlock);
    *(ID *)(unaff_x20 + lVar1) = IVar3;
    param_1 = 0;
    if (IVar3 != 0) {
      self = NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop,"mainRunLoop");
      NSRunLoop::addTimer_forMode_
                (self,"addTimer:forMode:",IVar3,*(undefined8 *)PTR__NSRunLoopCommonModes_100995350);
      param_1 = 0;
    }
  }
  return param_1;
}

