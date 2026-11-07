// rea decompile_all
// name: FUN_1001f508c
// address: 0x1001f508c
// body: available
// range: 0x1001f508c-0x1001f5303 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001f5300 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f508c(undefined8 param_1,undefined8 param_2)

{
  pid_t pVar1;
  int iVar2;
  ulong uVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auStack_90 [16];
  int local_5c;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (*(long *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::tmuxController) != 0) {
    FUN_1000a3488(param_1,param_2);
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  FUN_1003fb48c(FUN_1001fa354,auStack_90,0xd000000000000095,0x80000001008a00c0,0xd00000000000001b,
                0x80000001008a0b90,0x4e1,0);
  if (*(char *)(unaff_x20 + 0x14) == '\0') {
    uVar4 = 0xe700000000000000;
    uVar3 = 0x676e696e6e7572;
  }
  else {
    if (*(char *)(unaff_x20 + 0x14) != '\x01') {
      _swift_bridgeObjectRelease(0xe600000000000000);
      goto LAB_1001f52cc;
    }
    uVar4 = 0xe800000000000000;
    uVar3 = 0x6465686361746564;
  }
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (uVar3,uVar4,0x646574697865,0xe600000000000000,0);
  _swift_bridgeObjectRelease(uVar4);
  if (((uVar3 & 1) == 0) && (pVar1 = *(pid_t *)(unaff_x20 + 0x1c), 0 < pVar1)) {
    iVar2 = _kill(pVar1,9);
    if ((iVar2 != 0) && (__s6Darwin5errnos5Int32Vvg(), iVar2 != 3)) {
      (*(code *)PTR____chkstk_darwin_100995498)();
      FUN_1003fb4bc(FUN_1001fa360,&stack0xffffffffffffff80,0xd000000000000095,0x80000001008a00c0,
                    0xd00000000000001b,0x80000001008a0b90,0x4e8,0);
    }
    local_5c = 0;
    iVar2 = _waitpid(pVar1,&local_5c,0);
    if ((iVar2 < 0) && (__s6Darwin5errnos5Int32Vvg(), iVar2 != 10)) {
      (*(code *)PTR____chkstk_darwin_100995498)();
      FUN_1003fb4bc(FUN_1001fa36c,&stack0xffffffffffffff80,0xd000000000000095,0x80000001008a00c0,
                    0xd00000000000001b,0x80000001008a0b90,0x4ed,0);
    }
    *(undefined4 *)(unaff_x20 + 0x1c) = 0;
  }
LAB_1001f52cc:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

