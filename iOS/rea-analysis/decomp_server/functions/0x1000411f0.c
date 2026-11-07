// rea decompile_all
// name: thunk_FUN_100010ee8
// address: 0x1000411f0
// body: available
// range: 0x1000411f0-0x1000411f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void thunk_FUN_100010ee8(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long extraout_x8;
  long extraout_x12;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  
  lVar1 = 0;
  __s8Dispatch0A4TimeVMa();
  lVar4 = *(long *)(lVar1 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar4 + 0x40));
  puVar2 = &stack0xffffffffffffffb0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  lVar3 = (long)puVar2 - extraout_x12;
  FUN_10004003c(0,&DAT_100a750c8,&PTR__OBJC_CLASS___OS_dispatch_queue_100a657d8);
  __sSo17OS_dispatch_queueC8DispatchE4mainABvgZ();
  __s8Dispatch0A4TimeV3nowACyFZ(puVar2);
  __s8Dispatch1poiyAA0A4TimeVAD_SdtF(lVar3,param_1,puVar2);
  pcVar5 = *(code **)(lVar4 + 8);
  (*pcVar5)(puVar2,lVar1);
  __sSo17OS_dispatch_queueC8DispatchE10asyncAfter8deadline7executeyAC0D4TimeV_AC0D8WorkItemCtF
            (lVar3,param_2);
  (*pcVar5)(lVar3,lVar1);
  return;
}

