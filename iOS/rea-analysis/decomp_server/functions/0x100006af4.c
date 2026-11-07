// rea decompile_all
// name: FUN_100006af4
// address: 0x100006af4
// body: available
// range: 0x100006af4-0x100006c67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100006af4(undefined8 param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  void *aBlock;
  ID self;
  ID self_00;
  long unaff_x20;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  lVar1 = _TtC14UURemoteServer13CursorManager::refreshTimer;
  if (*(long *)(unaff_x20 + _TtC14UURemoteServer13CursorManager::refreshTimer) == 0) {
    puVar3 = &DAT_100996f80;
    _swift_allocObject(&DAT_100996f80,0x18,7);
    _swift_unknownObjectWeakInit(puVar3 + 0x10);
    local_50 = FUN_100008164;
    local_70 = PTR___NSConcreteStackBlock_100995490;
    local_68 = 0x42000000;
    local_60 = FUN_1000a8c3c;
    puStack_58 = &DAT_100996f98;
    local_48 = puVar3;
    aBlock = __Block_copy(&local_70);
    _swift_retain(puVar3);
    self = NSTimer::timerWithTimeInterval_repeats_block_
                     ((ID)&_OBJC_CLASS___NSTimer,"timerWithTimeInterval:repeats:block:",
                      0x3fb999999999999a,1,aBlock);
    __Block_release(aBlock);
    puVar2 = local_48;
    _swift_release(puVar3);
    _swift_release(puVar2);
    NSTimer::setTolerance_(self,"setTolerance:",0x3f847ae147ae147b);
    self_00 = NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop,"mainRunLoop");
    NSRunLoop::addTimer_forMode_
              (self_00,"addTimer:forMode:",self,*(undefined8 *)PTR__NSRunLoopCommonModes_100995350);
    *(ID *)(unaff_x20 + lVar1) = self;
    param_1 = 0;
  }
  return param_1;
}

