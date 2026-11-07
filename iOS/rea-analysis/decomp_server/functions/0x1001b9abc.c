// rea decompile_all
// name: FUN_1001b9abc
// address: 0x1001b9abc
// body: available
// range: 0x1001b9abc-0x1001b9b53 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1001b9abc(void)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long unaff_x20;
  
  lVar3 = *(long *)(unaff_x20 + 0x20);
  if (lVar3 == 0) {
    lVar3 = 0;
    lVar2 = 1;
  }
  else {
    if (lVar3 < 5) {
      *(long *)(unaff_x20 + 0x18) = lVar3;
      lVar4 = lVar3;
    }
    else {
      lVar4 = *(long *)(unaff_x20 + 0x18);
      if (lVar4 + 0x4000000000000000 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b9b50);
        (*pcVar1)();
      }
      lVar2 = 5;
      FUN_1001e5f14();
      lVar4 = lVar4 * 2;
      lVar3 = lVar2 + 1 + lVar4;
      if (SCARRY8(lVar2 + 1,lVar4)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b9b54);
        (*pcVar1)();
      }
      if (299 < lVar3) {
        lVar3 = 300;
      }
      *(long *)(unaff_x20 + 0x18) = lVar3;
      lVar4 = *(long *)(unaff_x20 + 0x20);
    }
    lVar2 = lVar4 + 1;
    if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001b9b4c);
      (*pcVar1)();
    }
  }
  *(long *)(unaff_x20 + 0x20) = lVar2;
  return lVar3;
}

