// rea decompile_all
// name: FUN_1006ac30c
// address: 0x1006ac30c
// body: available
// range: 0x1006ac30c-0x1006ac86f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006ac86c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006ac30c(long param_1,undefined8 param_2,undefined8 param_3,long param_4,char *param_5)

{
  char *pcVar1;
  undefined1 *puVar2;
  int iVar3;
  char cVar4;
  short sVar5;
  int iVar6;
  char cVar7;
  int iVar8;
  ulong uVar9;
  uint uVar10;
  bool bVar11;
  ulong *puVar12;
  ulong *puVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  long *plVar18;
  size_t sVar19;
  long lVar20;
  long lVar21;
  ulong uVar22;
  ulong auStack_10f0 [4];
  ulong auStack_10d0 [456];
  ulong local_290 [4];
  ulong local_270 [4];
  undefined1 auStack_250 [64];
  long local_210;
  char *pcStack_208;
  undefined1 *local_200;
  undefined1 *puStack_1f8;
  undefined1 auStack_1f0 [32];
  undefined8 local_1d0 [4];
  undefined8 local_1b0 [4];
  undefined8 local_190 [4];
  ulong local_170 [4];
  undefined1 auStack_150 [64];
  undefined8 local_110 [4];
  ulong auStack_f0 [4];
  ulong auStack_d0 [4];
  undefined1 auStack_b0 [64];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  cVar4 = *param_5;
  lVar17 = (long)cVar4;
  sVar5 = *(short *)(param_5 + 2);
  iVar3 = sVar5 + 0x7e;
  if (-0x40 < sVar5) {
    iVar3 = sVar5 + 0x3f;
  }
  cVar7 = (char)(iVar3 >> 6);
  lVar21 = (long)cVar7 + -1;
  local_170[lVar21] = 0;
  local_270[lVar21] = 0;
  local_290[lVar21] = 0;
  lVar20 = (long)param_5[1];
  FUN_1006aaf60(auStack_250,param_1,lVar20);
  FUN_1006aaf60(auStack_250 + lVar17 * 8,param_1 + lVar20,lVar20);
  FUN_1006aaf60(local_270,param_4,lVar20);
  FUN_1006aaf60(local_290,param_4 + lVar20,lVar20);
  if (0 < lVar17) {
    lVar20 = 0;
    uVar14 = 0;
    sVar19 = lVar17 * 8;
    do {
      uVar14 = *(ulong *)((long)local_270 + lVar20) | uVar14;
      lVar20 = lVar20 + 8;
    } while (sVar19 - lVar20 != 0);
    if (uVar14 != 0) {
      lVar20 = 0;
      uVar14 = 0;
      do {
        uVar14 = *(ulong *)((long)local_290 + lVar20) | uVar14;
        lVar20 = lVar20 + 8;
      } while (sVar19 - lVar20 != 0);
      if (uVar14 != 0) {
        plVar18 = (long *)(param_5 + 0x28);
        uVar14 = (ulong)(iVar3 >> 6 & 0xff);
        uVar22 = uVar14 - 1;
        uVar15 = uVar22;
        do {
          if (((uint)uVar15 >> 7 & 1) != 0) break;
          uVar9 = uVar15 & 0x7f;
          uVar16 = uVar22;
          if (local_270[uVar9] < (ulong)plVar18[uVar9]) goto LAB_1006ac4a4;
          uVar15 = uVar15 - 1;
        } while (local_270[uVar9] <= (ulong)plVar18[uVar9]);
      }
    }
  }
LAB_1006ac460:
  bVar11 = false;
LAB_1006ac464:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_70) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail(bVar11);
LAB_1006ac4a4:
  if (((uint)uVar16 >> 7 & 1) != 0) goto LAB_1006ac460;
  uVar15 = uVar16 & 0x7f;
  if ((ulong)plVar18[uVar15] <= local_290[uVar15]) {
    bVar11 = false;
    uVar16 = uVar16 - 1;
    if ((ulong)plVar18[uVar15] < local_290[uVar15]) goto LAB_1006ac464;
    goto LAB_1006ac4a4;
  }
  iVar8 = (int)cVar7;
  FUN_1006ac870(local_110,local_290,plVar18,iVar8);
  auStack_d0[lVar21] = 0;
  FUN_1006acc3c(auStack_d0,param_2,param_3,param_5);
  FUN_1006acd74(auStack_d0,auStack_d0,local_110,plVar18,iVar8);
  FUN_1006acd74(auStack_f0,local_270,local_110,plVar18,iVar8);
  _memcpy(auStack_150,auStack_250,sVar19);
  puVar2 = auStack_150 + lVar17 * 8;
  _memcpy(puVar2,auStack_250 + lVar17 * 8,sVar19);
  pcVar1 = param_5 + 0x48;
  _memcpy(local_1b0,pcVar1,sVar19);
  _memcpy(local_1d0,pcVar1 + lVar17 * 8,sVar19);
  FUN_1006acfd8(local_110,auStack_150,local_1b0,param_5 + 8,lVar17);
  FUN_1006ad04c(local_1b0,local_1d0,auStack_150,puVar2,param_5);
  FUN_1006ac870(local_110,local_110,param_5 + 8,lVar17);
  FUN_1006ad25c(auStack_150,puVar2,local_110,param_5);
  local_210 = 0;
  local_200 = auStack_250;
  puVar12 = auStack_d0;
  pcStack_208 = pcVar1;
  puStack_1f8 = auStack_150;
  FUN_1006ad34c(puVar12,iVar8);
  puVar13 = auStack_f0;
  FUN_1006ad34c(puVar13,iVar8);
  lVar20 = 0;
  iVar3 = (int)puVar12;
  if ((int)puVar12 <= (int)puVar13) {
    iVar3 = (int)puVar13;
  }
  iVar6 = (iVar3 + -1) * 0x10000 >> 0x16;
  uVar15 = (ulong)(uint)(int)(short)(iVar3 + -1);
  lVar21 = (&local_210)
           [-(auStack_f0[iVar6] >> (uVar15 & 0x3f) & 1) & 2 |
            auStack_d0[iVar6] >> (uVar15 & 0x3f) & 1];
  do {
    *(undefined8 *)((long)local_170 + lVar20) = *(undefined8 *)(lVar21 + lVar20);
    lVar20 = lVar20 + 8;
  } while (sVar19 - lVar20 != 0);
  lVar20 = 0;
  do {
    *(undefined8 *)((long)local_190 + lVar20) = *(undefined8 *)(lVar21 + lVar17 * 8 + lVar20);
    lVar20 = lVar20 + 8;
  } while (sVar19 - lVar20 != 0);
  _bzero(local_110,sVar19);
  local_110[0] = 1;
  if ((iVar3 - 2U >> 0xf & 1) == 0) {
    uVar10 = (int)(short)(iVar3 - 2U);
    do {
      (**(code **)(param_5 + 0xa8))(local_170,local_190,local_110,param_5);
      lVar20 = (&local_210)
               [-(auStack_f0[uVar10 >> 6] >> ((ulong)uVar10 & 0x3f) & 1) & 2 |
                auStack_d0[uVar10 >> 6] >> ((ulong)uVar10 & 0x3f) & 1];
      if (lVar20 != 0) {
        lVar21 = 0;
        do {
          *(undefined8 *)((long)local_1b0 + lVar21) = *(undefined8 *)(lVar20 + lVar21);
          lVar21 = lVar21 + 8;
        } while (sVar19 - lVar21 != 0);
        lVar21 = 0;
        do {
          *(undefined8 *)((long)local_1d0 + lVar21) = *(undefined8 *)(lVar20 + lVar17 * 8 + lVar21);
          lVar21 = lVar21 + 8;
        } while (sVar19 - lVar21 != 0);
        FUN_1006ad25c(local_1b0,local_1d0,local_110,param_5);
        FUN_1006acfd8(auStack_1f0,local_170,local_1b0,param_5 + 8,lVar17);
        FUN_1006ad04c(local_1b0,local_1d0,local_170,local_190,param_5);
        FUN_1006af210(auStack_b0,local_110,auStack_1f0,(long)*param_5);
        (**(code **)(param_5 + 0xc0))(local_110,auStack_b0);
      }
      bVar11 = 0 < (int)uVar10;
      uVar10 = uVar10 - 1;
    } while (bVar11);
  }
  FUN_1006ac870(local_110,local_110,param_5 + 8,lVar17);
  FUN_1006ad25c(local_170,local_190,local_110,param_5);
  while (((uint)uVar22 >> 7 & 1) == 0) {
    uVar15 = uVar22 & 0x7f;
    if (local_170[uVar15] < (ulong)plVar18[uVar15]) goto LAB_1006ac82c;
    uVar22 = uVar22 - 1;
    if ((ulong)plVar18[uVar15] < local_170[uVar15]) break;
  }
  if (0 < iVar8) {
    uVar15 = 0;
    puVar12 = local_170;
    do {
      uVar22 = *plVar18 + uVar15;
      if (uVar22 != 0) {
        uVar15 = (ulong)(*puVar12 < uVar22);
      }
      *puVar12 = *puVar12 - uVar22;
      uVar14 = uVar14 - 1;
      puVar12 = puVar12 + 1;
      plVar18 = plVar18 + 1;
    } while (uVar14 != 0);
  }
LAB_1006ac82c:
  uVar14 = 0;
  lVar17 = ((ulong)((int)cVar4 - 1) & 0xff) << 3;
  do {
    uVar14 = *(ulong *)((long)local_270 + lVar17) ^ *(ulong *)((long)local_170 + lVar17) | uVar14;
    lVar17 = lVar17 + -8;
  } while (lVar17 != -8);
  bVar11 = uVar14 == 0;
  goto LAB_1006ac464;
}

