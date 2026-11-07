// rea decompile_all
// name: FUN_1006ab5dc
// address: 0x1006ab5dc
// body: available
// range: 0x1006ab5dc-0x1006ab763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006ab760 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006ab5dc(byte *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  long lVar5;
  byte *pbVar6;
  ulong uVar7;
  ulong uVar8;
  byte bVar9;
  byte bVar10;
  byte bVar11;
  byte bVar12;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  undefined1 auVar25 [16];
  ulong auStack_a8 [4];
  ulong auStack_88 [8];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  bVar1 = *param_2;
  if (0 < (char)(bVar1 << 1)) {
    lVar5 = (long)(int)(char)(bVar1 << 1);
    bVar9 = 0;
    bVar10 = 0;
    bVar11 = 0;
    bVar12 = 0;
    bVar13 = 0;
    bVar14 = 0;
    bVar15 = 0;
    bVar16 = 0;
    bVar17 = 0;
    bVar18 = 0;
    bVar19 = 0;
    bVar20 = 0;
    bVar21 = 0;
    bVar22 = 0;
    bVar23 = 0;
    bVar24 = 0;
    pbVar6 = param_1;
    do {
      bVar9 = *pbVar6 | bVar9;
      bVar10 = pbVar6[1] | bVar10;
      bVar11 = pbVar6[2] | bVar11;
      bVar12 = pbVar6[3] | bVar12;
      bVar13 = pbVar6[4] | bVar13;
      bVar14 = pbVar6[5] | bVar14;
      bVar15 = pbVar6[6] | bVar15;
      bVar16 = pbVar6[7] | bVar16;
      bVar17 = pbVar6[8] | bVar17;
      bVar18 = pbVar6[9] | bVar18;
      bVar19 = pbVar6[10] | bVar19;
      bVar20 = pbVar6[0xb] | bVar20;
      bVar21 = pbVar6[0xc] | bVar21;
      bVar22 = pbVar6[0xd] | bVar22;
      bVar23 = pbVar6[0xe] | bVar23;
      bVar24 = pbVar6[0xf] | bVar24;
      lVar5 = lVar5 + -2;
      pbVar6 = pbVar6 + 0x10;
    } while (lVar5 != 0);
    auVar25[1] = bVar10;
    auVar25[0] = bVar9;
    auVar25[2] = bVar11;
    auVar25[3] = bVar12;
    auVar25[4] = bVar13;
    auVar25[5] = bVar14;
    auVar25[6] = bVar15;
    auVar25[7] = bVar16;
    auVar25[8] = bVar17;
    auVar25[9] = bVar18;
    auVar25[10] = bVar19;
    auVar25[0xb] = bVar20;
    auVar25[0xc] = bVar21;
    auVar25[0xd] = bVar22;
    auVar25[0xe] = bVar23;
    auVar25[0xf] = bVar24;
    auVar3[1] = bVar10;
    auVar3[0] = bVar9;
    auVar3[2] = bVar11;
    auVar3[3] = bVar12;
    auVar3[4] = bVar13;
    auVar3[5] = bVar14;
    auVar3[6] = bVar15;
    auVar3[7] = bVar16;
    auVar3[8] = bVar17;
    auVar3[9] = bVar18;
    auVar3[10] = bVar19;
    auVar3[0xb] = bVar20;
    auVar3[0xc] = bVar21;
    auVar3[0xd] = bVar22;
    auVar3[0xe] = bVar23;
    auVar3[0xf] = bVar24;
    auVar25 = NEON_ext(auVar25,auVar3,8,1);
    if (CONCAT17(bVar16 | auVar25[7],
                 CONCAT16(bVar15 | auVar25[6],
                          CONCAT15(bVar14 | auVar25[5],
                                   CONCAT14(bVar13 | auVar25[4],
                                            CONCAT13(bVar12 | auVar25[3],
                                                     CONCAT12(bVar11 | auVar25[2],
                                                              CONCAT11(bVar10 | auVar25[1],
                                                                       bVar9 | auVar25[0]))))))) !=
        0) {
      uVar7 = (ulong)bVar1 - 1;
      uVar8 = uVar7;
      do {
        if (((uint)uVar8 >> 7 & 1) != 0) break;
        lVar5 = (uVar8 & 0x7f) * 8;
        if (*(ulong *)(param_1 + lVar5) < *(ulong *)(param_2 + lVar5 + 8)) {
          pbVar6 = param_1 + (long)(char)bVar1 * 8;
          goto LAB_1006ab688;
        }
        uVar8 = uVar8 - 1;
      } while (*(ulong *)(param_1 + lVar5) <= *(ulong *)(param_2 + lVar5 + 8));
    }
  }
  goto LAB_1006ab6ac;
  while( true ) {
    lVar5 = (uVar7 & 0x7f) * 8;
    if (*(ulong *)(pbVar6 + lVar5) < *(ulong *)(param_2 + lVar5 + 8)) {
      FUN_1006af210(auStack_88,pbVar6,pbVar6,(int)(char)bVar1);
      (**(code **)(param_2 + 0xc0))(auStack_a8,auStack_88);
      (**(code **)(param_2 + 0xb8))(auStack_88,param_1,param_2);
      if (((int)(char)bVar1 - 1U >> 7 & 1) == 0) {
        uVar8 = 0;
        uVar2 = (uint)(char)((int)(char)bVar1 - 1U);
        uVar7 = -(ulong)(uVar2 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar2 << 3;
        do {
          uVar8 = *(ulong *)((long)auStack_88 + uVar7) ^ *(ulong *)((long)auStack_a8 + uVar7) |
                  uVar8;
          uVar7 = uVar7 - 8;
        } while (uVar7 != 0xfffffffffffffff8);
        bVar4 = uVar8 == 0;
      }
      else {
        bVar4 = true;
      }
      goto LAB_1006ab6b0;
    }
    uVar7 = uVar7 - 1;
    if (*(ulong *)(param_2 + lVar5 + 8) < *(ulong *)(pbVar6 + lVar5)) break;
LAB_1006ab688:
    if (((uint)uVar7 >> 7 & 1) != 0) break;
  }
LAB_1006ab6ac:
  bVar4 = false;
LAB_1006ab6b0:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(bVar4);
  }
  return;
}

