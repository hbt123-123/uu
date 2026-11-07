// rea decompile_all
// name: SentryBreadcrumb::isEqual:
// address: 0x1007754cc
// body: available
// range: 0x1007754cc-0x100775557 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x18 bytes */

bool SentryBreadcrumb::isEqual_(ID param_1,SEL param_2,ID param_3)

{
  ID IVar1;
  ID IVar2;
  bool bVar3;
  
  if (param_3 == param_1) {
    bVar3 = 1;
  }
  else {
    if (param_3 != 0) {
      IVar1 = objc_stub::class(param_3);
      IVar2 = objc_stub::class(param_1);
      IVar1 = objc_stub::isEqual_(IVar1,IVar2);
      if ((int)IVar1 != 0) {
        IVar1 = objc_stub::FUN_1007ece20(param_1,param_3);
        return (bool)IVar1;
      }
    }
    bVar3 = 0;
  }
  return bVar3;
}

