// rea decompile_all
// name: FUN_100654648
// address: 0x100654648
// body: available
// range: 0x100654648-0x100654b0b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_100654648(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             ulong param_5,ulong param_6,ulong param_7,ulong param_8)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined8 uVar14;
  ulong uVar15;
  uint uVar16;
  ulong uVar17;
  byte bVar18;
  ulong uVar19;
  undefined1 uVar20;
  
  lVar3 = 1;
  FUN_10064b1b4(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,param_1,param_2,param_3,param_4);
  if (lVar3 != -1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100654ae4);
    (*pcVar1)();
  }
  lVar3 = 0;
  FUN_10064b1b4(0,0,0,PTR___swiftEmptyArrayStorage_100995ea0,param_5,param_6,param_7,param_8);
  if (lVar3 != -1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100654ae8);
    (*pcVar1)();
  }
  _swift_bridgeObjectRetain(param_8);
  uVar4 = 1;
  FUN_10065eb84(1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,0);
  if ((uVar4 & 1) != 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100654aec);
    (*pcVar1)();
  }
  uVar17 = param_7 & 0xff;
  uVar4 = param_5;
  FUN_10065f87c(param_5,param_6,uVar17,param_8);
  uVar16 = (uint)(byte)param_7;
  if ((long)uVar4 < 0) {
    if (SBORROW8(0,uVar4)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100654b0c);
      (*pcVar1)();
    }
    uVar19 = (ulong)uVar16;
    uVar5 = param_5;
    uVar7 = param_6;
    uVar17 = param_8;
    FUN_10064fbe0();
  }
  else {
    uVar5 = uVar4;
    uVar7 = param_5;
    uVar19 = param_6;
    FUN_10065933c();
  }
  uVar20 = (undefined1)param_3;
  uVar9 = uVar17;
  FUN_10064e848();
  _swift_bridgeObjectRelease(uVar17);
  uVar14 = 1;
  uVar17 = uVar5;
  FUN_10064b1b4(uVar5,uVar7,uVar19,uVar9,1,0,0,PTR___swiftEmptyArrayStorage_100995ea0,param_1,
                param_2,uVar20);
  if (uVar17 != 0) {
    uVar17 = uVar5;
    FUN_10064b1b4(uVar5,uVar7,uVar19,uVar9,param_5,param_6,uVar16,param_8,param_1,param_2,uVar20);
    if (uVar17 == 0) {
      uVar14 = 1;
    }
    else if ((long)uVar4 < 1) {
      uVar14 = 0;
    }
    else {
      uVar17 = param_5;
      FUN_10065fef8(param_5,param_6,param_7,param_8);
      uVar6 = param_5;
      uVar8 = param_6;
      uVar10 = param_8;
      FUN_10064fbe0();
      if (uVar4 == 1) {
        uVar14 = 0;
      }
      else {
        uVar15 = 1;
        uVar11 = uVar9;
        do {
          bVar18 = (byte)uVar19;
          if (uVar15 == uVar4) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)SoftwareBreakpoint(1,0x100654ae0);
            (*pcVar1)();
          }
          _swift_bridgeObjectRetain(uVar11);
          uVar9 = uVar11;
          FUN_1006527dc();
          _swift_bridgeObjectRelease_n(uVar11,2);
          FUN_10064d170(uVar6,uVar8,(int)param_7,uVar10,uVar17);
          uVar19 = (ulong)bVar18;
          if (bVar18 == 0) {
            if ((uVar7 == 0) && (uVar5 != 0)) {
              uVar11 = 1;
LAB_10065499c:
LAB_1006549a8:
              do {
                do {
                  uVar12 = uVar11 - 1;
                  if (bVar18 != 0) {
                    if (bVar18 == 1) {
                      if (SBORROW8(uVar7,uVar5)) {
                    /* WARNING: Does not return */
                        pcVar1 = (code *)SoftwareBreakpoint(1,0x100654af0);
                        (*pcVar1)();
                      }
                      if ((long)uVar11 <= (long)(uVar7 - uVar5)) {
                        uVar13 = uVar5 + uVar12;
                        if (SCARRY8(uVar5,uVar12)) {
                    /* WARNING: Does not return */
                          pcVar1 = (code *)SoftwareBreakpoint(1,0x100654af8);
                          (*pcVar1)();
                        }
                        if ((long)uVar13 < 0) {
                    /* WARNING: Does not return */
                          pcVar1 = (code *)SoftwareBreakpoint(1,0x100654afc);
                          (*pcVar1)();
                        }
                        if (*(ulong *)(uVar9 + 0x10) <= uVar13) {
                    /* WARNING: Does not return */
                          pcVar1 = (code *)SoftwareBreakpoint(1,0x100654b00);
                          (*pcVar1)();
                        }
LAB_100654a14:
                        uVar13 = *(ulong *)(uVar9 + 0x20 + uVar13 * 8);
                        if (uVar11 == 2) break;
                        if (uVar11 == 1) goto LAB_100654a40;
                        if (uVar13 != 0) goto LAB_100654a5c;
                        uVar11 = uVar12;
                        if (uVar12 == 0) goto LAB_100654a8c;
                        goto LAB_1006549a8;
                      }
                    }
                    else {
                      uVar13 = uVar12;
                      if (uVar11 <= *(ulong *)(uVar9 + 0x10)) goto LAB_100654a14;
                    }
                    uVar11 = uVar12;
                    if (uVar12 == 0) goto LAB_100654a5c;
                    goto LAB_1006549a8;
                  }
                  uVar13 = uVar5;
                  if (uVar11 == 1) {
LAB_100654a40:
                    if (uVar13 == 1) goto LAB_100654a8c;
                    goto LAB_100654a5c;
                  }
                  bVar2 = uVar11 != 2;
                  uVar11 = uVar12;
                  uVar13 = uVar7;
                } while (bVar2);
                uVar11 = uVar12;
              } while (uVar13 == 0);
            }
          }
          else {
            if (bVar18 == 1) {
              if (SBORROW8(uVar7,uVar5)) {
                    /* WARNING: Does not return */
                pcVar1 = (code *)SoftwareBreakpoint(1,0x100654af4);
                (*pcVar1)();
              }
              if (uVar7 - uVar5 == 1) {
LAB_10065498c:
                uVar11 = uVar7 - uVar5;
                if (SBORROW8(uVar7,uVar5)) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x100654b08);
                  (*pcVar1)();
                }
                if ((long)uVar11 < 0) {
                    /* WARNING: Does not return */
                  pcVar1 = (code *)SoftwareBreakpoint(1,0x100654adc);
                  (*pcVar1)();
                }
LAB_100654998:
                if (uVar11 != 0) goto LAB_10065499c;
                break;
              }
            }
            else {
              if (*(long *)(uVar9 + 0x10) == 1) {
                uVar11 = 1;
                if (bVar18 != 2) goto LAB_10065498c;
                goto LAB_100654998;
              }
              if (bVar18 != 1) goto LAB_100654a5c;
            }
            if (SBORROW8(uVar7,uVar5)) {
                    /* WARNING: Does not return */
              pcVar1 = (code *)SoftwareBreakpoint(1,0x100654b04);
              (*pcVar1)();
            }
          }
LAB_100654a5c:
          uVar11 = uVar5;
          FUN_10064b1b4(uVar5,uVar7,uVar19,uVar9,param_5,param_6,uVar16,param_8);
          if (uVar11 == 0) {
            uVar14 = 1;
            goto LAB_100654a9c;
          }
          uVar15 = uVar15 + 1;
          uVar11 = uVar9;
        } while (uVar15 != uVar4);
LAB_100654a8c:
        uVar14 = 0;
      }
LAB_100654a9c:
      _swift_bridgeObjectRelease(uVar9);
      uVar9 = uVar10;
    }
  }
  _swift_bridgeObjectRelease(uVar9);
  _swift_bridgeObjectRelease(param_8);
  return uVar14;
}

