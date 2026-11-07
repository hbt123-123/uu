// rea decompile_all
// name: FUN_1000aff74
// address: 0x1000aff74
// body: available
// range: 0x1000aff74-0x1000b041f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000aff74(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  ulong *puVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  ulong uVar14;
  byte bVar15;
  long *plVar16;
  long lVar17;
  long *plVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long unaff_x21;
  long lVar22;
  ulong *puVar23;
  ulong uVar24;
  undefined8 uVar25;
  long lVar26;
  undefined8 uVar27;
  long lVar28;
  undefined8 uVar29;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_1000f0740;
  lVar10 = param_3[1];
  if (0 < lVar10) {
    lVar11 = 0;
    do {
      puVar9 = local_58;
      lVar21 = lVar11 + 1;
      if (lVar21 < lVar10) {
        lVar12 = *param_3;
        plVar16 = (long *)(lVar12 + lVar21 * 0x18);
        if ((*(byte *)((long)plVar16 + 0x11) & 1) == 0) {
          plVar18 = (long *)(lVar12 + lVar11 * 0x18);
          if (((*(byte *)((long)plVar18 + 0x11) & 1) == 0) && (*plVar18 <= *plVar16)) {
            if (*plVar16 != *plVar18) goto LAB_1000affe4;
            bVar15 = plVar16[1] < plVar18[1] & (*(byte *)(plVar18 + 2) ^ 0xff);
            if ((*(byte *)(plVar16 + 2) & 1) != 0) {
              bVar15 = *(byte *)(plVar18 + 2) ^ 1;
            }
          }
          else {
            bVar15 = 1;
          }
        }
        else {
LAB_1000affe4:
          bVar15 = 0;
        }
        lVar21 = lVar11 + 2;
        lVar17 = lVar21;
        if (lVar21 < lVar10) {
          plVar16 = (long *)(lVar12 + lVar11 * 0x18 + 0x20);
          do {
            if ((*(byte *)((long)plVar16 + 0x21) & 1) == 0) {
              if (((*(byte *)((long)plVar16 + 9) & 1) != 0) || (plVar16[2] < plVar16[-1]))
              goto LAB_1000b0060;
              if (plVar16[2] != plVar16[-1]) goto LAB_1000b0028;
              if ((*(byte *)(plVar16 + 4) & 1) == 0) {
                if (((*(byte *)(plVar16 + 1) & 1) != 0) || (*plVar16 <= plVar16[3]))
                goto LAB_1000b0028;
              }
              else if ((*(byte *)(plVar16 + 1) & 1) != 0) goto LAB_1000b0028;
LAB_1000b0060:
              if ((bVar15 & 1) == 0) goto LAB_1000b0124;
            }
            else {
LAB_1000b0028:
              if ((bVar15 & 1) != 0) goto LAB_1000b009c;
            }
            lVar21 = lVar21 + 1;
            plVar16 = plVar16 + 3;
            lVar17 = lVar10;
          } while (lVar10 != lVar21);
        }
        lVar21 = lVar17;
        if ((bVar15 & 1) != 0) {
LAB_1000b009c:
          if (lVar21 < lVar11) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1000b03f4);
            (*pcVar5)();
          }
          if (lVar11 < lVar21) {
            lVar13 = lVar21 * 0x18;
            lVar17 = lVar11 * 0x18;
            lVar19 = lVar21;
            lVar10 = lVar11;
            do {
              lVar19 = lVar19 + -1;
              if (lVar10 != lVar19) {
                if (lVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x1000b0414);
                  (*pcVar5)();
                }
                puVar1 = (undefined8 *)(lVar12 + lVar17);
                lVar22 = lVar12 + lVar13;
                uVar3 = *(undefined1 *)(puVar1 + 2);
                uVar4 = *(undefined1 *)((long)puVar1 + 0x11);
                uVar27 = puVar1[1];
                uVar25 = *puVar1;
                uVar20 = *(undefined8 *)(lVar22 + -8);
                uVar29 = *(undefined8 *)(lVar22 + -0x18);
                puVar1[1] = *(undefined8 *)(lVar22 + -0x10);
                *puVar1 = uVar29;
                puVar1[2] = uVar20;
                *(undefined8 *)(lVar22 + -0x10) = uVar27;
                *(undefined8 *)(lVar22 + -0x18) = uVar25;
                *(undefined1 *)(lVar22 + -8) = uVar3;
                *(undefined1 *)(lVar22 + -7) = uVar4;
              }
              lVar10 = lVar10 + 1;
              lVar13 = lVar13 + -0x18;
              lVar17 = lVar17 + 0x18;
            } while (lVar10 < lVar19);
            lVar10 = param_3[1];
          }
        }
      }
LAB_1000b0124:
      lVar12 = lVar21;
      if (lVar21 < lVar10) {
        if (SBORROW8(lVar21,lVar11)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000b03f0);
          (*pcVar5)();
        }
        if (lVar21 - lVar11 < param_4) {
          if (SCARRY8(lVar11,param_4)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1000b03f8);
            (*pcVar5)();
          }
          lVar17 = lVar11 + param_4;
          if (lVar10 <= lVar11 + param_4) {
            lVar17 = lVar10;
          }
          if (lVar17 < lVar11) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x1000b03fc);
            (*pcVar5)();
          }
          if (lVar21 != lVar17) {
            lVar13 = *param_3;
            plVar16 = (long *)(lVar13 + lVar21 * 0x18 + -0x18);
            lVar10 = lVar11 - lVar21;
            lVar19 = lVar10;
            plVar18 = plVar16;
LAB_1000b018c:
            do {
              if ((*(byte *)((long)plVar16 + 0x29) & 1) == 0) {
                lVar12 = plVar16[3];
                if (((*(byte *)((long)plVar16 + 0x11) & 1) != 0) || (lVar12 < *plVar16))
                goto LAB_1000b01dc;
                if (lVar12 == *plVar16) {
                  if ((*(byte *)(plVar16 + 5) & 1) == 0) {
                    if (((*(byte *)(plVar16 + 2) & 1) == 0) && (plVar16[4] < plVar16[1]))
                    goto LAB_1000b01dc;
                  }
                  else if ((*(byte *)(plVar16 + 2) & 1) == 0) {
LAB_1000b01dc:
                    if (lVar13 == 0) {
                    /* WARNING: Does not return */
                      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000b0400);
                      (*pcVar5)();
                    }
                    lVar28 = plVar16[1];
                    lVar26 = *plVar16;
                    lVar22 = plVar16[2];
                    *plVar16 = lVar12;
                    plVar16[1] = plVar16[4];
                    *(byte *)(plVar16 + 2) = *(byte *)(plVar16 + 5);
                    *(undefined1 *)((long)plVar16 + 0x11) = 0;
                    plVar16[4] = lVar28;
                    plVar16[3] = lVar26;
                    plVar16[5] = lVar22;
                    bVar6 = lVar10 != -1;
                    lVar10 = lVar10 + 1;
                    plVar16 = plVar16 + -3;
                    if (bVar6) goto LAB_1000b018c;
                  }
                }
              }
              lVar21 = lVar21 + 1;
              plVar16 = plVar18 + 3;
              lVar10 = lVar19 + -1;
              lVar12 = lVar17;
              lVar19 = lVar10;
              plVar18 = plVar16;
            } while (lVar21 != lVar17);
          }
        }
      }
      if (lVar12 < lVar11) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1000b03e0);
        (*pcVar5)();
      }
      puVar7 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_100058444(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar24 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar24) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_100058444(puVar9,uVar24 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar24 + 1;
      *(long *)(puVar9 + uVar24 * 0x10 + 0x20) = lVar11;
      *(long *)(puVar9 + uVar24 * 0x10 + 0x28) = lVar12;
      local_58 = puVar9;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1000b0418);
        (*pcVar5)();
      }
      FUN_1000b04e4(&local_58,*param_1,param_3);
      puVar9 = local_58;
      if (unaff_x21 != 0) goto LAB_1000b03b0;
      lVar10 = param_3[1];
      lVar11 = lVar12;
    } while (lVar12 < lVar10);
  }
  puVar9 = local_58;
  lVar10 = *param_1;
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x1000b0420);
    (*pcVar5)();
  }
  puVar7 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar7 & 1) == 0) {
    FUN_100058430();
  }
  puVar23 = (ulong *)(puVar9 + 0x10);
  uVar24 = *puVar23;
  while (1 < uVar24) {
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000b041c);
      (*pcVar5)();
    }
    plVar16 = (long *)(puVar9 + uVar24 * 0x10);
    lVar21 = *plVar16;
    puVar2 = puVar23 + uVar24 * 2;
    uVar14 = puVar2[1];
    FUN_1000b0758(lVar11 + lVar21 * 0x18,lVar11 + *puVar2 * 0x18,lVar11 + uVar14 * 0x18,lVar10);
    if (unaff_x21 != 0) break;
    if ((long)uVar14 < lVar21) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000b03e4);
      (*pcVar5)();
    }
    if (*puVar23 <= uVar24 - 2) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000b03e8);
      (*pcVar5)();
    }
    *plVar16 = lVar21;
    plVar16[1] = uVar14;
    uVar14 = *puVar23;
    lVar11 = uVar14 - uVar24;
    if (uVar14 < uVar24) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x1000b03ec);
      (*pcVar5)();
    }
    uVar24 = uVar14 - 1;
    _memmove(puVar2,puVar2 + 2,lVar11 * 0x10);
    *puVar23 = uVar24;
  }
LAB_1000b03b0:
  _swift_bridgeObjectRelease(puVar9);
  return;
}

