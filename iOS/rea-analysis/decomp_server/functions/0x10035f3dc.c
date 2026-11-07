// rea decompile_all
// name: FUN_10035f3dc
// address: 0x10035f3dc
// body: available
// range: 0x10035f3dc-0x10035f5cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

ID FUN_10035f3dc(undefined8 *param_1,long *param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined8 uVar4;
  ID IVar5;
  ID self;
  undefined8 local_c8;
  undefined8 uStack_c0;
  
  IVar5 = *(ID *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::taskLock);
  _objc_msgSend(IVar5,"lock");
  self = *(ID *)(unaff_x20 + _TtC10Filepicker17FilePickerRequest::_task);
  IVar5 = _objc_msgSend(IVar5,"unlock");
  if (self != 0) {
    _objc_msgSend(self,(SEL)*param_1);
    IVar5 = NSNotificationCenter::defaultCenter
                      ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
    if (*param_2 != -1) {
      _swift_once(param_2,param_4);
    }
    uVar4 = *param_3;
    puVar1 = &DAT_100a88928;
    FUN_100004bb4(&DAT_100a88928,&DAT_10081cb88);
    _swift_initStackObject();
    *(undefined8 *)(puVar1 + 0x18) = 2;
    *(undefined8 *)(puVar1 + 0x10) = 1;
    local_c8 = 0xd000000000000024;
    uStack_c0 = 0x80000001008ac0f0;
    __ss11AnyHashableVyABxcSHRzlufC
              (puVar1 + 0x20,&local_c8,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808);
    uVar2 = 0;
    FUN_10035f300();
    *(undefined8 *)(puVar1 + 0x60) = uVar2;
    *(ID *)(puVar1 + 0x48) = self;
    puVar3 = puVar1;
    FUN_10035fc6c(puVar1);
    _swift_setDeallocating(puVar1);
    FUN_100040bb4(puVar1 + 0x20,&DAT_100a88938,&DAT_10081cb90);
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar3,PTR___ss11AnyHashableVN_100995ad0,PTR___sypN_100995e88 + 8,
               PTR___ss11AnyHashableVSHsWP_100995ad8);
    _swift_bridgeObjectRelease(puVar3);
    NSNotificationCenter::postNotificationName_object_userInfo_
              (IVar5,"postNotificationName:object:userInfo:",uVar4);
    IVar5 = 0;
  }
  return IVar5;
}

