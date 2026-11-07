// rea decompile_all
// name: FUN_1001849d8
// address: 0x1001849d8
// body: available
// range: 0x1001849d8-0x100184cf3 inclusive
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

void FUN_1001849d8(long param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 *puVar1;
  ulong uVar2;
  undefined8 *self;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined8 uVar6;
  undefined1 auStack_1e0 [16];
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  ulong local_1c0;
  undefined8 uStack_1b8;
  undefined1 local_1b0;
  ulong local_1a0;
  undefined4 local_194;
  long local_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined1 auStack_80 [32];
  
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    puVar1 = (undefined8 *)(param_1 + 0x10);
    local_190 = param_1;
    FUN_10003f030(puVar1,*(undefined8 *)(param_1 + 0x28));
    uVar2 = param_2;
    (*(code *)*puVar1)(param_2,param_3);
    local_194 = 1;
    if ((int)uVar2 != 1 && (int)uVar2 != 0xd) {
      local_194 = 2;
    }
    local_1a0 = uVar2 & 0x100000000;
    if (local_1a0 != 0) {
      local_194 = 0;
    }
    self = (undefined8 *)
           NSDistributedNotificationCenter::defaultCenter
                     ((ID)&_OBJC_CLASS___NSDistributedNotificationCenter,"defaultCenter");
    puVar1 = self;
    FUN_1003aa548();
    uVar6 = *puVar1;
    puVar3 = &DAT_100a78b30;
    FUN_100004bb4(&DAT_100a78b30,&DAT_10080d968);
    _swift_initStackObject();
    *(undefined8 *)(puVar3 + 0x18) = 6;
    *(undefined8 *)(puVar3 + 0x10) = 3;
    puVar4 = PTR___sSSSHsWP_100995808;
    puVar5 = PTR___sSSN_1009957f8;
    local_188 = 0x4974736575716572;
    uStack_180 = 0xe900000000000064;
    __ss11AnyHashableVyABxcSHRzlufC
              (puVar3 + 0x20,&local_188,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808);
    *(undefined **)(puVar3 + 0x60) = puVar5;
    *(undefined8 *)(puVar3 + 0x48) = param_4;
    *(undefined8 *)(puVar3 + 0x50) = param_5;
    local_188 = 0x68746170;
    uStack_180 = 0xe400000000000000;
    _swift_bridgeObjectRetain(param_5);
    __ss11AnyHashableVyABxcSHRzlufC(puVar3 + 0x68,&local_188,puVar5,puVar4);
    *(undefined **)(puVar3 + 0xa8) = puVar5;
    *(ulong *)(puVar3 + 0x90) = param_2;
    *(undefined8 *)(puVar3 + 0x98) = param_3;
    local_188 = 0x6269737365636361;
    uStack_180 = 0xea0000000000656c;
    _swift_bridgeObjectRetain(param_3);
    __ss11AnyHashableVyABxcSHRzlufC(puVar3 + 0xb0,&local_188,puVar5,puVar4);
    *(undefined **)(puVar3 + 0xf0) = PTR___sSbN_1009958c8;
    puVar3[0xd8] = (char)(local_1a0 >> 0x20);
    puVar4 = puVar3;
    FUN_1000cc410(puVar3);
    _swift_setDeallocating(puVar3);
    puVar5 = &DAT_100a775c0;
    FUN_100004bb4(&DAT_100a775c0,&DAT_10080c1f0);
    _swift_arrayDestroy(puVar3 + 0x20,3,puVar5);
    puVar3 = puVar4;
    __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
              (puVar4,PTR___ss11AnyHashableVN_100995ad0,PTR___sypN_100995e88 + 8,
               PTR___ss11AnyHashableVSHsWP_100995ad8);
    _swift_bridgeObjectRelease(puVar4);
    _objc_msgSend((ID)self,"postNotificationName:object:userInfo:deliverImmediately:",uVar6,0,puVar3
                  ,1);
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_1b0 = (undefined1)local_194;
    local_1d0 = param_4;
    uStack_1c8 = param_5;
    local_1c0 = param_2;
    uStack_1b8 = param_3;
    FUN_1003fb48c(FUN_100185bc0,auStack_1e0,0xd0000000000000b5,0x8000000100897680,0xd000000000000011
                  ,0x8000000100897a40,0x67,0);
    _swift_release(local_190);
  }
  return;
}

