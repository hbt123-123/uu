// rea decompile_all
// name: FUN_1001c7f24
// address: 0x1001c7f24
// body: available
// range: 0x1001c7f24-0x1001c8283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1001c7f24(long param_1,undefined8 param_2,ulong param_3,char param_4,long param_5,
                  long param_6,undefined8 param_7,ulong param_8)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  ID IVar6;
  undefined1 auStack_d0 [16];
  undefined4 local_c0;
  undefined4 local_bc;
  int iStack_b8;
  char *local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  ulong local_98;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(param_5 + 0x10,auStack_78,0,0);
  param_5 = param_5 + 0x10;
  _swift_weakLoadStrong();
  if (param_5 != 0) {
    if (param_4 == '\0') {
      _swift_beginAccess(param_6 + 0x10,auStack_90,1,0);
      uVar5 = (undefined4)param_1;
      *(undefined4 *)(param_6 + 0x10) = uVar5;
      FUN_1001cb75c(param_7,param_1,0,0x6b6f,0xe200000000000000);
      uVar1 = 0x485b1b4a325b1b;
      uVar3 = 0xe700000000000000;
      FUN_100095bd0();
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_b0 = s__100885070;
      local_c0 = uVar5;
      FUN_1003fb48c(FUN_1001cbb48,auStack_d0,0xd000000000000095,0x8000000100885070,
                    0xd000000000000022,0x800000010089d300,0x126,0);
      FUN_100008184(uVar1,uVar3);
      uVar2 = param_1 << 0x20 | 4;
      uVar4 = uVar1;
      local_a0 = uVar3;
      FUN_1001e7094(uVar2,uVar1,uVar3);
      local_98 = uVar2;
      if (DAT_100a73b60 != -1) {
        _swift_once(&DAT_100a73b60,FUN_1000efc4c);
      }
      IVar6 = *(ID *)(*(long *)(DAT_100b360a8 + 0x28) +
                     _TtC14UURemoteServer15StreamerManager::controlled);
      uVar2 = local_98;
      __s10Foundation4DataV19_bridgeToObjectiveCSo6NSDataCyF(local_98,uVar4);
      local_a8 = uVar4;
      IVar6 = _objc_msgSend(IVar6,"ControlledSendBinaryData:data:",param_7,uVar2);
      if ((int)IVar6 == 0) {
        FUN_100006cdc(local_98,local_a8);
        uVar4 = local_a0;
        FUN_100006cdc(uVar1,local_a0);
        FUN_100006cdc(uVar1,uVar4);
      }
      else {
        (*(code *)PTR____chkstk_darwin_100995498)(0);
        local_c0 = CONCAT31(local_c0._1_3_,4);
        local_bc = uVar5;
        iStack_b8 = (int)IVar6;
        FUN_1003fb4ec(FUN_1001cbb50,auStack_d0,0xd000000000000095,
                      (ulong)local_b0 | 0x8000000000000000,0xd000000000000029,0x800000010089d330,
                      0xed,0);
        FUN_100006cdc(local_98,local_a8);
        uVar4 = local_a0;
        FUN_100006cdc(uVar1,local_a0);
        FUN_100006cdc(uVar1,uVar4);
      }
      if (param_3 >> 0x3c < 0xf) {
        FUN_1001cbd64(param_1,param_2,param_3,0);
        FUN_1001cbb5c(param_7,param_1,param_2,param_3);
        _swift_release(param_5);
        FUN_1001cbd94(param_1,param_2,param_3,0);
        return;
      }
    }
    else if (param_4 == '\x01') {
      FUN_1001cb75c();
    }
    else {
      FUN_1001cafdc(param_7,param_8 >> 0x20,param_1,param_2,param_3);
    }
    _swift_release(param_5);
  }
  return;
}

