// rea decompile_all
// name: FUN_10002e324
// address: 0x10002e324
// body: available
// range: 0x10002e324-0x10002e77b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002e324(ulong param_1,long param_2,undefined8 param_3)

{
  ulong uVar1;
  code *pcVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  long lVar8;
  int iVar9;
  undefined1 auStack_a0 [16];
  int local_90;
  undefined4 uStack_8c;
  long local_88;
  undefined1 auStack_68 [24];
  
  puVar3 = auStack_68;
  _swift_beginAccess(unaff_x20 + 0xb8,puVar3,0x20,0);
  lVar6 = *(long *)(unaff_x20 + 0xb8);
  iVar9 = (int)param_3;
  uStack_8c = (undefined4)param_1;
  local_90 = iVar9;
  local_88 = param_2;
  if ((*(long *)(lVar6 + 0x10) == 0) ||
     (uVar1 = param_1, thunk_FUN_1001a2c34(), ((ulong)puVar3 & 1) == 0)) {
    _swift_endAccess(auStack_68);
  }
  else {
    plVar5 = (long *)(*(long *)(lVar6 + 0x38) + uVar1 * 0x18);
    lVar7 = *plVar5;
    lVar6 = plVar5[1];
    lVar8 = plVar5[2];
    _swift_endAccess(auStack_68);
    if (lVar7 == param_2 && (int)lVar6 == iVar9) {
      uVar4 = 0x21;
      _swift_beginAccess(unaff_x20 + 0xb8,auStack_68,0x21,0);
      _swift_retain(lVar8);
      FUN_1001dde60(param_1);
      _swift_endAccess(auStack_68);
      _swift_release(uVar4);
      lVar6 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) +
                       _TtC14UURemoteServer15StreamerManager::dispatcher);
      if (((lVar6 == 0) ||
          (lVar6 = *(long *)(lVar6 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession
                            ), lVar6 == 0)) ||
         (*(int *)(lVar6 + _TtC14UURemoteServer22StreamerConnectSession::handle) != iVar9)) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        pcVar2 = FUN_10003f9bc;
        uVar4 = 1999;
      }
      else {
        FUN_10004d12c();
        uVar1 = param_1;
        thunk_FUN_100152fd0(param_1,uVar4);
        _swift_bridgeObjectRelease(uVar4);
        if ((uVar1 & 1) == 0) {
          uVar1 = param_1;
          FUN_1000231b4(param_1,PTR___swiftEmptySetSingleton_100995eb0);
          if ((uVar1 & 1) == 0) {
            _swift_beginAccess(unaff_x20 + 200,auStack_68,0x21,0);
            FUN_1001ddfa4(param_1);
            _swift_endAccess(auStack_68);
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)();
            FUN_1003fb4bc(FUN_10003f9c8,auStack_a0,0xd0000000000000a9,0x8000000100877660,
                          0xd000000000000031,0x8000000100878fb0,0x7e1,0);
            FUN_100017cb4(param_1,param_3,1);
          }
          else {
            FUN_10002bb14(param_1,0xd000000000000023,0x8000000100878ff0);
            FUN_100401b14(0);
            (*(code *)PTR____chkstk_darwin_100995498)();
            FUN_1003fb4bc(FUN_10003f9d4,auStack_a0,0xd0000000000000a9,0x8000000100877660,
                          0xd000000000000031,0x8000000100878fb0,0x7db,0);
            FUN_100019690(PTR___swiftEmptySetSingleton_100995eb0);
            FUN_1000162bc(param_3,0);
          }
          _swift_release(lVar8);
          return;
        }
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        pcVar2 = FUN_10003f9e0;
        uVar4 = 0x7d3;
      }
      FUN_1003fb48c(pcVar2,auStack_a0,0xd0000000000000a9,0x8000000100877660,0xd000000000000031,
                    0x8000000100878fb0,uVar4,0);
      _swift_release(lVar8);
      return;
    }
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  FUN_1003fb48c(FUN_10003f9b0,auStack_a0,0xd0000000000000a9,0x8000000100877660,0xd000000000000031,
                0x8000000100878fb0,0x7ca,0);
  return;
}

