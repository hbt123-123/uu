// rea decompile_all
// name: FUN_100183a44
// address: 0x100183a44
// body: available
// range: 0x100183a44-0x100183c5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100183a44(void)

{
  ID IVar1;
  undefined8 *self;
  undefined8 *puVar2;
  undefined *puVar3;
  void *aBlock;
  long unaff_x20;
  undefined8 uVar4;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  if (*(long *)(unaff_x20 + 0x48) == 0) {
    IVar1 = 0;
    FUN_10004003c(0,&DAT_100a76e10,&PTR__OBJC_CLASS___NSDistributedNotificationCenter_100a65888);
    _swift_getObjCClassFromMetadata();
    self = (undefined8 *)_objc_msgSend(IVar1,"defaultCenter");
    puVar2 = self;
    FUN_1003aa4b8();
    uVar4 = *puVar2;
    IVar1 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue,"mainQueue");
    puVar3 = &DAT_1009a0fc0;
    _swift_allocObject(&DAT_1009a0fc0,0x18,7);
    _swift_weakInit(puVar3 + 0x10);
    local_60 = FUN_100185b50;
    local_80 = PTR___NSConcreteStackBlock_100995490;
    local_78 = 0x42000000;
    local_70 = FUN_100103828;
    puStack_68 = &DAT_1009a0fd8;
    local_58 = puVar3;
    aBlock = __Block_copy(&local_80);
    _swift_release(local_58);
    IVar1 = _objc_msgSend((ID)self,"addObserverForName:object:queue:usingBlock:",uVar4,0,IVar1,
                          aBlock);
    __Block_release(aBlock);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x48);
    *(ID *)(unaff_x20 + 0x48) = IVar1;
    _swift_unknownObjectRelease(uVar4);
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_100184718,0,0xd0000000000000b5,0x8000000100897680,0x29287472617473,
                  0xe700000000000000,0x2f,0);
  }
  else {
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_100183f80,0,0xd0000000000000b5,0x8000000100897680,0x29287472617473,
                  0xe700000000000000,0x24,0);
  }
  return;
}

