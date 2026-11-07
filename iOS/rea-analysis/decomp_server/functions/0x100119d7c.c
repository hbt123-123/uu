// rea decompile_all
// name: FUN_100119d7c
// address: 0x100119d7c
// body: available
// range: 0x100119d7c-0x10011a0bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100119d7c(uint param_1)

{
  byte bVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  code *pcVar5;
  long unaff_x20;
  ulong uVar6;
  undefined1 auStack_60 [16];
  byte local_50;
  byte local_4f;
  
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar2 = 1;
  FUN_1000b35b4();
  bVar1 = (byte)param_1;
  if ((uVar2 & 1) == 0) {
    *(byte *)(unaff_x20 + _TtC14UURemoteServer15InputController::___lazy_storage___isCapital) =
         bVar1 & 1;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    pcVar5 = FUN_10011cd58;
    uVar4 = 0x395;
LAB_100119f38:
    local_50 = bVar1 & 1;
    FUN_1003fb48c(pcVar5,auStack_60,0xd000000000000092,0x8000000100882970,0xd00000000000001b,
                  0x800000010088d090,uVar4,0);
    uVar4 = 1;
  }
  else {
    uVar2 = 0;
    FUN_10011c148(0x10000,param_1 & 1);
    if ((uVar2 & 1) == 0) {
      uVar4 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar4);
      local_50 = (byte)(param_1 & 1);
      pcVar5 = FUN_10011cd60;
      uVar4 = 0x39a;
    }
    else {
      uVar2 = 1;
      FUN_1000b35b4();
      if ((uVar2 & 1) == 0) {
LAB_100119e38:
        *(byte *)(unaff_x20 + _TtC14UURemoteServer15InputController::___lazy_storage___isCapital) =
             bVar1 & 1;
        uVar4 = 0;
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)(uVar4);
        local_4f = (byte)uVar2 & 1;
        pcVar5 = FUN_10011cd68;
        uVar4 = 0x3aa;
        goto LAB_100119f38;
      }
      uVar6 = (ulong)(param_1 & 1);
      uVar3 = 1;
      FUN_10011c298(1,uVar6);
      if ((uVar3 & 1) == 0) {
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_50 = (byte)(param_1 & 1);
        pcVar5 = FUN_10011cd74;
        uVar4 = 0x3a1;
      }
      else {
        FUN_10011c4ac();
        if ((uVar6 & 1) != 0) goto LAB_100119e38;
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_50 = bVar1 & 1;
        pcVar5 = FUN_10011cd7c;
        uVar4 = 0x3a5;
      }
    }
    FUN_1003fb4ec(pcVar5,auStack_60,0xd000000000000092,0x8000000100882970,0xd00000000000001b,
                  0x800000010088d090,uVar4,0);
    uVar4 = 0;
  }
  return uVar4;
}

