// rea decompile_all
// name: FUN_10003c3ec
// address: 0x10003c3ec
// body: available
// range: 0x10003c3ec-0x10003c763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003c3ec(code *param_1,uint param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  code *pcVar3;
  undefined8 uVar4;
  long lVar5;
  long unaff_x20;
  undefined1 auStack_b0 [16];
  undefined4 local_a0;
  undefined4 uStack_9c;
  undefined1 auStack_90 [16];
  undefined4 local_80;
  uint uStack_7c;
  undefined1 local_78 [24];
  
  FUN_100401b14(0);
  pcVar2 = FUN_10003f8a4;
  local_80 = (int)param_1;
  uStack_7c = param_2;
  FUN_1003fb48c(FUN_10003f8a4,auStack_90,0xd0000000000000a9,0x8000000100877660,0xd000000000000035,
                0x8000000100878a20,0x6d3,0);
  FUN_100011448();
  if ((param_2 & 1) == 0) {
    pcVar2 = (code *)0xd000000000000016;
    FUN_1000509d0(0xd000000000000016,0x8000000100878a60);
  }
  if ((param_2 & 0x110) != 0) {
    FUN_1000177d8(param_1,0x5279616c70736964,0xef6465726f747365);
    _swift_beginAccess(unaff_x20 + 0xd0,local_78,0x21,0);
    FUN_1001df648(param_1);
    _swift_endAccess(local_78);
    pcVar2 = param_1;
    FUN_10002bb14(param_1,0x5279616c70736964,0xef6465726f747365);
  }
  lVar5 = *(long *)(*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) +
                   _TtC14UURemoteServer15StreamerManager::dispatcher);
  if ((lVar5 != 0) &&
     (lVar5 = *(long *)(lVar5 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
     lVar5 != 0)) {
    uVar1 = *(undefined4 *)(lVar5 + _TtC14UURemoteServer22StreamerConnectSession::handle);
    if ((param_2 >> 5 & 1) == 0) {
      FUN_100019690(PTR___swiftEmptySetSingleton_100995eb0);
      if ((param_2 & 0x110) != 0) {
        local_78[0] = 0;
        FUN_10002c4e8((ulong)param_1 & 0xffffffff,0,&DAT_d000000000000010,0x8000000100878a80);
      }
      FUN_1000162bc(uVar1,0);
    }
    else {
      FUN_10004d12c();
      pcVar3 = param_1;
      thunk_FUN_100152fd0(param_1,pcVar2);
      _swift_bridgeObjectRelease(pcVar2);
      if (((ulong)pcVar3 & 1) == 0) {
        _swift_beginAccess(unaff_x20 + 0xd0,local_78,0,0);
        pcVar2 = param_1;
        thunk_FUN_100152fd0(param_1,*(undefined8 *)(unaff_x20 + 0xd0));
        if (((ulong)pcVar2 & 1) == 0) {
          pcVar2 = param_1;
          FUN_10004ffa0();
          if (((ulong)pcVar2 & 1) != 0) {
            FUN_10002c1c8(param_1,uVar1);
            return;
          }
          FUN_100017cb4(param_1,uVar1,1);
          return;
        }
        FUN_1000177d8(param_1,&DAT_d000000000000018,0x8000000100878aa0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        pcVar2 = FUN_10003f8ac;
        uVar4 = 0x6eb;
      }
      else {
        FUN_1000177d8(param_1,0x746963696c707865,0xef6c61766f6d6552);
        (*(code *)PTR____chkstk_darwin_100995498)();
        pcVar2 = FUN_10003f8b8;
        uVar4 = 0x6e6;
      }
      local_a0 = uVar1;
      uStack_9c = (int)param_1;
      FUN_1003fb48c(pcVar2,auStack_b0,0xd0000000000000a9,0x8000000100877660,0xd000000000000035,
                    0x8000000100878a20,uVar4,0);
    }
  }
  return;
}

