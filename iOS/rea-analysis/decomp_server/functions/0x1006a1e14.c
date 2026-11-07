// rea decompile_all
// name: FUN_1006a1e14
// address: 0x1006a1e14
// body: available
// range: 0x1006a1e14-0x1006a1ec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006a1ec0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a1e14(char *param_1,undefined8 param_2,time_t *param_3,undefined8 param_4)

{
  time_t local_78;
  char local_70 [72];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_78 = *param_3;
  _localtime(&local_78);
  local_70[0x28] = '\0';
  local_70[0x29] = '\0';
  local_70[0x2a] = '\0';
  local_70[0x2b] = '\0';
  local_70[0x2c] = '\0';
  local_70[0x2d] = '\0';
  local_70[0x2e] = '\0';
  local_70[0x2f] = '\0';
  local_70[0x20] = '\0';
  local_70[0x21] = '\0';
  local_70[0x22] = '\0';
  local_70[0x23] = '\0';
  local_70[0x24] = '\0';
  local_70[0x25] = '\0';
  local_70[0x26] = '\0';
  local_70[0x27] = '\0';
  local_70[0x38] = '\0';
  local_70[0x39] = '\0';
  local_70[0x3a] = '\0';
  local_70[0x3b] = '\0';
  local_70[0x3c] = '\0';
  local_70[0x3d] = '\0';
  local_70[0x3e] = '\0';
  local_70[0x3f] = '\0';
  local_70[0x30] = '\0';
  local_70[0x31] = '\0';
  local_70[0x32] = '\0';
  local_70[0x33] = '\0';
  local_70[0x34] = '\0';
  local_70[0x35] = '\0';
  local_70[0x36] = '\0';
  local_70[0x37] = '\0';
  local_70[8] = '\0';
  local_70[9] = '\0';
  local_70[10] = '\0';
  local_70[0xb] = '\0';
  local_70[0xc] = '\0';
  local_70[0xd] = '\0';
  local_70[0xe] = '\0';
  local_70[0xf] = '\0';
  local_70[0] = '\0';
  local_70[1] = '\0';
  local_70[2] = '\0';
  local_70[3] = '\0';
  local_70[4] = '\0';
  local_70[5] = '\0';
  local_70[6] = '\0';
  local_70[7] = '\0';
  local_70[0x18] = '\0';
  local_70[0x19] = '\0';
  local_70[0x1a] = '\0';
  local_70[0x1b] = '\0';
  local_70[0x1c] = '\0';
  local_70[0x1d] = '\0';
  local_70[0x1e] = '\0';
  local_70[0x1f] = '\0';
  local_70[0x10] = '\0';
  local_70[0x11] = '\0';
  local_70[0x12] = '\0';
  local_70[0x13] = '\0';
  local_70[0x14] = '\0';
  local_70[0x15] = '\0';
  local_70[0x16] = '\0';
  local_70[0x17] = '\0';
  _snprintf(local_70,0x40,"_%d%02d%02d");
  FUN_1006928dc(param_1,param_4);
  std::string::append(param_1);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_28) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

