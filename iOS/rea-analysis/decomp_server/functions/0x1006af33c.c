// rea decompile_all
// name: FUN_1006af33c
// address: 0x1006af33c
// body: available
// range: 0x1006af33c-0x1006af5f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006af5f0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006af33c(uint *param_1,long param_2)

{
  char *pcVar1;
  undefined8 uVar2;
  char *pcVar3;
  char *pcVar4;
  uint uVar5;
  time_t local_40c0;
  timeval tStack_40b8;
  undefined1 auStack_40a8 [8];
  char local_40a0 [64];
  undefined4 local_4060;
  undefined8 local_405c;
  undefined2 local_4054;
  uint local_4052;
  undefined2 local_404e;
  char *local_404c;
  undefined2 local_4044;
  long local_4042;
  long local_58;
  
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  FUN_100697dd4(auStack_40a8);
  if ((param_1 != (uint *)0x0) && (param_2 != 0)) {
    pcVar3 = "";
    uVar2 = *(undefined8 *)(param_1 + 4);
    pcVar1 = pcVar3;
    if (*(char **)(param_1 + 6) != (char *)0x0) {
      pcVar1 = *(char **)(param_1 + 6);
    }
    FUN_100695574();
    if (DAT_100aba060 == 1) {
      _NSLog(&cf___s___s___s__d__s___s);
    }
    else if (DAT_100aba060 == 2) {
      pcVar4 = pcVar3;
      if (*(char **)(param_1 + 2) != (char *)0x0) {
        pcVar4 = *(char **)(param_1 + 2);
      }
      _os_log_create("",pcVar4);
      uVar5 = (uint)(0x111001010202 >> (((ulong)*param_1 & 7) << 3));
      if (5 < (ulong)*param_1) {
        uVar5 = 0;
      }
      pcVar4 = pcVar3;
      _os_log_type_enabled();
      if (((ulong)pcVar4 & 1) != 0) {
        local_4052 = param_1[8];
        local_4060 = 0x8200402;
        local_4054 = 0x400;
        local_404e = 0x820;
        local_4044 = 0x820;
        local_405c = uVar2;
        local_404c = pcVar1;
        local_4042 = param_2;
        __os_log_impl(0x100000000,pcVar3,uVar5 & 0xff,"[%s:%d, %s][%s",&local_4060,0x26);
      }
    }
    else {
      _bzero(&local_4060,0x4000);
      _gettimeofday(&tStack_40b8,(void *)0x0);
      local_40c0 = *(time_t *)(param_1 + 10);
      _localtime(&local_40c0);
      local_40a0[0x28] = '\0';
      local_40a0[0x29] = '\0';
      local_40a0[0x2a] = '\0';
      local_40a0[0x2b] = '\0';
      local_40a0[0x2c] = '\0';
      local_40a0[0x2d] = '\0';
      local_40a0[0x2e] = '\0';
      local_40a0[0x2f] = '\0';
      local_40a0[0x20] = '\0';
      local_40a0[0x21] = '\0';
      local_40a0[0x22] = '\0';
      local_40a0[0x23] = '\0';
      local_40a0[0x24] = '\0';
      local_40a0[0x25] = '\0';
      local_40a0[0x26] = '\0';
      local_40a0[0x27] = '\0';
      local_40a0[0x38] = '\0';
      local_40a0[0x39] = '\0';
      local_40a0[0x3a] = '\0';
      local_40a0[0x3b] = '\0';
      local_40a0[0x3c] = '\0';
      local_40a0[0x3d] = '\0';
      local_40a0[0x3e] = '\0';
      local_40a0[0x3f] = '\0';
      local_40a0[0x30] = '\0';
      local_40a0[0x31] = '\0';
      local_40a0[0x32] = '\0';
      local_40a0[0x33] = '\0';
      local_40a0[0x34] = '\0';
      local_40a0[0x35] = '\0';
      local_40a0[0x36] = '\0';
      local_40a0[0x37] = '\0';
      local_40a0[8] = '\0';
      local_40a0[9] = '\0';
      local_40a0[10] = '\0';
      local_40a0[0xb] = '\0';
      local_40a0[0xc] = '\0';
      local_40a0[0xd] = '\0';
      local_40a0[0xe] = '\0';
      local_40a0[0xf] = '\0';
      local_40a0[0] = '\0';
      local_40a0[1] = '\0';
      local_40a0[2] = '\0';
      local_40a0[3] = '\0';
      local_40a0[4] = '\0';
      local_40a0[5] = '\0';
      local_40a0[6] = '\0';
      local_40a0[7] = '\0';
      local_40a0[0x18] = '\0';
      local_40a0[0x19] = '\0';
      local_40a0[0x1a] = '\0';
      local_40a0[0x1b] = '\0';
      local_40a0[0x1c] = '\0';
      local_40a0[0x1d] = '\0';
      local_40a0[0x1e] = '\0';
      local_40a0[0x1f] = '\0';
      local_40a0[0x10] = '\0';
      local_40a0[0x11] = '\0';
      local_40a0[0x12] = '\0';
      local_40a0[0x13] = '\0';
      local_40a0[0x14] = '\0';
      local_40a0[0x15] = '\0';
      local_40a0[0x16] = '\0';
      local_40a0[0x17] = '\0';
      _snprintf(local_40a0,0x40,"%d-%02d-%02d %+.1f %02d:%02d:%02d.%.3d");
      _snprintf((char *)&local_4060,0x4000,"[%s][%s][%jd, %jd%s][%s][%s:%d, %s][%s");
      _puts((char *)&local_4060);
    }
  }
  FUN_100697e2c(auStack_40a8);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_58) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

