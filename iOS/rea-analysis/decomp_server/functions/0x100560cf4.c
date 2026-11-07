// rea decompile_all
// name: FUN_100560cf4
// address: 0x100560cf4
// body: available
// range: 0x100560cf4-0x100561243 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100560cf4(undefined1 *param_1,undefined1 *param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  code *pcVar7;
  bool bVar8;
  bool bVar9;
  uint uVar10;
  char cVar11;
  int iVar12;
  char cVar13;
  char cVar14;
  byte *pbVar15;
  long lVar17;
  uint uVar18;
  long lVar19;
  long unaff_x20;
  char cVar20;
  byte *pbVar16;
  
  pbVar1 = *(byte **)(unaff_x20 + 0x28);
  pbVar2 = *(byte **)(unaff_x20 + 0x30);
  if (pbVar1 == pbVar2) {
    bVar8 = false;
    lVar19 = 0;
switchD_100560dbc_caseD_23:
    *param_2 = bVar8;
    FUN_1004f9b10();
    _swift_allocError(&DAT_1009d1c98,param_1,0,0);
    *param_1 = 0;
    _swift_willThrow();
    return lVar19;
  }
  bVar8 = false;
  lVar19 = 0;
  uVar10 = (uint)param_1;
  pbVar16 = pbVar1;
LAB_100560d4c:
  pbVar15 = pbVar16 + 1;
  bVar3 = *pbVar16;
  *(byte **)(unaff_x20 + 0x28) = pbVar15;
  if ((uint)bVar3 == (uVar10 & 0xff)) {
    *param_2 = bVar8;
    *(byte **)(unaff_x20 + 0x28) = pbVar1;
    return lVar19;
  }
  if (bVar3 != 0x5c) {
    if (bVar3 == 10 || bVar3 == 0xd) goto switchD_100560dbc_caseD_23;
    bVar9 = SCARRY8(lVar19,1);
    lVar19 = lVar19 + 1;
    if (bVar9) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10056122c);
      (*pcVar7)();
    }
    goto LAB_100560d40;
  }
  if (pbVar15 != pbVar2) {
    bVar3 = pbVar16[1];
    pbVar15 = pbVar16 + 2;
    *(byte **)(unaff_x20 + 0x28) = pbVar15;
    if (bVar3 - 0x38 < 0xfffffff8) {
      bVar8 = true;
      lVar17 = 4;
      switch(bVar3) {
      case 0x22:
      case 0x27:
      case 0x3f:
      case 0x5c:
      case 0x61:
      case 0x62:
      case 0x66:
      case 0x6e:
      case 0x72:
      case 0x74:
      case 0x76:
        bVar9 = SCARRY8(lVar19,1);
        lVar19 = lVar19 + 1;
        if (bVar9) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100561234);
          (*pcVar7)();
        }
        goto LAB_100560d40;
      default:
        goto switchD_100560dbc_caseD_23;
      case 0x55:
        goto switchD_100560dbc_caseD_55;
      case 0x75:
        goto switchD_100560dbc_caseD_75;
      case 0x78:
        if (pbVar15 != pbVar2) {
          if ((*pbVar15 - 0x3a & 0xff) < 0xf6) {
            bVar8 = true;
            uVar18 = *pbVar15 - 0x41;
            if ((0x25 < uVar18) || ((1L << ((ulong)uVar18 & 0x3f) & 0x3f0000003fU) == 0))
            goto switchD_100560dbc_caseD_23;
          }
          pbVar15 = pbVar16 + 3;
          *(byte **)(unaff_x20 + 0x28) = pbVar15;
          if ((pbVar15 != pbVar2) &&
             ((0xf5 < (*pbVar15 - 0x3a & 0xff) ||
              ((uVar18 = *pbVar15 - 0x41, uVar18 < 0x26 &&
               ((1L << ((ulong)uVar18 & 0x3f) & 0x3f0000003fU) != 0)))))) {
            pbVar15 = pbVar16 + 4;
            *(byte **)(unaff_x20 + 0x28) = pbVar15;
          }
          bVar8 = SCARRY8(lVar19,1);
          lVar19 = lVar19 + 1;
          if (bVar8) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100561238);
            (*pcVar7)();
          }
          goto LAB_100560d3c;
        }
        goto switchD_100560dbc_caseD_23;
      }
    }
    if ((pbVar15 != pbVar2) && (0xfffffff7 < *pbVar15 - 0x38)) {
      pbVar15 = pbVar16 + 3;
      *(byte **)(unaff_x20 + 0x28) = pbVar15;
      if ((pbVar15 != pbVar2) && (0xfffffff7 < *pbVar15 - 0x38)) {
        if (0x33 < bVar3) goto LAB_100561220;
        pbVar15 = pbVar16 + 4;
        *(byte **)(unaff_x20 + 0x28) = pbVar15;
      }
    }
    bVar8 = SCARRY8(lVar19,1);
    lVar19 = lVar19 + 1;
    if (bVar8) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100561230);
      (*pcVar7)();
    }
  }
LAB_100560d3c:
  bVar8 = true;
LAB_100560d40:
  pbVar16 = pbVar15;
  if (pbVar15 == pbVar2) goto switchD_100560dbc_caseD_23;
  goto LAB_100560d4c;
switchD_100560dbc_caseD_55:
  bVar8 = false;
  lVar17 = 8;
switchD_100560dbc_caseD_75:
  if ((long)pbVar2 - (long)pbVar15 < lVar17) goto LAB_100561220;
  bVar3 = *pbVar15;
  if ((byte)(bVar3 - 0x3a) < 0xf6) {
    if ((byte)(bVar3 + 0xb9) < 0xfa) {
      if ((byte)(bVar3 + 0x99) < 0xfa) goto LAB_100561220;
      cVar20 = -0x57;
    }
    else {
      cVar20 = -0x37;
    }
  }
  else {
    cVar20 = -0x30;
  }
  bVar4 = pbVar16[3];
  param_1 = (undefined1 *)(ulong)bVar4;
  if ((byte)(bVar4 - 0x3a) < 0xf6) {
    if ((byte)(bVar4 + 0xb9) < 0xfa) {
      if ((byte)(bVar4 + 0x99) < 0xfa) goto LAB_100561220;
      cVar11 = -0x57;
    }
    else {
      cVar11 = -0x37;
    }
  }
  else {
    cVar11 = -0x30;
  }
  bVar5 = pbVar16[4];
  if ((byte)(bVar5 - 0x3a) < 0xf6) {
    if ((byte)(bVar5 + 0xb9) < 0xfa) {
      if ((bVar5 - 0x67 & 0xff) < 0xfa) goto LAB_100561220;
      iVar12 = 0xa9;
    }
    else {
      iVar12 = 0xc9;
    }
  }
  else {
    iVar12 = 0xd0;
  }
  bVar6 = pbVar16[5];
  if ((byte)(bVar6 - 0x3a) < 0xf6) {
    if ((byte)(bVar6 + 0xb9) < 0xfa) {
      if ((byte)(bVar6 + 0x99) < 0xfa) goto LAB_100561220;
      cVar14 = -0x57;
    }
    else {
      cVar14 = -0x37;
    }
  }
  else {
    cVar14 = -0x30;
  }
  uVar18 = (uint)bVar5 + iVar12;
  param_1 = (undefined1 *)(ulong)uVar18;
  uVar18 = ((uint)(byte)(bVar3 + cVar20) * 0x100 + (uint)(byte)(bVar4 + cVar11) * 0x10 +
           (uVar18 & 0xff)) * 0x10 + (uint)(byte)(bVar6 + cVar14);
  if (!bVar8) {
    bVar3 = pbVar16[6];
    if ((byte)(bVar3 - 0x3a) < 0xf6) {
      if ((byte)(bVar3 + 0xb9) < 0xfa) {
        if ((byte)(bVar3 + 0x99) < 0xfa) goto LAB_100561220;
        cVar20 = -0x57;
      }
      else {
        cVar20 = -0x37;
      }
    }
    else {
      cVar20 = -0x30;
    }
    bVar4 = pbVar16[7];
    param_1 = (undefined1 *)(ulong)bVar4;
    if ((byte)(bVar4 - 0x3a) < 0xf6) {
      if ((byte)(bVar4 + 0xb9) < 0xfa) {
        if ((byte)(bVar4 + 0x99) < 0xfa) goto LAB_100561220;
        cVar11 = -0x57;
      }
      else {
        cVar11 = -0x37;
      }
    }
    else {
      cVar11 = -0x30;
    }
    bVar5 = pbVar16[8];
    if ((byte)(bVar5 - 0x3a) < 0xf6) {
      if ((byte)(bVar5 + 0xb9) < 0xfa) {
        if ((byte)(bVar5 + 0x99) < 0xfa) goto LAB_100561220;
        cVar14 = -0x57;
      }
      else {
        cVar14 = -0x37;
      }
    }
    else {
      cVar14 = -0x30;
    }
    bVar6 = pbVar16[9];
    if ((byte)(bVar6 - 0x3a) < 0xf6) {
      if ((byte)(bVar6 + 0xb9) < 0xfa) {
        if ((byte)(bVar6 + 0x99) < 0xfa) goto LAB_100561220;
        cVar13 = -0x57;
      }
      else {
        cVar13 = -0x37;
      }
    }
    else {
      cVar13 = -0x30;
    }
    uVar18 = (uVar18 * 0x100 + (uint)(byte)(bVar3 + cVar20) * 0x10 + (uint)(byte)(bVar4 + cVar11)) *
             0x100 + (uint)(byte)(bVar5 + cVar14) * 0x10 + (uint)(byte)(bVar6 + cVar13);
  }
  pbVar15 = pbVar15 + lVar17;
  *(byte **)(unaff_x20 + 0x28) = pbVar15;
  if (uVar18 < 0x80) {
    bVar8 = SCARRY8(lVar19,1);
    lVar19 = lVar19 + 1;
    if (bVar8) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x10056123c);
      (*pcVar7)();
    }
  }
  else if (uVar18 < 0x800) {
    bVar8 = SCARRY8(lVar19,2);
    lVar19 = lVar19 + 2;
    if (bVar8) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100561240);
      (*pcVar7)();
    }
  }
  else {
    if (0xfffff7ff < uVar18 - 0xe000) {
LAB_100561220:
      bVar8 = true;
      goto switchD_100560dbc_caseD_23;
    }
    if (uVar18 >> 0x10 == 0) {
      bVar8 = SCARRY8(lVar19,3);
      lVar19 = lVar19 + 3;
      if (bVar8) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1005611c0);
        (*pcVar7)();
      }
    }
    else {
      if (0x10 < uVar18 >> 0x10) goto LAB_100561220;
      bVar8 = SCARRY8(lVar19,4);
      lVar19 = lVar19 + 4;
      if (bVar8) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100561244);
        (*pcVar7)();
      }
    }
  }
  goto LAB_100560d3c;
}

