// rea decompile_all
// name: FUN_100644e64
// address: 0x100644e64
// body: available
// range: 0x100644e64-0x10064538b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100644e64(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  code *pcVar4;
  bool bVar5;
  bool bVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  uint uVar13;
  long lVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  
  lVar7 = 0;
  FUN_10064b1b4(0,0,0,PTR___swiftEmptyArrayStorage_100995ea0,param_1,param_2,param_3,param_4);
  if (lVar7 != -1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10064536c);
    (*pcVar4)();
  }
  uVar17 = param_1;
  FUN_10065f798(param_1,param_2,param_3,param_4);
  uVar16 = uVar17 - 1;
  uVar17 = uVar17 + 0x3e;
  if (-1 < (long)uVar16) {
    uVar17 = uVar16;
  }
  lVar7 = (uVar16 - (uVar17 & 0xffffffffffffffc0)) + 1;
  uVar12 = param_1;
  FUN_10065f798(param_1,param_2,param_3,param_4);
  uVar12 = uVar12 - lVar7;
  if ((long)uVar12 < 0) {
    if (SBORROW8(0,uVar12)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100645374);
      (*pcVar4)();
    }
    uVar12 = param_1;
    uVar9 = param_2;
    uVar15 = param_3;
    uVar10 = param_4;
    FUN_10064fbe0();
  }
  else {
    uVar9 = param_1;
    uVar15 = param_2;
    uVar10 = param_3;
    FUN_10065933c();
  }
  lVar14 = (long)uVar17 >> 6;
  if ((uVar15 & 0xff) == 0) {
    if (uVar9 == 0 && uVar12 == 0) goto LAB_100645028;
    uVar8 = 0;
    FUN_1006605e8(0,uVar12,uVar9,0,uVar10);
    _swift_bridgeObjectRelease(uVar10);
    if (uVar9 == 0) {
      uVar15 = (ulong)(uVar12 != 0);
      goto LAB_10064504c;
    }
  }
  else {
    if (((uint)uVar15 & 0xff) == 1) {
      if (SBORROW8(uVar9,uVar12)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100645378);
        (*pcVar4)();
      }
      if (uVar9 == uVar12) {
LAB_100645028:
        _swift_bridgeObjectRelease(uVar10);
        goto LAB_100645058;
      }
      uVar8 = 0;
      FUN_1006605e8(0,uVar12,uVar9,uVar15,uVar10);
    }
    else {
      if (*(long *)(uVar10 + 0x10) == 0) goto LAB_100645028;
      uVar8 = 0;
      FUN_1006605e8(0,uVar12,uVar9,uVar15,uVar10);
      if (((uint)uVar15 & 0xff) == 2) {
        uVar15 = *(ulong *)(uVar10 + 0x10);
        _swift_bridgeObjectRelease(uVar10);
        goto LAB_10064504c;
      }
    }
    _swift_bridgeObjectRelease(uVar10);
    uVar15 = uVar9 - uVar12;
    if (SBORROW8(uVar9,uVar12)) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x10064537c);
      (*pcVar4)();
    }
LAB_10064504c:
    if ((long)uVar15 < 1) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x100645370);
      (*pcVar4)();
    }
  }
  if (uVar8 != 0) {
LAB_1006452fc:
    return (LZCOUNT(uVar8) | lVar14 << 6) ^ 0x3f;
  }
LAB_100645058:
  bVar5 = SBORROW8(param_2,param_1);
  uVar9 = param_2 - param_1;
  uVar12 = (ulong)(param_1 != 0);
  lVar2 = uVar12 << 6;
  if (param_2 != 0) {
    uVar12 = 2;
    lVar2 = 0x80;
  }
  uVar17 = ((uVar17 & 0xffffffffffffffc0) - uVar16) - 0x41;
  do {
    lVar14 = lVar14 + -1;
    lVar7 = lVar7 + 0x40;
    uVar13 = (uint)param_3;
    if ((param_3 & 0xff) == 0) {
      lVar11 = lVar2;
      uVar16 = uVar12;
      if (param_2 == 0 && param_1 == 0) goto LAB_100645140;
LAB_10064517c:
      uVar15 = uVar16 - 1;
      if (SBORROW8(uVar16,1)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x10064532c);
        (*pcVar4)();
      }
      if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100645330);
        (*pcVar4)();
      }
      if ((param_3 & 0xff) == 0) {
        uVar16 = param_2;
        if (uVar15 != 1) {
          uVar16 = 0;
        }
        uVar10 = param_1;
        if (uVar15 != 0) {
          uVar10 = uVar16;
        }
      }
      else {
        if ((uVar13 & 0xff) == 1) {
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x10064535c);
            (*pcVar4)();
          }
          if ((long)uVar9 <= (long)uVar15) {
LAB_1006451ec:
            uVar10 = 0;
            goto LAB_1006451f0;
          }
          bVar6 = SCARRY8(param_1,uVar15);
          uVar15 = param_1 + uVar15;
          if (bVar6) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100645360);
            (*pcVar4)();
          }
          if ((long)uVar15 < 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100645364);
            (*pcVar4)();
          }
          if (*(ulong *)(param_4 + 0x10) <= uVar15) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100645368);
            (*pcVar4)();
          }
        }
        else if (*(ulong *)(param_4 + 0x10) <= uVar15) goto LAB_1006451ec;
        uVar10 = *(ulong *)(param_4 + 0x20 + uVar15 * 8);
      }
LAB_1006451f0:
      lVar1 = lVar11 - LZCOUNT(uVar10);
      if (SBORROW8(lVar11,LZCOUNT(uVar10))) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100645334);
        (*pcVar4)();
      }
      uVar8 = lVar1 - lVar7;
      if (-1 < (long)(lVar1 + uVar17)) goto LAB_100645208;
LAB_100645148:
      if (SBORROW8(0,uVar8)) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100645338);
        (*pcVar4)();
      }
      uVar8 = param_1;
      uVar16 = param_2;
      uVar15 = param_3;
      uVar10 = param_4;
      FUN_10064fbe0();
    }
    else {
      if ((uVar13 & 0xff) == 1) {
        uVar16 = uVar9;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10064533c);
          (*pcVar4)();
        }
      }
      else {
        uVar16 = *(ulong *)(param_4 + 0x10);
      }
      if (0 < (long)uVar16) {
        if ((uVar13 & 0xff) == 2) {
          uVar16 = *(ulong *)(param_4 + 0x10);
          if (uVar16 >> 0x39 != 0) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100645354);
            (*pcVar4)();
          }
          lVar11 = uVar16 << 6;
        }
        else {
          if (bVar5) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100645350);
            (*pcVar4)();
          }
          lVar11 = uVar9 * 0x40;
          uVar16 = uVar9;
          if (uVar9 + 0xfe00000000000000 >> 0x3a < 0x3f) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100645358);
            (*pcVar4)();
          }
        }
        goto LAB_10064517c;
      }
LAB_100645140:
      uVar8 = uVar17;
      if ((long)uVar17 < 0) goto LAB_100645148;
LAB_100645208:
      uVar16 = param_1;
      uVar15 = param_2;
      uVar10 = param_3;
      FUN_10065933c();
    }
    if ((uVar15 & 0xff) == 0) {
      _swift_bridgeObjectRelease(uVar10);
      if (uVar16 != 0 || uVar8 != 0) {
        if (uVar16 == 0 && uVar8 == 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10064538c);
          (*pcVar4)();
        }
        goto joined_r0x0001006452a0;
      }
    }
    else {
      if (((uint)uVar15 & 0xff) == 1) {
        if (SBORROW8(uVar16,uVar8)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100645340);
          (*pcVar4)();
        }
        if (uVar16 == uVar8) {
LAB_1006450cc:
          _swift_bridgeObjectRelease(uVar10);
          goto LAB_1006450d4;
        }
LAB_1006452c4:
        if (SBORROW8(uVar16,uVar8)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100645344);
          (*pcVar4)();
        }
        if ((long)(uVar16 - uVar8) < 1) {
          _swift_bridgeObjectRelease(uVar10);
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100645388);
          (*pcVar4)();
        }
        if ((long)uVar8 < 0) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100645348);
          (*pcVar4)();
        }
        if (*(ulong *)(uVar10 + 0x10) <= uVar8) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x10064534c);
          (*pcVar4)();
        }
        uVar3 = uVar10 + uVar8 * 8;
      }
      else {
        if (*(long *)(uVar10 + 0x10) == 0) goto LAB_1006450cc;
        uVar3 = uVar10;
        if (((uint)uVar15 & 0xff) != 2) goto LAB_1006452c4;
      }
      uVar8 = *(ulong *)(uVar3 + 0x20);
      _swift_bridgeObjectRelease(uVar10);
joined_r0x0001006452a0:
      if (uVar8 != 0) goto LAB_1006452fc;
    }
LAB_1006450d4:
    uVar17 = uVar17 - 0x40;
  } while( true );
}

