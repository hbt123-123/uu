// rea decompile_all
// name: FUN_100021d90
// address: 0x100021d90
// body: available
// range: 0x100021d90-0x100021f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100021d90(undefined8 param_1)

{
  ID IVar1;
  code *pcVar2;
  undefined8 uVar3;
  long unaff_x20;
  undefined1 auStack_60 [16];
  undefined4 local_50;
  undefined4 uStack_4c;
  
  if (*(char *)(unaff_x20 + 0x9a) == '\x01') {
    IVar1 = _objc_msgSend(*(ID *)(*(long *)(*(long *)(unaff_x20 + 0x18) + 0x10) +
                                 _TtC14UURemoteServer15StreamerManager::controlled),
                          "ControlledStopAudioCapture:audioIndex:",param_1,0);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_50 = (int)param_1;
    uStack_4c = (int)IVar1;
    FUN_1003fb48c(FUN_10003f65c,auStack_60,0xd000000000000095,0x8000000100877f50,0xd00000000000001f,
                  0x8000000100878160,0x194,0);
    *(undefined1 *)(unaff_x20 + 0x9a) = 0;
    (*(code *)PTR____chkstk_darwin_100995498)();
    pcVar2 = FUN_10003f6b8;
    uVar3 = 0x3fd;
    uStack_4c = (int)IVar1;
  }
  else {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    pcVar2 = FUN_10003f6b0;
    uVar3 = 0x3f8;
  }
  local_50 = (int)param_1;
  FUN_1003fb48c(pcVar2,auStack_60,0xd0000000000000a9,0x8000000100877660,0xd00000000000001c,
                0x8000000100878140,uVar3,0);
  return;
}

