// rea decompile_all
// name: FUN_1006275e0
// address: 0x1006275e0
// body: available
// range: 0x1006275e0-0x100627633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006275e0(void)

{
  code *pcVar1;
  long unaff_x20;
  long *plVar2;
  undefined1 auStack_38 [24];
  
  plVar2 = *(long **)(unaff_x20 + 0x10);
  _swift_beginAccess(plVar2,auStack_38,1,0);
  if (!SBORROW8(*plVar2,1)) {
    *plVar2 = *plVar2 + -1;
    return;
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100627634);
  (*pcVar1)();
}

