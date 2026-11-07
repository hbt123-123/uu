// rea decompile_all
// name: FUN_1001a2614
// address: 0x1001a2614
// body: available
// range: 0x1001a2614-0x1001a27b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001a2614(void)

{
  undefined *puVar1;
  undefined *puVar2;
  void *aBlock;
  ID IVar3;
  ID self;
  long unaff_x20;
  undefined *local_60;
  undefined8 local_58;
  code *local_50;
  undefined *puStack_48;
  code *local_40;
  undefined *local_38;
  
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1001a2a54,0,0xd00000000000009e,0x8000000100885b90,&DAT_d000000000000013,
                0x800000010089a410,0x70,0);
  if (*(long *)(unaff_x20 + 0x18) == 0) {
    puVar2 = &DAT_1009a1f78;
    _swift_allocObject(&DAT_1009a1f78,0x18,7);
    _swift_weakInit(puVar2 + 0x10);
    local_40 = FUN_1001a3960;
    local_60 = PTR___NSConcreteStackBlock_100995490;
    local_58 = 0x42000000;
    local_50 = FUN_1000a8c3c;
    puStack_48 = &DAT_1009a1f90;
    local_38 = puVar2;
    aBlock = __Block_copy(&local_60);
    _swift_retain(puVar2);
    IVar3 = NSTimer::timerWithTimeInterval_repeats_block_
                      ((ID)&_OBJC_CLASS___NSTimer,"timerWithTimeInterval:repeats:block:",
                       0x3ff0000000000000,1,aBlock);
    __Block_release(aBlock);
    puVar1 = local_38;
    _swift_release(puVar2);
    _swift_release(puVar1);
    self = NSRunLoop::mainRunLoop((ID)&_OBJC_CLASS___NSRunLoop,"mainRunLoop");
    NSRunLoop::addTimer_forMode_
              (self,"addTimer:forMode:",IVar3,*(undefined8 *)PTR__NSRunLoopCommonModes_100995350);
    *(ID *)(unaff_x20 + 0x18) = IVar3;
  }
  return;
}

