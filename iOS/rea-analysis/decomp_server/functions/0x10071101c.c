// rea decompile_all
// name: FUN_10071101c
// address: 0x10071101c
// body: available
// range: 0x10071101c-0x10071103b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100711038 to 0x100cb0a35 NSObject::sa_swizzleMethod:withMethod:error: (external=false, thunk=true, hasNoReturn=false), 0x1007f0bc0 objc_stub::sa_swizzleMethod:withMethod:error: (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10071101c(void)

{
  NSObject::sa_swizzleMethod_withMethod_error_
            ((ID)&_OBJC_CLASS___NSObject,"respondsToSelector:","sensorsdata_respondsToSelector:",0);
  return;
}

