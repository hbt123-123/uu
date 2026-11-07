// rea decompile_all
// name: FUN_10000de5c
// address: 0x10000de5c
// body: available
// range: 0x10000de5c-0x10000df73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000df70 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000de5c(void)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_70 [16];
  int local_60;
  char local_50 [16];
  undefined4 local_40;
  undefined4 local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_40 = 4;
  local_3c = 0;
  builtin_strncpy(local_50,"tuOsbolg",9);
  local_50[9] = '\0';
  local_50[10] = '\0';
  local_50[0xb] = '\0';
  iVar1 = 1;
  _AudioObjectGetPropertyData(1,local_50,0,0,&local_40,&local_3c);
  iVar2 = iVar1;
  __s6Darwin5noErrs5Int32Vvg();
  if (iVar1 != iVar2) {
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_60 = iVar1;
    FUN_1003fb4ec(FUN_10000e29c,auStack_70,0xd00000000000009d,0x8000000100876d80,0xd00000000000001a,
                  0x8000000100876f90,0x4d,0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(local_3c);
}

