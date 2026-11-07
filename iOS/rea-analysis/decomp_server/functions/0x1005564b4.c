// rea decompile_all
// name: FUN_1005564b4
// address: 0x1005564b4
// body: available
// range: 0x1005564b4-0x100556503 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005564fc to 0x1004f9e80 FUN_1004f9e80 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005564b4(void)

{
  code *pcVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar2 = *(ulong *)(*(long *)(unaff_x20 + 8) + 0x10);
  if (1 < uVar2) {
    FUN_10055740c(uVar2 - 2);
    _swift_bridgeObjectRetain(*(undefined8 *)(unaff_x20 + 8));
    FUN_1004fa13c();
    FUN_1004f9e80("}\n",2);
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100556504);
  (*pcVar1)();
}

