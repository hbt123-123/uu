// rea decompile_all
// name: FUN_1000ac17c
// address: 0x1000ac17c
// body: available
// range: 0x1000ac17c-0x1000ac21f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1000ac17c(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  bool bVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  if (param_2 == 0) {
    param_3 = 0;
  }
  else if (param_3 != 0) {
    if (param_3 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ac220);
      (*pcVar2)();
    }
    lVar5 = 0;
    bVar3 = false;
    lVar4 = param_4;
    while (!bVar3) {
      bVar3 = lVar4 == param_5;
      if (bVar3) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar4 + 1;
        if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ac21c);
          (*pcVar2)();
        }
      }
      *(long *)(param_2 + lVar5 * 8) = lVar4;
      if (param_3 + -1 == lVar5) goto LAB_1000ac204;
      lVar1 = lVar5 + 1;
      lVar5 = lVar5 + 1;
      lVar4 = lVar6;
      if (SCARRY8(lVar1,1)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1000ac1dc);
        (*pcVar2)();
      }
    }
    bVar3 = true;
    param_3 = lVar5;
    lVar6 = lVar4;
    goto LAB_1000ac204;
  }
  bVar3 = false;
  lVar6 = param_4;
LAB_1000ac204:
  *param_1 = param_4;
  param_1[1] = param_5;
  param_1[2] = lVar6;
  *(bool *)(param_1 + 3) = bVar3;
  return param_3;
}

