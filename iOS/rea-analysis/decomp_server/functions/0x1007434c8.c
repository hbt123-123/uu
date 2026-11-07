// rea decompile_all
// name: SentryTracerConfiguration::init
// address: 0x1007434c8
// body: available
// range: 0x1007434c8-0x100743533 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

ID SentryTracerConfiguration::init(ID param_1,SEL param_2)

{
  ID self;
  ID local_30;
  class_t *pcStack_28;
  
  pcStack_28 = &objc::class_t::SentryTracerConfiguration;
  local_30 = param_1;
  self = NSObject::init((ID)&local_30,"init");
  if (self != 0) {
    NSObject::setIdleTimeout_(self,0);
    NSObject::setWaitForChildren_(self,0);
    NSObject::setFinishMustBeCalled_(self,0);
  }
  return self;
}

