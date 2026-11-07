// rea decompile_all
// name: _TtC6Sentry19SentryReplayOptions::initWithSessionSampleRate:onErrorSampleRate:maskAllText:maskAllImages:enableExperimentalViewRenderer:enableFastViewRendering:
// address: 0x1007cae28
// body: available
// range: 0x1007cae28-0x1007cae57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x28 bytes */

ID _TtC6Sentry19SentryReplayOptions::
   initWithSessionSampleRate_onErrorSampleRate_maskAllText_maskAllImages_enableExperimentalViewRenderer_enableFastViewRendering_
             (ID param_1,SEL param_2,float param_3,float param_4,bool param_5,bool param_6,
             bool param_7,bool param_8)

{
  ID IVar1;
  
  IVar1 = (ID)param_5;
  FUN_1007cabf0(IVar1,param_6,param_7,param_8);
  return IVar1;
}

