// rea decompile_all
// name: FUN_1001af900
// address: 0x1001af900
// body: available
// range: 0x1001af900-0x1001afa57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

undefined8 FUN_1001af900(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  undefined *puVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_58 [24];
  
  FUN_1001afb3c();
  uVar2 = 0;
  FUN_1001265b8(0);
  _objc_allocWithZone();
  FUN_100124324(param_1,uVar2);
  lVar6 = *(long *)(param_1 + _TtC14UURemoteServer18StreamerDispatcher::room);
  _swift_beginAccess(lVar6 + 0x18,auStack_58,0,0);
  plVar1 = *(long **)(lVar6 + 0x18);
  puVar3 = &DAT_1009a2478;
  _swift_allocObject(&DAT_1009a2478,0x18,7);
  _swift_unknownObjectWeakInit(puVar3 + 0x10);
  FUN_100004b70(0);
  plVar4 = plVar1;
  _swift_retain();
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  puVar5 = &DAT_100a79718;
  FUN_100004bb4(&DAT_100a79718,&DAT_10080e5b0);
  FUN_10039f61c(plVar4,FUN_1001b586c,puVar3,puVar5);
  _swift_release(plVar1);
  _swift_release(puVar3);
  (**(code **)(*plVar4 + 0x78))(param_1,&PTR_PTR_1009b83c8);
  _swift_release(plVar4);
  *(long *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::dispatcher) = param_1;
  return 0;
}

