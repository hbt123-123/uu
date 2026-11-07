// rea decompile_all
// name: FUN_1001b1170
// address: 0x1001b1170
// body: available
// range: 0x1001b1170-0x1001b13ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001b1170(long param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  undefined1 auStack_90 [16];
  ulong local_80;
  undefined1 auStack_70 [24];
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  _swift_unknownObjectWeakLoadStrong();
  if (param_1 != 0) {
    plVar2 = *(long **)(param_1 + _TtC14UURemoteServer15StreamerManager::networkReachabilityManager)
    ;
    if (plVar2 != (long *)0x0) {
      pcVar4 = *(code **)(*plVar2 + 0x68);
      plVar1 = plVar2;
      _swift_retain();
      (*pcVar4)();
      _swift_release(plVar2);
      if (((ulong)plVar1 & 1) != 0) {
        if (*(long *)(param_1 + _TtC14UURemoteServer15StreamerManager::dispatcher) != 0) {
          lVar3 = *(long *)(*(long *)(param_1 + _TtC14UURemoteServer15StreamerManager::dispatcher) +
                           _TtC14UURemoteServer18StreamerDispatcher::room);
          _swift_beginAccess(lVar3 + 0x18,auStack_70,0,0);
          local_80 = *(ulong *)(lVar3 + 0x20);
          if ((local_80 | 4) != 4) {
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)();
            FUN_1003fb48c(FUN_1001b5518,auStack_90,0xd000000000000095,0x8000000100877f50,
                          0xd000000000000011,0x800000010088a9f0,0x134,0);
            return;
          }
        }
        lVar3 = *(long *)(param_1 + _TtC14UURemoteServer15StreamerManager::roomConfigFetcher);
        lVar5 = *(long *)(lVar3 + 0x10);
        FUN_100401b14(0);
        *(undefined8 *)(lVar5 + 0x18) = 0;
        *(undefined8 *)(lVar5 + 0x20) = 0;
        _swift_retain(lVar3);
        FUN_1003fb48c(FUN_1001b5520,lVar3,0xd000000000000099,0x800000010089ad60,0x746e497465736572,
                      0xef29286c61767265,0x4b,0);
        _swift_release(lVar3);
        FUN_1001b06b8(3);
        return;
      }
    }
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1001b13ac,0,0xd000000000000095,0x8000000100877f50,0xd000000000000011,
                  0x800000010088a9f0,0x12e,0);
  }
  return;
}

