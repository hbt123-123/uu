// rea decompile_all
// name: FUN_10068465c
// address: 0x10068465c
// body: available
// range: 0x10068465c-0x10068472b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10068465c(long *param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  long lVar5;
  
  lVar5 = *param_1;
  bVar1 = *(byte *)(param_1 + 2);
  bVar2 = *(byte *)(param_2 + 2);
  bVar3 = *(byte *)(param_2 + 5);
  if (bVar1 >> 6 == 0) {
    if (bVar2 < 0x40 && lVar5 < *param_2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100684718);
      (*pcVar4)();
    }
    if (0x3f < bVar3) goto LAB_100684720;
    if (param_2[3] <= lVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006846e4);
      (*pcVar4)();
    }
  }
  else {
    if (bVar1 >> 6 != 1) {
LAB_100684720:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100684724);
      (*pcVar4)();
    }
    if ((bVar2 & 0xc0) == 0x40) {
      if (((bVar1 & 1) != 0) || ((bVar2 & 1) != 0)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10068472c);
        (*pcVar4)();
      }
      if ((int)param_1[1] != (int)param_2[1]) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10068471c);
        (*pcVar4)();
      }
      if (lVar5 < *param_2) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100684720);
        (*pcVar4)();
      }
      if ((bVar3 & 0xc0) != 0x40) goto LAB_100684720;
    }
    else {
      if ((bVar3 & 0xc0) != 0x40) goto LAB_100684720;
      if ((bVar1 & 1) != 0) goto LAB_100684724;
    }
    if ((bVar3 & 1) != 0) {
LAB_100684724:
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100684728);
      (*pcVar4)();
    }
    if ((int)param_1[1] != (int)param_2[4]) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100684710);
      (*pcVar4)();
    }
    if (param_2[3] <= lVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100684714);
      (*pcVar4)();
    }
  }
  return;
}

