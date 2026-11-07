// rea decompile_all
// name: FUN_1006612a4
// address: 0x1006612a4
// body: available
// range: 0x1006612a4-0x10066141f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006612a4(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  char cVar3;
  byte bVar4;
  ulong uVar5;
  code *pcVar6;
  bool bVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  ulong uVar12;
  
  lVar1 = *param_2;
  lVar2 = param_2[1];
  cVar3 = (char)param_2[2];
  lVar11 = param_2[3];
  bVar4 = *(byte *)(param_2 + 4);
  if ((bVar4 & 1) == 0) {
    uVar12 = 0;
LAB_1006613dc:
    *param_1 = lVar1;
    param_1[1] = lVar2;
    *(char *)(param_1 + 2) = cVar3;
    param_1[3] = lVar11;
    *(byte *)(param_1 + 4) = bVar4 & 1;
    param_1[5] = uVar12;
    return;
  }
  uVar12 = 0;
  bVar7 = SBORROW8(lVar2,lVar1);
  uVar5 = lVar2 - lVar1;
  uVar8 = (ulong)(lVar1 != 0);
  if (lVar2 != 0) {
    uVar8 = 2;
  }
  if (cVar3 == '\0') goto LAB_1006612f4;
LAB_1006612e0:
  if (cVar3 == '\x01') {
    uVar9 = uVar5;
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100661404);
      (*pcVar6)();
    }
  }
  else {
    uVar9 = *(ulong *)(lVar11 + 0x10);
  }
  if (uVar12 == uVar9) {
                    /* WARNING: Does not return */
    pcVar6 = (code *)SoftwareBreakpoint(1,0x100661400);
    (*pcVar6)();
  }
  if (cVar3 == '\x02') {
    uVar9 = *(ulong *)(lVar11 + 0x10);
    if (*(ulong *)(lVar11 + 0x10) <= uVar12) goto LAB_100661394;
    lVar10 = *(long *)(lVar11 + 0x20 + uVar12 * 8);
  }
  else {
    if (bVar7) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100661408);
      (*pcVar6)();
    }
    uVar9 = uVar5;
    if ((long)uVar5 <= (long)uVar12) goto LAB_100661394;
    uVar9 = lVar1 + uVar12;
    if (SCARRY8(lVar1,uVar12)) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100661414);
      (*pcVar6)();
    }
    if ((long)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x100661418);
      (*pcVar6)();
    }
    if (*(ulong *)(lVar11 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
      pcVar6 = (code *)SoftwareBreakpoint(1,0x10066141c);
      (*pcVar6)();
    }
    lVar10 = *(long *)(lVar11 + 0x20 + uVar9 * 8);
  }
LAB_100661370:
  do {
    if (lVar10 != 0) goto LAB_1006613dc;
    uVar9 = uVar8;
    if (cVar3 != '\0') {
      if (cVar3 == '\x01') {
        uVar9 = uVar5;
        if (bVar7) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x10066140c);
          (*pcVar6)();
        }
      }
      else {
        uVar9 = *(ulong *)(lVar11 + 0x10);
      }
    }
LAB_100661394:
    while( true ) {
      while( true ) {
        while( true ) {
          if ((long)uVar9 <= (long)uVar12) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x1006613fc);
            (*pcVar6)();
          }
          uVar12 = uVar12 + 1;
          if (cVar3 != '\0') goto LAB_1006612e0;
LAB_1006612f4:
          if (lVar2 == 0) break;
          lVar10 = lVar1;
          if ((uVar12 == 0) || (lVar10 = lVar2, uVar12 == 1)) goto LAB_100661370;
          uVar9 = uVar8;
          if (uVar12 == 2) {
                    /* WARNING: Does not return */
            pcVar6 = (code *)SoftwareBreakpoint(1,0x100661410);
            (*pcVar6)();
          }
        }
        if (lVar1 == 0) break;
        if (uVar12 == 0) goto LAB_1006613dc;
        uVar9 = uVar8;
        if (uVar12 == 1) {
                    /* WARNING: Does not return */
          pcVar6 = (code *)SoftwareBreakpoint(1,0x100661420);
          (*pcVar6)();
        }
      }
      lVar10 = lVar2;
      if (uVar12 == 1) break;
      uVar9 = uVar8;
      if (uVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar6 = (code *)SoftwareBreakpoint(1,0x1006613d8);
        (*pcVar6)();
      }
    }
  } while( true );
}

