// rea decompile_all
// name: FUN_1001ae184
// address: 0x1001ae184
// body: available
// range: 0x1001ae184-0x1001ae2d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ae184(void)

{
  uint uVar1;
  ID IVar2;
  long unaff_x20;
  undefined1 auStack_60 [16];
  uint local_50;
  undefined4 uStack_4c;
  
  if (*(long *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::dispatcher) != 0) {
    uVar1 = *(uint *)(*(long *)(*(long *)(unaff_x20 +
                                         _TtC14UURemoteServer15StreamerManager::dispatcher) +
                               _TtC14UURemoteServer18StreamerDispatcher::room) + 0x10);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_50 = uVar1;
    FUN_1003fb48c(FUN_1001b1bbc,auStack_60,0xd000000000000095,0x8000000100877f50,0xd000000000000012,
                  0x800000010089ab30,0x6d,0);
    IVar2 = _objc_msgSend(*(ID *)(unaff_x20 + _TtC14UURemoteServer15StreamerManager::controlled),
                          "ControlledClearRoom:",(ulong)uVar1);
    uStack_4c = (undefined4)IVar2;
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_50 = uVar1;
    FUN_1003fb48c(thunk_FUN_1001b5640,auStack_60,0xd000000000000095,0x8000000100877f50,
                  0x6f6f527261656c63,0xed0000293a5f286d,0x174,0);
  }
  return;
}

