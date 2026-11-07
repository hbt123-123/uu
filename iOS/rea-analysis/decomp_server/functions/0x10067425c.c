// rea decompile_all
// name: FUN_10067425c
// address: 0x10067425c
// body: available
// range: 0x10067425c-0x10067466b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006745f8 to 0x1007df484 _swift_slowDealloc (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10067425c(long param_1,ulong param_2,ulong param_3,ulong *param_4)

{
  long lVar1;
  int iVar2;
  long lVar3;
  code *pcVar4;
  uint *puVar5;
  uint uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong *puVar10;
  uint *puVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  long unaff_x20;
  uint uVar18;
  uint uVar19;
  ulong uVar20;
  uint uVar21;
  long lVar22;
  uint uVar23;
  
  lVar22 = *(long *)(unaff_x20 + 0x30);
  if (*(ulong *)(lVar22 + 0x10) >> 0x3d != 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100674614);
    (*pcVar4)();
  }
  puVar5 = (uint *)(*(ulong *)(lVar22 + 0x10) << 2);
  _swift_slowAlloc(puVar5,0xffffffffffffffff);
  uVar20 = *(ulong *)(lVar22 + 0x10);
  if (uVar20 != 0) {
    _bzero(puVar5,uVar20 << 2);
    lVar7 = 0;
    uVar9 = 0;
    param_3 = param_3 >> 1;
    uVar8 = param_3 - param_2;
    puVar11 = puVar5;
    do {
      if (uVar9 < 0x10) {
        lVar3 = param_2 + lVar7;
        if (SCARRY8(param_2,lVar7)) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x100674604);
          (*pcVar4)();
        }
        if (param_3 == param_2) {
          uVar13 = 0;
        }
        else {
          if (SBORROW8(param_3,param_2)) {
                    /* WARNING: Does not return */
            pcVar4 = (code *)SoftwareBreakpoint(1,0x100674608);
            (*pcVar4)();
          }
          if ((long)uVar8 < 1) {
            uVar15 = 0;
            uVar16 = 0;
            uVar14 = 0;
            uVar13 = 0;
          }
          else {
            if ((lVar3 < (long)param_2) || ((long)param_3 <= lVar3)) {
                    /* WARNING: Does not return */
              pcVar4 = (code *)SoftwareBreakpoint(1,0x10067460c);
              (*pcVar4)();
            }
            uVar13 = (uint)*(byte *)(param_1 + lVar3) << 0x18;
            if (uVar8 == 1) {
              uVar15 = 0;
              uVar16 = 0;
              uVar14 = 0;
            }
            else {
              if ((long)param_3 <= lVar3 + 1) {
                    /* WARNING: Does not return */
                pcVar4 = (code *)SoftwareBreakpoint(1,0x100674610);
                (*pcVar4)();
              }
              uVar14 = (uint)*(byte *)(param_1 + lVar3 + 1) << 0x10;
              if (uVar8 < 3) {
                uVar15 = 0;
                uVar16 = 0;
              }
              else {
                lVar1 = lVar3 + 2;
                if ((lVar1 < (long)param_2) || ((long)param_3 <= lVar1)) {
                    /* WARNING: Does not return */
                  pcVar4 = (code *)SoftwareBreakpoint(1,0x100674664);
                  (*pcVar4)();
                }
                uVar16 = (uint)*(byte *)(param_1 + lVar1) << 8;
                if (uVar8 == 3) {
                  uVar15 = 0;
                }
                else {
                  lVar1 = lVar3 + 3;
                  if (SCARRY8(lVar3,3)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x100674668);
                    (*pcVar4)();
                  }
                  if ((lVar1 < (long)param_2) || ((long)param_3 <= lVar1)) {
                    /* WARNING: Does not return */
                    pcVar4 = (code *)SoftwareBreakpoint(1,0x10067466c);
                    (*pcVar4)();
                  }
                  uVar15 = (uint)*(byte *)(param_1 + lVar1);
                }
              }
            }
          }
          uVar13 = uVar16 | uVar15 | uVar14 | uVar13;
        }
      }
      else {
        uVar14 = puVar11[-2];
        uVar13 = puVar11[-0xf];
        uVar13 = puVar11[-7] + puVar11[-0x10] +
                 ((uVar14 >> 0x11 | uVar14 << 0xf) ^ (uVar14 >> 0x13 | uVar14 << 0xd) ^ uVar14 >> 10
                 ) + ((uVar13 >> 7 | uVar13 << 0x19) ^ (uVar13 >> 0x12 | uVar13 << 0xe) ^
                     uVar13 >> 3);
      }
      *puVar11 = uVar13;
      uVar9 = uVar9 + 1;
      lVar7 = lVar7 + 4;
      puVar11 = puVar11 + 1;
    } while (uVar20 != uVar9);
  }
  uVar9 = *param_4;
  uVar8 = *(ulong *)(uVar9 + 0x10);
  if (uVar8 == 0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100674618);
    (*pcVar4)();
  }
  if (uVar8 == 1) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10067461c);
    (*pcVar4)();
  }
  if (uVar8 < 3) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100674620);
    (*pcVar4)();
  }
  if (uVar8 == 3) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100674624);
    (*pcVar4)();
  }
  if (uVar8 < 5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100674628);
    (*pcVar4)();
  }
  if (uVar8 == 5) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10067462c);
    (*pcVar4)();
  }
  if (uVar8 < 7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100674630);
    (*pcVar4)();
  }
  if (uVar8 == 7) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100674634);
    (*pcVar4)();
  }
  uVar16 = *(uint *)(uVar9 + 0x20);
  uVar17 = *(uint *)(uVar9 + 0x24);
  uVar15 = *(uint *)(uVar9 + 0x28);
  uVar23 = *(uint *)(uVar9 + 0x2c);
  uVar13 = *(uint *)(uVar9 + 0x30);
  uVar21 = *(uint *)(uVar9 + 0x34);
  uVar19 = *(uint *)(uVar9 + 0x38);
  uVar18 = *(uint *)(uVar9 + 0x3c);
  uVar14 = uVar16;
  if (uVar20 != 0) {
    puVar10 = (ulong *)(lVar22 + 0x20);
    puVar11 = puVar5;
    uVar12 = uVar18;
    uVar6 = uVar23;
    do {
      uVar23 = uVar15;
      uVar15 = uVar17;
      uVar17 = uVar14;
      uVar18 = uVar19;
      uVar19 = uVar21;
      uVar21 = uVar13;
      if (*puVar10 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x100674600);
        (*pcVar4)();
      }
      iVar2 = (uVar21 & uVar19 | uVar18 & (uVar21 ^ 0xffffffff)) + uVar12 + (int)*puVar10 + *puVar11
              + ((uVar21 >> 6 | uVar21 << 0x1a) ^ (uVar21 >> 0xb | uVar21 << 0x15) ^
                (uVar21 >> 0x19 | uVar21 << 7));
      uVar13 = iVar2 + uVar6;
      uVar14 = ((uVar17 >> 2 | uVar17 << 0x1e) ^ (uVar17 >> 0xd | uVar17 << 0x13) ^
               (uVar17 >> 0x16 | uVar17 << 10)) + (uVar17 & (uVar15 ^ uVar23) ^ uVar15 & uVar23) +
               iVar2;
      uVar20 = uVar20 - 1;
      puVar10 = puVar10 + 1;
      puVar11 = puVar11 + 1;
      uVar12 = uVar18;
      uVar6 = uVar23;
    } while (uVar20 != 0);
  }
  uVar20 = uVar9;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar20 & 1) == 0) {
    FUN_1006541cc();
  }
  *(uint *)(uVar9 + 0x20) = uVar14 + uVar16;
  uVar20 = *(ulong *)(uVar9 + 0x10);
  if (uVar20 < 2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100674648);
    (*pcVar4)();
  }
  *(uint *)(uVar9 + 0x24) = *(int *)(uVar9 + 0x24) + uVar17;
  if (uVar20 == 2) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10067464c);
    (*pcVar4)();
  }
  *(uint *)(uVar9 + 0x28) = *(int *)(uVar9 + 0x28) + uVar15;
  if (uVar20 < 4) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100674650);
    (*pcVar4)();
  }
  *(uint *)(uVar9 + 0x2c) = *(int *)(uVar9 + 0x2c) + uVar23;
  if (uVar20 == 4) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100674654);
    (*pcVar4)();
  }
  *(uint *)(uVar9 + 0x30) = *(int *)(uVar9 + 0x30) + uVar13;
  if (uVar20 < 6) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100674658);
    (*pcVar4)();
  }
  *(uint *)(uVar9 + 0x34) = *(int *)(uVar9 + 0x34) + uVar21;
  if (uVar20 == 6) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x10067465c);
    (*pcVar4)();
  }
  *(uint *)(uVar9 + 0x38) = *(int *)(uVar9 + 0x38) + uVar19;
  if (uVar20 < 8) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)SoftwareBreakpoint(1,0x100674660);
    (*pcVar4)();
  }
  *(uint *)(uVar9 + 0x3c) = *(int *)(uVar9 + 0x3c) + uVar18;
  *param_4 = uVar9;
  _swift_slowDealloc(puVar5,0xffffffffffffffff,0xffffffffffffffff);
  return;
}

