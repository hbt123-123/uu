// rea decompile_all
// name: SAIDFAHelper::isEnableIDFA
// address: 0x1007145e8
// body: available
// range: 0x1007145e8-0x10071465b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

bool SAIDFAHelper::isEnableIDFA(ID param_1,SEL param_2)

{
  uint uVar1;
  cfstringStruct *self;
  cfstringStruct *pcVar2;
  cfstringStruct *pcVar3;
  code *pcVar4;
  
  self = &cf_ATTrackingManager;
  _NSClassFromString();
  pcVar2 = &cf_trackingAuthorizationStatus;
  _NSSelectorFromString(&cf_trackingAuthorizationStatus);
  pcVar3 = self;
  _objc_opt_respondsToSelector(self,pcVar2);
  if (((ulong)pcVar3 & 1) == 0) {
    uVar1 = 0;
  }
  else {
    pcVar4 = (code *)objc_stub::methodForSelector_((ID)self,pcVar2);
    (*pcVar4)(self,pcVar2);
    uVar1 = (uint)(self == (cfstringStruct *)0x3);
  }
  return uVar1;
}

