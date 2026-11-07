// rea decompile_all
// name: FUN_1000459c8
// address: 0x1000459c8
// body: available
// range: 0x1000459c8-0x100045c7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000459c8(ulong *param_1,double param_2,long param_3,long param_4,long param_5,
                  ulong param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined *puVar6;
  code *pcVar7;
  undefined *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined1 *puVar11;
  long lVar12;
  undefined1 uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  long lVar19;
  undefined8 *puVar20;
  undefined8 uVar21;
  double dVar22;
  double dVar23;
  undefined5 uStack_88;
  undefined3 uStack_83;
  
  puVar6 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar17 = *(long *)(param_3 + 0x10);
  if (lVar17 != 0) {
    if (param_4 < -0x80000000) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100045c78);
      (*pcVar7)();
    }
    if (0x7fffffff < param_4) {
                    /* WARNING: Does not return */
      pcVar7 = (code *)SoftwareBreakpoint(1,0x100045c7c);
      (*pcVar7)();
    }
    lVar19 = param_4 << (param_6 & 1);
    lVar12 = param_5 << (param_6 & 1);
    puVar20 = (undefined8 *)(param_3 + 0x34);
    do {
      uVar1 = *(undefined4 *)((long)puVar20 + -0x14);
      iVar2 = *(int *)(puVar20 + -2);
      iVar3 = *(int *)(puVar20 + -1);
      iVar4 = *(int *)((long)puVar20 + -4);
      uVar21 = *puVar20;
      uStack_88 = (undefined5)puVar20[1];
      uVar10 = *(undefined8 *)((long)puVar20 + 0xd);
      uStack_83 = (undefined3)uVar10;
      if (iVar2 == (int)param_4) {
        if (param_5 < -0x80000000) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100045c60);
          (*pcVar7)();
        }
        if (0x7fffffff < param_5) {
                    /* WARNING: Does not return */
          pcVar7 = (code *)SoftwareBreakpoint(1,0x100045c64);
          (*pcVar7)();
        }
        if (*(int *)((long)puVar20 + -0xc) == (int)param_5) {
          if (lVar19 < -0x80000000) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100045c68);
            (*pcVar7)();
          }
          if (0x7fffffff < lVar19) {
                    /* WARNING: Does not return */
            pcVar7 = (code *)SoftwareBreakpoint(1,0x100045c6c);
            (*pcVar7)();
          }
          if (iVar3 == (int)lVar19) {
            if (lVar12 < -0x80000000) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100045c70);
              (*pcVar7)();
            }
            if (0x7fffffff < lVar12) {
                    /* WARNING: Does not return */
              pcVar7 = (code *)SoftwareBreakpoint(1,0x100045c74);
              (*pcVar7)();
            }
            if (iVar4 == (int)lVar12) {
              puVar8 = puVar6;
              _swift_isUniquelyReferenced_nonNull_native();
              if (((ulong)puVar8 & 1) == 0) {
                FUN_10006fb80(0,*(long *)(puVar6 + 0x10) + 1,1);
              }
              uVar15 = *(ulong *)(puVar6 + 0x10);
              if (*(ulong *)(puVar6 + 0x18) >> 1 <= uVar15) {
                FUN_10006fb80(1 < *(ulong *)(puVar6 + 0x18),uVar15 + 1,1);
              }
              *(ulong *)(puVar6 + 0x10) = uVar15 + 1;
              *(undefined4 *)(puVar6 + uVar15 * 0x30 + 0x20) = uVar1;
              *(int *)(puVar6 + uVar15 * 0x30 + 0x24) = iVar2;
              *(int *)(puVar6 + uVar15 * 0x30 + 0x28) = (int)param_5;
              *(int *)(puVar6 + uVar15 * 0x30 + 0x2c) = iVar3;
              *(int *)(puVar6 + uVar15 * 0x30 + 0x30) = iVar4;
              *(undefined8 *)(puVar6 + uVar15 * 0x30 + 0x41) = uVar10;
              *(ulong *)(puVar6 + uVar15 * 0x30 + 0x3c) = CONCAT35(uStack_83,uStack_88);
              *(undefined8 *)(puVar6 + uVar15 * 0x30 + 0x34) = uVar21;
            }
          }
        }
      }
      puVar20 = puVar20 + 6;
      lVar17 = lVar17 + -1;
    } while (lVar17 != 0);
  }
  if (*(long *)(puVar6 + 0x10) == 0) {
    _swift_release(puVar6);
    uVar9 = 0;
    uVar15 = 0;
    uVar16 = 0;
    uVar14 = 0;
    dVar23 = 0.0;
    uVar13 = 2;
  }
  else {
    uVar18 = *(uint *)(puVar6 + 0x20);
    uVar9 = (ulong)*(uint *)(puVar6 + 0x24);
    uVar15 = *(ulong *)(puVar6 + 0x28);
    uVar16 = *(ulong *)(puVar6 + 0x30);
    dVar23 = *(double *)(puVar6 + 0x38);
    uVar14 = *(ulong *)(puVar6 + 0x40);
    uVar13 = puVar6[0x48];
    lVar17 = *(long *)(puVar6 + 0x10) + -1;
    if (lVar17 != 0) {
      puVar11 = puVar6 + 0x78;
      do {
        dVar22 = ABS(*(double *)(puVar11 + -0x10) - param_2);
        bVar5 = (int)*(uint *)(puVar11 + -0x28) < (int)uVar18;
        if (dVar22 != ABS(dVar23 - param_2)) {
          bVar5 = dVar22 < ABS(dVar23 - param_2);
        }
        if (bVar5) {
          uVar13 = *puVar11;
          uVar14 = *(ulong *)(puVar11 + -8);
          uVar15 = *(ulong *)(puVar11 + -0x20);
          uVar16 = *(ulong *)(puVar11 + -0x18);
          uVar9 = (ulong)*(uint *)(puVar11 + -0x24);
          dVar23 = *(double *)(puVar11 + -0x10);
          uVar18 = *(uint *)(puVar11 + -0x28);
        }
        puVar11 = puVar11 + 0x30;
        lVar17 = lVar17 + -1;
      } while (lVar17 != 0);
    }
    _swift_release(puVar6);
    uVar9 = (ulong)uVar18 | uVar9 << 0x20;
  }
  *param_1 = uVar9;
  param_1[1] = uVar15;
  param_1[2] = uVar16;
  param_1[3] = (ulong)dVar23;
  param_1[4] = uVar14;
  *(undefined1 *)(param_1 + 5) = uVar13;
  return;
}

