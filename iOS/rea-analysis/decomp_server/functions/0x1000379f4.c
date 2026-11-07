// rea decompile_all
// name: FUN_1000379f4
// address: 0x1000379f4
// body: available
// range: 0x1000379f4-0x100037db7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000379f4(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  long *plVar1;
  ulong *puVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  code *pcVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  ulong uVar15;
  undefined8 *puVar16;
  long lVar17;
  long lVar18;
  uint *puVar19;
  undefined8 *puVar20;
  uint uVar21;
  undefined8 *puVar22;
  long unaff_x21;
  ulong *puVar23;
  ulong uVar24;
  long lVar25;
  undefined8 uVar26;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar12 = param_3[1];
  if (0 < lVar12) {
    lVar13 = 0;
    do {
      puVar11 = local_58;
      lVar25 = lVar13 + 1;
      if (lVar25 < lVar12) {
        lVar14 = *param_3;
        uVar3 = *(uint *)(lVar14 + lVar25 * 8 + 4);
        lVar25 = lVar14 + lVar13 * 8;
        uVar4 = *(uint *)(lVar25 + 4);
        lVar17 = lVar13 + 2;
        puVar19 = (uint *)(lVar25 + 0x14);
        uVar21 = uVar3;
        do {
          lVar18 = lVar17;
          lVar25 = lVar12;
          if (lVar12 == lVar18) break;
          uVar6 = *puVar19;
          bVar8 = uVar21 <= uVar6;
          lVar17 = lVar18 + 1;
          puVar19 = puVar19 + 2;
          uVar21 = uVar6;
          lVar25 = lVar18;
        } while (uVar3 < uVar4 != bVar8);
        if (uVar3 < uVar4) {
          if (lVar25 < lVar13) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100037d8c);
            (*pcVar7)();
          }
          if (lVar13 < lVar25) {
            puVar20 = (undefined8 *)(lVar14 + lVar25 * 8);
            puVar16 = (undefined8 *)(lVar14 + lVar13 * 8);
            lVar17 = lVar25;
            lVar12 = lVar13;
            do {
              puVar20 = puVar20 + -1;
              lVar17 = lVar17 + -1;
              if (lVar12 != lVar17) {
                if (lVar14 == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100037dac);
                  (*pcVar7)();
                }
                uVar26 = *puVar16;
                *puVar16 = *puVar20;
                *puVar20 = uVar26;
              }
              lVar12 = lVar12 + 1;
              puVar16 = puVar16 + 1;
            } while (lVar12 < lVar17);
            lVar12 = param_3[1];
          }
        }
      }
      lVar17 = lVar25;
      if (lVar25 < lVar12) {
        if (SBORROW8(lVar25,lVar13)) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100037d88);
          (*pcVar7)();
        }
        if (lVar25 - lVar13 < param_4) {
          if (SCARRY8(lVar13,param_4)) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100037d90);
            (*pcVar7)();
          }
          lVar14 = lVar13 + param_4;
          if (lVar12 <= lVar13 + param_4) {
            lVar14 = lVar12;
          }
          if (lVar14 < lVar13) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100037d94);
            (*pcVar7)();
          }
          if (lVar25 != lVar14) {
            lVar12 = *param_3;
            puVar16 = (undefined8 *)(lVar12 + lVar25 * 8);
            lVar18 = lVar13 - lVar25;
            do {
              uVar3 = *(uint *)(lVar12 + lVar25 * 8 + 4);
              lVar17 = lVar18;
              puVar20 = puVar16;
              do {
                if (*(uint *)((long)puVar20 + -4) <= uVar3) break;
                if (lVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar7 = (code *)SoftwareBreakpoint(1,0x100037d98);
                  (*pcVar7)();
                }
                puVar22 = puVar20 + -1;
                uVar5 = *(undefined4 *)puVar20;
                *puVar20 = *puVar22;
                *(undefined4 *)puVar22 = uVar5;
                *(uint *)((long)puVar20 + -4) = uVar3;
                bVar8 = lVar17 != -1;
                lVar17 = lVar17 + 1;
                puVar20 = puVar22;
              } while (bVar8);
              lVar25 = lVar25 + 1;
              puVar16 = puVar16 + 1;
              lVar18 = lVar18 + -1;
              lVar17 = lVar14;
            } while (lVar25 != lVar14);
          }
        }
      }
      if (lVar17 < lVar13) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100037d78);
        (*pcVar7)();
      }
      puVar9 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar10 = puVar11;
      if (((ulong)puVar9 & 1) == 0) {
        puVar10 = (undefined *)0x0;
        FUN_10003491c(0,*(long *)(puVar11 + 0x10) + 1,1,puVar11,&DAT_100a75930,&DAT_100809a00);
      }
      uVar24 = *(ulong *)(puVar10 + 0x10);
      puVar11 = puVar10;
      if (*(ulong *)(puVar10 + 0x18) >> 1 <= uVar24) {
        puVar11 = (undefined *)(ulong)(1 < *(ulong *)(puVar10 + 0x18));
        FUN_10003491c(puVar11,uVar24 + 1,1,puVar10,&DAT_100a75930,&DAT_100809a00);
      }
      *(ulong *)(puVar11 + 0x10) = uVar24 + 1;
      *(long *)(puVar11 + uVar24 * 0x10 + 0x20) = lVar13;
      *(long *)(puVar11 + uVar24 * 0x10 + 0x28) = lVar17;
      local_58 = puVar11;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar7 = (code *)SoftwareBreakpoint(1,0x100037db0);
        (*pcVar7)();
      }
      FUN_1000381a8(&local_58,*param_1,param_3);
      puVar11 = local_58;
      if (unaff_x21 != 0) goto LAB_100037d48;
      lVar12 = param_3[1];
      lVar13 = lVar17;
    } while (lVar17 < lVar12);
  }
  puVar11 = local_58;
  lVar12 = *param_1;
  if (lVar12 == 0) {
                    /* WARNING: Does not return */
    pcVar7 = (code *)SoftwareBreakpoint(1,0x100037db8);
    (*pcVar7)();
  }
  puVar9 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar9 & 1) == 0) {
    FUN_10006f924();
  }
  puVar23 = (ulong *)(puVar11 + 0x10);
  uVar24 = *puVar23;
  while (1 < uVar24) {
    lVar13 = *param_3;
    if (lVar13 == 0) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100037db4);
      (*pcVar7)();
    }
    plVar1 = (long *)(puVar11 + uVar24 * 0x10);
    lVar25 = *plVar1;
    puVar2 = puVar23 + uVar24 * 2;
    uVar15 = puVar2[1];
    FUN_1000388c4(lVar13 + lVar25 * 8,lVar13 + *puVar2 * 8,lVar13 + uVar15 * 8,lVar12);
    if (unaff_x21 != 0) break;
    if ((long)uVar15 < lVar25) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100037d7c);
      (*pcVar7)();
    }
    if (*puVar23 <= uVar24 - 2) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100037d80);
      (*pcVar7)();
    }
    *plVar1 = lVar25;
    plVar1[1] = uVar15;
    uVar15 = *puVar23;
    lVar13 = uVar15 - uVar24;
    if (uVar15 < uVar24) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100037d84);
      (*pcVar7)();
    }
    uVar24 = uVar15 - 1;
    _memmove(puVar2,puVar2 + 2,lVar13 * 0x10);
    *puVar23 = uVar24;
  }
LAB_100037d48:
  _swift_bridgeObjectRelease(puVar11);
  return;
}

