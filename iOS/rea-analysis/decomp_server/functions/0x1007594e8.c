// rea decompile_all
// name: SentryCrashReportFilterConcatenate::initWithSeparatorFmt:keys:
// address: 0x1007594e8
// body: available
// range: 0x1007594e8-0x10075962b inclusive
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
/* Function Stack Size: 0x20 bytes */

ID SentryCrashReportFilterConcatenate::initWithSeparatorFmt_keys_
             (ID param_1,SEL param_2,ID param_3,ID param_4)

{
  ID *pIVar1;
  ID IVar2;
  undefined *local_78;
  undefined8 local_70;
  code *local_68;
  undefined *puStack_60;
  ID local_58;
  
  IVar2 = objc_stub::array((ID)&_OBJC_CLASS___NSMutableArray);
  local_70 = 0xc2000000;
  local_68 = FUN_10075962c;
  puStack_60 = &DAT_1009e8de0;
  local_58 = IVar2;
  pIVar1 = (ID *)register0x00000008;
  local_78 = PTR___NSConcreteStackBlock_100995490;
  while (param_4 != 0) {
    (*local_68)(&local_78,param_4);
    param_4 = *pIVar1;
    pIVar1 = pIVar1 + 1;
  }
  IVar2 = objc_stub::FUN_1007ec220(param_1,param_3,IVar2);
  return IVar2;
}

