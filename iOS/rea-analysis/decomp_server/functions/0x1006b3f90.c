// rea decompile_all
// name: FUN_1006b3f90
// address: 0x1006b3f90
// body: available
// range: 0x1006b3f90-0x1006b4393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1006b4390 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006b3f90(long param_1,int *param_2,undefined8 param_3,undefined8 param_4)

{
  int iVar1;
  short sVar2;
  short sVar3;
  short sVar4;
  short sVar5;
  short sVar6;
  uint uVar7;
  char *pcVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  ulong uVar12;
  byte *pbVar13;
  char cVar14;
  short *psVar15;
  long lVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  ushort *puVar20;
  char *pcVar21;
  undefined8 uVar22;
  undefined8 uVar23;
  undefined8 local_1c0;
  short local_1b8 [16];
  ushort local_198 [16];
  undefined1 auStack_178 [4];
  int local_174 [15];
  char acStack_138 [8];
  undefined8 auStack_130 [31];
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_1c0 = 0;
  pcVar8 = acStack_138;
  FUN_1006af954(pcVar8,0x100,auStack_178,&local_1c0,(long)&local_1c0 + 4,param_3,param_4);
  if ((char *)0xffffffffffffff88 < pcVar8) goto LAB_1006b4364;
  uVar10 = (ulong)local_1c0._4_4_;
  if (0xc < local_1c0._4_4_) goto LAB_1006b4364;
  uVar9 = local_1c0 & 0xffffffff;
  if (*param_2 + 1U < (uint)local_1c0) goto LAB_1006b4364;
  if (local_1c0._4_4_ != 0) {
    uVar12 = 0;
    iVar17 = 0;
    do {
      iVar1 = local_174[uVar12];
      local_174[uVar12] = iVar17;
      iVar17 = (iVar1 << (ulong)((uint)uVar12 & 0x1f)) + iVar17;
      uVar12 = uVar12 + 1;
    } while (uVar10 != uVar12);
  }
  if ((uint)local_1c0 == 0) {
    local_198[0] = 0;
    local_198[1] = 0;
    local_198[2] = 0;
    local_198[3] = 0;
    local_198[4] = 0;
    local_198[5] = 0;
    local_198[6] = 0;
    local_198[7] = 0;
    local_198[0xc] = 0;
    local_198[0xd] = 0;
    local_198[8] = 0;
    local_198[9] = 0;
    local_198[10] = 0;
    local_198[0xb] = 0;
    local_1b8[0] = 0;
    local_1b8[1] = 0;
    local_1b8[2] = 0;
    local_1b8[3] = 0;
    local_1b8[4] = 0;
    local_1b8[5] = 0;
    local_1b8[6] = 0;
    local_1b8[7] = 0;
    local_1b8[0xc] = 0;
    local_1b8[0xd] = 0;
    local_1b8[8] = 0;
    local_1b8[9] = 0;
    local_1b8[10] = 0;
    local_1b8[0xb] = 0;
  }
  else {
    cVar14 = (char)(local_1c0 >> 0x20) + '\x01';
    if ((uint)local_1c0 < 8) {
      uVar18 = 0;
LAB_1006b41b8:
      lVar19 = uVar9 - uVar18;
      pcVar8 = acStack_138 + uVar18;
      pcVar21 = (char *)(param_1 + uVar18 * 4 + 2);
      do {
        *pcVar21 = cVar14 - *pcVar8;
        lVar19 = lVar19 + -1;
        pcVar8 = pcVar8 + 1;
        pcVar21 = pcVar21 + 4;
      } while (lVar19 != 0);
    }
    else if ((uint)local_1c0 < 0x10) {
      uVar12 = 0;
LAB_1006b408c:
      uVar18 = local_1c0 & 0xfffffff8;
      lVar19 = uVar12 - uVar18;
      pcVar8 = (char *)(param_1 + uVar12 * 4 + 0x12);
      pcVar21 = acStack_138 + uVar12;
      do {
        uVar22 = *(undefined8 *)pcVar21;
        pcVar8[-0x10] = cVar14 - (char)uVar22;
        pcVar8[-0xc] = cVar14 - (char)((ulong)uVar22 >> 8);
        pcVar8[-8] = cVar14 - (char)((ulong)uVar22 >> 0x10);
        pcVar8[-4] = cVar14 - (char)((ulong)uVar22 >> 0x18);
        *pcVar8 = cVar14 - (char)((ulong)uVar22 >> 0x20);
        pcVar8[4] = cVar14 - (char)((ulong)uVar22 >> 0x28);
        pcVar8[8] = cVar14 - (char)((ulong)uVar22 >> 0x30);
        pcVar8[0xc] = cVar14 - (char)((ulong)uVar22 >> 0x38);
        pcVar8 = pcVar8 + 0x20;
        lVar19 = lVar19 + 8;
        pcVar21 = pcVar21 + 8;
      } while (lVar19 != 0);
      if (uVar18 != uVar9) goto LAB_1006b41b8;
    }
    else {
      uVar18 = local_1c0 & 0xfffffff0;
      pcVar8 = (char *)(param_1 + 0x22);
      pcVar21 = acStack_138;
      uVar12 = uVar18;
      do {
        uVar23 = *(undefined8 *)(pcVar21 + 8);
        uVar22 = *(undefined8 *)pcVar21;
        pcVar8[-0x20] = cVar14 - (char)uVar22;
        pcVar8[-0x1c] = cVar14 - (char)((ulong)uVar22 >> 8);
        pcVar8[-0x18] = cVar14 - (char)((ulong)uVar22 >> 0x10);
        pcVar8[-0x14] = cVar14 - (char)((ulong)uVar22 >> 0x18);
        pcVar8[-0x10] = cVar14 - (char)((ulong)uVar22 >> 0x20);
        pcVar8[-0xc] = cVar14 - (char)((ulong)uVar22 >> 0x28);
        pcVar8[-8] = cVar14 - (char)((ulong)uVar22 >> 0x30);
        pcVar8[-4] = cVar14 - (char)((ulong)uVar22 >> 0x38);
        *pcVar8 = cVar14 - (char)uVar23;
        pcVar8[4] = cVar14 - (char)((ulong)uVar23 >> 8);
        pcVar8[8] = cVar14 - (char)((ulong)uVar23 >> 0x10);
        pcVar8[0xc] = cVar14 - (char)((ulong)uVar23 >> 0x18);
        pcVar8[0x10] = cVar14 - (char)((ulong)uVar23 >> 0x20);
        pcVar8[0x14] = cVar14 - (char)((ulong)uVar23 >> 0x28);
        pcVar8[0x18] = cVar14 - (char)((ulong)uVar23 >> 0x30);
        pcVar8[0x1c] = cVar14 - (char)((ulong)uVar23 >> 0x38);
        pcVar8 = pcVar8 + 0x40;
        uVar12 = uVar12 - 0x10;
        pcVar21 = pcVar21 + 0x10;
      } while (uVar12 != 0);
      if (uVar18 != uVar9) {
        uVar12 = uVar18;
        if (((uint)local_1c0 >> 3 & 1) == 0) goto LAB_1006b41b8;
        goto LAB_1006b408c;
      }
    }
    local_198[0] = 0;
    local_198[1] = 0;
    local_198[2] = 0;
    local_198[3] = 0;
    local_198[4] = 0;
    local_198[5] = 0;
    local_198[6] = 0;
    local_198[7] = 0;
    local_198[0xc] = 0;
    local_198[0xd] = 0;
    local_198[8] = 0;
    local_198[9] = 0;
    local_198[10] = 0;
    local_198[0xb] = 0;
    local_1b8[0] = 0;
    local_1b8[1] = 0;
    local_1b8[2] = 0;
    local_1b8[3] = 0;
    local_1b8[4] = 0;
    local_1b8[5] = 0;
    local_1b8[6] = 0;
    local_1b8[7] = 0;
    local_1b8[0xc] = 0;
    local_1b8[0xd] = 0;
    local_1b8[8] = 0;
    local_1b8[9] = 0;
    local_1b8[10] = 0;
    local_1b8[0xb] = 0;
    uVar12 = uVar9;
    pbVar13 = (byte *)(param_1 + 2);
    do {
      local_198[*pbVar13] = local_198[*pbVar13] + 1;
      uVar12 = uVar12 - 1;
      pbVar13 = pbVar13 + 4;
    } while (uVar12 != 0);
  }
  local_1b8[0xc] = 0;
  local_1b8[0xd] = 0;
  local_1b8[8] = 0;
  local_1b8[9] = 0;
  local_1b8[10] = 0;
  local_1b8[0xb] = 0;
  local_1b8[4] = 0;
  local_1b8[5] = 0;
  local_1b8[6] = 0;
  local_1b8[7] = 0;
  local_1b8[0] = 0;
  local_1b8[1] = 0;
  local_1b8[2] = 0;
  local_1b8[3] = 0;
  local_1b8[uVar10 + 1] = 0;
  if (local_1c0._4_4_ != 0) {
    uVar11 = 0;
    psVar15 = local_1b8 + uVar10;
    puVar20 = local_198 + uVar10;
    do {
      *psVar15 = (short)uVar11;
      uVar11 = *puVar20 + uVar11 >> 1 & 0x7fff;
      uVar7 = (int)uVar10 - 1;
      uVar10 = (ulong)uVar7;
      psVar15 = psVar15 + -1;
      puVar20 = puVar20 + -1;
    } while (uVar7 != 0);
  }
  if ((uint)local_1c0 != 0) {
    lVar16 = 0;
    uVar10 = (uVar9 - 1) % 6;
    lVar19 = 0;
    if (uVar10 != 5) {
      lVar19 = uVar10 + 1;
    }
    if (5 < (uint)local_1c0) {
      lVar16 = 0;
      psVar15 = (short *)(param_1 + 0xc);
      do {
        sVar2 = local_1b8[*(byte *)(psVar15 + -5)];
        local_1b8[*(byte *)(psVar15 + -5)] = sVar2 + 1;
        sVar3 = local_1b8[*(byte *)(psVar15 + -3)];
        local_1b8[*(byte *)(psVar15 + -3)] = sVar3 + 1;
        sVar4 = local_1b8[*(byte *)(psVar15 + -1)];
        local_1b8[*(byte *)(psVar15 + -1)] = sVar4 + 1;
        sVar5 = local_1b8[*(byte *)(psVar15 + 1)];
        local_1b8[*(byte *)(psVar15 + 1)] = sVar5 + 1;
        sVar6 = local_1b8[*(byte *)(psVar15 + 3)];
        local_1b8[*(byte *)(psVar15 + 3)] = sVar6 + 1;
        psVar15[-6] = sVar2;
        psVar15[-4] = sVar3;
        psVar15[-2] = sVar4;
        *psVar15 = sVar5;
        psVar15[2] = sVar6;
        sVar2 = local_1b8[*(byte *)(psVar15 + 5)];
        local_1b8[*(byte *)(psVar15 + 5)] = sVar2 + 1;
        psVar15[4] = sVar2;
        psVar15 = psVar15 + 0xc;
        lVar16 = lVar16 + -6;
      } while (lVar19 - uVar9 != lVar16);
      lVar16 = -lVar16;
    }
    if (uVar10 != 5) {
      pbVar13 = (byte *)(param_1 + lVar16 * 4 + 2);
      do {
        sVar2 = local_1b8[*pbVar13];
        local_1b8[*pbVar13] = sVar2 + 1;
        *(short *)(pbVar13 + -2) = sVar2;
        pbVar13 = pbVar13 + 4;
        lVar19 = lVar19 + -1;
      } while (lVar19 != 0);
    }
  }
  *param_2 = (uint)local_1c0 - 1;
LAB_1006b4364:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

