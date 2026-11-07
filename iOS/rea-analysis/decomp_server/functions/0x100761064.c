// rea decompile_all
// name: SentryNetworkTracker::getBreadcrumbLevel:responseStatusCode:
// address: 0x100761064
// body: available
// range: 0x100761064-0x1007610c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x20 bytes */

unsigned_long_long
SentryNetworkTracker::getBreadcrumbLevel_responseStatusCode_
          (ID param_1,SEL param_2,ID param_3,long_long param_4)

{
  unsigned_long_long uVar1;
  unsigned_long_long uVar2;
  ID IVar3;
  
  uVar1 = 4;
  if (99 < param_4 - 500) {
    uVar1 = 2;
  }
  uVar2 = 3;
  if (99 < param_4 - 400) {
    uVar2 = uVar1;
  }
  IVar3 = objc_stub::error(param_3);
  if (IVar3 != 0) {
    uVar2 = 4;
  }
  return uVar2;
}

