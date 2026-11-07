// rea decompile_all
// name: FUN_100535e6c
// address: 0x100535e6c
// body: available
// range: 0x100535e6c-0x100535f9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100535e6c(void)

{
  long lVar1;
  byte bVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long lVar7;
  
  lVar1 = *unaff_x20;
  lVar5 = unaff_x20[2];
  lVar6 = unaff_x20[1] - lVar1;
  lVar4 = lVar6;
  if (lVar1 == 0) {
    lVar4 = 0;
  }
  if ((lVar5 < 0) || (lVar4 <= lVar5)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100535f90);
    (*pcVar3)();
  }
  lVar5 = lVar5 + 1;
  unaff_x20[2] = lVar5;
  if (lVar1 == 0 || lVar5 != lVar6) {
    bVar2 = 0;
    lVar7 = lVar5;
    do {
      if (*(char *)(lVar1 + lVar7) == '\\') {
        if (lVar4 <= lVar7) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100535f8c);
          (*pcVar3)();
        }
        if (lVar1 == 0) goto LAB_100535f98;
        lVar7 = lVar7 + 1;
        if (lVar7 == lVar6) break;
        bVar2 = 1;
      }
      else {
        if (*(char *)(lVar1 + lVar7) == '\"') {
          unaff_x20[2] = lVar7;
          if (lVar1 == 0) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100535fa0);
            (*pcVar3)();
          }
          lVar4 = lVar7 - lVar5;
          if (SBORROW8(lVar7,lVar5)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100535f94);
            (*pcVar3)();
          }
          FUN_10054c680(lVar1 + lVar5);
          if (lVar6 <= lVar7) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100535f98);
            (*pcVar3)();
          }
          unaff_x20[2] = lVar7 + 1;
          if (!(bool)(lVar4 != 0 & bVar2)) {
            return;
          }
          FUN_100534f30();
          _swift_bridgeObjectRelease(lVar4);
          return;
        }
        if (lVar1 == 0) goto LAB_100535f98;
      }
      if (lVar6 <= lVar7) {
LAB_100535f98:
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100535f9c);
        (*pcVar3)();
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 != lVar6);
  }
  unaff_x20[2] = lVar6;
  return;
}

