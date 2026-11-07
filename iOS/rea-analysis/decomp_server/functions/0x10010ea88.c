// rea decompile_all
// name: FUN_10010ea88
// address: 0x10010ea88
// body: available
// range: 0x10010ea88-0x10010edfb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10010ea88(ulong param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  ID IVar6;
  code *pcVar7;
  long extraout_x8;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  ulong uVar13;
  undefined1 auStack_d0 [16];
  undefined4 auStack_c0 [4];
  undefined8 local_b0;
  undefined8 local_a8;
  undefined8 local_a0;
  undefined1 auStack_90 [24];
  undefined1 auStack_78 [24];
  
  lVar4 = 0;
  local_b0 = param_5;
  local_a8 = param_6;
  local_a0 = param_7;
  __s10Foundation4UUIDVMa();
  lVar8 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar8 + 0x40));
  lVar1 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar13 = (long)&local_b0 + lVar1;
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar3 = DAT_100b360a8;
  lVar2 = _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration;
  lVar9 = *(long *)(DAT_100b360a8 + 0x88);
  _swift_beginAccess(lVar9 + _TtC14UURemoteServer19SecondScreenManager::secondScreenGeneration,
                     auStack_78,0,0);
  (**(code **)(lVar8 + 0x10))(uVar13,lVar9 + lVar2,lVar4);
  uVar5 = uVar13;
  __s10Foundation4UUIDV2eeoiySbAC_ACtFZ(uVar13,param_2);
  (**(code **)(lVar8 + 8))(uVar13,lVar4);
  uVar11 = (undefined4)param_3;
  if ((uVar5 & 1) == 0) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined4 *)((long)auStack_c0 + lVar1) = uVar11;
    pcVar7 = FUN_100112e54;
    uVar10 = 0xd6;
  }
  else {
    _swift_beginAccess(param_4 + 0x10,auStack_90,0,0);
    param_4 = param_4 + 0x10;
    _swift_weakLoadStrong();
    if (param_4 != 0) {
      FUN_10010f05c(param_1 & 0xffffffff | (param_1 >> 0x20 & 1) << 0x20,param_3,local_b0,local_a8,
                    local_a0);
      _swift_release(param_4);
      return;
    }
    FUN_100401b14();
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined4 *)((long)auStack_c0 + lVar1) = uVar11;
    FUN_1003fb48c(FUN_100112e5c,auStack_d0 + lVar1,0xd0000000000000ac,0x800000010088b950,
                  0xd00000000000002b,0x800000010088c020,0xdb,0);
    uVar10 = *(undefined8 *)(lVar3 + 0x88);
    _swift_retain(uVar10);
    FUN_10008323c();
    _swift_release(uVar10);
    IVar6 = _objc_msgSend(*(ID *)(*(long *)(lVar3 + 0x28) +
                                 _TtC14UURemoteServer15StreamerManager::controlled),
                          "ControlledClearRoom:",param_3);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(undefined4 *)((long)auStack_c0 + lVar1) = uVar11;
    *(undefined4 *)((long)auStack_c0 + lVar1 + 4) = uVar12;
    FUN_1003fb48c(thunk_FUN_10003f65c,auStack_d0 + lVar1,0xd000000000000095,0x8000000100877f50,
                  0x6f6f527261656c63,0xed0000293a5f286d,0x174,0);
    (*(code *)PTR____chkstk_darwin_100995498)(0);
    uVar12 = (undefined4)IVar6;
    *(undefined4 *)((long)auStack_c0 + lVar1) = uVar11;
    *(undefined4 *)((long)auStack_c0 + lVar1 + 4) = uVar12;
    pcVar7 = FUN_100112e64;
    uVar10 = 0xde;
  }
  FUN_1003fb48c(pcVar7,auStack_d0 + lVar1,0xd0000000000000ac,0x800000010088b950,0xd00000000000002b,
                0x800000010088c020,uVar10,0);
  return;
}

