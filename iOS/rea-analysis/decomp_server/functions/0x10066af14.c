// rea decompile_all
// name: FUN_10066af14
// address: 0x10066af14
// body: available
// range: 0x10066af14-0x10066afdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10066af54 to 0x10066acf0 thunk_FUN_10066a9a0 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10066af60 to 0x1006689f8 FUN_1006689f8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10066afbc to 0x100629fb8 thunk_FUN_100629d98 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10066afc4 to 0x10067e8f0 FUN_10067e8f0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10066afcc to 0x10066acf0 thunk_FUN_10066a9a0 (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10066afd4 to 0x1006689f8 FUN_1006689f8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10066af14(long param_1,byte param_2)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  if (param_2 < 4) {
    if (1 < param_2) {
      FUN_1006689f8();
      return;
    }
    if (param_2 != 0) {
      FUN_10067e8f0();
      return;
    }
  }
  else {
    if (param_2 < 6) {
      if (param_2 == 4) {
        thunk_FUN_10066a9a0();
        return;
      }
      thunk_FUN_10066a9a0();
      return;
    }
    if (param_2 != 6) {
      FUN_1006689f8();
      return;
    }
    lVar4 = 0;
    uVar3 = *(long *)(param_1 + 0x10) << 1 | 1;
    lVar1 = *(long *)(param_1 + 0x10) + 0x1f;
    do {
      lVar5 = lVar1;
      if (lVar5 == 0x1f) goto LAB_10066af34;
      lVar4 = lVar4 + 1;
      uVar3 = uVar3 - 2;
      lVar1 = lVar5 + -1;
    } while (*(char *)(param_1 + lVar5) != -0x80);
    if (lVar5 + -0x1f < 1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10066afdc);
      (*pcVar2)();
    }
    if (lVar4 != 0) {
      thunk_FUN_100629d98(param_1,param_1 + 0x20,0,uVar3);
      return;
    }
  }
LAB_10066af34:
  _swift_bridgeObjectRetain();
  return;
}

