// rea decompile_all
// name: FUN_10018555c
// address: 0x10018555c
// body: available
// range: 0x10018555c-0x10018579b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10018555c(long param_1)

{
  undefined8 uVar1;
  undefined8 *self;
  undefined8 *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  code *pcVar5;
  ulong uVar6;
  undefined1 auStack_60 [16];
  long local_50;
  
  local_50 = param_1;
  if ((*(byte *)(param_1 + 0x60) & 1) == 0) {
    if ((*(ulong *)(param_1 + 0x10) >> 0x3d & 1) == 0) {
      uVar6 = *(ulong *)(param_1 + 8) & 0xffffffffffff;
    }
    else {
      uVar6 = *(ulong *)(param_1 + 0x10) >> 0x38 & 0xf;
    }
    if (uVar6 == 0) {
      uVar1 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar1);
      FUN_1003fb4ec(FUN_1001857a4,auStack_60,0xd0000000000000b5,0x8000000100897680,
                    0x293a5f2874736f70,0xe800000000000000,0x7b,0);
      return;
    }
    self = (undefined8 *)
           NSDistributedNotificationCenter::defaultCenter
                     ((ID)&_OBJC_CLASS___NSDistributedNotificationCenter,"defaultCenter");
    puVar2 = self;
    FUN_1003aa398();
    uVar3 = *puVar2;
    uVar1 = uVar3;
    FUN_100182e1c();
    uVar4 = uVar1;
    FUN_100183774();
    _swift_bridgeObjectRelease(uVar1);
    uVar1 = uVar4;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (uVar4,PTR___ss11AnyHashableVN_100995ad0,PTR___sypN_100995e88 + 8,
               PTR___ss11AnyHashableVSHsWP_100995ad8);
    _swift_bridgeObjectRelease(uVar4);
    _objc_msgSend((ID)self,"postNotificationName:object:userInfo:deliverImmediately:",uVar3,0,uVar1,
                  1);
    uVar1 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar1);
    pcVar5 = FUN_10018579c;
    uVar1 = 0x85;
  }
  else {
    uVar1 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar1);
    pcVar5 = FUN_1001857ac;
    uVar1 = 0x77;
  }
  FUN_1003fb48c(pcVar5,auStack_60,0xd0000000000000b5,0x8000000100897680,0x293a5f2874736f70,
                0xe800000000000000,uVar1,0);
  return;
}

