// rea decompile_all
// name: SentryCrashIntegration::startCrashHandler:enableSigtermReporting:enableReportingUncaughtExceptions:
// address: 0x10078b00c
// body: available
// range: 0x10078b00c-0x10078b0d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainBlock replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void SentryCrashIntegration::
     startCrashHandler_enableSigtermReporting_enableReportingUncaughtExceptions_
               (ID param_1,SEL param_2,ID param_3,bool param_4,bool param_5)

{
  ID self;
  undefined *local_68;
  undefined8 local_60;
  code *local_58;
  undefined *puStack_50;
  ID local_48;
  ID local_40;
  undefined1 local_38;
  undefined1 local_37;
  
  local_68 = PTR___NSConcreteStackBlock_100995490;
  local_60 = 0xc2000000;
  local_58 = FUN_10078b0d8;
  puStack_50 = &DAT_1009e96d0;
  local_38 = (undefined1)param_4;
  local_37 = (undefined1)param_5;
  local_48 = param_1;
  local_40 = param_3;
  self = objc_stub::dispatchQueueWrapper(param_1);
  objc_stub::FUN_1007e8860(self,&DAT_100b2e110,&local_68);
  return;
}

