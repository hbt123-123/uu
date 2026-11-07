// rea decompile_all
// name: FUN_100019450
// address: 0x100019450
// body: available
// range: 0x100019450-0x10001968f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100019450(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 uVar2;
  long unaff_x20;
  long lVar3;
  undefined1 auStack_90 [16];
  undefined8 local_80;
  undefined8 uStack_78;
  
  lVar3 = *(long *)(unaff_x20 + 0x90);
  if ((*(char *)(unaff_x20 + 0x99) == '\x01') && (*(long *)(lVar3 + 0x10) != 0)) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    pcVar1 = FUN_10003fca0;
    uVar2 = 0x8c9;
  }
  else {
    *(undefined1 *)(unaff_x20 + 0x99) = 1;
    if (*(long *)(lVar3 + 0x10) == 0) {
      if (DAT_100a73b08 != -1) {
        _swift_once(&DAT_100a73b08,FUN_100010e4c);
        lVar3 = *(long *)(unaff_x20 + 0x90);
      }
      *(undefined8 *)(unaff_x20 + 0x90) = DAT_100a756e0;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(lVar3);
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_80 = param_1;
      uStack_78 = param_2;
      FUN_1003fb48c(FUN_10003fc94,auStack_90,0xd0000000000000a9,0x8000000100877660,
                    0xd000000000000034,0x8000000100879c40,0x8d1,0);
    }
    if ((param_3 & 1) != 0) {
      FUN_100019690();
    }
    uVar2 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar2);
    pcVar1 = FUN_10003fc80;
    uVar2 = 0x8d4;
  }
  local_80 = param_1;
  uStack_78 = param_2;
  FUN_1003fb48c(pcVar1,auStack_90,0xd0000000000000a9,0x8000000100877660,0xd000000000000034,
                0x8000000100879c40,uVar2,0);
  return;
}

