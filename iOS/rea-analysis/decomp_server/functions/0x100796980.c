// rea decompile_all
// name: FUN_100796980
// address: 0x100796980
// body: available
// range: 0x100796980-0x100796a7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_100796980(ID param_1,undefined8 param_2,ID param_3)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  ID IVar3;
  undefined8 uVar4;
  
  IVar3 = *(ID *)(param_1 + 0x18);
  if (IVar3 == 0) {
    objc_stub::class(param_3);
    pcVar2 = &cf_SentryCrashJSONCodecObjC;
    FUN_10079f85c(&cf_SentryCrashJSONCodecObjC,0,&cf_Type__notallowedastoplevelcontainer);
    objc_stub::setError_(param_1,pcVar2);
    uVar4 = 5;
  }
  else {
    IVar1 = objc_stub::class((ID)&_OBJC_CLASS___NSMutableDictionary);
    IVar3 = objc_stub::isKindOfClass_(IVar3,IVar1);
    if ((int)IVar3 == 0) {
      objc_stub::addObject_(*(ID *)(param_1 + 0x18),param_3);
    }
    else {
      objc_stub::setValue_forKey_(*(ID *)(param_1 + 0x18),param_3,param_2);
    }
    uVar4 = 0;
  }
  return uVar4;
}

