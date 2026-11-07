// rea decompile_all
// name: FUN_10011a4c0
// address: 0x10011a4c0
// body: available
// range: 0x10011a4c0-0x10011a61b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10011a5fc to 0x1007dd678 _CGEventSetFlags (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10011a618 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */

void FUN_10011a4c0(ulong param_1,ulong param_2)

{
  ulong uVar1;
  ulong uVar2;
  ID IVar3;
  char local_49;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar1 = 1;
  FUN_1000b35b4();
  uVar2 = 0;
  if ((uVar1 & 1) == 0) {
    if (((param_2 & 1) == 0) || (FUN_1001176a0(), (uVar2 & 1) == 0)) {
      if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
        return;
      }
      goto LAB_10011a618;
    }
LAB_10011a5c0:
    uVar1 = param_1;
    _CGEventGetFlags(param_1);
    uVar1 = uVar1 | 0x10000;
  }
  else {
    local_49 = '\0';
    uVar1 = 0;
    FUN_10011bbac(0x10000,&local_49);
    if ((uVar1 & 1) == 0) {
      IVar3 = NSEvent::modifierFlags((ID)&_OBJC_CLASS___NSEvent,"modifierFlags");
      if (((uint)IVar3 >> 0x10 & 1) != 0) goto LAB_10011a5c0;
    }
    else if (local_49 == '\x01') goto LAB_10011a5c0;
    uVar1 = param_1;
    _CGEventGetFlags(param_1);
    uVar1 = uVar1 & 0xfffffffffffeffff;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    _CGEventSetFlags(param_1,uVar1);
    return;
  }
LAB_10011a618:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

