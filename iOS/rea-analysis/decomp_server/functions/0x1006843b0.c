// rea decompile_all
// name: FUN_1006843b0
// address: 0x1006843b0
// body: available
// range: 0x1006843b0-0x10068465b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006843b0(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  byte bVar6;
  code *pcVar7;
  bool bVar8;
  long lVar9;
  ulong uVar10;
  int iVar11;
  long lVar12;
  long lVar13;
  long unaff_x20;
  ulong uVar14;
  undefined8 uVar15;
  long lVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  
  lVar13 = *param_1;
  lVar17 = param_1[1];
  bVar3 = *(byte *)(param_1 + 2);
  uVar14 = (ulong)bVar3;
  lVar1 = *param_2;
  lVar2 = param_2[1];
  bVar4 = *(byte *)(param_2 + 2);
  uVar15 = *(undefined8 *)(unaff_x20 + 8);
  bVar6 = bVar4 >> 6;
  iVar11 = (int)lVar2;
  if (bVar6 == 0) {
    if (0x3f < bVar3) goto LAB_100684438;
    if (lVar1 < lVar13) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100684438);
      (*pcVar7)();
    }
  }
  else {
    if ((bVar6 == 1) && ((bVar3 & 0xc0) == 0x40)) {
      if (((bVar4 & 1) != 0) || ((bVar3 & 1) != 0)) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100684658);
        (*pcVar7)();
      }
      if (iVar11 != (int)lVar17) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100684650);
        (*pcVar7)();
      }
      if (lVar1 < lVar13) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100684424);
        (*pcVar7)();
      }
    }
    else {
LAB_100684438:
      if (bVar3 >> 6 == 0) {
        if (bVar4 < 0x40 && lVar13 == lVar1) {
          return 0;
        }
        goto LAB_100684494;
      }
      if (bVar3 >> 6 != 1) {
        if ((bVar6 == 2 && (lVar2 == 0 && lVar1 == 0)) && (bVar4 == 0x80)) {
          return 0;
        }
        goto LAB_100684494;
      }
      if (bVar6 != 1) goto LAB_100684494;
      if (((bVar4 | bVar3) & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x10068465c);
        (*pcVar7)();
      }
    }
    if ((int)lVar17 != iVar11) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10068464c);
      (*pcVar7)();
    }
  }
  if (lVar13 == lVar1) {
    return 0;
  }
LAB_100684494:
  FUN_100690ab4(lVar13,lVar17,uVar14);
  lVar12 = 0;
  lVar19 = 1;
  do {
    bVar8 = SCARRY8(lVar12,1);
    lVar12 = lVar12 + 1;
    if (bVar8) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100684648);
      (*pcVar7)();
    }
    uVar5 = (uint)uVar14 >> 6;
    lVar16 = lVar19;
    if (uVar5 == 0) {
      while( true ) {
        lVar9 = lVar13 + 1;
        if (SCARRY8(lVar13,1)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x10068463c);
          (*pcVar7)();
        }
        if (bVar4 < 0x40) break;
        lVar13 = lVar13 + 1;
        bVar8 = SCARRY8(lVar16,1);
        lVar16 = lVar16 + 1;
        if (bVar8) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100684644);
          (*pcVar7)();
        }
      }
      lVar16 = 0;
      uVar14 = 0;
    }
    else {
      lVar18 = lVar19;
      uVar10 = uVar14;
      if (uVar5 != 1) {
        do {
          FUN_100690ae8(lVar13,lVar17,uVar14);
          if (((lVar2 == 0 && lVar1 == 0) && bVar4 == 0x80) && bVar4 >> 6 == 2) {
            return lVar19;
          }
          bVar8 = SCARRY8(lVar19,1);
          lVar19 = lVar19 + 1;
        } while (!bVar8);
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100684604);
        (*pcVar7)();
      }
      while( true ) {
        _swift_bridgeObjectRetain(uVar15);
        uVar10 = (ulong)((uint)uVar10 & 1);
        lVar9 = lVar13;
        lVar16 = lVar17;
        FUN_10068d8f4();
        _swift_bridgeObjectRelease(uVar15);
        FUN_100690ae8(lVar13,lVar17,uVar14);
        uVar14 = (ulong)((uint)uVar10 & 1 | 0x40);
        if (bVar6 == 1) break;
        bVar8 = SCARRY8(lVar18,1);
        lVar13 = lVar9;
        lVar17 = lVar16;
        lVar18 = lVar18 + 1;
        if (bVar8) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100684640);
          (*pcVar7)();
        }
      }
      if ((((uint)uVar10 | (uint)bVar4) & 1) != 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100684654);
        (*pcVar7)();
      }
      if ((int)lVar16 != iVar11) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1006845a0);
        (*pcVar7)();
      }
    }
    lVar19 = lVar19 + 1;
    lVar13 = lVar9;
    lVar17 = lVar16;
    if (lVar9 == lVar1) {
      FUN_100690ae8(lVar1,lVar16,uVar14);
      return lVar12;
    }
  } while( true );
}

