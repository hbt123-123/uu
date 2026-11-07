// rea decompile_all
// name: FUN_100004190
// address: 0x100004190
// body: available
// range: 0x100004190-0x100004217 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined8 FUN_100004190(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 uVar3;
  
  pcVar1 = param_1;
  _object_getClass();
  _class_getInstanceVariable();
  if ((((pcVar1 == (char *)0x0) || (pcVar2 = pcVar1, _ivar_getTypeEncoding(), pcVar2 == (char *)0x0)
       ) || (*pcVar2 != 'B')) || (pcVar2[1] != '\0')) {
    uVar3 = 0;
  }
  else {
    _ivar_getOffset();
    *param_2 = param_1[(long)pcVar1];
    uVar3 = 1;
  }
  return uVar3;
}

