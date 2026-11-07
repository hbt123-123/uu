// rea decompile_all
// name: FUN_1001eefe8
// address: 0x1001eefe8
// body: available
// range: 0x1001eefe8-0x1001ef237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001eefe8(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  ulong uVar5;
  long extraout_x8;
  long lVar6;
  undefined1 auStack_90 [8];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [24];
  
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar4 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar6 + 0x40));
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 == 0) {
    return;
  }
  cVar2 = *(char *)(param_1 + 0x14);
  if (cVar2 == '\0') {
    _swift_bridgeObjectRelease(0xe700000000000000);
  }
  else {
    uVar5 = 0x6465686361746564;
    if (cVar2 != '\x01') {
      uVar5 = 0x646574697865;
    }
    uVar1 = 0xe800000000000000;
    if (cVar2 != '\x01') {
      uVar1 = 0xe600000000000000;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar5,uVar1,0x676e696e6e7572,0xe700000000000000,0);
    _swift_bridgeObjectRelease(uVar1);
    if ((uVar5 & 1) == 0) {
      FUN_100401b14(0);
      FUN_1003fb48c(FUN_1001fa704,param_1,0xd000000000000095,0x80000001008a00c0,0xd000000000000011,
                    0x80000001008a17b0,0x2dd,0);
      goto LAB_1001ef214;
    }
  }
  if (*(int *)(param_1 + 0x18) < 0) {
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_1001fa70c,param_1,0xd000000000000095,0x80000001008a00c0,0xd000000000000011,
                  0x80000001008a17b0,0x2e1,0);
  }
  else {
    _swift_retain(param_1);
    FUN_100008184(param_2,param_3);
    FUN_1001f7f0c(param_2,param_3,param_1,param_2,param_3);
    __s10Foundation4DateVACycfC(auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0));
    lVar3 = _TtC14UURemoteServer15TerminalSession::lastActiveTime;
    _swift_beginAccess(param_1 + _TtC14UURemoteServer15TerminalSession::lastActiveTime,auStack_88,
                       0x21,0);
    (**(code **)(lVar6 + 0x28))
              (param_1 + lVar3,auStack_90 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0),lVar4);
    _swift_endAccess(auStack_88);
  }
LAB_1001ef214:
  _swift_release(param_1);
  return;
}

