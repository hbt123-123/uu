// rea decompile_all
// name: FUN_1001382b0
// address: 0x1001382b0
// body: available
// range: 0x1001382b0-0x10013852f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001382b0(long param_1)

{
  int *piVar1;
  code *pcVar2;
  undefined *self;
  undefined1 *puVar3;
  ID IVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined1 auStack_90 [16];
  undefined1 auStack_70 [16];
  long local_60;
  
  FUN_100401b14(0);
  local_60 = param_1;
  FUN_1003fb45c(FUN_100139ab0,auStack_70,0xd0000000000000b1,0x80000001008900b0,0xd00000000000001d,
                0x8000000100890230,0x7a,7);
  if ((*(byte *)(unaff_x20 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::isSendResult) & 1)
      == 0) {
    piVar1 = (int *)(unaff_x20 + _TtC14UURemoteServer29ClipboardReceiveCopyOperation::blockCount);
    if ((*(byte *)(piVar1 + 1) & 1) == 0) {
      (*(code *)PTR____chkstk_darwin_100995498)();
      FUN_1003fb45c(FUN_100139ab8,auStack_90,0xd0000000000000b1,0x80000001008900b0,
                    0xd00000000000001d,0x8000000100890230,0x86,7);
      if ((*(byte *)(piVar1 + 1) & 1) == 0) {
        if (*(int *)(param_1 + 0x10) <= *piVar1) {
          if (*(int *)(param_1 + 0x10) != *piVar1) {
            return;
          }
          (*(code *)PTR____chkstk_darwin_100995498)();
          FUN_1003fb45c(FUN_100139ac0,auStack_90,0xd0000000000000b1,0x80000001008900b0,
                        0xd00000000000001d,0x8000000100890230,0x8f,7);
          FUN_100138980();
          return;
        }
      }
      FUN_1003fb45c(FUN_100138848,0,0xd0000000000000b1,0x80000001008900b0,0xd00000000000001d,
                    0x8000000100890230,0x88,7);
      self = &_OBJC_CLASS___NSError;
      _objc_allocWithZone();
      puVar3 = &DAT_d000000000000010;
      __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                (&DAT_d000000000000010,0x8000000100890250);
      IVar4 = _objc_msgSend((ID)self,"initWithDomain:code:userInfo:",puVar3,0x186a3,0);
      FUN_100138e38(IVar4);
      return;
    }
    pcVar2 = FUN_1001386dc;
    uVar5 = 0x82;
  }
  else {
    pcVar2 = FUN_1001386b0;
    uVar5 = 0x7d;
  }
  FUN_1003fb45c(pcVar2,0,0xd0000000000000b1,0x80000001008900b0,0xd00000000000001d,0x8000000100890230
                ,uVar5,7);
  return;
}

