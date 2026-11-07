// rea decompile_all
// name: FUN_10006f0fc
// address: 0x10006f0fc
// body: available
// range: 0x10006f0fc-0x10006f4bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006f0fc(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  ulong *puVar3;
  undefined4 uVar4;
  code *pcVar5;
  bool bVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  ulong uVar13;
  long lVar14;
  long *plVar15;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  undefined8 uVar20;
  long lVar21;
  long lVar22;
  long unaff_x21;
  ulong *puVar23;
  ulong uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar10 = param_3[1];
  if (0 < lVar10) {
    lVar11 = 0;
    do {
      puVar9 = local_58;
      lVar25 = lVar11 + 1;
      if (lVar25 < lVar10) {
        lVar12 = *param_3;
        lVar17 = *(long *)(lVar12 + lVar25 * 0x10);
        lVar14 = lVar11 * 0x10;
        plVar15 = (long *)(lVar12 + lVar14) + 4;
        lVar19 = *(long *)(lVar12 + lVar14);
        lVar18 = lVar11 + 2;
        do {
          lVar21 = lVar18;
          lVar25 = lVar10;
          if (lVar10 == lVar21) break;
          lVar22 = *plVar15;
          plVar16 = plVar15 + -2;
          plVar15 = plVar15 + 2;
          lVar18 = lVar21 + 1;
          lVar25 = lVar21;
        } while (lVar17 < lVar19 != *plVar16 <= lVar22);
        if (lVar17 < lVar19) {
          if (lVar25 < lVar11) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10006f494);
            (*pcVar5)();
          }
          if (lVar11 < lVar25) {
            lVar17 = lVar25 * 0x10;
            lVar18 = lVar25;
            lVar10 = lVar11;
            do {
              lVar17 = lVar17 + -0x10;
              lVar18 = lVar18 + -1;
              if (lVar10 != lVar18) {
                if (lVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10006f4b4);
                  (*pcVar5)();
                }
                puVar1 = (undefined8 *)(lVar12 + lVar14);
                puVar2 = (undefined8 *)(lVar12 + lVar17);
                uVar20 = *puVar1;
                uVar4 = *(undefined4 *)(puVar1 + 1);
                if ((lVar14 != lVar17) || (puVar2 + 2 <= puVar1)) {
                  uVar26 = *puVar2;
                  puVar1[1] = puVar2[1];
                  *puVar1 = uVar26;
                }
                *(undefined8 *)(lVar12 + lVar17) = uVar20;
                *(undefined4 *)((undefined8 *)(lVar12 + lVar17) + 1) = uVar4;
              }
              lVar10 = lVar10 + 1;
              lVar14 = lVar14 + 0x10;
            } while (lVar10 < lVar18);
            lVar10 = param_3[1];
          }
        }
      }
      lVar14 = lVar25;
      if (lVar25 < lVar10) {
        if (SBORROW8(lVar25,lVar11)) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x10006f490);
          (*pcVar5)();
        }
        if (lVar25 - lVar11 < param_4) {
          if (SCARRY8(lVar11,param_4)) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10006f498);
            (*pcVar5)();
          }
          lVar18 = lVar11 + param_4;
          if (lVar10 <= lVar11 + param_4) {
            lVar18 = lVar10;
          }
          if (lVar18 < lVar11) {
                    /* WARNING: Does not return */
            pcVar5 = (code *)SoftwareBreakpoint(1,0x10006f49c);
            (*pcVar5)();
          }
          if (lVar25 != lVar18) {
            lVar17 = *param_3;
            plVar15 = (long *)(lVar17 + lVar25 * 0x10 + -0x10);
            lVar10 = lVar11 - lVar25;
            lVar12 = lVar10;
            plVar16 = plVar15;
LAB_10006f2ac:
            do {
              lVar14 = plVar15[2];
              if (lVar14 < *plVar15) {
                if (lVar17 == 0) {
                    /* WARNING: Does not return */
                  pcVar5 = (code *)SoftwareBreakpoint(1,0x10006f4a0);
                  (*pcVar5)();
                }
                lVar19 = plVar15[3];
                plVar15[3] = plVar15[1];
                plVar15[2] = *plVar15;
                *plVar15 = lVar14;
                *(int *)(plVar15 + 1) = (int)lVar19;
                plVar15 = plVar15 + -2;
                bVar6 = lVar10 != -1;
                lVar10 = lVar10 + 1;
                if (bVar6) goto LAB_10006f2ac;
              }
              lVar25 = lVar25 + 1;
              plVar15 = plVar16 + 2;
              lVar10 = lVar12 + -1;
              lVar14 = lVar18;
              lVar12 = lVar10;
              plVar16 = plVar15;
            } while (lVar25 != lVar18);
          }
        }
      }
      if (lVar14 < lVar11) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10006f480);
        (*pcVar5)();
      }
      puVar7 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar8 = puVar9;
      if (((ulong)puVar7 & 1) == 0) {
        puVar8 = (undefined *)0x0;
        FUN_100033870(0,*(long *)(puVar9 + 0x10) + 1,1,puVar9);
      }
      uVar24 = *(ulong *)(puVar8 + 0x10);
      puVar9 = puVar8;
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar24) {
        puVar9 = (undefined *)(ulong)(1 < *(ulong *)(puVar8 + 0x18));
        FUN_100033870(puVar9,uVar24 + 1,1,puVar8);
      }
      *(ulong *)(puVar9 + 0x10) = uVar24 + 1;
      *(long *)(puVar9 + uVar24 * 0x10 + 0x20) = lVar11;
      *(long *)(puVar9 + uVar24 * 0x10 + 0x28) = lVar14;
      local_58 = puVar9;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x10006f4b8);
        (*pcVar5)();
      }
      FUN_10006f4c0(&local_58,*param_1,param_3);
      puVar9 = local_58;
      if (unaff_x21 != 0) goto LAB_10006f450;
      lVar10 = param_3[1];
      lVar11 = lVar14;
    } while (lVar14 < lVar10);
  }
  puVar9 = local_58;
  lVar10 = *param_1;
  if (lVar10 == 0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10006f4c0);
    (*pcVar5)();
  }
  puVar7 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar7 & 1) == 0) {
    FUN_10006f924();
  }
  puVar23 = (ulong *)(puVar9 + 0x10);
  uVar24 = *puVar23;
  while (1 < uVar24) {
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10006f4bc);
      (*pcVar5)();
    }
    plVar15 = (long *)(puVar9 + uVar24 * 0x10);
    lVar25 = *plVar15;
    puVar3 = puVar23 + uVar24 * 2;
    uVar13 = puVar3[1];
    FUN_10006f72c(lVar11 + lVar25 * 0x10,lVar11 + *puVar3 * 0x10,lVar11 + uVar13 * 0x10,lVar10);
    if (unaff_x21 != 0) break;
    if ((long)uVar13 < lVar25) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10006f484);
      (*pcVar5)();
    }
    if (*puVar23 <= uVar24 - 2) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10006f488);
      (*pcVar5)();
    }
    *plVar15 = lVar25;
    plVar15[1] = uVar13;
    uVar13 = *puVar23;
    lVar11 = uVar13 - uVar24;
    if (uVar13 < uVar24) {
                    /* WARNING: Does not return */
      pcVar5 = (code *)SoftwareBreakpoint(1,0x10006f48c);
      (*pcVar5)();
    }
    uVar24 = uVar13 - 1;
    _memmove(puVar3,puVar3 + 2,lVar11 * 0x10);
    *puVar23 = uVar24;
  }
LAB_10006f450:
  _swift_bridgeObjectRelease(puVar9);
  return;
}

