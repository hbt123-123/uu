// rea decompile_all
// name: FUN_1001f4168
// address: 0x1001f4168
// body: available
// range: 0x1001f4168-0x1001f42fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001f42f8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f4168(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  int iVar4;
  long unaff_x20;
  undefined1 auStack_a0 [16];
  undefined2 local_70;
  undefined2 local_6e;
  undefined4 local_6c;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  lVar1 = param_1;
  if (param_1 < 2) {
    lVar1 = 1;
  }
  *(long *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::cols) = lVar1;
  lVar2 = param_2;
  if (param_2 < 2) {
    lVar2 = 1;
  }
  *(long *)(unaff_x20 + _TtC14UURemoteServer15TerminalSession::rows) = lVar2;
  if (-1 < *(int *)(unaff_x20 + 0x18)) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    pcVar3 = FUN_1001fa6b8;
    FUN_1003fb48c(FUN_1001fa6b8,auStack_a0,0xd000000000000095,0x80000001008a00c0,0xd000000000000017,
                  0x80000001008a1680,0x3f5,0);
    if (0xffff < param_2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f42f4);
      (*pcVar3)();
    }
    if (0xffff < param_1) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001f42f8);
      (*pcVar3)();
    }
    local_70 = (undefined2)lVar2;
    local_6e = (undefined2)lVar1;
    local_6c = 0;
    iVar4 = *(int *)(unaff_x20 + 0x18);
    __s6Darwin10TIOCSWINSZSuvg();
    __s6Darwin5ioctlys5Int32VAD_SuSvtF(iVar4,pcVar3,&local_70);
    if (iVar4 < 0) {
      FUN_1003fb4ec(FUN_1001fa6c4);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_68) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

