// rea decompile_all
// name: FUN_1007b4be0
// address: 0x1007b4be0
// body: available
// range: 0x1007b4be0-0x1007b4f5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007b4be0(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  ulong *puVar1;
  ulong *puVar2;
  long *plVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  code *pcVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined *puVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  ulong uVar14;
  long lVar15;
  long unaff_x21;
  long *plVar16;
  long lVar17;
  long lVar18;
  long lVar19;
  long lVar20;
  undefined8 uVar21;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar20 = param_3[1];
  if (0 < lVar20) {
    lVar19 = 0;
    do {
      lVar13 = lVar19 + 1;
      lVar18 = lVar13;
      if (lVar13 < lVar20) {
        lVar17 = *param_3;
        puVar1 = (ulong *)(lVar17 + lVar13 * 0x10);
        uVar12 = *puVar1;
        puVar2 = (ulong *)(lVar17 + lVar19 * 0x10);
        if (uVar12 == *puVar2 && puVar1[1] == puVar2[1]) {
          lVar18 = lVar19 + 2;
          if (lVar18 < lVar20) {
            uVar12 = 0;
            goto LAB_1007b4c84;
          }
        }
        else {
          __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    ();
          lVar11 = lVar19 + 2;
          if (lVar11 < lVar20) {
LAB_1007b4c84:
            plVar16 = (long *)(lVar17 + (lVar19 + 2) * 0x10 + 8);
            lVar11 = lVar19 + 2;
            do {
              lVar18 = lVar11;
              lVar15 = plVar16[-1];
              plVar3 = (long *)(lVar17 + lVar13 * 0x10);
              if (lVar15 == *plVar3 && *plVar16 == plVar3[1]) {
                if ((uVar12 & 1) != 0) goto LAB_1007b4d04;
              }
              else {
                __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          ();
                lVar11 = lVar18;
                if ((((uint)uVar12 ^ (uint)lVar15) & 1) != 0) break;
              }
              lVar11 = lVar18 + 1;
              plVar16 = plVar16 + 2;
              lVar13 = lVar18;
            } while (lVar11 < lVar20);
          }
          lVar18 = lVar11;
          if ((uVar12 & 1) != 0) {
LAB_1007b4d04:
            if (lVar18 < lVar19) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b4f50);
              (*pcVar7)();
            }
            if (lVar19 < lVar18) {
              lVar17 = 0;
              lVar11 = lVar18 << 4;
              lVar13 = lVar19 << 4;
              lVar20 = lVar19;
              do {
                if (lVar20 != lVar18 + lVar17 + -1) {
                  lVar15 = *param_3;
                  if (lVar15 == 0) {
                    /* WARNING: Does not return */
                    pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b4f58);
                    (*pcVar7)();
                  }
                  puVar4 = (undefined8 *)(lVar15 + lVar13);
                  lVar15 = lVar15 + lVar11;
                  uVar5 = *puVar4;
                  uVar6 = puVar4[1];
                  uVar21 = *(undefined8 *)(lVar15 + -0x10);
                  puVar4[1] = *(undefined8 *)(lVar15 + -8);
                  *puVar4 = uVar21;
                  *(undefined8 *)(lVar15 + -0x10) = uVar5;
                  *(undefined8 *)(lVar15 + -8) = uVar6;
                }
                lVar20 = lVar20 + 1;
                lVar11 = lVar11 + -0x10;
                lVar17 = lVar17 + -1;
                lVar13 = lVar13 + 0x10;
              } while (lVar20 < lVar18 + lVar17);
            }
          }
        }
      }
      lVar20 = param_3[1];
      lVar13 = lVar18;
      if (lVar18 < lVar20) {
        if (SBORROW8(lVar18,lVar19)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b4f44);
          (*pcVar7)();
        }
        if (lVar18 - lVar19 < param_4) {
          if (SCARRY8(lVar19,param_4)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b4f48);
            (*pcVar7)();
          }
          lVar17 = lVar19 + param_4;
          if (lVar20 <= lVar19 + param_4) {
            lVar17 = lVar20;
          }
          if (lVar17 < lVar19) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b4f4c);
            (*pcVar7)();
          }
          if (lVar18 != lVar17) {
            lVar20 = lVar18 << 4;
            lVar11 = lVar19;
            lVar15 = lVar20;
LAB_1007b4ddc:
            do {
              lVar13 = *param_3;
              puVar1 = (ulong *)(lVar13 + lVar20);
              uVar12 = *puVar1;
              if ((uVar12 != puVar1[-2] || puVar1[1] != puVar1[-1]) &&
                 (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                            (), (uVar12 & 1) != 0)) {
                if (lVar13 == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b4f54);
                  (*pcVar7)();
                }
                puVar2 = (ulong *)(lVar13 + lVar20);
                uVar12 = *puVar2;
                uVar14 = puVar1[1];
                puVar2[1] = puVar2[-1];
                *puVar2 = puVar2[-2];
                puVar1[-2] = uVar12;
                puVar1[-1] = uVar14;
                lVar20 = lVar20 + -0x10;
                lVar11 = lVar11 + 1;
                if (lVar18 != lVar11) goto LAB_1007b4ddc;
              }
              lVar18 = lVar18 + 1;
              lVar20 = lVar15 + 0x10;
              lVar11 = lVar19;
              lVar13 = lVar17;
              lVar15 = lVar20;
            } while (lVar18 != lVar17);
          }
        }
      }
      puVar10 = local_58;
      if (lVar13 < lVar19) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b4f40);
        (*pcVar7)();
      }
      puVar8 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar9 = puVar10;
      if (((ulong)puVar8 & 1) == 0) {
        puVar9 = (undefined *)0x0;
        FUN_100033870(0,*(long *)(puVar10 + 0x10) + 1,1,puVar10);
      }
      uVar12 = *(ulong *)(puVar9 + 0x10);
      puVar10 = puVar9;
      if (*(ulong *)(puVar9 + 0x18) >> 1 <= uVar12) {
        puVar10 = (undefined *)(ulong)(1 < *(ulong *)(puVar9 + 0x18));
        FUN_100033870(puVar10,uVar12 + 1,1,puVar9);
      }
      *(ulong *)(puVar10 + 0x10) = uVar12 + 1;
      *(long *)(puVar10 + uVar12 * 0x10 + 0x20) = lVar19;
      *(long *)(puVar10 + uVar12 * 0x10 + 0x28) = lVar13;
      local_58 = puVar10;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b4f5c);
        (*pcVar7)();
      }
      FUN_1007b5034(&local_58,*param_1,param_3);
      if (unaff_x21 != 0) goto LAB_1007b4f10;
      lVar20 = param_3[1];
      lVar19 = lVar13;
    } while (lVar13 < lVar20);
  }
  if (*param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x1007b4f60);
    (*pcVar7)();
  }
  FUN_1007b52c4(&local_58,*param_1,param_3);
LAB_1007b4f10:
  _swift_bridgeObjectRelease(local_58);
  return;
}

