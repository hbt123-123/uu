// rea decompile_all
// name: FUN_1006a22dc
// address: 0x1006a22dc
// body: available
// range: 0x1006a22dc-0x1006a28df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Type propagation algorithm not settling */

long FUN_1006a22dc(long param_1,long param_2,string *param_3)

{
  code *******pppppppcVar1;
  code ****ppppcVar2;
  void *pvVar3;
  size_t sVar4;
  string *psVar5;
  char *******pppppppcVar6;
  char ******ppppppcVar7;
  undefined4 uVar8;
  char cVar9;
  char ******ppppppcVar10;
  code *******pppppppcVar11;
  uint uVar12;
  undefined3 uVar13;
  char *******pppppppcVar14;
  char *******pppppppcVar15;
  ulong uVar16;
  long lVar17;
  ulong uVar18;
  size_t sVar19;
  code *******pppppppcVar20;
  code *******pppppppcVar21;
  code *******pppppppcVar22;
  code *******pppppppcVar23;
  string *this;
  char *******pppppppcVar24;
  char cVar25;
  undefined3 local_d0;
  undefined1 uStack_cd;
  undefined4 local_c8;
  undefined4 uStack_c4;
  char ******ppppppcStack_c0;
  undefined7 local_b8;
  char cStack_b1;
  char *******local_b0;
  char ******ppppppcStack_a8;
  undefined8 local_a0;
  code *******local_90;
  code ****ppppcStack_88;
  code ****local_80;
  code *****local_70;
  code *****pppppcStack_68;
  undefined8 local_60;
  
  local_70 = (code *****)0x0;
  pppppcStack_68 = (code *****)0x0;
  local_60 = 0;
  FUN_1006a1ec4(param_1,(void *)(param_1 + 8),param_2,param_3,&local_70);
  lVar17 = (long)*(char *)(param_1 + 0x6f);
  if (lVar17 < 0) {
    lVar17 = *(long *)(param_1 + 0x60);
  }
  this = (string *)(param_1 + 0x58);
  if (lVar17 != 0) {
    FUN_1006a1ec4();
  }
  if (local_70 == pppppcStack_68) {
    lVar17 = 0;
    goto LAB_1006a28b0;
  }
  local_90 = (code *******)FUN_1006a28e0;
  FUN_1006a587c(local_70,pppppcStack_68,&local_90,
                LZCOUNT(((long)pppppcStack_68 - (long)local_70 >> 3) * -0x5555555555555555) * -2 +
                0x7e,1);
  if (*(char *)((long)local_70 + 0x17) < '\0') {
    FUN_100384eb8(&local_90,*local_70,local_70[1]);
  }
  else {
    ppppcStack_88 = local_70[1];
    local_90 = (code *******)*local_70;
    local_80 = local_70[2];
  }
  std::operator+(".",param_3);
  ppppcVar2 = ppppcStack_88;
  pppppppcVar11 = local_90;
  if (-1 < (long)local_80) {
    ppppcVar2 = (code ****)((ulong)local_80 >> 0x38);
    pppppppcVar11 = (code *******)&local_90;
  }
  ppppppcVar7 = ppppppcStack_a8;
  pppppppcVar24 = local_b0;
  if (-1 < (long)local_a0) {
    ppppppcVar7 = (char ******)(local_a0 >> 0x38);
    pppppppcVar24 = (char *******)&local_b0;
  }
  pppppppcVar1 = (code *******)((long)pppppppcVar11 + (long)ppppcVar2);
  pppppppcVar21 = pppppppcVar1;
  if ((ppppcVar2 != (code ****)0x0) && (ppppppcVar7 != (char ******)0x0)) {
    pppppppcVar22 = pppppppcVar11;
    pppppppcVar23 = pppppppcVar11;
    pppppppcVar20 = pppppppcVar1;
    do {
      while (pppppppcVar23 = (code *******)((long)pppppppcVar23 + 1), pppppppcVar15 = pppppppcVar24,
            ppppppcVar10 = ppppppcVar7, *(char *)pppppppcVar22 == *(char *)pppppppcVar24) {
        do {
          pppppppcVar15 = (char *******)((long)pppppppcVar15 + 1);
          pppppppcVar21 = pppppppcVar22;
          if ((char ******)((long)ppppppcVar10 - 1U) == (char ******)0x0) break;
          pppppppcVar21 = pppppppcVar20;
          if (pppppppcVar23 == pppppppcVar1) goto LAB_1006a249c;
          cVar25 = *(char *)pppppppcVar23;
          pppppppcVar23 = (code *******)((long)pppppppcVar23 + 1);
          ppppppcVar10 = (char ******)((long)ppppppcVar10 - 1U);
        } while (cVar25 == *(char *)pppppppcVar15);
        pppppppcVar22 = (code *******)((long)pppppppcVar22 + 1);
        pppppppcVar23 = pppppppcVar22;
        pppppppcVar20 = pppppppcVar21;
        if (pppppppcVar22 == pppppppcVar1) goto LAB_1006a249c;
      }
      pppppppcVar22 = (code *******)((long)pppppppcVar22 + 1);
      pppppppcVar21 = pppppppcVar20;
    } while (pppppppcVar22 != pppppppcVar1);
  }
LAB_1006a249c:
  uVar18 = (long)pppppppcVar21 - (long)pppppppcVar11;
  if (pppppppcVar21 == pppppppcVar1 && ppppppcVar7 != (char ******)0x0) {
    uVar18 = 0xffffffffffffffff;
  }
  if ((long)local_a0 < 0) {
    operator_delete(local_b0);
  }
  uVar16 = (ulong)*(char *)(param_2 + 0x17);
  if ((long)uVar16 < 0) {
    uVar16 = *(ulong *)(param_2 + 8);
  }
  if (uVar18 == uVar16) {
    lVar17 = 0;
  }
  else {
    std::string::string(this,(string *)&local_b0,(ulong)&local_90,uVar16,
                        (allocator *)(uVar18 - uVar16));
    FUN_1006928dc(&local_c8,"_");
    pppppppcVar24 = (char *******)&local_b0;
    FUN_100693888(pppppppcVar24,&local_c8);
    if (cStack_b1 < '\0') {
      operator_delete((void *)CONCAT44(uStack_c4,local_c8));
    }
    if ((int)pppppppcVar24 != 0) {
      std::string::string(this,(string *)&local_c8,(ulong)&local_b0,1,
                          (allocator *)0xffffffffffffffff);
      if ((long)local_a0 < 0) {
        operator_delete(local_b0);
      }
      local_b0 = (char *******)CONCAT44(uStack_c4,local_c8);
      ppppppcStack_a8 = ppppppcStack_c0;
      local_a0 = CONCAT17(cStack_b1,local_b8);
    }
    pppppppcVar24 = local_b0;
    if ((long)local_a0 < 0) {
      lVar17 = _atol((char *)local_b0);
      operator_delete(pppppppcVar24);
    }
    else {
      lVar17 = _atol((char *)&local_b0);
    }
  }
  sVar4 = *(size_t *)(param_1 + 0x10);
  if (-1 < (char)*(byte *)(param_1 + 0x1f)) {
    sVar4 = (ulong)*(byte *)(param_1 + 0x1f);
  }
  FUN_1006a5804(&local_b0,sVar4 + 1,&local_c8);
  pppppppcVar24 = local_b0;
  if (-1 < (long)local_a0) {
    pppppppcVar24 = (char *******)&local_b0;
  }
  if (sVar4 != 0) {
    pvVar3 = *(void **)(param_1 + 8);
    if (-1 < *(char *)(param_1 + 0x1f)) {
      pvVar3 = (void *)(param_1 + 8);
    }
    _memmove(pppppppcVar24,pvVar3,sVar4);
  }
  ((char *)((long)pppppppcVar24 + sVar4))[0] = '/';
  ((char *)((long)pppppppcVar24 + sVar4))[1] = '\0';
  pppppppcVar11 = local_90;
  if (-1 < (long)local_80) {
    pppppppcVar11 = (code *******)&local_90;
  }
  pppppppcVar24 = (char *******)&local_b0;
  std::string::append((char *)pppppppcVar24,(ulong)pppppppcVar11);
  pppppppcVar15 = (char *******)*pppppppcVar24;
  ppppppcVar7 = pppppppcVar24[1];
  uVar8 = *(undefined4 *)((long)pppppppcVar24 + 0x13);
  local_d0 = (undefined3)*(undefined4 *)(pppppppcVar24 + 2);
  cVar25 = *(char *)((long)pppppppcVar24 + 0x17);
  pppppppcVar24[1] = (char ******)0x0;
  pppppppcVar24[2] = (char ******)0x0;
  *pppppppcVar24 = (char ******)0x0;
  if ((long)local_a0 < 0) {
    operator_delete(local_b0);
    if (-1 < cVar25) goto LAB_1006a2630;
LAB_1006a2658:
    FUN_100384eb8(&local_b0,pppppppcVar15,ppppppcVar7);
  }
  else {
    if (cVar25 < '\0') goto LAB_1006a2658;
LAB_1006a2630:
    local_a0._0_7_ = CONCAT43(uVar8,local_d0);
    local_a0 = CONCAT17(cVar25,(undefined7)local_a0);
    local_b0 = pppppppcVar15;
    ppppppcStack_a8 = ppppppcVar7;
  }
  FUN_10069a9a4(&local_c8,&local_b0,0);
  uVar12 = local_c8;
  if ((long)local_a0 < 0) {
    operator_delete(local_b0);
  }
  if (uVar12 < 2) {
    pppppppcVar24 = (char *******)0x0;
  }
  else {
    if (cVar25 < '\0') {
      FUN_100384eb8(&local_b0,pppppppcVar15,ppppppcVar7);
    }
    else {
      local_a0._0_7_ = CONCAT43(uVar8,local_d0);
      local_a0 = CONCAT17(cVar25,(undefined7)local_a0);
      local_b0 = pppppppcVar15;
      ppppppcStack_a8 = ppppppcVar7;
    }
    pppppppcVar24 = (char *******)&local_b0;
    FUN_100699a78(pppppppcVar24,0);
    if ((long)local_a0 < 0) {
      operator_delete(local_b0);
    }
  }
  sVar19 = (size_t)*(char *)(param_1 + 0x6f);
  sVar4 = sVar19;
  if ((long)sVar19 < 0) {
    sVar4 = *(size_t *)(param_1 + 0x60);
  }
  if (sVar4 != 0) {
    sVar4 = *(size_t *)(param_1 + 0x60);
    if (-1 < *(char *)(param_1 + 0x6f)) {
      sVar4 = sVar19;
    }
    FUN_1006a5804(&local_b0,sVar4 + 1,&local_c8);
    pppppppcVar14 = local_b0;
    if (-1 < (long)local_a0) {
      pppppppcVar14 = (char *******)&local_b0;
    }
    if (sVar4 != 0) {
      psVar5 = *(string **)(param_1 + 0x58);
      if (-1 < *(char *)(param_1 + 0x6f)) {
        psVar5 = this;
      }
      _memmove(pppppppcVar14,psVar5,sVar4);
    }
    ((char *)((long)pppppppcVar14 + sVar4))[0] = '/';
    ((char *)((long)pppppppcVar14 + sVar4))[1] = '\0';
    pppppppcVar11 = local_90;
    if (-1 < (long)local_80) {
      pppppppcVar11 = (code *******)&local_90;
    }
    pppppppcVar14 = (char *******)&local_b0;
    std::string::append((char *)pppppppcVar14,(ulong)pppppppcVar11);
    pppppppcVar6 = (char *******)*pppppppcVar14;
    ppppppcVar7 = pppppppcVar14[1];
    local_c8._0_3_ = (undefined3)*(undefined4 *)(pppppppcVar14 + 2);
    local_c8._3_1_ = (undefined1)*(undefined4 *)((long)pppppppcVar14 + 0x13);
    uStack_c4._0_3_ = (undefined3)((uint)*(undefined4 *)((long)pppppppcVar14 + 0x13) >> 8);
    cVar9 = *(char *)((long)pppppppcVar14 + 0x17);
    *pppppppcVar14 = (char ******)0x0;
    pppppppcVar14[1] = (char ******)0x0;
    pppppppcVar14[2] = (char ******)0x0;
    if (cVar25 < '\0') {
      operator_delete(pppppppcVar15);
    }
    uVar13 = (undefined3)uStack_c4;
    local_d0 = (undefined3)local_c8;
    uStack_cd = (undefined1)(local_c8 >> 0x18);
    if ((long)local_a0 < 0) {
      operator_delete(local_b0);
      if (-1 < cVar9) goto LAB_1006a27c0;
LAB_1006a27fc:
      FUN_100384eb8(&local_b0,pppppppcVar6,ppppppcVar7);
    }
    else {
      if (cVar9 < '\0') goto LAB_1006a27fc;
LAB_1006a27c0:
      local_a0._0_7_ = CONCAT43(CONCAT31(uVar13,uStack_cd),local_d0);
      local_a0 = CONCAT17(cVar9,(undefined7)local_a0);
      local_b0 = pppppppcVar6;
      ppppppcStack_a8 = ppppppcVar7;
    }
    FUN_10069a9a4(&local_c8,&local_b0,0);
    uVar12 = local_c8;
    if ((long)local_a0 < 0) {
      operator_delete(local_b0);
    }
    pppppppcVar15 = pppppppcVar6;
    cVar25 = cVar9;
    if (1 < uVar12) {
      if (cVar9 < '\0') {
        FUN_100384eb8(&local_b0,pppppppcVar6,ppppppcVar7);
      }
      else {
        local_a0._0_7_ = CONCAT43(CONCAT31(uVar13,uStack_cd),local_d0);
        local_a0 = CONCAT17(cVar9,(undefined7)local_a0);
        local_b0 = pppppppcVar6;
        ppppppcStack_a8 = ppppppcVar7;
      }
      pppppppcVar14 = (char *******)&local_b0;
      FUN_100699a78(pppppppcVar14,0);
      pppppppcVar24 = (char *******)((long)pppppppcVar14 + (long)pppppppcVar24);
      if ((long)local_a0 < 0) {
        operator_delete(local_b0);
      }
    }
  }
  if (*(char ********)(param_1 + 0x248) < pppppppcVar24) {
    lVar17 = lVar17 + 1;
  }
  if (cVar25 < '\0') {
    operator_delete(pppppppcVar15);
  }
  if ((long)local_80 < 0) {
    operator_delete(local_90);
  }
LAB_1006a28b0:
  local_90 = (code *******)&local_70;
  FUN_1006a5778(&local_90);
  return lVar17;
}

