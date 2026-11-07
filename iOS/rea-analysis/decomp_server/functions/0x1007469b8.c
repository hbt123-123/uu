// rea decompile_all
// name: SentryMetricKitIntegration::captureEvent:withDiagnosticJSON:
// address: 0x1007469b8
// body: available
// range: 0x1007469b8-0x100746a93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_unsafeClaimAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

void __thiscall
SentryMetricKitIntegration::captureEvent_withDiagnosticJSON_
          (SentryMetricKitIntegration *this,ID param_1,SEL param_2,ID param_3,ID param_4)

{
  bool bVar1;
  undefined4 in_w4;
  undefined *local_58;
  undefined8 local_50;
  code *local_48;
  undefined *puStack_40;
  ID local_38;
  
  bVar1 = attachDiagnosticAsAttachment(param_1);
  if (bVar1 == 0) {
    SentrySDK::captureEvent_((ID)&objc::class_t::SentrySDK,param_3);
  }
  else {
    local_58 = PTR___NSConcreteStackBlock_100995490;
    local_50 = 0xc2000000;
    local_48 = FUN_100746a94;
    puStack_40 = &DAT_1009e8a68;
    local_38 = param_4;
    SentrySDK::captureEvent_withScopeBlock_
              ((ID)&objc::class_t::SentrySDK,param_3,(ID)&local_58,in_w4);
  }
  return;
}

