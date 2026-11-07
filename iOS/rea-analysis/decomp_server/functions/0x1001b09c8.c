// rea decompile_all
// name: FUN_1001b09c8
// address: 0x1001b09c8
// body: available
// range: 0x1001b09c8-0x1001b0bff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001b09c8(uint param_1,long param_2)

{
  undefined1 uVar1;
  long lVar2;
  long lVar3;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_58,0,0);
  param_2 = param_2 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_2 != 0) {
    if (((param_1 & 0xfe) == 2) || (((param_1 & 1) != 0 && ((param_1 & 1) == 0)))) {
      if (*(char *)(param_2 + _TtC14UURemoteServer15StreamerManager::wasNetworkReachable) == '\x01')
      {
        FUN_100401b14(0);
        FUN_1003fb48c(FUN_1001b0c2c,0,0xd000000000000095,0x8000000100877f50,0xd000000000000015,
                      0x800000010089b6b0,0x105,0);
      }
      uVar1 = 0;
    }
    else if ((*(byte *)(param_2 + _TtC14UURemoteServer15StreamerManager::wasNetworkReachable) & 1)
             == 0) {
      FUN_100401b14(0);
      FUN_1003fb48c(FUN_1001b0c00,0,0xd000000000000095,0x8000000100877f50,0xd000000000000015,
                    0x800000010089b6b0,0xfa,0);
      lVar3 = *(long *)(param_2 + _TtC14UURemoteServer15StreamerManager::roomConfigFetcher);
      lVar2 = *(long *)(lVar3 + 0x10);
      *(undefined8 *)(lVar2 + 0x18) = 0;
      *(undefined8 *)(lVar2 + 0x20) = 0;
      _swift_retain(lVar3);
      FUN_1003fb48c(thunk_FUN_1001b5520,lVar3,0xd000000000000099,0x800000010089ad60,
                    0x746e497465736572,0xef29286c61767265,0x4b,0);
      _swift_release(lVar3);
      if ((*(long *)(param_2 + _TtC14UURemoteServer15StreamerManager::dispatcher) == 0) ||
         (lVar2 = *(long *)(*(long *)(param_2 + _TtC14UURemoteServer15StreamerManager::dispatcher) +
                           _TtC14UURemoteServer18StreamerDispatcher::room),
         _swift_beginAccess(lVar2 + 0x18,auStack_70,0,0), (*(ulong *)(lVar2 + 0x20) | 4) == 4)) {
        FUN_1001b06b8(0);
        uVar1 = 1;
      }
      else {
        uVar1 = 1;
      }
    }
    else {
      uVar1 = 1;
    }
    *(undefined1 *)(param_2 + _TtC14UURemoteServer15StreamerManager::wasNetworkReachable) = uVar1;
    return;
  }
  return;
}

