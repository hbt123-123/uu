// rea decompile_all
// name: FUN_10011c148
// address: 0x10011c148
// body: available
// range: 0x10011c148-0x10011c297 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10011c294 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

uint FUN_10011c148(ulong param_1,byte param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  ulong uVar4;
  ID IVar5;
  undefined8 uVar6;
  undefined1 auStack_70 [16];
  ulong local_60;
  byte local_58;
  byte local_57;
  byte local_49;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_49 = 0;
  uVar3 = param_1;
  FUN_10011be48();
  uVar4 = uVar3;
  FUN_10011bbac();
  bVar1 = local_49;
  if ((uVar4 & 1) == 0) {
    IVar5 = NSEvent::modifierFlags((ID)&_OBJC_CLASS___NSEvent,"modifierFlags");
    bVar1 = (param_1 & (IVar5 ^ 0xffffffffffffffff)) == 0;
  }
  uVar6 = 0;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)(uVar6);
  param_2 = param_2 & 1;
  local_60 = param_1;
  local_58 = bVar1;
  local_57 = param_2;
  FUN_1003fb48c(FUN_10011cd84,auStack_70,0xd000000000000092,0x8000000100882970,0xd000000000000012,
                0x800000010088d1d0,0x420,0);
  if (bVar1 == param_2) {
    uVar2 = 1;
  }
  else {
    FUN_10011beac(uVar3,param_2);
    uVar2 = (uint)uVar3;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return uVar2 & 1;
}

