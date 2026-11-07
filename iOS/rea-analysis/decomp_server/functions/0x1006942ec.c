// rea decompile_all
// name: FUN_1006942ec
// address: 0x1006942ec
// body: available
// range: 0x1006942ec-0x100694373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100694370 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006942ec(undefined8 param_1,uchar *param_2)

{
  ulong uVar1;
  uchar *d;
  uchar local_38 [16];
  long local_28;
  
  local_28 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar1 = *(ulong *)(param_2 + 8);
  d = *(uchar **)param_2;
  if (-1 < (char)param_2[0x17]) {
    uVar1 = (ulong)param_2[0x17];
    d = param_2;
  }
  local_38[0] = '\0';
  local_38[1] = '\0';
  local_38[2] = '\0';
  local_38[3] = '\0';
  local_38[4] = '\0';
  local_38[5] = '\0';
  local_38[6] = '\0';
  local_38[7] = '\0';
  local_38[8] = '\0';
  local_38[9] = '\0';
  local_38[10] = '\0';
  local_38[0xb] = '\0';
  local_38[0xc] = '\0';
  local_38[0xd] = '\0';
  local_38[0xe] = '\0';
  local_38[0xf] = '\0';
  _MD5(d,uVar1 & 0xffffffff,local_38);
  FUN_1006943ec(param_1,local_38,0x10);
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_28) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

