// rea decompile_all
// name: SentryBinaryImageCache::convertUUID:
// address: 0x10075e140
// body: available
// range: 0x10075e140-0x10075e1b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10075e1ac to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10075e1b0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryBinaryImageCache::convertUUID_(ID param_1,SEL param_2,const_char__ param_3)

{
  undefined *self;
  ID IVar1;
  undefined1 auStack_3d [37];
  long local_18;
  
  local_18 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_3 == (const_char__)0x0) {
    IVar1 = 0;
  }
  else {
    FUN_10076bd8c(param_3,auStack_3d);
    self = &_OBJC_CLASS___NSString;
    _objc_alloc();
    IVar1 = objc_stub::FUN_1007eb560((ID)self,auStack_3d,1);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_18) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

