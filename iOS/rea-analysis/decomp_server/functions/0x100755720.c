// rea decompile_all
// name: SentryOptions::setEnableTracing:
// address: 0x100755720
// body: available
// range: 0x100755720-0x100755783 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x14 bytes */

void SentryOptions::setEnableTracing_(ID param_1,SEL param_2,bool param_3)

{
  ID IVar1;
  
  *(char *)(param_1 + 0x19) = (char)param_3;
  if (((param_3 != 0) && (*(long *)(param_1 + 200) == 0)) && (*(long *)(param_1 + 0xd0) == 0)) {
    IVar1 = objc_stub::numberWithInt_((ID)&_OBJC_CLASS___NSNumber,1);
    *(ID *)(param_1 + 200) = IVar1;
  }
  *(undefined1 *)(param_1 + 8) = 1;
  return;
}

