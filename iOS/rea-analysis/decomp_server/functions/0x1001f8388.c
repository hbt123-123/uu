// rea decompile_all
// name: FUN_1001f8388
// address: 0x1001f8388
// body: available
// range: 0x1001f8388-0x1001f843b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001f8438 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f8388(void *param_1,void *param_2)

{
  ulong uVar1;
  code *pcVar2;
  undefined8 local_28;
  undefined4 local_20;
  undefined2 local_1c;
  undefined1 local_1a;
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar1 = 0;
  if (param_1 != (void *)0x0) {
    uVar1 = (long)param_2 - (long)param_1;
  }
  if ((long)uVar1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001f8434);
    (*pcVar2)();
  }
  if (0xff < uVar1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001f8438);
    (*pcVar2)();
  }
  local_28 = 0;
  local_1a = (undefined1)uVar1;
  local_1c = 0;
  local_20 = 0;
  if ((param_1 != (void *)0x0) && (param_2 != param_1)) {
    _memcpy(&local_28,param_1,(long)param_2 - (long)param_1);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_18) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(local_28);
}

