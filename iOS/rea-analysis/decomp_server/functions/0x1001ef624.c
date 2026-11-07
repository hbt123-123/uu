// rea decompile_all
// name: FUN_1001ef624
// address: 0x1001ef624
// body: available
// range: 0x1001ef624-0x1001ef993 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001ef990 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ef624(long param_1,long param_2,long param_3)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  char cVar4;
  long lVar5;
  code *pcVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  long extraout_x8;
  long lVar10;
  undefined1 auStack_e0 [16];
  long alStack_d0 [4];
  char *local_b0;
  char *pcStack_a8;
  undefined2 local_a0;
  undefined2 local_9e;
  undefined4 local_9c;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar8 = 0;
  __s10Foundation4DateVMa();
  lVar10 = *(long *)(lVar8 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar10 + 0x40));
  lVar5 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(param_1 + 0x10,auStack_80,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 == 0) goto LAB_1001ef950;
  cVar4 = *(char *)(param_1 + 0x14);
  if (cVar4 == '\0') {
    _swift_bridgeObjectRelease(0xe700000000000000);
LAB_1001ef788:
    if (*(int *)(param_1 + 0x18) < 0) {
      FUN_100401b14(0);
      FUN_1003fb4ec(FUN_1001fa768,param_1,0xd000000000000095,0x80000001008a00c0,0xd000000000000012,
                    0x80000001008a1890,0x2f9,0);
    }
    else {
      lVar2 = param_2;
      if (param_2 < 2) {
        lVar2 = 1;
      }
      lVar3 = param_3;
      if (param_3 < 2) {
        lVar3 = 1;
      }
      *(long *)(param_1 + _TtC14UURemoteServer15TerminalSession::cols) = lVar2;
      *(long *)(param_1 + _TtC14UURemoteServer15TerminalSession::rows) = lVar3;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      *(long *)((long)alStack_d0 + lVar5) = param_1;
      *(long *)((long)alStack_d0 + lVar5 + 8) = lVar2;
      *(long *)((long)alStack_d0 + lVar5 + 0x10) = lVar3;
      pcVar6 = FUN_1001fa754;
      local_b0 = s___PTY___writeInput_running_sessi_1008a1860 + 0x30;
      pcStack_a8 = "tmuxCreationPending";
      FUN_1003fb48c(FUN_1001fa754,auStack_e0 + lVar5,0xd000000000000095,0x80000001008a00c0,
                    0xd000000000000012,0x80000001008a1890,0x301,0);
      if (0xffff < param_3) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001ef98c);
        (*pcVar6)();
      }
      if (0xffff < param_2) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1001ef990);
        (*pcVar6)();
      }
      local_a0 = (undefined2)lVar3;
      local_9e = (undefined2)lVar2;
      local_9c = 0;
      iVar7 = *(int *)(param_1 + 0x18);
      __s6Darwin10TIOCSWINSZSuvg();
      __s6Darwin5ioctlys5Int32VAD_SuSvtF(iVar7,pcVar6,&local_a0);
      if (iVar7 < 0) {
        FUN_1003fb4ec(FUN_1001fa760,param_1,0xd000000000000095,
                      (ulong)pcStack_a8 | 0x8000000000000000,0xd000000000000012,
                      (ulong)local_b0 | 0x8000000000000000,0x30b,0);
      }
      __s10Foundation4DateVACycfC((long)&local_b0 + lVar5);
      lVar2 = _TtC14UURemoteServer15TerminalSession::lastActiveTime;
      _swift_beginAccess(param_1 + _TtC14UURemoteServer15TerminalSession::lastActiveTime,auStack_98,
                         0x21,0);
      (**(code **)(lVar10 + 0x28))(param_1 + lVar2,(long)&local_b0 + lVar5,lVar8);
      _swift_endAccess(auStack_98);
    }
  }
  else {
    uVar9 = 0x6465686361746564;
    if (cVar4 != '\x01') {
      uVar9 = 0x646574697865;
    }
    uVar1 = 0xe800000000000000;
    if (cVar4 != '\x01') {
      uVar1 = 0xe600000000000000;
    }
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (uVar9,uVar1,0x676e696e6e7572,0xe700000000000000,0);
    _swift_bridgeObjectRelease(uVar1);
    if ((uVar9 & 1) != 0) goto LAB_1001ef788;
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1001fa74c,param_1,0xd000000000000095,0x80000001008a00c0,0xd000000000000012,
                  0x80000001008a1890,0x2f5,0);
  }
  _swift_release(param_1);
LAB_1001ef950:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

