// rea decompile_all
// name: SentryProfilerState::clear
// address: 0x1007a2388
// body: available
// range: 0x1007a2388-0x1007a23d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007a23d0 to 0x1007ddeb8 /usr/lib/libc++.1.dylib::std::mutex::unlock (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x10 bytes */

int __thiscall SentryProfilerState::clear(SentryProfilerState *this)

{
  int iVar1;
  long in_x0;
  class_t *self;
  ID IVar2;
  
  iVar1 = (int)in_x0 + 0x10;
  std::mutex::lock();
  self = &objc::class_t::SentryProfilerMutableState;
  _objc_alloc();
  IVar2 = objc_stub::init((ID)self);
  *(ID *)(in_x0 + 8) = IVar2;
  std::mutex::unlock();
  return iVar1;
}

