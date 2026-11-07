// rea decompile_all
// name: FUN_10000e0f4
// address: 0x10000e0f4
// body: available
// range: 0x10000e0f4-0x10000e28b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000e288 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000e0f4(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined8 uVar3;
  ulong extraout_x12;
  ulong extraout_x12_00;
  undefined1 auStack_80 [16];
  int *local_70;
  char local_60 [16];
  undefined4 local_50;
  int local_4c;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_50 = 4;
  local_4c = 0;
  builtin_strncpy(local_60,"etumptuo",9);
  local_60[9] = '\0';
  local_60[10] = '\0';
  local_60[0xb] = '\0';
  FUN_10000de5c();
  _AudioObjectGetPropertyData();
  iVar2 = param_1;
  __s6Darwin5noErrs5Int32Vvg();
  uVar3 = 0;
  FUN_100401b14(0);
  if (param_1 == iVar2) {
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_70 = &local_4c;
    FUN_1003fb48c(FUN_10000e2ac,auStack_80,0xd00000000000009d,extraout_x12 | 0x8000000000000000,
                  0x6d65747379537369,0xef2928646574754d,0x80,0);
    bVar1 = local_4c != 0;
  }
  else {
    (*(code *)PTR____chkstk_darwin_100995498)(uVar3);
    local_70 = (int *)CONCAT44(local_70._4_4_,param_1);
    FUN_1003fb4ec(FUN_10000e2a4,auStack_80,0xd00000000000009d,extraout_x12_00 | 0x8000000000000000,
                  0x6d65747379537369,0xef2928646574754d,0x7d,0);
    bVar1 = false;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(bVar1);
}

