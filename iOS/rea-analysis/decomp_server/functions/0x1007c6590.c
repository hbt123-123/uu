// rea decompile_all
// name: _TtC6Sentry25SentryExperimentalOptions::setEnableFileManagerSwizzling:
// address: 0x1007c6590
// body: available
// range: 0x1007c6590-0x1007c65d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x14 bytes */

void _TtC6Sentry25SentryExperimentalOptions::setEnableFileManagerSwizzling_
               (ID param_1,SEL param_2,bool param_3)

{
  undefined1 *puVar1;
  undefined1 auStack_38 [24];
  
  puVar1 = (undefined1 *)(param_1 + enableFileManagerSwizzling);
  _swift_beginAccess(puVar1,auStack_38,1,0);
  *puVar1 = (char)param_3;
  return;
}

