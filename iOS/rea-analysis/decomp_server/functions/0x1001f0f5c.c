// rea decompile_all
// name: FUN_1001f0f5c
// address: 0x1001f0f5c
// body: available
// range: 0x1001f0f5c-0x1001f14af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001f14ac to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f0f5c(long param_1,long param_2,ulong param_3)

{
  char cVar1;
  undefined1 uVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long extraout_x8;
  ulong uVar8;
  undefined8 uVar9;
  long lVar10;
  undefined1 auStack_d0 [16];
  long alStack_c0 [3];
  undefined1 auStack_a8 [8];
  undefined1 auStack_a0 [7];
  undefined1 local_99;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar5 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 == 0) goto LAB_1001f1444;
  cVar1 = *(char *)(param_1 + 0x14);
  if (cVar1 == '\0') {
    _swift_bridgeObjectRelease(0xe700000000000000);
LAB_1001f10c8:
    if (DAT_100a73be8 != -1) {
      _swift_once(&DAT_100a73be8,FUN_1001e92d8);
    }
    lVar4 = DAT_100a7d518;
    if (*(long *)(DAT_100a7d518 + 0x10) != 0) {
      _swift_bridgeObjectRetain(DAT_100a7d518);
      uVar7 = param_3;
      FUN_1001a2c70(param_2);
      _swift_bridgeObjectRelease(lVar4);
      if ((uVar7 & 1) != 0) {
        if (*(int *)(param_1 + 0x18) < 0) {
          FUN_100401b14(0);
          FUN_1003fb4ec(FUN_1001fa7b8,param_1,0xd000000000000095,0x80000001008a00c0,
                        &DAT_d000000000000010,0x80000001008a19b0,0x349,0);
          goto LAB_1001f143c;
        }
        if (DAT_100a73bf0 != -1) {
          _swift_once(&DAT_100a73bf0,FUN_1001e9348);
        }
        lVar4 = DAT_100a7d520;
        if (*(long *)(DAT_100a7d520 + 0x10) == 0) {
LAB_1001f1354:
          if (*(long *)(param_1 + _TtC14UURemoteServer15TerminalSession::tmuxController) == 0) {
            FUN_1001f1d6c(param_2,param_3);
          }
          else {
            FUN_1001f19a4(param_2,param_3);
          }
        }
        else {
          _swift_bridgeObjectRetain(DAT_100a7d520);
          lVar6 = param_2;
          uVar7 = param_3;
          FUN_1001a2c70();
          if ((uVar7 & 1) == 0) {
            _swift_bridgeObjectRelease(lVar4);
            goto LAB_1001f1354;
          }
          uVar2 = *(undefined1 *)(*(long *)(lVar4 + 0x38) + lVar6);
          _swift_bridgeObjectRelease(lVar4);
          uVar7 = (ulong)*(uint *)(param_1 + 0x18);
          local_99 = uVar2;
          _write(uVar7,&local_99,1);
          FUN_100401b14(0);
          if ((long)uVar7 < 0) {
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(long *)((long)alStack_c0 + lVar3) = param_1;
            *(long *)((long)alStack_c0 + lVar3 + 8) = param_2;
            *(ulong *)((long)alStack_c0 + lVar3 + 0x10) = param_3;
            FUN_1003fb4ec(FUN_1001fa7ac,auStack_d0 + lVar3,0xd000000000000095,0x80000001008a00c0,
                          &DAT_d000000000000010,0x80000001008a19b0,0x354,0);
          }
          else {
            (*(code *)PTR____chkstk_darwin_100995498)();
            *(long *)((long)alStack_c0 + lVar3) = param_1;
            *(long *)((long)alStack_c0 + lVar3 + 8) = param_2;
            *(ulong *)((long)alStack_c0 + lVar3 + 0x10) = param_3;
            auStack_a8[lVar3] = uVar2;
            FUN_1003fb48c(FUN_1001fa79c,auStack_d0 + lVar3,0xd000000000000095,0x80000001008a00c0,
                          &DAT_d000000000000010,0x80000001008a19b0,0x356,0);
          }
        }
        __s10Foundation4DateVACycfC(auStack_a0 + lVar3);
        lVar4 = _TtC14UURemoteServer15TerminalSession::lastActiveTime;
        _swift_beginAccess(param_1 + _TtC14UURemoteServer15TerminalSession::lastActiveTime,
                           auStack_98,0x21,0);
        (**(code **)(lVar10 + 0x28))(param_1 + lVar4,auStack_a0 + lVar3,lVar5);
        _swift_endAccess(auStack_98);
        goto LAB_1001f143c;
      }
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    *(long *)((long)alStack_c0 + lVar3) = param_2;
    *(ulong *)((long)alStack_c0 + lVar3 + 8) = param_3;
    *(long *)((long)alStack_c0 + lVar3 + 0x10) = param_1;
    FUN_1003fb48c(FUN_1001fa790,auStack_d0 + lVar3,0xd000000000000095,0x80000001008a00c0,
                  &DAT_d000000000000010,0x80000001008a19b0,0x345,0);
    _swift_release(param_1);
  }
  else {
    uVar7 = 0x6465686361746564;
    if (cVar1 != '\x01') {
      uVar7 = 0x646574697865;
    }
    uVar9 = 0xe800000000000000;
    if (cVar1 != '\x01') {
      uVar9 = 0xe600000000000000;
    }
    uVar8 = 0x676e696e6e7572;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar7,uVar9,0x676e696e6e7572,0xe700000000000000,0);
    _swift_bridgeObjectRelease(uVar9);
    if ((uVar7 & 1) != 0) goto LAB_1001f10c8;
    if (*(char *)(param_1 + 0x14) == '\0') {
      uVar9 = 0xe700000000000000;
    }
    else {
      if (*(char *)(param_1 + 0x14) == '\x01') {
        _swift_bridgeObjectRelease(0xe800000000000000);
        goto LAB_1001f10c8;
      }
      uVar9 = 0xe600000000000000;
      uVar8 = 0x646574697865;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar8,uVar9,0x6465686361746564,0xe800000000000000,0);
    _swift_bridgeObjectRelease(uVar9);
    if ((uVar8 & 1) != 0) goto LAB_1001f10c8;
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1001fa788,param_1,0xd000000000000095,0x80000001008a00c0,&DAT_d000000000000010,
                  0x80000001008a19b0,0x341,0);
LAB_1001f143c:
    _swift_release(param_1);
  }
LAB_1001f1444:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

