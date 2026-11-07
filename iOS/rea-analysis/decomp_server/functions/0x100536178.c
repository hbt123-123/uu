// rea decompile_all
// name: FUN_100536178
// address: 0x100536178
// body: available
// range: 0x100536178-0x10053624f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100536178(long param_1)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  
  lVar4 = unaff_x20[2];
  lVar7 = *(long *)(param_1 + 0x10);
  lVar5 = *unaff_x20;
  lVar6 = lVar4;
  if (lVar7 != 0) {
    lVar6 = 0;
    if (lVar5 != 0) {
      lVar6 = unaff_x20[1] - lVar5;
    }
    lVar8 = 0x20;
    do {
      lVar1 = lVar4 + lVar8;
      lVar2 = lVar1 + -0x20;
      if (lVar5 != 0) {
        lVar1 = ((lVar4 + lVar5) - unaff_x20[1]) + lVar8;
      }
      if ((lVar1 == 0x20) ||
         (*(char *)(lVar4 + lVar5 + lVar8 + -0x20) != *(char *)(param_1 + lVar8)))
      goto LAB_100536240;
      if ((lVar4 < 0) || (lVar6 <= lVar2)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100536250);
        (*pcVar3)();
      }
      unaff_x20[2] = lVar4 + lVar8 + -0x1f;
      lVar8 = lVar8 + 1;
    } while (lVar8 - lVar7 != 0x20);
    lVar6 = lVar4 + lVar8 + -0x20;
  }
  if (lVar5 == 0) {
    if (lVar6 == 0) {
      return 1;
    }
  }
  else if (lVar6 == unaff_x20[1] - lVar5) {
    return 1;
  }
  if ((*(byte *)(lVar5 + lVar6) & 0xffffffdf) - 0x5b < 0xffffffe6) {
    return 1;
  }
LAB_100536240:
  unaff_x20[2] = lVar4;
  return 0;
}

