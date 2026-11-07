// rea decompile_all
// name: FUN_1001ae8f4
// address: 0x1001ae8f4
// body: available
// range: 0x1001ae8f4-0x1001aea13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001aea00 to 0x1007dea28 _objc_release (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long * FUN_1001ae8f4(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined *puVar3;
  long *plVar4;
  long unaff_x20;
  long *plVar5;
  byte bVar6;
  code *pcVar7;
  
  uVar2 = 0;
  FUN_10033c130();
  FUN_10033c0a4();
  lVar1 = _TtC14UURemoteServer15StreamerManager::networkReachabilityManager;
  plVar4 = *(long **)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::networkReachabilityManager)
  ;
  *(undefined8 *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::networkReachabilityManager) =
       uVar2;
  _swift_release(plVar4);
  plVar5 = *(long **)(unaff_x20 + lVar1);
  if (plVar5 == (long *)0x0) {
    bVar6 = 0;
  }
  else {
    pcVar7 = *(code **)(*plVar5 + 0x68);
    plVar4 = plVar5;
    _swift_retain();
    bVar6 = (byte)plVar4;
    (*pcVar7)();
    _swift_release(plVar5);
    plVar4 = plVar5;
  }
  *(byte *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::wasNetworkReachable) = bVar6 & 1;
  plVar5 = *(long **)(unaff_x20 + lVar1);
  if (plVar5 != (long *)0x0) {
    puVar3 = &DAT_1009a2478;
    _swift_allocObject(&DAT_1009a2478,0x18,7);
    _swift_unknownObjectWeakInit(puVar3 + 0x10);
    FUN_100004b70(0);
    _swift_retain(plVar5);
    _swift_retain(puVar3);
    __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
    (**(code **)(*plVar5 + 0x98))();
    _swift_release(plVar5);
    _swift_release_n(puVar3,2);
    return (long *)0x0;
  }
  return plVar4;
}

