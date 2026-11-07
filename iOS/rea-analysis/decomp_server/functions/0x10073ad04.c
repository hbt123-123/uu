// rea decompile_all
// name: SentryDsn::getHash
// address: 0x10073ad04
// body: available
// range: 0x10073ad04-0x10073ae27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10073ae20 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10073ae24 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SentryDsn::getHash(ID param_1,SEL param_2)

{
  ID IVar1;
  void *data;
  long lVar2;
  uchar local_5c [20];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = url(param_1);
  IVar1 = objc_stub::absoluteString(IVar1);
  IVar1 = objc_stub::dataUsingEncoding_(IVar1,4);
  _objc_retainAutorelease();
  data = (void *)objc_stub::bytes(IVar1);
  IVar1 = objc_stub::length(IVar1);
  _CC_SHA1(data,(CC_LONG)IVar1,local_5c);
  IVar1 = NSMutableString::stringWithCapacity_((ID)&_OBJC_CLASS___NSMutableString,0x28);
  lVar2 = 0;
  do {
    NSMutableString::appendFormat_(IVar1,&cf__02x);
    lVar2 = lVar2 + 1;
  } while (lVar2 != 0x14);
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_48) {
    return IVar1;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

