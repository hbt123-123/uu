// rea decompile_all
// name: FUN_10067911c
// address: 0x10067911c
// body: available
// range: 0x10067911c-0x100679167 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100679158 to 0x1007df130 _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10067911c(long *param_1,ulong *param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  long *unaff_x20;
  
  uVar3 = *param_2;
  if ((long)uVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100679160);
    (*pcVar1)();
  }
  uVar4 = param_2[1];
  lVar2 = *(long *)(*unaff_x20 + 0x10);
  if (uVar3 <= *(ulong *)(lVar2 + 0x10) && (long)uVar4 <= (long)*(ulong *)(lVar2 + 0x10)) {
    if (-1 < (long)uVar4) {
      *param_1 = lVar2;
      param_1[1] = lVar2 + 0x20;
      param_1[2] = uVar3;
      param_1[3] = uVar4 << 1 | 1;
      _swift_bridgeObjectRetain();
      return;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100679168);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100679164);
  (*pcVar1)();
}

