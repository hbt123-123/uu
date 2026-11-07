// rea decompile_all
// name: FUN_1001c77f8
// address: 0x1001c77f8
// body: available
// range: 0x1001c77f8-0x1001c7a03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001c77f8(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ID IVar6;
  undefined1 auStack_b0 [16];
  undefined1 local_a0;
  uint local_9c;
  int iStack_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_3 + 0x10,auStack_78,0,0);
  param_3 = param_3 + 0x10;
  _swift_weakLoadStrong();
  if (param_3 != 0) {
    _swift_beginAccess(param_5 + 0x10,auStack_90,0,0);
    uVar1 = *(uint *)(param_5 + 0x10);
    FUN_100008184(param_1,param_2);
    uVar2 = (ulong)uVar1 << 0x20 | 4;
    uVar5 = param_1;
    FUN_1001e7094(uVar2,param_1,param_2);
    if (DAT_100a73b60 != -1) {
      _swift_once(&DAT_100a73b60,FUN_1000efc4c);
    }
    IVar6 = *(ID *)(*(long *)(DAT_100b360a8 + 0x28) +
                   _TtC14UURemoteServer15StreamerManager::controlled);
    uVar3 = uVar2;
    __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(uVar2,uVar5);
    IVar6 = _objc_msgSend(IVar6,"ControlledSendBinaryData:data:",param_4,uVar3);
    if ((int)IVar6 == 0) {
      FUN_100006cdc(uVar2,uVar5);
      FUN_100006cdc(param_1,param_2);
      _swift_release(param_3);
    }
    else {
      uVar4 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar4);
      local_a0 = 4;
      local_9c = uVar1;
      iStack_98 = (int)IVar6;
      FUN_1003fb4ec(thunk_FUN_1001cbb50,auStack_b0,0xd000000000000095,0x8000000100885070,
                    0xd000000000000029,0x800000010089d330,0xed,0);
      FUN_100006cdc(uVar2,uVar5);
      FUN_100006cdc(param_1,param_2);
      _swift_release(param_3);
    }
  }
  return;
}

