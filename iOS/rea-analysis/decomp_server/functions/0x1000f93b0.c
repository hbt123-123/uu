// rea decompile_all
// name: FUN_1000f93b0
// address: 0x1000f93b0
// body: available
// range: 0x1000f93b0-0x1000f9553 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000f93b0(void)

{
  undefined8 uVar1;
  byte bVar2;
  long lVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  long lVar6;
  long unaff_x22;
  
  bVar2 = *(byte *)(unaff_x22 + 0x5c);
  if (bVar2 < 2) {
    if (bVar2 == 0) {
      FUN_100401b14(0);
      FUN_1003fb48c(FUN_1000f9554,0,0xd0000000000000a2,0x80000001008898a0,0xd00000000000002e,
                    0x8000000100889a00,0x115,0);
      goto LAB_1000f94dc;
    }
    uVar4 = 0xfffffffb;
  }
  else {
    uVar5 = 0xfffffff5;
    if (bVar2 != 3) {
      uVar5 = 0xfffffff4;
    }
    uVar4 = 0xfffffff6;
    if (bVar2 != 2) {
      uVar4 = uVar5;
    }
  }
  FUN_1000fbce8(*(undefined4 *)(unaff_x22 + 0x58),uVar4);
  FUN_100401b14(0);
  lVar3 = 0x20;
  _swift_task_alloc();
  *(byte *)(lVar3 + 0x10) = bVar2;
  FUN_1003fb48c(FUN_1000fcc74,lVar3,0xd0000000000000a2,0x80000001008898a0,0xd00000000000002e,
                0x8000000100889a00,0x11c,0);
  _swift_task_dealloc(lVar3);
LAB_1000f94dc:
  lVar3 = _TtC14UURemoteServer17LockScreenManager::unlockingLock;
  uVar1 = *(undefined8 *)(unaff_x22 + 0x38);
  lVar6 = *(long *)(*(long *)(unaff_x22 + 0x40) + 0x70);
  _objc_msgSend(*(ID *)(lVar6 + _TtC14UURemoteServer17LockScreenManager::unlockingLock),"lock");
  *(undefined1 *)(lVar6 + _TtC14UURemoteServer17LockScreenManager::isUnlocking) = 0;
  _objc_msgSend(*(ID *)(lVar6 + lVar3),"unlock");
  _swift_release(uVar1);
                    /* WARNING: Could not recover jumptable at 0x0001000f9550. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(unaff_x22 + 8))();
  return;
}

