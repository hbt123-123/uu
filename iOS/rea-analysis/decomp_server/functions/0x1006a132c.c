// rea decompile_all
// name: FUN_1006a132c
// address: 0x1006a132c
// body: available
// range: 0x1006a132c-0x1006a140b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a1408 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a132c(undefined8 param_1,char *param_2,size_t param_3)

{
  tm *ptVar1;
  tm local_d0;
  __darwin_time_t local_98;
  timeval local_90;
  char local_80 [72];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  _gettimeofday(&local_90,(void *)0x0);
  local_98 = local_90.tv_sec;
  ptVar1 = _localtime(&local_98);
  local_d0.tm_wday = ptVar1->tm_wday;
  local_d0.tm_yday = ptVar1->tm_yday;
  local_d0.tm_mon = ptVar1->tm_mon;
  local_d0.tm_year = ptVar1->tm_year;
  local_d0.tm_gmtoff = ptVar1->tm_gmtoff;
  local_d0.tm_isdst = ptVar1->tm_isdst;
  local_d0._36_4_ = *(undefined4 *)&ptVar1->field_0x24;
  local_d0.tm_zone = ptVar1->tm_zone;
  local_d0.tm_hour = ptVar1->tm_hour;
  local_d0.tm_mday = ptVar1->tm_mday;
  local_d0.tm_sec = ptVar1->tm_sec;
  local_d0.tm_min = ptVar1->tm_min;
  local_80[0x28] = '\0';
  local_80[0x29] = '\0';
  local_80[0x2a] = '\0';
  local_80[0x2b] = '\0';
  local_80[0x2c] = '\0';
  local_80[0x2d] = '\0';
  local_80[0x2e] = '\0';
  local_80[0x2f] = '\0';
  local_80[0x20] = '\0';
  local_80[0x21] = '\0';
  local_80[0x22] = '\0';
  local_80[0x23] = '\0';
  local_80[0x24] = '\0';
  local_80[0x25] = '\0';
  local_80[0x26] = '\0';
  local_80[0x27] = '\0';
  local_80[0x38] = '\0';
  local_80[0x39] = '\0';
  local_80[0x3a] = '\0';
  local_80[0x3b] = '\0';
  local_80[0x3c] = '\0';
  local_80[0x3d] = '\0';
  local_80[0x3e] = '\0';
  local_80[0x3f] = '\0';
  local_80[0x30] = '\0';
  local_80[0x31] = '\0';
  local_80[0x32] = '\0';
  local_80[0x33] = '\0';
  local_80[0x34] = '\0';
  local_80[0x35] = '\0';
  local_80[0x36] = '\0';
  local_80[0x37] = '\0';
  local_80[8] = '\0';
  local_80[9] = '\0';
  local_80[10] = '\0';
  local_80[0xb] = '\0';
  local_80[0xc] = '\0';
  local_80[0xd] = '\0';
  local_80[0xe] = '\0';
  local_80[0xf] = '\0';
  local_80[0] = '\0';
  local_80[1] = '\0';
  local_80[2] = '\0';
  local_80[3] = '\0';
  local_80[4] = '\0';
  local_80[5] = '\0';
  local_80[6] = '\0';
  local_80[7] = '\0';
  local_80[0x18] = '\0';
  local_80[0x19] = '\0';
  local_80[0x1a] = '\0';
  local_80[0x1b] = '\0';
  local_80[0x1c] = '\0';
  local_80[0x1d] = '\0';
  local_80[0x1e] = '\0';
  local_80[0x1f] = '\0';
  local_80[0x10] = '\0';
  local_80[0x11] = '\0';
  local_80[0x12] = '\0';
  local_80[0x13] = '\0';
  local_80[0x14] = '\0';
  local_80[0x15] = '\0';
  local_80[0x16] = '\0';
  local_80[0x17] = '\0';
  _strftime(local_80,0x40,"%Y-%m-%d %z %H:%M:%S",&local_d0);
  FUN_100697e58();
  FUN_100697ecc();
  _snprintf(param_2,param_3,"[%jd,%jd][%s]");
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

