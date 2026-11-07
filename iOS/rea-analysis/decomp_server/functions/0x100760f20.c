// rea decompile_all
// name: SentryNetworkTracker::isTaskSupported:
// address: 0x100760f20
// body: available
// range: 0x100760f20-0x100760fab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryNetworkTracker::isTaskSupported_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  
  IVar1 = objc_stub::class((ID)&_OBJC_CLASS___NSURLSessionDataTask);
  IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
  if ((IVar1 & 1) == 0) {
    IVar1 = objc_stub::class((ID)&_OBJC_CLASS___NSURLSessionDownloadTask);
    IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
    if ((IVar1 & 1) == 0) {
      IVar1 = objc_stub::class((ID)&_OBJC_CLASS___NSURLSessionUploadTask);
      IVar1 = objc_stub::isKindOfClass_(param_3,IVar1);
      return (bool)IVar1;
    }
  }
  return 1;
}

