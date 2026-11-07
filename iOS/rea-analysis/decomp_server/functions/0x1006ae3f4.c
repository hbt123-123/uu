// rea decompile_all
// name: FUN_1006ae3f4
// address: 0x1006ae3f4
// body: available
// range: 0x1006ae3f4-0x1006ae52b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006ae524 to 0x1006adc18 FUN_1006adc18 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1006ae528 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006ae3f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [64];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  FUN_1006af210(auStack_88,param_4,param_4,4);
  FUN_1006ae18c(auStack_a8,auStack_88);
  FUN_1006af210(auStack_88,param_4,param_5,4);
  FUN_1006ae18c(param_2,auStack_88);
  FUN_1006adc18(param_1,auStack_a8,param_6,&DAT_1009e7108,4);
  FUN_1006adc18(param_2,param_2,param_2,&DAT_1009e7108,4);
  FUN_1006af210(auStack_88,auStack_a8,param_6,4);
  FUN_1006ae18c(param_3,auStack_88);
  FUN_1006adc18(param_3,param_3,param_3,&DAT_1009e7108,4);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    FUN_1006adc18(param_3,param_3,param_3,&DAT_1009e7108,4);
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

