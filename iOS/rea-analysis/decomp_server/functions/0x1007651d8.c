// rea decompile_all
// name: SentryDebugImageProvider::fillDebugMetaFrom:
// address: 0x1007651d8
// body: available
// range: 0x1007651d8-0x100765387 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100765380 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x100765384 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x50 bytes */

ID SentryDebugImageProvider::fillDebugMetaFrom_(ID param_1,SEL param_2,AnonymousStructure6 param_3)

{
  class_t *self;
  ID self_00;
  ID IVar1;
  undefined *self_01;
  char acStack_4b [19];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  self = &objc::class_t::SentryDebugMeta;
  _objc_alloc();
  self_00 = objc_stub::init((ID)self);
  IVar1 = objc_stub::FUN_1007e7220
                    ((ID)&objc::class_t::SentryBinaryImageCache,
                     *(undefined8 *)(param_3.field0_0x0 + 0x20));
  objc_stub::setDebugID_(self_00,IVar1);
  objc_stub::setType_(self_00,&cf_macho);
  if (*(long *)(param_3.field0_0x0 + 8) != 0) {
    _snprintf(acStack_4b,0x13,"0x%016llx");
    IVar1 = objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_4b,1);
    objc_stub::FUN_1007f3460(self_00,IVar1);
  }
  _snprintf(acStack_4b,0x13,"0x%016llx");
  IVar1 = objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,acStack_4b,1);
  objc_stub::setImageAddress_(self_00,IVar1);
  IVar1 = objc_stub::numberWithUnsignedLongLong_
                    ((ID)&_OBJC_CLASS___NSNumber,*(undefined8 *)(param_3.field0_0x0 + 0x10));
  objc_stub::FUN_1007f3440(self_00,IVar1);
  if (*(long *)(param_3.field0_0x0 + 0x18) != 0) {
    self_01 = &_OBJC_CLASS___NSString;
    _objc_alloc();
    IVar1 = objc_stub::initWithUTF8String_((ID)self_01,*(undefined8 *)(param_3.field0_0x0 + 0x18));
    objc_stub::setCodeFile_(self_00,IVar1);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return self_00;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(0);
}

