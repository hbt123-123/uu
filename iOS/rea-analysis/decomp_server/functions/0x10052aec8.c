// rea decompile_all
// name: FUN_10052aec8
// address: 0x10052aec8
// body: available
// range: 0x10052aec8-0x10052b66f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10052aec8(undefined8 ***param_1,undefined8 ***param_2)

{
  uint uVar1;
  long lVar2;
  undefined8 ***pppuVar3;
  undefined1 uVar4;
  code *pcVar5;
  uint uVar6;
  undefined8 ***pppuVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  undefined8 ***pppuVar11;
  ulong uVar12;
  ulong uVar13;
  long lVar14;
  ulong *unaff_x20;
  ulong uVar15;
  long lVar16;
  long lVar17;
  undefined8 ***pppuVar18;
  undefined8 **local_70;
  ulong uStack_68;
  
  uVar15 = *unaff_x20;
  uVar9 = uVar15;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar10 = uVar15;
  if ((uVar9 & 1) == 0) {
    uVar10 = 0;
    FUN_100506f84(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
  }
  uVar9 = *(ulong *)(uVar10 + 0x10);
  uVar15 = uVar10;
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar9) {
    uVar15 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
    FUN_100506f84(uVar15,uVar9 + 1,1,uVar10);
  }
  *(ulong *)(uVar15 + 0x10) = uVar9 + 1;
  *(undefined1 *)(uVar15 + uVar9 + 0x20) = 0x22;
  *unaff_x20 = uVar15;
  pppuVar18 = (undefined8 ***)((ulong)param_2 >> 0x38 & 0xf);
  pppuVar3 = (undefined8 ***)((ulong)param_1 & 0xffffffffffff);
  if (((ulong)param_2 & 0x2000000000000000) != 0) {
    pppuVar3 = pppuVar18;
  }
  if (pppuVar3 != (undefined8 ***)0x0) {
    _swift_bridgeObjectRetain(param_2);
    lVar16 = 0;
    do {
      if (((ulong)param_2 >> 0x3c & 1) == 0) {
        if (((ulong)param_2 >> 0x3d & 1) == 0) {
          pppuVar7 = (undefined8 ***)(((ulong)param_2 & 0xfffffffffffffff) + 0x20);
          pppuVar11 = (undefined8 ***)((ulong)param_1 & 0xffffffffffff);
          if (((ulong)param_1 >> 0x3c & 1) == 0) {
            pppuVar7 = param_1;
            pppuVar11 = param_2;
            __ss13_StringObjectV10sharedUTF8SRys5UInt8VGvg();
          }
        }
        else {
          pppuVar7 = &local_70;
          pppuVar11 = pppuVar18;
          local_70 = param_1;
          uStack_68 = (ulong)param_2 & 0xffffffffffffff;
        }
        __ss13_decodeScalar_10startingAts7UnicodeO0B0V_Si12scalarLengthtSRys5UInt8VG_SitF();
      }
      else {
        pppuVar7 = (undefined8 ***)(lVar16 << 0x10);
        pppuVar11 = param_1;
        __ss11_StringGutsV27foreignErrorCorrectedScalar10startingAts7UnicodeO0F0V_Si12scalarLengthtSS5IndexV_tF
                  (pppuVar7,param_1,param_2);
      }
      uVar6 = (uint)pppuVar7;
      if ((int)uVar6 < 0xc) {
        if (uVar6 == 8) {
          pcVar8 = "\\b";
        }
        else if (uVar6 == 9) {
          pcVar8 = "\\t";
        }
        else {
          if (uVar6 != 10) goto LAB_10052b040;
          pcVar8 = "\\n";
        }
LAB_10052af6c:
        FUN_1004f9e80(pcVar8,2);
      }
      else {
        if (0x21 < (int)uVar6) {
          if (uVar6 == 0x22) {
            pcVar8 = "\\\"";
          }
          else {
            if (uVar6 != 0x5c) goto LAB_10052b040;
            pcVar8 = "\\\\";
          }
          goto LAB_10052af6c;
        }
        if (uVar6 == 0xc) {
          pcVar8 = "\\f";
          goto LAB_10052af6c;
        }
        if (uVar6 == 0xd) {
          pcVar8 = "\\r";
          goto LAB_10052af6c;
        }
LAB_10052b040:
        if ((uVar6 < 0x20) || (0xffffffde < uVar6 - 0xa0)) {
          FUN_1004f9e80("\\u00",4);
          if (DAT_100aa26b0 != -1) {
            _swift_once(&DAT_100aa26b0,FUN_10052b880);
          }
          lVar14 = DAT_100aab430;
          uVar9 = ((ulong)pppuVar7 & 0xffffffff) >> 4;
          if (*(ulong *)(DAT_100aab430 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10052b5e8);
            (*pcVar5)();
          }
          lVar17 = DAT_100aab430 + 0x20;
          uVar4 = *(undefined1 *)(lVar17 + uVar9);
          uVar15 = *unaff_x20;
          uVar9 = uVar15;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar10 = uVar15;
          if ((uVar9 & 1) == 0) {
            uVar10 = 0;
            FUN_100506f84(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
          }
          uVar9 = *(ulong *)(uVar10 + 0x10);
          lVar2 = uVar9 + 1;
          uVar15 = uVar10;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar9) {
            uVar15 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
            FUN_100506f84(uVar15,lVar2,1,uVar10);
          }
          *(long *)(uVar15 + 0x10) = lVar2;
          *(undefined1 *)(uVar15 + uVar9 + 0x20) = uVar4;
          if (*(ulong *)(lVar14 + 0x10) <= ((ulong)pppuVar7 & 0xf)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10052b5ec);
            (*pcVar5)();
          }
          uVar4 = *(undefined1 *)(lVar17 + ((ulong)pppuVar7 & 0xf));
          lVar14 = uVar9 + 2;
          uVar9 = uVar15;
          if ((long)(*(ulong *)(uVar15 + 0x18) >> 1) < lVar14) {
            uVar9 = (ulong)(1 < *(ulong *)(uVar15 + 0x18));
            FUN_100506f84(uVar9,lVar14,1,uVar15);
          }
          *(long *)(uVar9 + 0x10) = lVar14;
          *(undefined1 *)(uVar9 + lVar2 + 0x20) = uVar4;
          *unaff_x20 = uVar9;
        }
        else if (uVar6 < 0x7f) {
          uVar15 = *unaff_x20;
          uVar9 = uVar15;
          _swift_isUniquelyReferenced_nonNull_native();
          uVar10 = uVar15;
          if ((uVar9 & 1) == 0) {
            uVar10 = 0;
            FUN_100506f84(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
          }
          uVar9 = *(ulong *)(uVar10 + 0x10);
          uVar15 = uVar10;
          if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar9) {
            uVar15 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
            FUN_100506f84(uVar15,uVar9 + 1,1,uVar10);
          }
          *(ulong *)(uVar15 + 0x10) = uVar9 + 1;
          *(byte *)(uVar15 + uVar9 + 0x20) = (byte)pppuVar7;
          *unaff_x20 = uVar15;
        }
        else {
          if (uVar6 < 0x800) {
            uVar15 = *unaff_x20;
            uVar9 = uVar15;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar10 = uVar15;
            if ((uVar9 & 1) == 0) {
              uVar10 = 0;
              FUN_100506f84(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
            }
            uVar9 = *(ulong *)(uVar10 + 0x10);
            uVar15 = *(ulong *)(uVar10 + 0x18);
            uVar13 = uVar15 >> 1;
            lVar14 = uVar9 + 1;
            uVar12 = uVar10;
            if (uVar13 <= uVar9) {
              uVar12 = (ulong)(1 < uVar15);
              FUN_100506f84(uVar12,lVar14,1,uVar10);
              uVar15 = *(ulong *)(uVar12 + 0x18);
              uVar13 = uVar15 >> 1;
            }
            *(long *)(uVar12 + 0x10) = lVar14;
            *(byte *)(uVar12 + uVar9 + 0x20) = (byte)(uVar6 >> 6) | 0xc0;
            lVar17 = uVar9 + 2;
            uVar9 = uVar12;
            if ((long)uVar13 < lVar17) {
              uVar9 = (ulong)(1 < uVar15);
              FUN_100506f84(uVar9,lVar17,1,uVar12);
            }
LAB_10052b274:
            *(long *)(uVar9 + 0x10) = lVar17;
            lVar14 = uVar9 + lVar14;
          }
          else {
            if (uVar6 - 0x10000 < 0xffff0800) {
              uVar1 = (uVar6 >> 0x12 & 0xff) + 0xf0;
              if (uVar1 >> 8 != 0) {
                    /* WARNING: Does not return */
                pcVar5 = (code *)SoftwareBreakpoint(1,0x10052b5f0);
                (*pcVar5)();
              }
              uVar15 = *unaff_x20;
              uVar9 = uVar15;
              _swift_isUniquelyReferenced_nonNull_native();
              uVar10 = uVar15;
              if ((uVar9 & 1) == 0) {
                uVar10 = 0;
                FUN_100506f84(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
              }
              uVar15 = *(ulong *)(uVar10 + 0x10);
              uVar12 = *(ulong *)(uVar10 + 0x18);
              uVar13 = uVar12 >> 1;
              lVar14 = uVar15 + 1;
              uVar9 = uVar10;
              if (uVar13 <= uVar15) {
                uVar9 = (ulong)(1 < uVar12);
                FUN_100506f84(uVar9,lVar14,1,uVar10);
                uVar12 = *(ulong *)(uVar9 + 0x18);
                uVar13 = uVar12 >> 1;
              }
              *(long *)(uVar9 + 0x10) = lVar14;
              *(char *)(uVar9 + uVar15 + 0x20) = (char)uVar1;
              lVar17 = uVar15 + 2;
              uVar10 = uVar9;
              if ((long)uVar13 < lVar17) {
                uVar10 = (ulong)(1 < uVar12);
                FUN_100506f84(uVar10,lVar17,1,uVar9);
                uVar12 = *(ulong *)(uVar10 + 0x18);
                uVar13 = uVar12 >> 1;
              }
              *(long *)(uVar10 + 0x10) = lVar17;
              *(byte *)(uVar10 + lVar14 + 0x20) = (byte)(uVar6 >> 0xc) & 0x3f | 0x80;
              lVar14 = uVar15 + 3;
              uVar9 = uVar10;
              if ((long)uVar13 < lVar14) {
                uVar9 = (ulong)(1 < uVar12);
                FUN_100506f84(uVar9,lVar14,1,uVar10);
                uVar12 = *(ulong *)(uVar9 + 0x18);
                uVar13 = uVar12 >> 1;
              }
              *(long *)(uVar9 + 0x10) = lVar14;
              *(byte *)(uVar9 + lVar17 + 0x20) = (byte)(uVar6 >> 6) & 0x3f | 0x80;
              lVar17 = uVar15 + 4;
              if ((long)uVar13 < lVar17) {
                uVar10 = (ulong)(1 < uVar12);
                FUN_100506f84(uVar10,lVar17,1,uVar9);
                uVar9 = uVar10;
              }
              goto LAB_10052b274;
            }
            uVar15 = *unaff_x20;
            uVar9 = uVar15;
            _swift_isUniquelyReferenced_nonNull_native();
            uVar10 = uVar15;
            if ((uVar9 & 1) == 0) {
              uVar10 = 0;
              FUN_100506f84(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
            }
            uVar9 = *(ulong *)(uVar10 + 0x10);
            uVar15 = *(ulong *)(uVar10 + 0x18);
            uVar13 = uVar15 >> 1;
            lVar17 = uVar9 + 1;
            uVar12 = uVar10;
            if (uVar13 <= uVar9) {
              uVar12 = (ulong)(1 < uVar15);
              FUN_100506f84(uVar12,lVar17,1,uVar10);
              uVar15 = *(ulong *)(uVar12 + 0x18);
              uVar13 = uVar15 >> 1;
            }
            *(long *)(uVar12 + 0x10) = lVar17;
            *(byte *)(uVar12 + uVar9 + 0x20) = (byte)(uVar6 >> 0xc) | 0xe0;
            lVar14 = uVar9 + 2;
            uVar10 = uVar12;
            if ((long)uVar13 < lVar14) {
              uVar10 = (ulong)(1 < uVar15);
              FUN_100506f84(uVar10,lVar14,1,uVar12);
              uVar15 = *(ulong *)(uVar10 + 0x18);
              uVar13 = uVar15 >> 1;
            }
            *(long *)(uVar10 + 0x10) = lVar14;
            *(byte *)(uVar10 + lVar17 + 0x20) = (byte)(uVar6 >> 6) & 0x3f | 0x80;
            lVar17 = uVar9 + 3;
            uVar9 = uVar10;
            if ((long)uVar13 < lVar17) {
              uVar9 = (ulong)(1 < uVar15);
              FUN_100506f84(uVar9,lVar17,1,uVar10);
            }
            *(long *)(uVar9 + 0x10) = lVar17;
            lVar14 = uVar9 + lVar14;
          }
          *(byte *)(lVar14 + 0x20) = (byte)pppuVar7 & 0x3f | 0x80;
          *unaff_x20 = uVar9;
        }
      }
      lVar16 = (long)pppuVar11 + lVar16;
    } while (lVar16 < (long)pppuVar3);
    _swift_bridgeObjectRelease(param_2);
    uVar15 = *unaff_x20;
  }
  uVar9 = uVar15;
  _swift_isUniquelyReferenced_nonNull_native();
  uVar10 = uVar15;
  if ((uVar9 & 1) == 0) {
    uVar10 = 0;
    FUN_100506f84(0,*(long *)(uVar15 + 0x10) + 1,1,uVar15);
  }
  uVar9 = *(ulong *)(uVar10 + 0x10);
  uVar15 = uVar10;
  if (*(ulong *)(uVar10 + 0x18) >> 1 <= uVar9) {
    uVar15 = (ulong)(1 < *(ulong *)(uVar10 + 0x18));
    FUN_100506f84(uVar15,uVar9 + 1,1,uVar10);
  }
  *(ulong *)(uVar15 + 0x10) = uVar9 + 1;
  *(undefined1 *)(uVar15 + uVar9 + 0x20) = 0x22;
  *unaff_x20 = uVar15;
  return;
}

