// rea decompile_all
// name: FUN_100021838
// address: 0x100021838
// body: available
// range: 0x100021838-0x100021b47 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100021838(undefined8 param_1)

{
  uint uVar1;
  undefined4 uVar2;
  code *pcVar3;
  code *pcVar4;
  ID IVar5;
  undefined8 uVar6;
  long lVar7;
  long unaff_x20;
  undefined4 uVar8;
  long lVar9;
  undefined1 auStack_110 [16];
  undefined1 *local_100;
  undefined4 local_f0;
  undefined1 local_ec;
  undefined4 local_e8;
  undefined1 local_e4;
  undefined4 local_e0;
  uint local_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  code *local_c8;
  undefined1 auStack_a0 [16];
  undefined4 local_90;
  undefined1 auStack_78 [24];
  
  FUN_100011e08(0x74706143706f7473,0xee006c6c41657275);
  FUN_100401b14(0);
  uVar8 = (undefined4)param_1;
  pcVar3 = FUN_10003fcd4;
  local_90 = uVar8;
  FUN_1003fb48c(FUN_10003fcd4,auStack_a0,0xd0000000000000a9,0x8000000100877660,0x74706143706f7473,
                0xef293a5f28657275,0x399,0);
  FUN_10001920c();
  thunk_FUN_10004b080();
  pcVar4 = pcVar3;
  FUN_100045da4();
  _swift_bridgeObjectRelease(pcVar3);
  lVar9 = *(long *)(pcVar4 + 0x10);
  local_c8 = pcVar4;
  if (lVar9 != 0) {
    lVar7 = *(long *)(unaff_x20 + 0x18);
    pcVar3 = pcVar4 + 0x20;
    do {
      uVar1 = *(uint *)pcVar3;
      IVar5 = _objc_msgSend(*(ID *)(*(long *)(lVar7 + 0x10) +
                                   _TtC14UURemoteServer15StreamerManager::controlled),
                            "ControlledStopVideoCapture:videoIndex:",param_1,(ulong)uVar1);
      uVar2 = (int)IVar5;
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_dc = uVar2;
      local_e0 = uVar8;
      FUN_1003fb48c(thunk_FUN_10003f65c,&local_f0,0xd000000000000095,0x8000000100877f50,
                    0xd00000000000001f,0x8000000100877ff0,0x18d,0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      _local_d8 = CONCAT44(uStack_d4,(int)IVar5);
      local_e0 = uVar8;
      local_dc = uVar1;
      FUN_1003fb48c(FUN_10003fce0,&local_f0,0xd0000000000000a9,0x8000000100877660,0x74706143706f7473
                    ,0xef293a5f28657275,0x39c,0);
      lVar9 = lVar9 + -1;
      pcVar3 = pcVar3 + 4;
    } while (lVar9 != 0);
  }
  _swift_bridgeObjectRelease(local_c8);
  _swift_beginAccess(unaff_x20 + 0x88,auStack_78,1,0);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x88);
  *(undefined **)(unaff_x20 + 0x88) = PTR___swiftEmptySetSingleton_100995eb0;
  _swift_bridgeObjectRelease(uVar6);
  FUN_100021d90(param_1);
  (*(code *)PTR____chkstk_darwin_100995498)(0x8000000100879ef0);
  local_100 = &DAT_d000000000000013;
  local_ec = 0;
  local_e8 = 0;
  local_e4 = 1;
  local_e0 = 0;
  local_dc = CONCAT31(local_dc._1_3_,1);
  local_f0 = uVar8;
  FUN_1003fb48c(thunk_FUN_10003fd6c,auStack_110,0xd0000000000000a9,0x8000000100877660,
                0xd000000000000032,0x8000000100879be0,0x9fa,0);
  return;
}

