// rea decompile_all
// name: SAIDFAHelper::idfa
// address: 0x10071465c
// body: available
// range: 0x10071465c-0x100714743 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100714740 to 0x1007de938 _objc_autoreleaseReturnValue (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_autoreleaseReturnValue replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* Function Stack Size: 0x10 bytes */

ID SAIDFAHelper::idfa(ID param_1,SEL param_2)

{
  bool bVar1;
  ID IVar2;
  cfstringStruct *pcVar3;
  code *pcVar4;
  ID IVar5;
  
  bVar1 = isEnableIDFA(param_1);
  if (bVar1 == 0) {
    IVar5 = 0;
  }
  else {
    IVar2 = idfaManager(param_1);
    pcVar3 = &cf_advertisingIdentifier;
    _NSSelectorFromString(&cf_advertisingIdentifier);
    IVar5 = IVar2;
    _objc_opt_respondsToSelector(IVar2,pcVar3);
    if ((IVar5 & 1) == 0) {
      IVar5 = 0;
    }
    else {
      pcVar4 = (code *)objc_stub::methodForSelector_(IVar2,pcVar3);
      (*pcVar4)(IVar2,pcVar3);
      IVar5 = objc_stub::UUIDString(IVar2);
      IVar2 = objc_stub::hasPrefix_(IVar5,&cf_00000000);
      if ((IVar2 & 1) != 0) {
        IVar5 = 0;
      }
    }
  }
  return IVar5;
}

