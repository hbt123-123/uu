// rea decompile_all
// name: FUN_10074d300
// address: 0x10074d300
// body: available
// range: 0x10074d300-0x10074d6e3 inclusive
// range: 0x10074d6e8-0x10074d6ef inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10074d6e0 to 0x10074d7cc FUN_10074d7cc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Ghidra Listing reports a terminal call at 0x10074d6ec to 0x10074d7cc FUN_10074d7cc (external=false, thunk=false, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10074d300(ulong *param_1,long *param_2,ulong param_3)

{
  char *pcVar1;
  char *******pppppppcVar2;
  char *******pppppppcVar3;
  string *psVar4;
  char *******pppppppcVar5;
  ulong uVar6;
  ulong *puVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  char *******pppppppcVar11;
  char *******pppppppcVar12;
  ulong uVar13;
  char *******pppppppcVar14;
  string *psVar15;
  int iVar16;
  ulong local_a8;
  void *local_a0;
  ulong uStack_98;
  ulong local_90;
  int local_88;
  char ******local_80;
  ulong uStack_78;
  byte local_69;
  ulong *local_68;
  ulong *puStack_60;
  ulong *local_58;
  ulong *local_50;
  ulong *local_48;
  
  uVar6 = param_3;
  FUN_10079b114();
  psVar15 = (string *)*param_2;
  psVar4 = (string *)param_2[1];
  iVar16 = (int)uVar6;
  if (psVar15 == psVar4) {
LAB_10074d358:
    if (psVar15 != psVar4) {
      *param_1 = *(ulong *)(psVar15 + 8);
      std::string::string(psVar15,(string *)(param_1 + 1));
      *(undefined4 *)(param_1 + 4) = *(undefined4 *)(psVar15 + 0x28);
      return;
    }
  }
  else {
    do {
      if (*(int *)psVar15 == iVar16) goto LAB_10074d358;
      psVar15 = psVar15 + 0x30;
    } while (psVar15 != psVar4);
  }
  psVar15 = (string *)(param_1 + 1);
  *(undefined8 *)psVar15 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  FUN_10079b11c();
  *param_1 = uVar6;
  uVar6 = param_3;
  FUN_10079b244();
  *(int *)(param_1 + 4) = (int)uVar6;
  if ((int)uVar6 == -1) {
    return;
  }
  FUN_10079b12c(&local_80,param_3);
  pppppppcVar5 = (char *******)local_80;
  if (-1 < (char)local_69) {
    uStack_78 = (ulong)local_69;
    pppppppcVar5 = &local_80;
  }
  uVar6 = uStack_78;
  if (8 < uStack_78) {
    uVar6 = 9;
  }
  if (uVar6 == 0) {
LAB_10074d554:
    if (100 < uStack_78) {
      std::string::resize((ulong)&local_80,'d');
    }
    std::string::operator=(psVar15,psVar15);
    local_a8 = *param_1;
    std::string::string(psVar15,(string *)&local_a0);
    local_88 = (int)param_1[4];
    puVar7 = (ulong *)(param_2 + 2);
    piVar8 = (int *)param_2[1];
    if (piVar8 < (int *)*puVar7) {
LAB_10074d5b4:
      *piVar8 = iVar16;
      *(ulong *)(piVar8 + 2) = local_a8;
      *(ulong *)(piVar8 + 8) = local_90;
      *(ulong *)(piVar8 + 6) = uStack_98;
      *(void **)(piVar8 + 4) = local_a0;
      piVar8[10] = local_88;
      param_2[1] = (long)(piVar8 + 0xc);
      goto LAB_10074d6b4;
    }
    lVar9 = (long)piVar8 - *param_2 >> 4;
    uVar6 = lVar9 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_10074d7cc(param_2);
    }
    lVar10 = (long)*puVar7 - *param_2 >> 4;
    uVar13 = lVar10 * 0x5555555555555556;
    if (uVar13 < uVar6 || uVar13 - uVar6 == 0) {
      uVar13 = uVar6;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
      uVar13 = 0x555555555555555;
    }
    local_48 = puVar7;
    FUN_10074d830();
    puStack_60 = puVar7 + lVar9 * 2;
    local_50 = puVar7 + uVar13 * 6;
    *(int *)puStack_60 = iVar16;
    puStack_60[1] = local_a8;
    puStack_60[4] = local_90;
    puStack_60[3] = uStack_98;
    puStack_60[2] = (ulong)local_a0;
    uStack_98 = 0;
    local_90 = 0;
    local_a0 = (void *)0x0;
    *(int *)(puStack_60 + 5) = local_88;
    local_58 = puStack_60 + 6;
    local_68 = puVar7;
    FUN_10074d758(param_2,&local_68);
  }
  else {
    pppppppcVar2 = (char *******)((long)pppppppcVar5 + uVar6);
    pppppppcVar11 = pppppppcVar2;
    pppppppcVar14 = pppppppcVar5;
    do {
      pppppppcVar12 = pppppppcVar11;
      if (*(char *)pppppppcVar14 == 'i') {
        lVar9 = 1;
        do {
          pppppppcVar12 = pppppppcVar14;
          if (lVar9 == 9) break;
          pppppppcVar3 = (char *******)((long)pppppppcVar14 + lVar9);
          pppppppcVar12 = pppppppcVar11;
          if (pppppppcVar3 == pppppppcVar2) goto LAB_10074d44c;
          pcVar1 = "io.sentry" + lVar9;
          lVar9 = lVar9 + 1;
        } while (*(char *)pppppppcVar3 == *pcVar1);
      }
      pppppppcVar14 = (char *******)((long)pppppppcVar14 + 1);
      pppppppcVar11 = pppppppcVar12;
    } while (pppppppcVar14 != pppppppcVar2);
LAB_10074d44c:
    if ((pppppppcVar12 == pppppppcVar2) || (pppppppcVar12 != pppppppcVar5)) goto LAB_10074d554;
    *(undefined4 *)(param_1 + 4) = 0;
    *param_1 = 0;
    local_a8 = 0;
    std::string::string(psVar15,(string *)&local_a0);
    local_88 = (int)param_1[4];
    puVar7 = (ulong *)(param_2 + 2);
    piVar8 = (int *)param_2[1];
    if (piVar8 < (int *)*puVar7) goto LAB_10074d5b4;
    lVar9 = (long)piVar8 - *param_2 >> 4;
    uVar6 = lVar9 * -0x5555555555555555 + 1;
    if (0x555555555555555 < uVar6) {
                    /* WARNING: Subroutine does not return */
      FUN_10074d7cc(param_2);
    }
    lVar10 = (long)*puVar7 - *param_2 >> 4;
    uVar13 = lVar10 * 0x5555555555555556;
    if (uVar13 < uVar6 || uVar13 - uVar6 == 0) {
      uVar13 = uVar6;
    }
    if (0x2aaaaaaaaaaaaa9 < (ulong)(lVar10 * -0x5555555555555555)) {
      uVar13 = 0x555555555555555;
    }
    local_48 = puVar7;
    FUN_10074d830();
    puStack_60 = puVar7 + lVar9 * 2;
    local_50 = puVar7 + uVar13 * 6;
    *(int *)puStack_60 = iVar16;
    puStack_60[1] = 0;
    puStack_60[4] = local_90;
    puStack_60[3] = uStack_98;
    puStack_60[2] = (ulong)local_a0;
    uStack_98 = 0;
    local_90 = 0;
    local_a0 = (void *)0x0;
    *(int *)(puStack_60 + 5) = local_88;
    local_58 = puStack_60 + 6;
    local_68 = puVar7;
    FUN_10074d758(param_2,&local_68);
  }
  FUN_10074d9ac(&local_68);
  if ((long)local_90 < 0) {
    operator_delete(local_a0);
  }
LAB_10074d6b4:
  if ((char)local_69 < '\0') {
    operator_delete(local_80);
  }
  return;
}

