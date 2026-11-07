// rea decompile_all
// name: FUN_10011a9cc
// address: 0x10011a9cc
// body: available
// range: 0x10011a9cc-0x10011ab23 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10011ab20 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011a9cc(undefined8 param_1,byte param_2,byte param_3)

{
  uint uVar1;
  int iVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined1 auStack_90 [16];
  byte local_80;
  byte local_7f;
  int local_7c;
  undefined4 local_68;
  ulong local_64;
  undefined8 uStack_5c;
  undefined8 local_54;
  undefined8 uStack_4c;
  undefined8 local_44;
  undefined4 local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_68 = 0x80000;
  uStack_5c = 0;
  local_3c = 0;
  local_44 = 0;
  uStack_4c = 0;
  local_54 = 0;
  uVar1 = 0x40a00;
  if ((param_2 & 1) == 0) {
    uVar1 = 0x40b00;
  }
  local_64 = (ulong)uVar1;
  uVar4 = 0x10000;
  if ((param_3 & 1) == 0) {
    uVar4 = 0;
  }
  _IOHIDPostEvent(param_1,0xe,0,&local_68,2,uVar4,0);
  iVar2 = (int)param_1;
  if (iVar2 != 0) {
    uVar3 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar3);
    local_80 = param_2 & 1;
    local_7f = param_3 & 1;
    local_7c = iVar2;
    FUN_1003fb4ec(FUN_10011cd40,auStack_90,0xd000000000000092,0x8000000100882970,0xd00000000000002a,
                  0x800000010088cf60,0x3fa,0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(iVar2 == 0);
}

