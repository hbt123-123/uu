// rea decompile_all
// name: FUN_10010357c
// address: 0x10010357c
// body: available
// range: 0x10010357c-0x100103757 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10010357c(void)

{
  ID IVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined *puVar4;
  void *aBlock;
  undefined *puVar5;
  long unaff_x20;
  undefined *local_80;
  undefined8 local_78;
  code *local_70;
  undefined *puStack_68;
  code *local_60;
  undefined *local_58;
  
  FUN_1001038cc();
  IVar1 = 0;
  FUN_10004003c(0,&DAT_100a76e10,&PTR__OBJC_CLASS___NSDistributedNotificationCenter_100a65888);
  _swift_getObjCClassFromMetadata();
  IVar1 = _objc_msgSend(IVar1,"defaultCenter");
  uVar2 = 0xd00000000000001b;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000001b,0x800000010088a8a0);
  IVar3 = NSOperationQueue::mainQueue((ID)&_OBJC_CLASS___NSOperationQueue,"mainQueue");
  puVar5 = &DAT_10099d400;
  puVar4 = puVar5;
  _swift_allocObject(&DAT_10099d400,0x18,7);
  _swift_unknownObjectWeakInit(puVar4 + 0x10);
  local_60 = FUN_10010409c;
  local_80 = PTR___NSConcreteStackBlock_100995490;
  local_78 = 0x42000000;
  local_70 = FUN_100103828;
  puStack_68 = &DAT_10099d440;
  local_58 = puVar4;
  aBlock = __Block_copy(&local_80);
  _swift_release(local_58);
  IVar1 = _objc_msgSend(IVar1,"addObserverForName:object:queue:usingBlock:",uVar2,0,IVar3,aBlock);
  __Block_release(aBlock);
  uVar2 = *(undefined8 *)
           (unaff_x20 + _TtC14UURemoteServer30AccessibilityPermissionMonitor::observer);
  *(ID *)(unaff_x20 + _TtC14UURemoteServer30AccessibilityPermissionMonitor::observer) = IVar1;
  _swift_unknownObjectRelease(uVar2);
  FUN_1003a9990(0);
  _swift_allocObject(&DAT_10099d400,0x18,7);
  _swift_unknownObjectWeakInit(puVar5 + 0x10);
  _swift_retain(puVar5);
  FUN_1003a8df4(thunk_FUN_10010408c,puVar5);
  _swift_release_n(puVar5,2);
  return;
}

