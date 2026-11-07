// rea decompile_all
// name: FUN_100092a54
// address: 0x100092a54
// body: available
// range: 0x100092a54-0x100092ae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100092a54(void)

{
  long lVar1;
  long lVar2;
  undefined8 uVar3;
  long unaff_x22;
  undefined8 uVar4;
  
  uVar3 = *(undefined8 *)(unaff_x22 + 0x28);
  lVar1 = *(long *)(unaff_x22 + 0x10);
  lVar2 = 0x20;
  _swift_task_alloc();
  *(undefined8 *)(lVar2 + 0x10) = uVar3;
  _os_unfair_lock_lock(lVar1 + 0x18);
  uVar4 = *(undefined8 *)(lVar2 + 0x10);
  _swift_bridgeObjectRelease(*(undefined8 *)(lVar1 + 0x10));
  *(undefined8 *)(lVar1 + 0x10) = uVar4;
  _swift_bridgeObjectRetain(uVar4);
  _os_unfair_lock_unlock(lVar1 + 0x18);
  _swift_bridgeObjectRelease(uVar3);
  _swift_task_dealloc(lVar2);
  __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF();
                    /* WARNING: Could not recover jumptable at 0x000100092ae4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

