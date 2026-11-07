// rea decompile_all
// name: FUN_1006847e4
// address: 0x1006847e4
// body: available
// range: 0x1006847e4-0x1006848b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006847e4(long *param_1,long *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  code *pcVar4;
  
  bVar1 = *(byte *)(param_1 + 5);
  bVar2 = *(byte *)(param_2 + 2);
  bVar3 = *(byte *)(param_1 + 2) >> 6;
  if (bVar3 == 0) {
    if ((bVar2 < 0x40) && (*param_1 < *param_2)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006848a4);
      (*pcVar4)();
    }
  }
  else if ((bVar3 == 1) && ((bVar2 & 0xc0) == 0x40)) {
    if (((*(byte *)(param_1 + 2) & 1) != 0) || ((bVar2 & 1) != 0)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006848b4);
      (*pcVar4)();
    }
    if ((int)param_1[1] != (int)param_2[1]) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006848a8);
      (*pcVar4)();
    }
    if (*param_1 < *param_2) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100684844);
      (*pcVar4)();
    }
  }
  bVar2 = *(byte *)(param_2 + 5) >> 6;
  if (bVar2 == 0) {
    if ((bVar1 < 0x40) && (param_2[3] < param_1[3])) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006848ac);
      (*pcVar4)();
    }
  }
  else if ((bVar2 == 1) && ((bVar1 & 0xc0) == 0x40)) {
    if (((*(byte *)(param_2 + 5) & 1) != 0) || ((bVar1 & 1) != 0)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006848b8);
      (*pcVar4)();
    }
    if ((int)param_2[4] != (int)param_1[4]) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1006848b0);
      (*pcVar4)();
    }
    if (param_2[3] < param_1[3]) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10068488c);
      (*pcVar4)();
    }
  }
  return;
}

