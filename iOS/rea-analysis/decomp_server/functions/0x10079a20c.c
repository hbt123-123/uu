// rea decompile_all
// name: FUN_10079a20c
// address: 0x10079a20c
// body: available
// range: 0x10079a20c-0x10079a307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10079a304 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */

cfstringStruct * FUN_10079a20c(ID param_1)

{
  ulong uVar1;
  ID self;
  ID IVar2;
  ID IVar3;
  cfstringStruct *pcVar4;
  
  _objc_retainAutorelease();
  uVar1 = objc_stub::UTF8String(param_1);
  FUN_100741008(uVar1,0,0);
  if ((int)uVar1 < 1) {
    pcVar4 = &cf___;
  }
  else {
    self = objc_stub::dataWithLength_((ID)&_OBJC_CLASS___NSMutableData,uVar1 & 0xffffffff);
    _objc_retainAutorelease();
    IVar2 = objc_stub::UTF8String(param_1);
    _objc_retainAutorelease();
    IVar3 = objc_stub::mutableBytes(self);
    FUN_100741008(IVar2,IVar3,uVar1);
    if ((int)IVar2 == 0) {
      pcVar4 = (cfstringStruct *)0x0;
    }
    else {
      _objc_retainAutorelease();
      IVar3 = objc_stub::mutableBytes(self);
      pcVar4 = (cfstringStruct *)
               objc_stub::stringWithCString_encoding_((ID)&_OBJC_CLASS___NSString,IVar3,4);
    }
  }
  return pcVar4;
}

