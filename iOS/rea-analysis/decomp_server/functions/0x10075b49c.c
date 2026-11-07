// rea decompile_all
// name: SentryCrashDoctor::isInvalidAddress:
// address: 0x10075b49c
// body: available
// range: 0x10075b49c-0x10075b583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryCrashDoctor::isInvalidAddress_(ID param_1,SEL param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  
  IVar2 = objc_stub::objectForKey_(param_3,&cf_mach);
  if (IVar2 == 0) {
    IVar2 = objc_stub::objectForKey_(param_3,&cf_signal);
    IVar2 = objc_stub::objectForKey_(IVar2,&cf_name);
    IVar2 = objc_stub::isEqualToString_(IVar2,&cf_SIGSEGV);
    bVar1 = (bool)IVar2;
  }
  else {
    IVar2 = objc_stub::objectForKey_(IVar2,&cf_exception_name);
    IVar2 = objc_stub::isEqualToString_(IVar2,&cf_EXC_BAD_ACCESS);
    bVar1 = (bool)IVar2;
  }
  return bVar1;
}

