// rea decompile_all
// name: FUN_1006609c4
// address: 0x1006609c4
// body: available
// range: 0x1006609c4-0x100660a67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006609c4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  long *unaff_x20;
  
  lVar5 = *param_1;
  lVar6 = *param_2;
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  cVar3 = (char)unaff_x20[2];
  if (cVar3 == '\0') {
    uVar7 = (ulong)(lVar1 != 0);
    if (lVar2 != 0) {
      uVar7 = 2;
    }
  }
  else if (cVar3 == '\x01') {
    uVar7 = lVar2 - lVar1;
    if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006609f0);
      (*pcVar4)();
    }
  }
  else {
    uVar7 = *(ulong *)(unaff_x20[3] + 0x10);
  }
  if ((lVar5 < 0) || ((long)uVar7 < lVar5)) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100660a64);
    (*pcVar4)();
  }
  if (cVar3 == '\0') {
    uVar7 = (ulong)(lVar1 != 0);
    if (lVar2 != 0) {
      uVar7 = 2;
    }
  }
  else if (cVar3 == '\x01') {
    uVar7 = lVar2 - lVar1;
    if (SBORROW8(lVar2,lVar1)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100660a30);
      (*pcVar4)();
    }
  }
  else {
    uVar7 = *(ulong *)(unaff_x20[3] + 0x10);
  }
  if ((-1 < lVar6) && (lVar6 <= (long)uVar7)) {
    return lVar6 - lVar5;
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100660a68);
  (*pcVar4)();
}

