// rea decompile_all
// name: FUN_10003714c
// address: 0x10003714c
// body: available
// range: 0x10003714c-0x10003759f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10003714c(long *param_1,undefined8 param_2,long *param_3,long param_4)

{
  bool bVar1;
  int iVar2;
  code *pcVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  long lVar14;
  undefined8 *puVar15;
  long lVar16;
  int *piVar17;
  long unaff_x21;
  long lVar18;
  ulong uVar19;
  undefined8 uVar20;
  undefined8 uVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 uVar24;
  undefined8 uVar25;
  undefined8 uVar26;
  undefined8 uVar27;
  undefined8 uVar28;
  undefined1 uStack_78;
  undefined7 uStack_77;
  undefined *local_58;
  
  local_58 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar8 = param_3[1];
  if (0 < lVar8) {
    lVar11 = 0;
    do {
      puVar7 = local_58;
      lVar18 = lVar11 + 1;
      if (lVar18 < lVar8) {
        lVar12 = *param_3;
        lVar14 = lVar12 + lVar18 * 0x30;
        iVar2 = *(int *)(lVar14 + 0xc);
        lVar18 = lVar12 + lVar11 * 0x30;
        bVar4 = *(int *)(lVar18 + 0x10) < *(int *)(lVar14 + 0x10);
        if (iVar2 != *(int *)(lVar18 + 0xc)) {
          bVar4 = *(int *)(lVar18 + 0xc) < iVar2;
        }
        piVar17 = (int *)(lVar18 + 0x70);
        lVar14 = lVar11 + 2;
        do {
          lVar16 = lVar14;
          lVar18 = lVar8;
          if (lVar8 == lVar16) break;
          bVar1 = *piVar17 <= piVar17[-0xc];
          if (piVar17[-1] != piVar17[-0xd]) {
            bVar1 = piVar17[-1] <= piVar17[-0xd];
          }
          piVar17 = piVar17 + 0xc;
          lVar14 = lVar16 + 1;
          lVar18 = lVar16;
        } while (bVar4 != bVar1);
        if (bVar4 != false) {
          if (lVar18 < lVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100037574);
            (*pcVar3)();
          }
          if (lVar11 < lVar18) {
            puVar15 = (undefined8 *)(lVar12 + lVar11 * 0x30);
            lVar14 = lVar18;
            lVar8 = lVar11;
            puVar10 = (undefined8 *)(lVar12 + lVar18 * 0x30);
            do {
              puVar9 = puVar10 + -6;
              lVar14 = lVar14 + -1;
              if (lVar8 != lVar14) {
                if (lVar12 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x100037594);
                  (*pcVar3)();
                }
                uVar25 = puVar15[1];
                uVar24 = *puVar15;
                uVar20 = puVar15[2];
                uStack_78 = (undefined1)puVar15[3];
                uVar21 = *(undefined8 *)((long)puVar15 + 0x19);
                uStack_77 = (undefined7)uVar21;
                uVar27 = puVar10[-3];
                uVar26 = puVar10[-4];
                uVar23 = puVar10[-1];
                uVar22 = puVar10[-2];
                uVar28 = *puVar9;
                puVar15[1] = puVar10[-5];
                *puVar15 = uVar28;
                puVar15[3] = uVar27;
                puVar15[2] = uVar26;
                puVar15[5] = uVar23;
                puVar15[4] = uVar22;
                *(undefined8 *)((long)puVar10 + -0xf) = *(undefined8 *)((long)puVar15 + 0x21);
                *(undefined8 *)((long)puVar10 + -0x17) = uVar21;
                puVar10[-5] = uVar25;
                *puVar9 = uVar24;
                puVar10[-3] = CONCAT71(uStack_77,uStack_78);
                puVar10[-4] = uVar20;
              }
              lVar8 = lVar8 + 1;
              puVar15 = puVar15 + 6;
              puVar10 = puVar9;
            } while (lVar8 < lVar14);
            lVar8 = param_3[1];
          }
        }
      }
      lVar12 = lVar18;
      if (lVar18 < lVar8) {
        if (SBORROW8(lVar18,lVar11)) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x100037570);
          (*pcVar3)();
        }
        if (lVar18 - lVar11 < param_4) {
          if (SCARRY8(lVar11,param_4)) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x100037578);
            (*pcVar3)();
          }
          lVar14 = lVar11 + param_4;
          if (lVar8 <= lVar11 + param_4) {
            lVar14 = lVar8;
          }
          if (lVar14 < lVar11) {
                    /* WARNING: Does not return */
            pcVar3 = (code *)SoftwareBreakpoint(1,0x10003757c);
            (*pcVar3)();
          }
          if (lVar18 != lVar14) {
            lVar13 = *param_3;
            puVar15 = (undefined8 *)(lVar13 + lVar18 * 0x30);
            lVar8 = lVar11 - lVar18;
            lVar16 = lVar8;
            puVar10 = puVar15;
LAB_100037320:
            do {
              bVar4 = *(int *)(puVar15 + -4) < *(int *)(puVar15 + 2);
              if (*(int *)((long)puVar15 + 0xc) != *(int *)((long)puVar15 + -0x24)) {
                bVar4 = *(int *)((long)puVar15 + -0x24) < *(int *)((long)puVar15 + 0xc);
              }
              if (bVar4) {
                if (lVar13 == 0) {
                    /* WARNING: Does not return */
                  pcVar3 = (code *)SoftwareBreakpoint(1,0x100037580);
                  (*pcVar3)();
                }
                puVar9 = puVar15 + -6;
                uVar22 = puVar15[1];
                uVar21 = *puVar15;
                uVar20 = puVar15[2];
                uStack_78 = (undefined1)puVar15[3];
                uStack_77 = (undefined7)*(undefined8 *)((long)puVar15 + 0x19);
                puVar15[1] = puVar15[-5];
                *puVar15 = *puVar9;
                puVar15[3] = puVar15[-3];
                puVar15[2] = puVar15[-4];
                puVar15[5] = puVar15[-1];
                puVar15[4] = puVar15[-2];
                *(undefined8 *)((long)puVar15 + -0xf) = *(undefined8 *)((long)puVar15 + 0x21);
                *(undefined8 *)((long)puVar15 + -0x17) = *(undefined8 *)((long)puVar15 + 0x19);
                puVar15[-5] = uVar22;
                *puVar9 = uVar21;
                puVar15[-3] = CONCAT71(uStack_77,uStack_78);
                puVar15[-4] = uVar20;
                bVar4 = lVar8 != -1;
                lVar8 = lVar8 + 1;
                puVar15 = puVar9;
                if (bVar4) goto LAB_100037320;
              }
              lVar18 = lVar18 + 1;
              puVar15 = puVar10 + 6;
              lVar8 = lVar16 + -1;
              lVar12 = lVar14;
              lVar16 = lVar8;
              puVar10 = puVar15;
            } while (lVar18 != lVar14);
          }
        }
      }
      if (lVar12 < lVar11) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100037564);
        (*pcVar3)();
      }
      puVar5 = local_58;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar6 = puVar7;
      if (((ulong)puVar5 & 1) == 0) {
        puVar6 = (undefined *)0x0;
        FUN_10003491c(0,*(long *)(puVar7 + 0x10) + 1,1,puVar7,&DAT_100a75930,&DAT_100809a00);
      }
      uVar19 = *(ulong *)(puVar6 + 0x10);
      puVar7 = puVar6;
      if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar19) {
        puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar6 + 0x18));
        FUN_10003491c(puVar7,uVar19 + 1,1,puVar6,&DAT_100a75930,&DAT_100809a00);
      }
      *(ulong *)(puVar7 + 0x10) = uVar19 + 1;
      *(long *)(puVar7 + uVar19 * 0x10 + 0x20) = lVar11;
      *(long *)(puVar7 + uVar19 * 0x10 + 0x28) = lVar12;
      local_58 = puVar7;
      if (*param_1 == 0) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100037598);
        (*pcVar3)();
      }
      FUN_100037f28(&local_58,*param_1,param_3,FUN_100038414);
      puVar7 = local_58;
      if (unaff_x21 != 0) goto LAB_100037534;
      lVar8 = param_3[1];
      lVar11 = lVar12;
    } while (lVar12 < lVar8);
  }
  puVar7 = local_58;
  lVar8 = *param_1;
  if (lVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1000375a0);
    (*pcVar3)();
  }
  puVar5 = local_58;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((ulong)puVar5 & 1) == 0) {
    FUN_10006f924();
  }
  uVar19 = *(ulong *)(puVar7 + 0x10);
  while (local_58 = puVar7, 1 < uVar19) {
    lVar11 = *param_3;
    if (lVar11 == 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10003759c);
      (*pcVar3)();
    }
    lVar12 = uVar19 - 1;
    lVar14 = *(long *)(puVar7 + uVar19 * 0x10);
    lVar18 = *(long *)(puVar7 + lVar12 * 0x10 + 0x28);
    FUN_100038414(lVar11 + lVar14 * 0x30,lVar11 + *(long *)(puVar7 + lVar12 * 0x10 + 0x20) * 0x30,
                  lVar11 + lVar18 * 0x30,lVar8);
    if (unaff_x21 != 0) break;
    if (lVar18 < lVar14) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100037568);
      (*pcVar3)();
    }
    puVar5 = puVar7;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((ulong)puVar5 & 1) == 0) {
      FUN_10006f924();
    }
    if (*(ulong *)(puVar7 + 0x10) <= uVar19 - 2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10003756c);
      (*pcVar3)();
    }
    *(long *)(puVar7 + uVar19 * 0x10) = lVar14;
    *(long *)((long)(puVar7 + uVar19 * 0x10) + 8) = lVar18;
    local_58 = puVar7;
    FUN_10005fd60(lVar12);
    puVar7 = local_58;
    uVar19 = *(ulong *)(local_58 + 0x10);
  }
LAB_100037534:
  _swift_bridgeObjectRelease(puVar7);
  return;
}

