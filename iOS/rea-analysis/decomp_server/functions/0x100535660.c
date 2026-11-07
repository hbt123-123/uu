// rea decompile_all
// name: FUN_100535660
// address: 0x100535660
// body: available
// range: 0x100535660-0x1005356d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100535660(void)

{
  long lVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  
  lVar1 = *unaff_x20;
  lVar5 = unaff_x20[2];
  lVar6 = lVar5;
  lVar2 = unaff_x20[1] - lVar1;
  lVar3 = 0;
  if (lVar1 != 0) goto LAB_100535688;
  do {
    lVar2 = lVar3;
    if (lVar6 == 0) {
      return;
    }
    while( true ) {
      if (0x20 < *(byte *)(lVar1 + lVar6) ||
          (1L << ((ulong)*(byte *)(lVar1 + lVar6) & 0x3f) & 0x100002600U) == 0) {
        return;
      }
      if ((lVar5 < 0) || (lVar2 <= lVar6)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1005356d4);
        (*pcVar4)();
      }
      lVar6 = lVar6 + 1;
      unaff_x20[2] = lVar6;
      lVar3 = lVar2;
      if (lVar1 == 0) break;
LAB_100535688:
      if (unaff_x20[1] - lVar1 == lVar6) {
        return;
      }
    }
  } while( true );
}

