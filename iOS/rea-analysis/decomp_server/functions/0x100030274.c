// rea decompile_all
// name: FUN_100030274
// address: 0x100030274
// body: available
// range: 0x100030274-0x100030727 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100030274(undefined8 param_1,undefined4 param_2,ulong param_3,undefined4 param_4)

{
  ulong self;
  undefined8 uVar1;
  ID IVar2;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  
  self = param_3;
  FUN_10001efe0();
  local_90 = (undefined4)param_1;
  local_88 = (undefined4)param_3;
  uStack_8c = param_2;
  uStack_84 = param_4;
  if ((self >> 0x20 & 1) == 0) {
    FUN_10001a914();
    _objc_msgSend(self,"setVideoTrackIndex:",param_3);
    FUN_100401b14();
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb48c(FUN_10003f940,auStack_a0,0xd0000000000000a9,0x8000000100877660,0xd000000000000041,
                  0x8000000100878b10,0x83d,0);
    _objc_msgSend(*(ID *)(*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) +
                         _TtC14UURemoteServer15StreamerManager::controlled),
                  "ControlledStopVideoCapture:videoIndex:",param_1,param_3);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb48c(thunk_FUN_10003f65c,&local_90,0xd000000000000095,0x8000000100877f50,
                  0xd00000000000001f,0x8000000100877ff0,0x18d,0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb48c(FUN_10003f950,&local_90,0xd0000000000000a9,0x8000000100877660,0xd000000000000041,
                  0x8000000100878b10,0x83f,0);
    uVar1 = param_1;
    FUN_10001adc4(param_1,self,1);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb48c(FUN_10003f95c,&local_90,0xd0000000000000a9,0x8000000100877660,0xd000000000000041,
                  0x8000000100878b10,0x841,0);
    if ((int)uVar1 != 0) {
      IVar2 = _objc_msgSend(self,"screenId");
      FUN_100020c04(IVar2,param_3);
      FUN_1000162bc(param_1,0);
    }
  }
  else if ((*(char *)(unaff_x20 + 0x99) == '\x01') &&
          (*(long *)(*(long *)(unaff_x20 + 0x90) + 0x10) != 0)) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb48c(FUN_10003f934,auStack_a0,0xd0000000000000a9,0x8000000100877660,0xd000000000000041,
                  0x8000000100878b10,0x84b,0);
  }
  else {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb48c(FUN_10003f928,auStack_a0,0xd0000000000000a9,0x8000000100877660,0xd000000000000041,
                  0x8000000100878b10,0x847,0);
    FUN_100021838(param_1);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb48c(thunk_FUN_10003f684,&local_90,0xd0000000000000a9,0x8000000100877660,
                  0xd000000000000012,0x8000000100878030,0x3bb,0);
    FUN_10001adc4(param_1,*(undefined8 *)(unaff_x20 + 0x10),1);
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_1003fb48c(thunk_FUN_10003f690,&local_90,0xd0000000000000a9,0x8000000100877660,
                  0xd000000000000012,0x8000000100878030,0x3bd,0);
    FUN_100022b6c(param_1);
  }
  return;
}

