// rea decompile_all
// name: FUN_1001e9c28
// address: 0x1001e9c28
// body: available
// range: 0x1001e9c28-0x1001e9e8f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001e9e8c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001e9c28(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  code *pcVar1;
  int iVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 auStack_d0 [16];
  undefined4 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  rlimit local_78;
  size_t local_68;
  uint local_5c;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_5c = 0;
  local_68 = 4;
  iVar2 = _sysctlbyname("kern.maxfilesperproc",&local_5c,&local_68,(void *)0x0,0);
  if (iVar2 == 0 && 0 < (int)local_5c) {
    local_78.rlim_cur = 0;
    local_78.rlim_max = 0;
    iVar2 = _getrlimit(8,&local_78);
    uVar3 = local_5c;
    if (iVar2 == 0) {
      if ((int)local_5c < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1001e9e8c);
        (*pcVar1)();
      }
      uVar4 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar4);
      local_c0 = param_1;
      local_b8 = param_2;
      uStack_b0 = param_3;
      FUN_1003fb48c(FUN_1001fa280,auStack_d0,0xd000000000000095,0x80000001008a00c0,
                    &DAT_d000000000000028,0x80000001008a0a10,0x47e,0);
      goto LAB_1001e9da8;
    }
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    pcVar1 = FUN_1001fa274;
    uVar4 = 0x478;
  }
  else {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    pcVar1 = FUN_1001fa268;
    uVar4 = 0x473;
  }
  FUN_1003fb4bc(pcVar1,&uStack_b0,0xd000000000000095,0x80000001008a00c0,&DAT_d000000000000028,
                0x80000001008a0a10,uVar4,0);
  uVar3 = 0;
LAB_1001e9da8:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(uVar3);
}

