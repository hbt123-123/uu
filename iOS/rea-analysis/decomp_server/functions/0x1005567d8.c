// rea decompile_all
// name: FUN_1005567d8
// address: 0x1005567d8
// body: available
// range: 0x1005567d8-0x100556f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005567d8(ulong param_1,ulong param_2)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  byte bVar10;
  ulong uVar11;
  ulong *unaff_x20;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  long lVar16;
  ulong local_70;
  ulong uStack_68;
  
  uVar13 = *unaff_x20;
  uVar4 = uVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar12 = uVar13;
  if ((uVar4 & 1) == 0) {
    uVar12 = 0;
    FUN_100506f84(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
  }
  uVar4 = *(ulong *)(uVar12 + 0x10);
  uVar13 = uVar12;
  if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar4) {
    uVar13 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
    FUN_100506f84(uVar13,uVar4 + 1,1,uVar12);
  }
  *(ulong *)(uVar13 + 0x10) = uVar4 + 1;
  *(undefined1 *)(uVar13 + uVar4 + 0x20) = 0x22;
  *unaff_x20 = uVar13;
  uVar12 = param_2 >> 0x38 & 0xf;
  uVar4 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar4 = uVar12;
  }
  if (uVar4 != 0) {
    _swift_bridgeObjectRetain(param_2);
    lVar14 = 0;
    do {
      if ((param_2 >> 0x3c & 1) == 0) {
        if ((param_2 >> 0x3d & 1) == 0) {
          uVar13 = param_1 & 0xffffffffffff;
          uVar3 = (int)param_2 + 0x20;
          if ((param_1 >> 0x3c & 1) == 0) {
            uVar7 = param_1;
            uVar13 = param_2;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
            uVar3 = (uint)uVar7;
          }
        }
        else {
          uVar3 = (uint)&local_70;
          uVar13 = uVar12;
          local_70 = param_1;
          uStack_68 = param_2 & 0xffffffffffffff;
        }
        __ss13_decodeScalar_10startingAts7UnicodeO0B0V_Si12scalarLengthtSRys5UInt8VG_SitF();
      }
      else {
        lVar5 = lVar14 << 0x10;
        uVar13 = param_1;
        __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                  (lVar5,param_1,param_2);
        uVar3 = (uint)lVar5;
      }
      if ((int)uVar3 < 0xc) {
        if (9 < (int)uVar3) {
          if (uVar3 == 10) {
            pcVar6 = "\\n";
          }
          else {
            if (uVar3 != 0xb) goto LAB_10055698c;
            pcVar6 = "\\v";
          }
          goto LAB_100556878;
        }
        if (uVar3 == 8) {
          pcVar6 = "\\b";
          goto LAB_100556878;
        }
        if (uVar3 == 9) {
          pcVar6 = "\\t";
          goto LAB_100556878;
        }
LAB_10055698c:
        bVar10 = (byte)uVar3;
        if ((uVar3 < 0x20) || (uVar3 == 0x7f)) {
          uVar15 = *unaff_x20;
          uVar7 = uVar15;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar8 = uVar15;
          if ((uVar7 & 1) == 0) {
            uVar8 = 0;
            FUN_100506f84(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
          }
          uVar7 = *(ulong *)(uVar8 + 0x10);
          uVar15 = *(ulong *)(uVar8 + 0x18);
          uVar11 = uVar15 >> 1;
          lVar5 = uVar7 + 1;
          uVar9 = uVar8;
          if (uVar11 <= uVar7) {
            uVar9 = (ulong)(1 < uVar15);
            FUN_100506f84(uVar9,lVar5,1,uVar8);
            uVar15 = *(ulong *)(uVar9 + 0x18);
            uVar11 = uVar15 >> 1;
          }
          *(long *)(uVar9 + 0x10) = lVar5;
          *(undefined1 *)(uVar9 + uVar7 + 0x20) = 0x5c;
          lVar16 = uVar7 + 2;
          uVar8 = uVar9;
          if ((long)uVar11 < lVar16) {
            uVar8 = (ulong)(1 < uVar15);
            FUN_100506f84(uVar8,lVar16,1,uVar9);
            uVar15 = *(ulong *)(uVar8 + 0x18);
            uVar11 = uVar15 >> 1;
          }
          *(long *)(uVar8 + 0x10) = lVar16;
          *(byte *)(uVar8 + lVar5 + 0x20) = (byte)(uVar3 >> 6) | 0x30;
          lVar5 = uVar7 + 3;
          uVar9 = uVar8;
          if ((long)uVar11 < lVar5) {
            uVar9 = (ulong)(1 < uVar15);
            FUN_100506f84(uVar9,lVar5,1,uVar8);
            uVar15 = *(ulong *)(uVar9 + 0x18);
            uVar11 = uVar15 >> 1;
          }
          *(long *)(uVar9 + 0x10) = lVar5;
          *(byte *)(uVar9 + lVar16 + 0x20) = (byte)(uVar3 >> 3) & 7 | 0x30;
          lVar16 = uVar7 + 4;
          uVar7 = uVar9;
          if ((long)uVar11 < lVar16) {
            uVar7 = (ulong)(1 < uVar15);
            FUN_100506f84(uVar7,lVar16,1,uVar9);
          }
          bVar10 = bVar10 & 7 | 0x30;
LAB_100556b40:
          *(long *)(uVar7 + 0x10) = lVar16;
          lVar5 = uVar7 + lVar5;
LAB_100556b48:
          *(byte *)(lVar5 + 0x20) = bVar10;
          *unaff_x20 = uVar7;
        }
        else {
          if (0x7f < uVar3) {
            if (uVar3 < 0x800) {
              uVar15 = *unaff_x20;
              uVar7 = uVar15;
              _swift_isUniquelyReferenced_nonNull_native();
              uVar8 = uVar15;
              if ((uVar7 & 1) == 0) {
                uVar8 = 0;
                FUN_100506f84(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
              }
              uVar7 = *(ulong *)(uVar8 + 0x10);
              uVar15 = *(ulong *)(uVar8 + 0x18);
              uVar11 = uVar15 >> 1;
              lVar5 = uVar7 + 1;
              uVar9 = uVar8;
              if (uVar11 <= uVar7) {
                uVar9 = (ulong)(1 < uVar15);
                FUN_100506f84(uVar9,lVar5,1,uVar8);
                uVar15 = *(ulong *)(uVar9 + 0x18);
                uVar11 = uVar15 >> 1;
              }
              *(long *)(uVar9 + 0x10) = lVar5;
              *(byte *)(uVar9 + uVar7 + 0x20) = (byte)(uVar3 >> 6) | 0xc0;
              lVar16 = uVar7 + 2;
LAB_100556b30:
              uVar7 = uVar9;
              if ((long)uVar11 < lVar16) {
                uVar7 = (ulong)(1 < uVar15);
                FUN_100506f84(uVar7,lVar16,1,uVar9);
              }
              bVar10 = bVar10 & 0x3f | 0x80;
              goto LAB_100556b40;
            }
            if (uVar3 >> 0x10 != 0) {
              uVar1 = (uVar3 >> 0x12 & 0xff) + 0xf0;
              if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
                pcVar2 = (code *)SoftwareBreakpoint(1,0x100556ec0);
                (*pcVar2)();
              }
              uVar15 = *unaff_x20;
              uVar7 = uVar15;
              _swift_isUniquelyReferenced_nonNull_native();
              uVar8 = uVar15;
              if ((uVar7 & 1) == 0) {
                uVar8 = 0;
                FUN_100506f84(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
              }
              uVar7 = *(ulong *)(uVar8 + 0x10);
              uVar15 = *(ulong *)(uVar8 + 0x18);
              uVar11 = uVar15 >> 1;
              lVar5 = uVar7 + 1;
              uVar9 = uVar8;
              if (uVar11 <= uVar7) {
                uVar9 = (ulong)(1 < uVar15);
                FUN_100506f84(uVar9,lVar5,1,uVar8);
                uVar15 = *(ulong *)(uVar9 + 0x18);
                uVar11 = uVar15 >> 1;
              }
              *(long *)(uVar9 + 0x10) = lVar5;
              *(char *)(uVar9 + uVar7 + 0x20) = (char)uVar1;
              lVar16 = uVar7 + 2;
              uVar8 = uVar9;
              if ((long)uVar11 < lVar16) {
                uVar8 = (ulong)(1 < uVar15);
                FUN_100506f84(uVar8,lVar16,1,uVar9);
                uVar15 = *(ulong *)(uVar8 + 0x18);
                uVar11 = uVar15 >> 1;
              }
              *(long *)(uVar8 + 0x10) = lVar16;
              *(byte *)(uVar8 + lVar5 + 0x20) = (byte)(uVar3 >> 0xc) & 0x3f | 0x80;
              lVar5 = uVar7 + 3;
              uVar9 = uVar8;
              if ((long)uVar11 < lVar5) {
                uVar9 = (ulong)(1 < uVar15);
                FUN_100506f84(uVar9,lVar5,1,uVar8);
                uVar15 = *(ulong *)(uVar9 + 0x18);
                uVar11 = uVar15 >> 1;
              }
              *(long *)(uVar9 + 0x10) = lVar5;
              *(byte *)(uVar9 + lVar16 + 0x20) = (byte)(uVar3 >> 6) & 0x3f | 0x80;
              lVar16 = uVar7 + 4;
              goto LAB_100556b30;
            }
            uVar15 = *unaff_x20;
            uVar7 = uVar15;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar8 = uVar15;
            if ((uVar7 & 1) == 0) {
              uVar8 = 0;
              FUN_100506f84(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
            }
            uVar7 = *(ulong *)(uVar8 + 0x10);
            uVar15 = *(ulong *)(uVar8 + 0x18);
            uVar11 = uVar15 >> 1;
            lVar16 = uVar7 + 1;
            uVar9 = uVar8;
            if (uVar11 <= uVar7) {
              uVar9 = (ulong)(1 < uVar15);
              FUN_100506f84(uVar9,lVar16,1,uVar8);
              uVar15 = *(ulong *)(uVar9 + 0x18);
              uVar11 = uVar15 >> 1;
            }
            *(long *)(uVar9 + 0x10) = lVar16;
            *(byte *)(uVar9 + uVar7 + 0x20) = (byte)(uVar3 >> 0xc) | 0xe0;
            lVar5 = uVar7 + 2;
            uVar8 = uVar9;
            if ((long)uVar11 < lVar5) {
              uVar8 = (ulong)(1 < uVar15);
              FUN_100506f84(uVar8,lVar5,1,uVar9);
              uVar15 = *(ulong *)(uVar8 + 0x18);
              uVar11 = uVar15 >> 1;
            }
            *(long *)(uVar8 + 0x10) = lVar5;
            *(byte *)(uVar8 + lVar16 + 0x20) = (byte)(uVar3 >> 6) & 0x3f | 0x80;
            lVar16 = uVar7 + 3;
            uVar7 = uVar8;
            if ((long)uVar11 < lVar16) {
              uVar7 = (ulong)(1 < uVar15);
              FUN_100506f84(uVar7,lVar16,1,uVar8);
            }
            bVar10 = bVar10 & 0x3f | 0x80;
            *(long *)(uVar7 + 0x10) = lVar16;
            lVar5 = uVar7 + lVar5;
            goto LAB_100556b48;
          }
          uVar15 = *unaff_x20;
          uVar7 = uVar15;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar8 = uVar15;
          if ((uVar7 & 1) == 0) {
            uVar8 = 0;
            FUN_100506f84(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
          }
          uVar7 = *(ulong *)(uVar8 + 0x10);
          uVar15 = uVar8;
          if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar7) {
            uVar15 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
            FUN_100506f84(uVar15,uVar7 + 1,1,uVar8);
          }
          *(ulong *)(uVar15 + 0x10) = uVar7 + 1;
          *(byte *)(uVar15 + uVar7 + 0x20) = bVar10;
          *unaff_x20 = uVar15;
        }
      }
      else {
        if ((int)uVar3 < 0x22) {
          if (uVar3 == 0xc) {
            pcVar6 = "\\f";
          }
          else {
            if (uVar3 != 0xd) goto LAB_10055698c;
            pcVar6 = "\\r";
          }
        }
        else if (uVar3 == 0x22) {
          pcVar6 = "\\\"";
        }
        else {
          if (uVar3 != 0x5c) goto LAB_10055698c;
          pcVar6 = "\\\\";
        }
LAB_100556878:
        FUN_1004f9e80(pcVar6,2);
      }
      lVar14 = uVar13 + lVar14;
    } while (lVar14 < (long)uVar4);
    _swift_bridgeObjectRelease(param_2);
    uVar13 = *unaff_x20;
  }
  uVar4 = uVar13;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar12 = uVar13;
  if ((uVar4 & 1) == 0) {
    uVar12 = 0;
    FUN_100506f84(0,*(long *)(uVar13 + 0x10) + 1,1,uVar13);
  }
  uVar4 = *(ulong *)(uVar12 + 0x10);
  uVar13 = uVar12;
  if (*(ulong *)(uVar12 + 0x18) >> 1 <= uVar4) {
    uVar13 = (ulong)(1 < *(ulong *)(uVar12 + 0x18));
    FUN_100506f84(uVar13,uVar4 + 1,1,uVar12);
  }
  *(ulong *)(uVar13 + 0x10) = uVar4 + 1;
  *(undefined1 *)(uVar13 + uVar4 + 0x20) = 0x22;
  *unaff_x20 = uVar13;
  return;
}

