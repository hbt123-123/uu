// rea decompile_all
// name: SentryHub::captureError:withScope:
// address: 0x100767f24
// body: available
// range: 0x100767f24-0x100768047 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100768044 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x20 bytes */

ID SentryHub::captureError_withScope_(ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID IVar1;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  
  IVar1 = *(ID *)(param_1 + 0x28);
  if (IVar1 == 0) {
    IVar1 = objc_stub::empty((ID)&objc::class_t::_TtC6Sentry8SentryId);
  }
  else if (*(long *)(param_1 + 0x58) == 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x48) + 1;
    IVar1 = objc_stub::captureError_withScope_(IVar1,param_3,param_4);
  }
  else {
    local_68 = PTR___NSConcreteStackBlock_100995490;
    local_60 = 0xc2000000;
    local_58 = FUN_100768048;
    puStack_50 = &DAT_1009e9158;
    local_48 = param_1;
    IVar1 = objc_stub::FUN_1007e6540(IVar1,param_3,param_4,&local_68);
  }
  return IVar1;
}

