// rea decompile_all
// name: FUN_1006607ec
// address: 0x1006607ec
// body: available
// range: 0x1006607ec-0x100660873 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100660864 to 0x1007df130 _swift_bridgeObjectRetain (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006607ec(long *param_1,long *param_2)

{
  char cVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  long lVar7;
  
  lVar5 = *param_2;
  lVar7 = unaff_x20[1];
  lVar6 = *unaff_x20;
  cVar1 = (char)unaff_x20[2];
  lVar3 = unaff_x20[3];
  if (cVar1 == '\0') {
    uVar4 = (ulong)(lVar6 != 0);
    if (lVar7 != 0) {
      uVar4 = 2;
    }
  }
  else if (cVar1 == '\x01') {
    uVar4 = lVar7 - lVar6;
    if (SBORROW8(lVar7,lVar6)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100660874);
      (*pcVar2)();
    }
    if ((long)uVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100660820);
      (*pcVar2)();
    }
  }
  else {
    uVar4 = *(ulong *)(lVar3 + 0x10);
  }
  if (lVar5 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10066086c);
    (*pcVar2)();
  }
  if ((long)uVar4 < param_2[1]) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100660870);
    (*pcVar2)();
  }
  param_1[1] = param_2[1];
  *param_1 = lVar5;
  param_1[3] = lVar7;
  param_1[2] = lVar6;
  *(char *)(param_1 + 4) = cVar1;
  param_1[5] = lVar3;
  _swift_bridgeObjectRetain();
  return;
}

