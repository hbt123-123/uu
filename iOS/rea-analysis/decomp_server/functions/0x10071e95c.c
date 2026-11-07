// rea decompile_all
// name: SADatabase::updateRecords:atColumn:withValue:inTable:
// address: 0x10071e95c
// body: available
// range: 0x10071e95c-0x10071ea7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x30 bytes */

bool SADatabase::updateRecords_atColumn_withValue_inTable_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5,ID param_6)

{
  bool bVar1;
  ID IVar2;
  
  IVar2 = objc_stub::count(param_3);
  bVar1 = 0;
  if ((((param_6 != 0) && (param_5 != 0)) && (param_4 != 0)) && (IVar2 != 0)) {
    objc_stub::componentsJoinedByString_(param_3,&cf__);
    IVar2 = NSString::stringWithFormat_
                      ((ID)&_OBJC_CLASS___NSString,&cf_UPDATE__SET_______WHEREidIN_____);
    bVar1 = execUpdateSQL_(param_1,IVar2);
  }
  return bVar1;
}

