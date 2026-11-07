// rea decompile_all
// name: FUN_10003d948
// address: 0x10003d948
// body: available
// range: 0x10003d948-0x10003de63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003d948(double param_1,long *param_2,undefined8 param_3,long *param_4,long param_5)

{
  long *plVar1;
  ulong *puVar2;
  ulong uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  code *pcVar9;
  bool bVar10;
  undefined *puVar11;
  undefined *puVar12;
  undefined *puVar13;
  undefined8 *puVar14;
  long lVar15;
  ulong uVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  int *piVar21;
  int *piVar22;
  long lVar23;
  int *piVar24;
  long unaff_x21;
  long lVar25;
  ulong *puVar26;
  long lVar27;
  ulong uVar28;
  long lVar29;
  undefined8 uVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  undefined8 uVar33;
  undefined8 uVar34;
  undefined8 uVar35;
  undefined8 uVar36;
  undefined8 uVar37;
  undefined *local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined1 uStack_b8;
  undefined7 local_b7;
  undefined1 uStack_b0;
  undefined8 uStack_af;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined1 uStack_88;
  undefined7 local_87;
  undefined1 uStack_80;
  undefined8 uStack_7f;
  undefined *local_68;
  
  lVar29 = param_4[1];
  local_68 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (0 < lVar29) {
    lVar15 = 0;
    do {
      lVar25 = lVar15 + 1;
      if (lVar25 < lVar29) {
        lVar27 = *param_4;
        puVar14 = (undefined8 *)(lVar27 + lVar25 * 0x30);
        uStack_98 = puVar14[1];
        local_a0 = *puVar14;
        uStack_90 = puVar14[2];
        uStack_88 = (undefined1)puVar14[3];
        uStack_7f = *(undefined8 *)((long)puVar14 + 0x21);
        local_87 = (undefined7)*(undefined8 *)((long)puVar14 + 0x19);
        uStack_80 = (undefined1)((ulong)*(undefined8 *)((long)puVar14 + 0x19) >> 0x38);
        puVar14 = (undefined8 *)(lVar27 + lVar15 * 0x30);
        uStack_c8 = puVar14[1];
        local_d0 = *puVar14;
        uStack_c0 = puVar14[2];
        uStack_b8 = (undefined1)puVar14[3];
        uStack_af = *(undefined8 *)((long)puVar14 + 0x21);
        local_b7 = (undefined7)*(undefined8 *)((long)puVar14 + 0x19);
        uStack_b0 = (undefined1)((ulong)*(undefined8 *)((long)puVar14 + 0x19) >> 0x38);
        puVar14 = &local_a0;
        FUN_100045770(param_1,puVar14,&local_d0);
        local_d8 = local_68;
        if (unaff_x21 != 0) goto LAB_10003ddf4;
        piVar21 = (int *)(lVar27 + lVar15 * 0x30 + 0x3c);
        lVar20 = lVar15 + 2;
        do {
          lVar23 = lVar20;
          lVar25 = lVar29;
          if (lVar29 == lVar23) break;
          iVar4 = piVar21[0xc];
          iVar6 = piVar21[0xd];
          iVar5 = *piVar21;
          iVar7 = piVar21[1];
          bVar10 = piVar21[9] < piVar21[-3];
          if (ABS(*(double *)(piVar21 + 0xf) - param_1) != ABS(*(double *)(piVar21 + 3) - param_1))
          {
            bVar10 = ABS(*(double *)(piVar21 + 0xf) - param_1) <
                     ABS(*(double *)(piVar21 + 3) - param_1);
          }
          if (iVar6 != iVar7) {
            bVar10 = iVar7 < iVar6;
          }
          if (iVar4 != iVar5) {
            bVar10 = iVar5 < iVar4;
          }
          bVar8 = (long)iVar7 * (long)iVar5 < (long)iVar6 * (long)iVar4;
          if ((long)iVar6 * (long)iVar4 - (long)iVar7 * (long)iVar5 == 0) {
            bVar8 = bVar10;
          }
          piVar21 = piVar21 + 0xc;
          lVar20 = lVar23 + 1;
          lVar25 = lVar23;
        } while (((uint)puVar14 & 1) == (uint)bVar8);
        if (((ulong)puVar14 & 1) != 0) {
          if (lVar25 < lVar15) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10003de40);
            (*pcVar9)();
          }
          if (lVar15 < lVar25) {
            puVar14 = (undefined8 *)(lVar27 + lVar15 * 0x30);
            lVar20 = lVar25;
            lVar29 = lVar15;
            puVar18 = (undefined8 *)(lVar27 + lVar25 * 0x30);
            do {
              puVar17 = puVar18 + -6;
              lVar20 = lVar20 + -1;
              if (lVar29 != lVar20) {
                if (lVar27 == 0) {
                    /* WARNING: Does not return */
                  pcVar9 = (code *)SoftwareBreakpoint(1,0x10003de58);
                  (*pcVar9)();
                }
                uVar34 = puVar14[1];
                uVar33 = *puVar14;
                uStack_90 = puVar14[2];
                uStack_88 = (undefined1)puVar14[3];
                uStack_7f = *(undefined8 *)((long)puVar14 + 0x21);
                uVar30 = *(undefined8 *)((long)puVar14 + 0x19);
                local_87 = (undefined7)uVar30;
                uStack_80 = (undefined1)((ulong)uVar30 >> 0x38);
                uVar36 = puVar18[-3];
                uVar35 = puVar18[-4];
                uVar32 = puVar18[-1];
                uVar31 = puVar18[-2];
                uVar37 = *puVar17;
                puVar14[1] = puVar18[-5];
                *puVar14 = uVar37;
                puVar14[3] = uVar36;
                puVar14[2] = uVar35;
                puVar14[5] = uVar32;
                puVar14[4] = uVar31;
                *(undefined8 *)((long)puVar18 + -0xf) = uStack_7f;
                *(undefined8 *)((long)puVar18 + -0x17) = uVar30;
                puVar18[-5] = uVar34;
                *puVar17 = uVar33;
                puVar18[-3] = CONCAT71(local_87,uStack_88);
                puVar18[-4] = uStack_90;
              }
              lVar29 = lVar29 + 1;
              puVar14 = puVar14 + 6;
              puVar18 = puVar17;
            } while (lVar29 < lVar20);
          }
        }
      }
      puVar13 = local_68;
      lVar29 = param_4[1];
      lVar27 = lVar25;
      if (lVar25 < lVar29) {
        if (SBORROW8(lVar25,lVar15)) {
                    /* WARNING: Does not return */
          pcVar9 = (code *)SoftwareBreakpoint(1,0x10003de34);
          (*pcVar9)();
        }
        if (lVar25 - lVar15 < param_5) {
          if (SCARRY8(lVar15,param_5)) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10003de38);
            (*pcVar9)();
          }
          lVar20 = lVar15 + param_5;
          if (lVar29 <= lVar15 + param_5) {
            lVar20 = lVar29;
          }
          if (lVar20 < lVar15) {
                    /* WARNING: Does not return */
            pcVar9 = (code *)SoftwareBreakpoint(1,0x10003de3c);
            (*pcVar9)();
          }
          if (lVar25 != lVar20) {
            lVar19 = *param_4;
            piVar21 = (int *)(lVar19 + lVar25 * 0x30 + -0x30);
            lVar29 = lVar15 - lVar25;
            lVar23 = lVar29;
            piVar22 = piVar21;
LAB_10003db94:
            do {
              piVar24 = piVar21 + 0xc;
              iVar4 = piVar21[0xf];
              iVar6 = piVar21[0x10];
              iVar5 = piVar21[3];
              iVar7 = piVar21[4];
              if ((long)iVar6 * (long)iVar4 - (long)iVar7 * (long)iVar5 == 0) {
                if (iVar4 == iVar5) {
                  if (iVar6 == iVar7) {
                    if (ABS(*(double *)(piVar21 + 0x12) - param_1) ==
                        ABS(*(double *)(piVar21 + 6) - param_1)) {
                      if (*piVar24 < *piVar21) {
LAB_10003dc14:
                        if (lVar19 == 0) {
                    /* WARNING: Does not return */
                          pcVar9 = (code *)SoftwareBreakpoint(1,0x10003de44);
                          (*pcVar9)();
                        }
                        uStack_90 = *(undefined8 *)(piVar21 + 0x10);
                        uStack_88 = (undefined1)*(undefined8 *)(piVar21 + 0x12);
                        uStack_7f = *(undefined8 *)((long)piVar21 + 0x51);
                        uVar30 = *(undefined8 *)((long)piVar21 + 0x49);
                        local_87 = (undefined7)uVar30;
                        uStack_80 = (undefined1)((ulong)uVar30 >> 0x38);
                        uVar32 = *(undefined8 *)(piVar21 + 2);
                        uVar31 = *(undefined8 *)piVar21;
                        uVar34 = *(undefined8 *)(piVar21 + 6);
                        uVar33 = *(undefined8 *)(piVar21 + 4);
                        *(undefined8 *)((long)piVar21 + 0x21) = uStack_7f;
                        *(undefined8 *)((long)piVar21 + 0x19) = uVar30;
                        *(undefined8 *)(piVar21 + 2) = *(undefined8 *)(piVar21 + 0xe);
                        *(undefined8 *)piVar21 = *(undefined8 *)piVar24;
                        *(ulong *)(piVar21 + 6) = CONCAT71(local_87,uStack_88);
                        *(undefined8 *)(piVar21 + 4) = uStack_90;
                        *(undefined8 *)(piVar21 + 0xe) = uVar32;
                        *(undefined8 *)piVar24 = uVar31;
                        *(undefined8 *)(piVar21 + 0x12) = uVar34;
                        *(undefined8 *)(piVar21 + 0x10) = uVar33;
                        *(undefined8 *)(piVar21 + 0x16) = *(undefined8 *)(piVar21 + 10);
                        *(undefined8 *)(piVar21 + 0x14) = *(undefined8 *)(piVar21 + 8);
                        bVar10 = lVar29 != -1;
                        lVar29 = lVar29 + 1;
                        piVar21 = piVar21 + -0xc;
                        if (bVar10) goto LAB_10003db94;
                      }
                    }
                    else if (ABS(*(double *)(piVar21 + 0x12) - param_1) <
                             ABS(*(double *)(piVar21 + 6) - param_1)) goto LAB_10003dc14;
                  }
                  else if (iVar7 < iVar6) goto LAB_10003dc14;
                }
                else if (iVar5 < iVar4) goto LAB_10003dc14;
              }
              else if ((long)iVar7 * (long)iVar5 < (long)iVar6 * (long)iVar4) goto LAB_10003dc14;
              lVar25 = lVar25 + 1;
              piVar21 = piVar22 + 0xc;
              lVar29 = lVar23 + -1;
              lVar27 = lVar20;
              lVar23 = lVar29;
              piVar22 = piVar21;
            } while (lVar25 != lVar20);
          }
        }
      }
      if (lVar27 < lVar15) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10003de24);
        (*pcVar9)();
      }
      puVar11 = local_68;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar12 = puVar13;
      if (((ulong)puVar11 & 1) == 0) {
        puVar12 = (undefined *)0x0;
        FUN_10003491c(0,*(long *)(puVar13 + 0x10) + 1,1,puVar13,&DAT_100a75930,&DAT_100809a00);
      }
      uVar28 = *(ulong *)(puVar12 + 0x10);
      puVar13 = puVar12;
      if (*(ulong *)(puVar12 + 0x18) >> 1 <= uVar28) {
        puVar13 = (undefined *)(ulong)(1 < *(ulong *)(puVar12 + 0x18));
        FUN_10003491c(puVar13,uVar28 + 1,1,puVar12,&DAT_100a75930,&DAT_100809a00);
      }
      *(ulong *)(puVar13 + 0x10) = uVar28 + 1;
      *(long *)(puVar13 + uVar28 * 0x10 + 0x20) = lVar15;
      *(long *)(puVar13 + uVar28 * 0x10 + 0x28) = lVar27;
      local_68 = puVar13;
      if (*param_2 == 0) {
                    /* WARNING: Does not return */
        pcVar9 = (code *)SoftwareBreakpoint(1,0x10003de5c);
        (*pcVar9)();
      }
      FUN_10003d6a8(param_1,&local_68,*param_2,param_4);
      local_d8 = local_68;
      if (unaff_x21 != 0) goto LAB_10003ddf4;
      lVar29 = param_4[1];
      lVar15 = lVar27;
    } while (lVar27 < lVar29);
  }
  local_d8 = local_68;
  lVar29 = *param_2;
  if (lVar29 == 0) {
                    /* WARNING: Does not return */
    pcVar9 = (code *)SoftwareBreakpoint(1,0x10003de64);
    (*pcVar9)();
  }
  puVar13 = local_68;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar13 & 1) == 0) {
    FUN_10006f924();
  }
  puVar26 = (ulong *)(local_d8 + 0x10);
  uVar28 = *puVar26;
  do {
    if (uVar28 < 2) {
LAB_10003ddf4:
      _swift_bridgeObjectRelease(local_d8);
      return;
    }
    lVar15 = *param_4;
    if (lVar15 == 0) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10003de60);
      (*pcVar9)();
    }
    plVar1 = (long *)(local_d8 + uVar28 * 0x10);
    lVar25 = *plVar1;
    puVar2 = puVar26 + uVar28 * 2;
    uVar3 = puVar2[1];
    FUN_10003d390(param_1,lVar15 + lVar25 * 0x30,lVar15 + *puVar2 * 0x30,lVar15 + uVar3 * 0x30,
                  lVar29);
    if (unaff_x21 != 0) {
      local_68 = local_d8;
      goto LAB_10003ddf4;
    }
    if ((long)uVar3 < lVar25) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10003de28);
      (*pcVar9)();
    }
    uVar16 = *puVar26;
    if (uVar16 <= uVar28 - 2) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10003de2c);
      (*pcVar9)();
    }
    *plVar1 = lVar25;
    plVar1[1] = uVar3;
    lVar15 = uVar16 - uVar28;
    if (uVar16 < uVar28) {
                    /* WARNING: Does not return */
      pcVar9 = (code *)SoftwareBreakpoint(1,0x10003de30);
      (*pcVar9)();
    }
    uVar28 = uVar16 - 1;
    _memmove(puVar2,puVar2 + 2,lVar15 * 0x10);
    *puVar26 = uVar28;
  } while( true );
}

