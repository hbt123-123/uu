// rea decompile_all
// name: FUN_10063fad0
// address: 0x10063fad0
// body: available
// range: 0x10063fad0-0x100640073 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10063fad0(long param_1)

{
  bool bVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  code *pcVar10;
  uint uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong uVar17;
  long unaff_x20;
  ulong uVar18;
  long lVar19;
  ulong uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  
  uVar18 = *(ulong *)(param_1 + 0x10);
  param_1 = param_1 + 0x20;
  lVar19 = 8;
  uVar12 = 0;
  do {
    if (uVar18 <= uVar12) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100640028);
      (*pcVar10)();
    }
    lVar2 = uVar12 + 1;
    if (SCARRY8(uVar12,1)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10064002c);
      (*pcVar10)();
    }
    if ((long)uVar18 <= lVar2) {
      lVar2 = 0;
    }
    lVar3 = lVar2 + 1;
    if (SCARRY8(lVar2,1)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100640030);
      (*pcVar10)();
    }
    if ((long)uVar18 <= lVar3) {
      lVar3 = 0;
    }
    lVar4 = lVar3 + 1;
    if (SCARRY8(lVar3,1)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100640034);
      (*pcVar10)();
    }
    if ((long)uVar18 <= lVar4) {
      lVar4 = 0;
    }
    uVar20 = lVar4 + 1;
    if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100640038);
      (*pcVar10)();
    }
    bVar6 = *(byte *)(param_1 + uVar12);
    bVar7 = *(byte *)(param_1 + lVar2);
    bVar8 = *(byte *)(param_1 + lVar3);
    bVar9 = *(byte *)(param_1 + lVar4);
    if ((long)uVar18 <= (long)uVar20) {
      uVar20 = 0;
    }
    uVar17 = *(ulong *)(unaff_x20 + 0xa0);
    uVar12 = uVar17;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0xa0) = uVar17;
    if ((uVar12 & 1) == 0) {
      FUN_1006541cc();
    }
    if (*(ulong *)(uVar17 + 0x10) <= lVar19 - 8U) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10064003c);
      (*pcVar10)();
    }
    *(uint *)(uVar17 + lVar19 * 4) =
         *(uint *)(uVar17 + lVar19 * 4) ^
         ((uint)bVar9 | ((uint)bVar6 << 0x10 | (uint)bVar7 << 8 | (uint)bVar8) << 8);
    *(ulong *)(unaff_x20 + 0xa0) = uVar17;
    lVar19 = lVar19 + 1;
    uVar12 = uVar20;
  } while (lVar19 != 0x1a);
  uVar21 = 0;
  uVar22 = 0;
  uVar12 = 0;
  while (lVar19 = *(long *)(uVar17 + 0x10), lVar19 != 0) {
    uVar22 = *(uint *)(uVar17 + 0x20) ^ uVar22;
    uVar23 = uVar22;
    FUN_100640654();
    if (lVar19 == 1) break;
    uVar21 = *(uint *)(uVar17 + 0x24) ^ uVar23 ^ uVar21;
    uVar23 = uVar21;
    FUN_100640654();
    if (lVar19 == 2) break;
    uVar23 = uVar23 ^ *(uint *)(uVar17 + 0x28) ^ uVar22;
    uVar22 = uVar23;
    FUN_100640654();
    if (lVar19 == 3) break;
    uVar22 = uVar22 ^ *(uint *)(uVar17 + 0x2c) ^ uVar21;
    uVar21 = uVar22;
    FUN_100640654();
    if (lVar19 == 4) break;
    uVar21 = uVar21 ^ *(uint *)(uVar17 + 0x30) ^ uVar23;
    uVar23 = uVar21;
    FUN_100640654();
    if (lVar19 == 5) break;
    uVar23 = uVar23 ^ *(uint *)(uVar17 + 0x34) ^ uVar22;
    uVar22 = uVar23;
    FUN_100640654();
    if (lVar19 == 6) break;
    uVar22 = uVar22 ^ *(uint *)(uVar17 + 0x38) ^ uVar21;
    uVar21 = uVar22;
    FUN_100640654();
    if (lVar19 == 7) break;
    uVar21 = uVar21 ^ *(uint *)(uVar17 + 0x3c) ^ uVar23;
    uVar23 = uVar21;
    FUN_100640654();
    if (lVar19 == 8) break;
    uVar23 = uVar23 ^ *(uint *)(uVar17 + 0x40) ^ uVar22;
    uVar22 = uVar23;
    FUN_100640654();
    if (lVar19 == 9) break;
    uVar22 = uVar22 ^ *(uint *)(uVar17 + 0x44) ^ uVar21;
    uVar21 = uVar22;
    FUN_100640654();
    if (lVar19 == 10) break;
    uVar21 = uVar21 ^ *(uint *)(uVar17 + 0x48) ^ uVar23;
    uVar23 = uVar21;
    FUN_100640654();
    if (lVar19 == 0xb) break;
    uVar23 = uVar23 ^ *(uint *)(uVar17 + 0x4c) ^ uVar22;
    uVar22 = uVar23;
    FUN_100640654();
    if (lVar19 == 0xc) break;
    uVar22 = uVar22 ^ *(uint *)(uVar17 + 0x50) ^ uVar21;
    uVar21 = uVar22;
    FUN_100640654();
    if (lVar19 == 0xd) break;
    uVar21 = uVar21 ^ *(uint *)(uVar17 + 0x54) ^ uVar23;
    uVar23 = uVar21;
    FUN_100640654();
    if (lVar19 == 0xe) break;
    uVar23 = uVar23 ^ *(uint *)(uVar17 + 0x58) ^ uVar22;
    uVar11 = uVar23;
    FUN_100640654();
    if (lVar19 == 0xf) break;
    uVar11 = uVar11 ^ *(uint *)(uVar17 + 0x5c) ^ uVar21;
    uVar21 = uVar11;
    FUN_100640654();
    if (*(ulong *)(uVar17 + 0x10) < 0x11) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100640040);
      (*pcVar10)();
    }
    if (*(ulong *)(uVar17 + 0x10) == 0x11) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100640044);
      (*pcVar10)();
    }
    uVar5 = *(uint *)(uVar17 + 0x60);
    uVar22 = *(uint *)(uVar17 + 100);
    uVar18 = uVar17;
    _swift_isUniquelyReferenced_nonNull_native();
    *(ulong *)(unaff_x20 + 0xa0) = uVar17;
    if ((uVar18 & 1) == 0) {
      FUN_1006541cc();
    }
    uVar18 = *(ulong *)(uVar17 + 0x10);
    if (uVar18 <= uVar12) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x100640048);
      (*pcVar10)();
    }
    uVar22 = uVar22 ^ uVar11;
    lVar19 = uVar17 + uVar12 * 4;
    *(uint *)(lVar19 + 0x20) = uVar22;
    if (uVar18 <= uVar12 + 1) {
                    /* WARNING: Does not return */
      pcVar10 = (code *)SoftwareBreakpoint(1,0x10064004c);
      (*pcVar10)();
    }
    uVar21 = uVar21 ^ uVar5 ^ uVar23;
    *(uint *)(lVar19 + 0x24) = uVar21;
    *(ulong *)(unaff_x20 + 0xa0) = uVar17;
    bVar1 = 0xf < uVar12;
    uVar12 = uVar12 + 2;
    if (bVar1) {
      uVar12 = 0;
      do {
        uVar18 = uVar12 + 1;
        uVar17 = *(ulong *)(unaff_x20 + 0xa8);
        uVar20 = 0;
        do {
          uVar15 = *(ulong *)(uVar17 + 0x10);
          if (uVar15 == 0) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100640050);
            (*pcVar10)();
          }
          if (uVar15 == 1) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100640054);
            (*pcVar10)();
          }
          if (uVar15 < 3) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100640058);
            (*pcVar10)();
          }
          if (uVar15 == 3) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x10064005c);
            (*pcVar10)();
          }
          uVar15 = 0;
          lVar19 = *(long *)(unaff_x20 + 0xa0);
          uVar16 = *(ulong *)(lVar19 + 0x10);
          uVar23 = uVar22;
          do {
            if (uVar16 == uVar15) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x100640014);
              (*pcVar10)();
            }
            uVar11 = *(uint *)(lVar19 + 0x20 + uVar15 * 4) ^ uVar23;
            if (*(ulong *)(*(long *)(uVar17 + 0x20) + 0x10) <= (ulong)(uVar11 >> 0x18)) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x100640018);
              (*pcVar10)();
            }
            uVar13 = (ulong)(uVar11 >> 0x10 & 0xff);
            if (*(ulong *)(*(long *)(uVar17 + 0x28) + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x10064001c);
              (*pcVar10)();
            }
            uVar14 = (ulong)(uVar11 >> 8 & 0xff);
            if (*(ulong *)(*(long *)(uVar17 + 0x30) + 0x10) <= uVar14) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x100640020);
              (*pcVar10)();
            }
            if (*(ulong *)(*(long *)(uVar17 + 0x38) + 0x10) <= (ulong)(uVar11 & 0xff)) {
                    /* WARNING: Does not return */
              pcVar10 = (code *)SoftwareBreakpoint(1,0x100640024);
              (*pcVar10)();
            }
            uVar15 = uVar15 + 1;
            uVar23 = (*(uint *)(*(long *)(uVar17 + 0x30) + 0x20 + uVar14 * 4) ^
                     *(int *)(*(long *)(uVar17 + 0x28) + 0x20 + uVar13 * 4) +
                     *(int *)(*(long *)(uVar17 + 0x20) + 0x20 + (ulong)(uVar11 >> 0x18) * 4)) +
                     *(int *)(*(long *)(uVar17 + 0x38) + 0x20 + (ulong)(uVar11 & 0xff) * 4) ^ uVar21
            ;
            uVar21 = uVar11;
          } while (uVar15 != 0x10);
          if (uVar16 < 0x11) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100640060);
            (*pcVar10)();
          }
          if (uVar16 == 0x11) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100640064);
            (*pcVar10)();
          }
          uVar21 = *(uint *)(lVar19 + 0x60);
          uVar22 = *(uint *)(lVar19 + 100);
          uVar15 = uVar17;
          _swift_isUniquelyReferenced_nonNull_native();
          *(ulong *)(unaff_x20 + 0xa8) = uVar17;
          if ((uVar15 & 1) == 0) {
            FUN_100654208();
            *(ulong *)(unaff_x20 + 0xa8) = uVar17;
          }
          if (*(ulong *)(uVar17 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100640068);
            (*pcVar10)();
          }
          lVar19 = uVar17 + 0x20;
          uVar16 = *(ulong *)(lVar19 + uVar12 * 8);
          uVar15 = uVar16;
          _swift_isUniquelyReferenced_nonNull_native();
          *(ulong *)(lVar19 + uVar12 * 8) = uVar16;
          if ((uVar15 & 1) == 0) {
            FUN_1006541cc();
            *(ulong *)(lVar19 + uVar12 * 8) = uVar16;
          }
          if (*(ulong *)(uVar16 + 0x10) <= uVar20) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x10064006c);
            (*pcVar10)();
          }
          uVar22 = uVar22 ^ uVar11;
          *(uint *)(uVar16 + uVar20 * 4 + 0x20) = uVar22;
          *(ulong *)(unaff_x20 + 0xa8) = uVar17;
          if (*(ulong *)(uVar17 + 0x10) <= uVar12) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100640070);
            (*pcVar10)();
          }
          uVar16 = *(ulong *)(lVar19 + uVar12 * 8);
          uVar15 = uVar16;
          _swift_isUniquelyReferenced_nonNull_native();
          *(ulong *)(lVar19 + uVar12 * 8) = uVar16;
          if ((uVar15 & 1) == 0) {
            FUN_1006541cc();
            *(ulong *)(lVar19 + uVar12 * 8) = uVar16;
          }
          if (*(ulong *)(uVar16 + 0x10) <= (uVar20 | 1)) {
                    /* WARNING: Does not return */
            pcVar10 = (code *)SoftwareBreakpoint(1,0x100640074);
            (*pcVar10)();
          }
          uVar21 = uVar21 ^ uVar23;
          *(uint *)(uVar16 + (uVar20 | 1) * 4 + 0x20) = uVar21;
          *(ulong *)(unaff_x20 + 0xa8) = uVar17;
          bVar1 = uVar20 < 0xfe;
          uVar20 = uVar20 + 2;
        } while (bVar1);
        uVar12 = uVar18;
        if (uVar18 == 4) {
          return;
        }
      } while( true );
    }
  }
                    /* WARNING: Does not return */
  pcVar10 = (code *)SoftwareBreakpoint(1,0x100640010);
  (*pcVar10)();
}

