// rea decompile_all
// name: FUN_10068472c
// address: 0x10068472c
// body: available
// range: 0x10068472c-0x1006847e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10068472c(long *param_1,long *param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  code *pcVar5;
  
  lVar1 = *param_1;
  bVar2 = *(byte *)(param_1 + 2);
  bVar3 = *(byte *)(param_2 + 2);
  bVar4 = bVar2 >> 6;
  if (bVar4 == 0) {
    if (bVar3 < 0x40 && lVar1 < *param_2) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1006847d0);
      (*pcVar5)();
    }
  }
  else if ((bVar4 == 1) && ((bVar3 & 0xc0) == 0x40)) {
    if (((bVar2 & 1) != 0) || ((bVar3 & 1) != 0)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1006847e0);
      (*pcVar5)();
    }
    if ((int)param_1[1] != (int)param_2[1]) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1006847d4);
      (*pcVar5)();
    }
    if (lVar1 < *param_2) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x100684780);
      (*pcVar5)();
    }
  }
  bVar3 = *(byte *)(param_2 + 5) >> 6;
  if (bVar3 == 0) {
    if (bVar2 < 0x40 && param_2[3] < lVar1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1006847d8);
      (*pcVar5)();
    }
  }
  else if (bVar3 == 1 && bVar4 == 1) {
    if (((*(byte *)(param_2 + 5) & 1) != 0) || ((bVar2 & 1) != 0)) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1006847e4);
      (*pcVar5)();
    }
    if ((int)param_2[4] != (int)param_1[1]) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1006847dc);
      (*pcVar5)();
    }
    if (param_2[3] < lVar1) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1006847bc);
      (*pcVar5)();
    }
  }
  return;
}

