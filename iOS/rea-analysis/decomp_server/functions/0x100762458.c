// rea decompile_all
// name: SentrySystemWrapper::cpuEnergyUsageWithError:
// address: 0x100762458
// body: available
// range: 0x100762458-0x1007624e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007624e4 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_autorelease replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentrySystemWrapper::cpuEnergyUsageWithError_(ID param_1,SEL param_2,ID *param_3)

{
  kern_return_t kVar1;
  ID IVar2;
  mach_msg_type_number_t local_8c;
  long local_88;
  long lStack_80;
  
  local_8c = 0x1a;
  kVar1 = _task_info(*(task_name_t *)PTR__mach_task_self__1009954c8,0x1a,(task_info_t)&local_88,
                     &local_8c);
  if ((param_3 != (ID *)0x0) && (kVar1 != 0)) {
    IVar2 = 0x6d;
    FUN_100756a90(0x6d,&cf_E,kVar1);
    *param_3 = IVar2;
  }
  IVar2 = objc_stub::numberWithUnsignedLongLong_((ID)&_OBJC_CLASS___NSNumber,local_88 + lStack_80);
  return IVar2;
}

