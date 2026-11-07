// rea decompile_all
// name: FUN_1003a71a8
// address: 0x1003a71a8
// body: available
// range: 0x1003a71a8-0x1003a7357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8
FUN_1003a71a8(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  ID self;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 local_c8;
  undefined8 uStack_c0;
  
  self = NSNotificationCenter::defaultCenter
                   ((ID)&_OBJC_CLASS___NSNotificationCenter,"defaultCenter");
  if (DAT_100a89208 != -1) {
    _swift_once(&DAT_100a89208,FUN_1003aa234);
  }
  uVar1 = DAT_100b36770;
  puVar2 = &DAT_100a78b30;
  FUN_100004bb4(&DAT_100a78b30,&DAT_10080d968);
  _swift_initStackObject();
  *(undefined8 *)(puVar2 + 0x18) = 2;
  *(undefined8 *)(puVar2 + 0x10) = 1;
  local_c8 = 0x726f727265;
  uStack_c0 = 0xe500000000000000;
  __ss11AnyHashableVyABxcSHRzlufC
            (puVar2 + 0x20,&local_c8,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808);
  *(undefined **)(puVar2 + 0x60) = &DAT_1009bb090;
  puVar3 = &DAT_1009b7c98;
  _swift_allocObject(&DAT_1009b7c98,0x30,7);
  *(undefined **)(puVar2 + 0x48) = puVar3;
  *(undefined8 *)(puVar3 + 0x10) = param_1;
  *(undefined8 *)(puVar3 + 0x18) = param_2;
  *(undefined8 *)(puVar3 + 0x20) = param_3;
  *(undefined8 *)(puVar3 + 0x28) = param_4;
  _swift_retain(param_4);
  _swift_bridgeObjectRetain(param_3);
  puVar3 = puVar2;
  FUN_1000cc410(puVar2);
  _swift_setDeallocating(puVar2);
  FUN_10010c038(puVar2 + 0x20);
  puVar2 = puVar3;
  __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
            (puVar3,PTR___ss11AnyHashableVN_100995ad0,PTR___sypN_100995e88 + 8,
             PTR___ss11AnyHashableVSHsWP_100995ad8);
  _swift_bridgeObjectRelease(puVar3);
  NSNotificationCenter::postNotificationName_object_userInfo_
            (self,"postNotificationName:object:userInfo:",uVar1,0,puVar2);
  return 0;
}

