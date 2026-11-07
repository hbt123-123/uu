// rea decompile_all
// name: FUN_10069c5bc
// address: 0x10069c5bc
// body: available
// range: 0x10069c5bc-0x10069c603 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10069c5fc to 0x1007ddd44 /usr/lib/libc++.1.dylib::std::string::erase (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069c5bc(ulong *param_1,ulong param_2)

{
  ulong uVar1;
  ulong *puVar2;
  
  if (param_2 != 0) {
    uVar1 = (ulong)*(char *)((long)param_1 + 0x17);
    if ((long)uVar1 < 0) {
      uVar1 = param_1[1];
    }
    if (param_2 < uVar1) {
      puVar2 = param_1;
      if (*(char *)((long)param_1 + 0x17) < '\0') {
        puVar2 = (ulong *)*param_1;
      }
      if (*(char *)((long)puVar2 + param_2 + 1) == '/') {
        std::string::erase((ulong)param_1,param_2);
        return;
      }
    }
  }
  return;
}

