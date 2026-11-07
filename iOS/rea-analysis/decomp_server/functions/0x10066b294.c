// rea decompile_all
// name: FUN_10066b294
// address: 0x10066b294
// body: available
// range: 0x10066b294-0x10066b52f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10066b294(ulong *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  code *pcVar19;
  ulong uVar20;
  ulong uVar21;
  
  uVar21 = *param_1;
  uVar20 = uVar21;
  _swift_isUniquelyReferenced_nonNull_native();
  if ((uVar20 & 1) == 0) {
    FUN_1006541cc();
    uVar20 = *(ulong *)(uVar21 + 0x10);
  }
  else {
    uVar20 = *(ulong *)(uVar21 + 0x10);
  }
  if (uVar20 != 0) {
    uVar18 = *(uint *)(uVar21 + 0x20);
    uVar1 = uVar18 & 0xff;
    *(uint *)(uVar21 + 0x20) = uVar1;
    if (uVar20 != 1) {
      uVar18 = *(int *)(uVar21 + 0x24) + (uVar18 >> 8);
      uVar2 = uVar18 & 0xff;
      *(uint *)(uVar21 + 0x24) = uVar2;
      if (2 < uVar20) {
        uVar18 = *(int *)(uVar21 + 0x28) + (uVar18 >> 8);
        uVar3 = uVar18 & 0xff;
        *(uint *)(uVar21 + 0x28) = uVar3;
        if (uVar20 != 3) {
          uVar18 = *(int *)(uVar21 + 0x2c) + (uVar18 >> 8);
          uVar4 = uVar18 & 0xff;
          *(uint *)(uVar21 + 0x2c) = uVar4;
          if (4 < uVar20) {
            uVar18 = *(int *)(uVar21 + 0x30) + (uVar18 >> 8);
            uVar5 = uVar18 & 0xff;
            *(uint *)(uVar21 + 0x30) = uVar5;
            if (uVar20 != 5) {
              uVar18 = *(int *)(uVar21 + 0x34) + (uVar18 >> 8);
              uVar6 = uVar18 & 0xff;
              *(uint *)(uVar21 + 0x34) = uVar6;
              if (6 < uVar20) {
                uVar18 = *(int *)(uVar21 + 0x38) + (uVar18 >> 8);
                uVar7 = uVar18 & 0xff;
                *(uint *)(uVar21 + 0x38) = uVar7;
                if (uVar20 != 7) {
                  uVar18 = *(int *)(uVar21 + 0x3c) + (uVar18 >> 8);
                  uVar8 = uVar18 & 0xff;
                  *(uint *)(uVar21 + 0x3c) = uVar8;
                  if (8 < uVar20) {
                    uVar18 = *(int *)(uVar21 + 0x40) + (uVar18 >> 8);
                    uVar9 = uVar18 & 0xff;
                    *(uint *)(uVar21 + 0x40) = uVar9;
                    if (uVar20 != 9) {
                      uVar18 = *(int *)(uVar21 + 0x44) + (uVar18 >> 8);
                      uVar10 = uVar18 & 0xff;
                      *(uint *)(uVar21 + 0x44) = uVar10;
                      if (10 < uVar20) {
                        uVar18 = *(int *)(uVar21 + 0x48) + (uVar18 >> 8);
                        uVar11 = uVar18 & 0xff;
                        *(uint *)(uVar21 + 0x48) = uVar11;
                        if (uVar20 != 0xb) {
                          uVar18 = *(int *)(uVar21 + 0x4c) + (uVar18 >> 8);
                          uVar12 = uVar18 & 0xff;
                          *(uint *)(uVar21 + 0x4c) = uVar12;
                          if (0xc < uVar20) {
                            uVar18 = *(int *)(uVar21 + 0x50) + (uVar18 >> 8);
                            uVar13 = uVar18 & 0xff;
                            *(uint *)(uVar21 + 0x50) = uVar13;
                            if (uVar20 != 0xd) {
                              uVar18 = *(int *)(uVar21 + 0x54) + (uVar18 >> 8);
                              uVar14 = uVar18 & 0xff;
                              *(uint *)(uVar21 + 0x54) = uVar14;
                              if (0xe < uVar20) {
                                uVar18 = *(int *)(uVar21 + 0x58) + (uVar18 >> 8);
                                uVar15 = uVar18 & 0xff;
                                *(uint *)(uVar21 + 0x58) = uVar15;
                                if (uVar20 != 0xf) {
                                  uVar18 = *(int *)(uVar21 + 0x5c) + (uVar18 >> 8);
                                  uVar16 = uVar18 & 0xff;
                                  *(uint *)(uVar21 + 0x5c) = uVar16;
                                  if (uVar20 < 0x11) {
                    /* WARNING: Does not return */
                                    pcVar19 = (code *)SoftwareBreakpoint(1,0x10066b52c);
                                    (*pcVar19)();
                                  }
                                  uVar18 = *(int *)(uVar21 + 0x60) + (uVar18 >> 8);
                                  uVar17 = uVar18 & 3;
                                  *(uint *)(uVar21 + 0x60) = uVar17;
                                  uVar20 = (ulong)(uVar18 >> 2) * 5;
                                  if ((uVar20 & 0xffffffff00000000) != 0) {
                    /* WARNING: Does not return */
                                    pcVar19 = (code *)SoftwareBreakpoint(1,0x10066b530);
                                    (*pcVar19)();
                                  }
                                  uVar1 = uVar1 + (int)uVar20;
                                  uVar2 = uVar2 + (uVar1 >> 8);
                                  *(uint *)(uVar21 + 0x20) = uVar1 & 0xff;
                                  *(uint *)(uVar21 + 0x24) = uVar2 & 0xff;
                                  uVar3 = uVar3 + (uVar2 >> 8);
                                  uVar4 = uVar4 + (uVar3 >> 8);
                                  *(uint *)(uVar21 + 0x28) = uVar3 & 0xff;
                                  *(uint *)(uVar21 + 0x2c) = uVar4 & 0xff;
                                  uVar5 = uVar5 + (uVar4 >> 8);
                                  uVar6 = uVar6 + (uVar5 >> 8);
                                  *(uint *)(uVar21 + 0x30) = uVar5 & 0xff;
                                  *(uint *)(uVar21 + 0x34) = uVar6 & 0xff;
                                  uVar7 = uVar7 + (uVar6 >> 8);
                                  uVar8 = uVar8 + (uVar7 >> 8);
                                  *(uint *)(uVar21 + 0x38) = uVar7 & 0xff;
                                  *(uint *)(uVar21 + 0x3c) = uVar8 & 0xff;
                                  uVar9 = uVar9 + (uVar8 >> 8);
                                  uVar10 = uVar10 + (uVar9 >> 8);
                                  *(uint *)(uVar21 + 0x40) = uVar9 & 0xff;
                                  *(uint *)(uVar21 + 0x44) = uVar10 & 0xff;
                                  uVar11 = uVar11 + (uVar10 >> 8);
                                  uVar12 = uVar12 + (uVar11 >> 8);
                                  *(uint *)(uVar21 + 0x48) = uVar11 & 0xff;
                                  *(uint *)(uVar21 + 0x4c) = uVar12 & 0xff;
                                  uVar13 = uVar13 + (uVar12 >> 8);
                                  uVar14 = uVar14 + (uVar13 >> 8);
                                  *(uint *)(uVar21 + 0x50) = uVar13 & 0xff;
                                  *(uint *)(uVar21 + 0x54) = uVar14 & 0xff;
                                  uVar15 = uVar15 + (uVar14 >> 8);
                                  uVar16 = uVar16 + (uVar15 >> 8);
                                  *(uint *)(uVar21 + 0x58) = uVar15 & 0xff;
                                  *(uint *)(uVar21 + 0x5c) = uVar16 & 0xff;
                                  *(uint *)(uVar21 + 0x60) = uVar17 + (uVar16 >> 8);
                                  *param_1 = uVar21;
                                  return;
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
                    /* WARNING: Does not return */
  pcVar19 = (code *)SoftwareBreakpoint(1,0x10066b528);
  (*pcVar19)();
}

