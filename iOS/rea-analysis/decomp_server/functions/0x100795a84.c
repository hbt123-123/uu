// rea decompile_all
// name: FUN_100795a84
// address: 0x100795a84
// body: available
// range: 0x100795a84-0x100795b3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined8 FUN_100795a84(ID param_1)

{
  ID IVar1;
  cfstringStruct *pcVar2;
  undefined8 uVar3;
  
  IVar1 = objc_stub::count(*(ID *)(param_1 + 0x20));
  if (IVar1 == 0) {
    pcVar2 = &cf_SentryCrashJSONCodecObjC;
    FUN_10079f85c(&cf_SentryCrashJSONCodecObjC,0,&cf_Alreadyatthetoplevel_nocontainerlefttoend);
    objc_stub::setError_(param_1,pcVar2);
    uVar3 = 5;
  }
  else {
    objc_stub::removeLastObject(*(ID *)(param_1 + 0x20));
    IVar1 = objc_stub::count(*(ID *)(param_1 + 0x20));
    if (IVar1 == 0) {
      uVar3 = 0;
      *(undefined8 *)(param_1 + 0x18) = 0;
    }
    else {
      IVar1 = objc_stub::objectAtIndex_(*(ID *)(param_1 + 0x20),IVar1 - 1);
      uVar3 = 0;
      *(ID *)(param_1 + 0x18) = IVar1;
    }
  }
  return uVar3;
}

