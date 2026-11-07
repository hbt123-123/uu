// rea decompile_all
// name: FUN_10021abf0
// address: 0x10021abf0
// body: available
// range: 0x10021abf0-0x10021adab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10021abf0(void)

{
  undefined8 *self;
  undefined8 *puVar1;
  ID IVar2;
  undefined *puVar3;
  void *aBlock;
  long unaff_x20;
  undefined8 uVar4;
  undefined *local_70;
  undefined8 local_68;
  code *local_60;
  undefined *puStack_58;
  code *local_50;
  undefined *local_48;
  
  if (*(long *)(unaff_x20 + 0x10) == 0) {
    self = (undefined8 *)
           NSNotificationCenter::defaultCenter
                     ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
    puVar1 = self;
    FUN_1003a9fd8();
    uVar4 = *puVar1;
    IVar2 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue,"mainQueue");
    puVar3 = &DAT_1009a53f8;
    _swift_allocObject(&DAT_1009a53f8,0x18,7);
    _swift_weakInit(puVar3 + 0x10);
    local_50 = FUN_10021be3c;
    local_70 = PTR___NSConcreteStackBlock_100995490;
    local_68 = 0x42000000;
    local_60 = FUN_100103828;
    puStack_58 = &DAT_1009a5410;
    local_48 = puVar3;
    aBlock = __Block_copy(&local_70);
    _swift_release(local_48);
    IVar2 = _objc_msgSend((ID)self,"addObserverForName:object:queue:usingBlock:",uVar4,0,IVar2,
                          aBlock);
    __Block_release(aBlock);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
    *(ID *)(unaff_x20 + 0x10) = IVar2;
    _swift_unknownObjectRelease(uVar4);
    FUN_10021a60c();
  }
  else {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_10021afa8,0,0xd00000000000009f,0x80000001008a54e0,0x29287472617473,
                  0xe700000000000000,0x1e,0);
  }
  return;
}

