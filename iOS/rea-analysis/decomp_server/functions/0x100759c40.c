// rea decompile_all
// name: SentryCrashReportFilterSubset::initWithKeys:
// address: 0x100759c40
// body: available
// range: 0x100759c40-0x100759d5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

ID SentryCrashReportFilterSubset::initWithKeys_(ID param_1,SEL param_2,ID param_3)

{
  ID *pIVar1;
  ID IVar2;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  
  IVar2 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  local_60 = 0xc2000000;
  local_58 = FUN_100759d60;
  puStack_50 = &DAT_1009e8de0;
  local_48 = IVar2;
  pIVar1 = (ID *)register0x00000008;
  local_68 = PTR___NSConcreteStackBlock_100995490;
  while (param_3 != 0) {
    (*local_58)(&local_68,param_3);
    param_3 = *pIVar1;
    pIVar1 = pIVar1 + 1;
  }
  IVar2 = objc_stub::FUN_1007ebc20(param_1,IVar2);
  return IVar2;
}

