// rea decompile_all
// name: FUN_1001adec0
// address: 0x1001adec0
// body: available
// range: 0x1001adec0-0x1001ae08f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001adec0(void)

{
  uint uVar1;
  long lVar2;
  undefined4 uVar3;
  undefined8 uVar4;
  ID IVar5;
  long unaff_x20;
  long lVar6;
  undefined1 auStack_70 [16];
  uint local_60;
  undefined4 uStack_5c;
  
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1001af02c,0,0xd000000000000095,0x8000000100877f50,0x2928706f7473,
                0xe600000000000000,0x53,0);
  lVar2 = _TtC14UURemoteServer15StreamerManager::wakeReconnectWorkItem;
  lVar6 = *(long *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::wakeReconnectWorkItem);
  if (lVar6 == 0) {
    uVar4 = 0;
  }
  else {
    _swift_retain(lVar6);
    __s8Dispatch0A8WorkItemC6cancelyyFTj();
    _swift_release(lVar6);
    uVar4 = *(undefined8 *)(unaff_x20 + lVar2);
  }
  *(undefined8 *)(unaff_x20 + lVar2) = 0;
  _swift_release(uVar4);
  if (*(long *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::dispatcher) != 0) {
    uVar1 = *(uint *)(*(long *)(*(long *)(unaff_x20 +
                                         _TtC14UURemoteServer15StreamerManager::dispatcher) +
                               _TtC14UURemoteServer18StreamerDispatcher::room) + 0x10);
    IVar5 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::controlled),
                          "ControlledDestroyRoom:",(ulong)uVar1);
    uStack_5c = (undefined4)IVar5;
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_60 = uVar1;
    FUN_1003fb48c(thunk_FUN_1001b5640,auStack_70,0xd000000000000095,0x8000000100877f50,
                  0x52796f7274736564,0xef293a5f286d6f6f,0x16d,0);
  }
  IVar5 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::controlled),
                        "ControlledFinalize");
  uVar3 = (int)IVar5;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_60 = uVar3;
  FUN_1003fb48c(FUN_1001b1bb4,auStack_70,0xd000000000000095,0x8000000100877f50,0x2928706f7473,
                0xe600000000000000,0x5a,0);
  return;
}

