// rea decompile_all
// name: FUN_1006acd74
// address: 0x1006acd74
// body: available
// range: 0x1006acd74-0x1006acfd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006acfd4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006acd74(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ulong *param_4,
                  ulong param_5)

{
  uint uVar1;
  int iVar2;
  short sVar3;
  ushort uVar4;
  uint uVar5;
  bool bVar6;
  ulong *puVar7;
  undefined1 *puVar8;
  ulong *puVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  undefined8 *puVar14;
  ulong uVar15;
  ulong uVar16;
  char cVar17;
  ulong uVar18;
  int iVar19;
  uint uVar20;
  ulong auStack_498 [110];
  undefined1 auStack_128 [64];
  undefined1 *local_e8 [2];
  undefined1 auStack_d8 [64];
  ulong auStack_98 [8];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  FUN_1006af210(auStack_128,param_2,param_3,param_5);
  local_e8[0] = auStack_d8;
  puVar7 = param_4;
  local_e8[1] = auStack_128;
  FUN_1006ad34c(param_4,param_5);
  iVar19 = (int)param_5;
  iVar2 = iVar19 * 0x80 - (int)puVar7;
  sVar3 = (short)iVar2;
  uVar20 = (uint)sVar3;
  iVar2 = iVar2 + (uVar20 >> 0x19 & 0x3f);
  uVar4 = (ushort)iVar2;
  uVar1 = iVar2 * 0x10000 >> 0x16;
  cVar17 = (char)uVar1;
  uVar5 = (uint)(short)(sVar3 - (uVar4 & 0xffc0));
  if (0 < ((int)(short)uVar4 << 0x12) >> 0x18) {
    _bzero(auStack_98,(ulong)((uVar1 & 0x7f) << 3));
  }
  if ((int)uVar5 < 1) {
    if (0 < iVar19) {
      _memcpy(auStack_98 + cVar17,param_4,
              -(param_5 >> 0x1f & 1) & 0xfffffff800000000 | (param_5 & 0xffffffff) << 3);
    }
  }
  else if (iVar19 != 0) {
    uVar15 = 0;
    lVar13 = (long)iVar19;
    puVar7 = auStack_98 + cVar17;
    do {
      uVar16 = *param_4;
      *puVar7 = uVar16 << ((ulong)uVar5 & 0x3f) | uVar15;
      uVar15 = uVar16 >> ((ulong)(0x40 - uVar5) & 0x3f);
      lVar13 = lVar13 + -1;
      puVar7 = puVar7 + 1;
      param_4 = param_4 + 1;
    } while (lVar13 != 0);
  }
  if ((int)uVar20 < 0) {
    uVar15 = 1;
  }
  else {
    lVar13 = (long)iVar19 + -1;
    puVar7 = auStack_98 + iVar19;
    uVar15 = 1;
    do {
      if (iVar19 < 1) {
        bVar6 = uVar15 == 0;
        auStack_98[lVar13] = auStack_98[lVar13] | auStack_98[iVar19] << 0x3f;
      }
      else {
        cVar17 = '\0';
        uVar16 = 0;
        puVar8 = local_e8[uVar15];
        puVar10 = local_e8[uVar15 ^ 1];
        do {
          lVar12 = (long)cVar17;
          uVar18 = auStack_98[lVar12] + uVar16;
          if (uVar18 != 0) {
            uVar16 = (ulong)(*(ulong *)(puVar8 + lVar12 * 8) < uVar18);
          }
          *(ulong *)(puVar10 + lVar12 * 8) = *(ulong *)(puVar8 + lVar12 * 8) - uVar18;
          cVar17 = cVar17 + '\x01';
        } while ((int)cVar17 < iVar19 * 2);
        uVar18 = 0;
        puVar9 = puVar7;
        do {
          puVar9 = puVar9 + -1;
          uVar11 = *puVar9;
          *puVar9 = uVar18 | uVar11 >> 1;
          uVar18 = uVar11 << 0x3f;
        } while (auStack_98 < puVar9);
        uVar18 = 0;
        auStack_98[lVar13] = auStack_98[lVar13] | *puVar7 << 0x3f;
        puVar9 = puVar7 + iVar19;
        do {
          puVar9 = puVar9 + -1;
          uVar11 = *puVar9;
          *puVar9 = uVar18 | uVar11 >> 1;
          uVar18 = uVar11 << 0x3f;
        } while (puVar7 < puVar9);
        bVar6 = uVar15 == uVar16;
      }
      uVar15 = (ulong)bVar6;
      sVar3 = (short)uVar20;
      uVar20 = uVar20 - 1;
    } while (0 < sVar3);
  }
  if (0 < iVar19) {
    lVar13 = (long)iVar19;
    puVar14 = (undefined8 *)local_e8[uVar15];
    do {
      *param_1 = *puVar14;
      lVar13 = lVar13 + -1;
      puVar14 = puVar14 + 1;
      param_1 = param_1 + 1;
    } while (lVar13 != 0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

