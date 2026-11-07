// rea decompile_all
// name: FUN_10067e8f0
// address: 0x10067e8f0
// body: available
// range: 0x10067e8f0-0x10067e95b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10067e948 to 0x100629fb8 thunk_FUN_100629d98 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10067e8f0(long param_1)

{
  char *pcVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar4 = 0x1f;
  do {
    if (lVar3 + lVar4 == 0x1f) goto LAB_10067e94c;
    pcVar1 = (char *)(param_1 + lVar3 + lVar4);
    lVar4 = lVar4 + -1;
  } while (*pcVar1 == '\0');
  if (lVar3 + lVar4 + -0x1e < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10067e95c);
    (*pcVar2)();
  }
  if (lVar4 != 0x1e) {
    thunk_FUN_100629d98(param_1,param_1 + 0x20,0);
    return;
  }
LAB_10067e94c:
  _swift_bridgeObjectRetain();
  return;
}

