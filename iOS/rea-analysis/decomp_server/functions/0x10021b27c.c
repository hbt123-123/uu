// rea decompile_all
// name: FUN_10021b27c
// address: 0x10021b27c
// body: available
// range: 0x10021b27c-0x10021b37f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10021b27c(long param_1)

{
  ID *pIVar1;
  ID IVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  ID local_58;
  char *pcStack_50;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  pIVar1 = (ID *)(param_1 + 0x10);
  _swift_weakLoadStrong();
  if (pIVar1 == (ID *)0x0) {
    FUN_10040fbcc();
    IVar2 = *pIVar1;
    pcVar3 = (char *)pIVar1[1];
    _swift_bridgeObjectRetain(IVar2);
    _swift_bridgeObjectRetain(pcVar3);
  }
  else {
    pcVar3 = "isMainThread";
    IVar2 = NSThread::isMainThread((ID)&_OBJC_CLASS___NSThread,"isMainThread");
    if ((int)IVar2 == 0) {
      FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
      __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
      __sSo17OS_dispatch_queueC8DispatchE4sync7executexxyKXE_tKlF
                (&local_58,FUN_10021b9c8,pIVar1,&DAT_1009bcb80);
      _swift_release(pIVar1);
      IVar2 = local_58;
      pcVar3 = pcStack_50;
    }
    else {
      FUN_10021b388();
      _swift_release(pIVar1);
    }
  }
  auVar4._8_8_ = pcVar3;
  auVar4._0_8_ = IVar2;
  return auVar4;
}

