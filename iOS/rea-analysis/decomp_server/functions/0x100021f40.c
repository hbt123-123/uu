// rea decompile_all
// name: FUN_100021f40
// address: 0x100021f40
// body: available
// range: 0x100021f40-0x1000222eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100021f40(undefined8 param_1,ulong param_2,uint param_3)

{
  ulong uVar1;
  long unaff_x20;
  undefined1 auStack_c0 [16];
  undefined8 local_b0 [2];
  undefined4 local_a0;
  uint local_9c;
  uint local_98;
  undefined1 local_94;
  
  FUN_100011e08(0xd000000000000011,0x800000010087a130);
  if ((param_2 >> 0x20 & 1) == 0) {
    uVar1 = param_2;
    FUN_10002250c();
    if ((uVar1 >> 0x20 & 1) == 0) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_98 = (uint)uVar1;
      local_a0 = (int)param_1;
      local_9c = (uint)param_2;
      FUN_1003fb48c(FUN_10003fd50,local_b0,0xd0000000000000a9,0x8000000100877660,0xd000000000000029,
                    0x800000010087a150,0x3af,0);
      _objc_msgSend(*(ID *)(*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) +
                           _TtC14UURemoteServer15StreamerManager::controlled),
                    "ControlledStopVideoCapture:videoIndex:",param_1,uVar1);
      (*(code *)PTR____chkstk_darwin_100995498)();
      FUN_1003fb48c(thunk_FUN_10003f65c,&local_a0,0xd000000000000095,0x8000000100877f50,
                    0xd00000000000001f,0x8000000100877ff0,0x18d,0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      FUN_1003fb48c(FUN_10003fd60,&local_a0,0xd0000000000000a9,0x8000000100877660,0xd000000000000029
                    ,0x800000010087a150,0x3b1,0);
      FUN_100020c04(param_2,uVar1);
      (*(code *)PTR____chkstk_darwin_100995498)(0x800000010087a180);
      local_b0[0] = 0xd000000000000016;
      local_9c = local_9c & 0xffffff00;
      local_94 = 0;
      local_a0 = (int)param_1;
      local_98 = (uint)param_2;
      FUN_1003fb48c(thunk_FUN_10003fd6c,auStack_c0,0xd0000000000000a9,0x8000000100877660,
                    0xd000000000000032,0x8000000100879be0,0x9fa,0);
      if ((param_3 & 1) != 0) {
        FUN_1000162bc(param_1,0);
      }
    }
    else {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      FUN_1003fb48c(FUN_10003fd44,&local_a0,0xd0000000000000a9,0x8000000100877660,0xd000000000000029
                    ,0x800000010087a150,0x3ac,0);
    }
  }
  else {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb48c(FUN_10003fd3c,&local_a0,0xd0000000000000a9,0x8000000100877660,0xd000000000000029,
                  0x800000010087a150,0x3a7,0);
    FUN_100021838(param_1);
  }
  return;
}

