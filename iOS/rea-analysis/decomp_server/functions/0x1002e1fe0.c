// rea decompile_all
// name: FUN_1002e1fe0
// address: 0x1002e1fe0
// body: available
// range: 0x1002e1fe0-0x1002e2187 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1002e1fe0(void)

{
  undefined *puVar1;
  long lVar2;
  long unaff_x20;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_60 [24];
  undefined1 auStack_48 [24];
  
  lVar2 = *(long *)(unaff_x20 + 0xd0);
  uVar3 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x10);
  _swift_retain(lVar2);
  _os_unfair_lock_lock(uVar3);
  _swift_beginAccess(lVar2 + 0x18,auStack_48,0,0);
  uVar4 = *(undefined8 *)(lVar2 + 0x30);
  _swift_bridgeObjectRetain(uVar4);
  _os_unfair_lock_unlock(uVar3);
  _swift_release(lVar2);
  lVar2 = *(long *)(*(long *)(unaff_x20 + 0x18) +
                   _TtC9Alamofire15SessionDelegate::sessionInvalidationCleanup);
  puVar1 = &DAT_1009ae598;
  _swift_allocObject(&DAT_1009ae598,0x18,7);
  *(undefined8 *)(puVar1 + 0x10) = uVar4;
  uVar5 = *(undefined8 *)(*(long *)(lVar2 + 0x10) + 0x10);
  _swift_retain(lVar2);
  _os_unfair_lock_lock(uVar5);
  _swift_beginAccess(lVar2 + 0x18,auStack_60,1,0);
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  uVar4 = *(undefined8 *)(lVar2 + 0x20);
  *(code **)(lVar2 + 0x18) = FUN_1002eeac0;
  *(undefined **)(lVar2 + 0x20) = puVar1;
  FUN_10007ed2c(uVar3,uVar4);
  _swift_retain(puVar1);
  _os_unfair_lock_unlock(uVar5);
  _swift_release(puVar1);
  _swift_release(lVar2);
  _objc_msgSend(*(ID *)(unaff_x20 + 0x10),"invalidateAndCancel");
  FUN_100040bb4(unaff_x20 + 0x40,&DAT_100a83d18,0x1008188a0);
  _swift_release(*(undefined8 *)(unaff_x20 + 0x68));
  FUN_100040bb4(unaff_x20 + 0x70,&DAT_100a83d20,0x1008188a8);
  FUN_100040bb4(unaff_x20 + 0x98,&DAT_100a83d28,0x1008188b0);
  _swift_release(*(undefined8 *)(unaff_x20 + 0xc0));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + 200));
  _swift_release(*(undefined8 *)(unaff_x20 + 0xd0));
  return;
}

