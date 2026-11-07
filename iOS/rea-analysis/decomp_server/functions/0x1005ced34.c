// rea decompile_all
// name: FUN_1005ced34
// address: 0x1005ced34
// body: available
// range: 0x1005ced34-0x1005ced8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005ced84 to 0x1007ddfe4 /usr/lib/libc++.1.dylib::operator.delete (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005ced34(void *param_1)

{
  mutex *unaff_x20;
  
  if (param_1 != (void *)0x0) {
    FUN_1005ceba0();
    std::condition_variable::~condition_variable((condition_variable *)unaff_x20);
    std::mutex::~mutex(unaff_x20);
    FUN_1005cecbc((long)param_1 + 0x20,0);
    if (*(char *)((long)param_1 + 0x1f) < '\0') {
      operator_delete(*(void **)((long)param_1 + 8));
    }
    operator_delete(param_1);
    return;
  }
  return;
}

