// rea decompile_all
// name: SANetwork::isSameProjectWithURLString:
// address: 0x10072b3dc
// body: available
// range: 0x10072b3dc-0x10072b51b inclusive
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

bool SANetwork::isSameProjectWithURLString_(ID param_1,SEL param_2,ID param_3)

{
  cfstringStruct *pcVar1;
  bool bVar2;
  ID IVar3;
  ID IVar4;
  cfstringStruct *pcVar5;
  uint uVar6;
  
  bVar2 = isValidServerURL(param_1);
  if ((bVar2 == 0) || (IVar3 = objc_stub::length(param_3), IVar3 == 0)) {
    uVar6 = 0;
  }
  else {
    IVar3 = host(param_1);
    IVar4 = SAURLUtils::hostWithURLString_((ID)&objc::class_t::SAURLUtils,param_3);
    IVar3 = objc_stub::isEqualToString_(IVar3,IVar4);
    IVar4 = SAURLUtils::queryItemsWithURLString_((ID)&objc::class_t::SAURLUtils,param_3);
    pcVar5 = (cfstringStruct *)objc_stub::objectForKeyedSubscript_(IVar4,&cf_project);
    pcVar1 = &cf_default;
    if (pcVar5 != (cfstringStruct *)0x0) {
      pcVar1 = pcVar5;
    }
    IVar4 = project(param_1);
    IVar4 = objc_stub::isEqualToString_(IVar4,pcVar1);
    uVar6 = (uint)IVar3 & (uint)IVar4;
  }
  return uVar6;
}

