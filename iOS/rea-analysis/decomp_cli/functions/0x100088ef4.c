// rea decompile_all
// name: FUN_100088ef4
// address: 0x100088ef4
// body: available
// range: 0x100088ef4-0x100088f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100088f38 to 0x1000c2abc _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100088ef4(long *param_1,long *param_2)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *unaff_x20;
  
  if (-1 < *param_2) {
    lVar3 = param_2[1];
    lVar2 = *unaff_x20;
    if (lVar3 <= *(long *)(lVar2 + 0x10)) {
      lVar4 = unaff_x20[1];
      *param_1 = *param_2;
      param_1[1] = lVar3;
      param_1[2] = lVar2;
      param_1[3] = lVar4;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(lVar4);
      return;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100088f40);
  (*pcVar1)();
}

