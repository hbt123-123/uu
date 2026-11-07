// rea decompile_all
// name: FUN_10000df74
// address: 0x10000df74
// body: available
// range: 0x10000df74-0x10000e0f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000e0f0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000df74(uint param_1)

{
  uint uVar1;
  uint uVar2;
  undefined1 auStack_80 [16];
  uint local_70;
  char local_58 [12];
  uint uStack_4c;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar1 = param_1 & 1;
  builtin_strncpy(local_58,"etumptuo",9);
  local_58[9] = '\0';
  local_58[10] = '\0';
  local_58[0xb] = '\0';
  uStack_4c = uVar1;
  FUN_10000de5c();
  _AudioObjectSetPropertyData();
  uVar2 = param_1;
  __s6Darwin5noErrs5Int32Vvg();
  FUN_100401b14(0);
  if (param_1 == uVar2) {
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_70 = CONCAT31(local_70._1_3_,(char)uVar1);
    FUN_1003fb48c(FUN_10000e294,auStack_80,0xd00000000000009d,0x8000000100876d80,0xd000000000000011,
                  0x8000000100876f20,0x6b,0);
  }
  else {
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_70 = param_1;
    FUN_1003fb4ec(FUN_10000e28c,auStack_80,0xd00000000000009d,0x8000000100876d80,0xd000000000000011,
                  0x8000000100876f20,0x69,0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

