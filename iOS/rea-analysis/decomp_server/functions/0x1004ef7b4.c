// rea decompile_all
// name: FUN_1004ef7b4
// address: 0x1004ef7b4
// body: available
// range: 0x1004ef7b4-0x1004efb77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1004ef7b4(long *param_1,long *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong *puVar3;
  ulong *puVar4;
  long lVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  undefined *puVar11;
  undefined *puVar12;
  ulong uVar13;
  ulong uVar14;
  ulong uVar15;
  ulong uVar16;
  ulong auStack_f8 [3];
  ulong local_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong local_80;
  ulong uStack_78;
  ulong local_70;
  
  lVar5 = *param_1;
  lVar6 = *param_2;
  if ((*(byte *)(param_2 + 1) & 1) == 0) {
    if (lVar5 != lVar6) {
      return 0;
    }
  }
  else if (lVar6 == 0) {
    if (lVar5 != 0) {
      return 0;
    }
  }
  else if (lVar6 == 1) {
    if (lVar5 != 1) {
      return 0;
    }
  }
  else if (lVar5 != 2) {
    return 0;
  }
  uVar15 = param_1[8];
  uVar13 = param_1[7];
  uVar7 = param_1[9];
  uVar16 = param_2[8];
  uVar14 = param_2[7];
  uVar10 = param_2[9];
  local_a0 = uVar14;
  uStack_98 = uVar16;
  local_90 = uVar10;
  local_80 = uVar13;
  uStack_78 = uVar15;
  local_70 = uVar7;
  if (uVar7 >> 0x3c < 0xf) {
    if (0xe < uVar10 >> 0x3c) goto LAB_1004ef948;
    if (((int)uVar13 == (int)uVar14) && ((uVar14 ^ uVar13) >> 0x20 == 0)) {
      FUN_10007f314(&local_80,&local_c0,&DAT_100a9f788,&DAT_100828028);
      FUN_10007f314(&local_a0,&local_c0,&DAT_100a9f788,&DAT_100828028);
      uVar2 = uVar15;
      FUN_1000094a4(uVar15,uVar7,uVar16,uVar10);
      switchD_10004048c::caseD_6d(uVar14,uVar16,uVar10);
      if ((uVar2 & 1) != 0) goto LAB_1004ef884;
    }
    else {
      puVar11 = &DAT_100a9f788;
      puVar12 = &DAT_100828028;
      FUN_10007f314(&local_80,&local_c0,&DAT_100a9f788,&DAT_100828028);
      puVar3 = &local_a0;
      puVar4 = &local_c0;
LAB_1004efa68:
      FUN_10007f314(puVar3,puVar4,puVar11,puVar12);
      switchD_10004048c::caseD_6d(uVar14,uVar16,uVar10);
    }
LAB_1004efa90:
    switchD_10004048c::caseD_6d(uVar13,uVar15,uVar7);
  }
  else {
    if (uVar10 >> 0x3c < 0xf) {
LAB_1004ef948:
      puVar11 = &DAT_100a9f788;
      puVar12 = &DAT_100828028;
      FUN_10007f314(&local_80,&local_c0,&DAT_100a9f788,&DAT_100828028);
      puVar3 = &local_a0;
      puVar4 = &local_c0;
      uVar2 = uVar7;
      uVar8 = uVar15;
      uVar9 = uVar13;
      uVar7 = uVar10;
      uVar15 = uVar16;
      uVar13 = uVar14;
LAB_1004ef974:
      FUN_10007f314(puVar3,puVar4,puVar11,puVar12);
      switchD_10004048c::caseD_6d(uVar9,uVar8,uVar2);
      goto LAB_1004efa90;
    }
    FUN_10007f314(&local_80,&local_c0,&DAT_100a9f788,&DAT_100828028);
    FUN_10007f314(&local_a0,&local_c0,&DAT_100a9f788,&DAT_100828028);
LAB_1004ef884:
    switchD_10004048c::caseD_6d(uVar13,uVar15,uVar7);
    if (*(int *)((long)param_1 + 0xc) == *(int *)((long)param_2 + 0xc)) {
      uVar15 = param_1[3];
      uVar13 = param_1[2];
      uVar7 = param_1[4];
      uVar16 = param_2[3];
      uVar14 = param_2[2];
      uVar10 = param_2[4];
      local_e0 = uVar14;
      uStack_d8 = uVar16;
      local_d0 = uVar10;
      local_c0 = uVar13;
      uStack_b8 = uVar15;
      local_b0 = uVar7;
      if (uVar7 >> 0x3c < 0xf) {
        if (0xe < uVar10 >> 0x3c) goto LAB_1004efac8;
        puVar11 = &DAT_100aa2688;
        puVar12 = &DAT_100835850;
        if ((int)uVar13 != (int)uVar14) {
          FUN_10007f314(&local_c0,auStack_f8,&DAT_100aa2688,&DAT_100835850);
          puVar3 = &local_e0;
          puVar4 = auStack_f8;
          goto LAB_1004efa68;
        }
        FUN_10007f314(&local_c0,auStack_f8,&DAT_100aa2688,&DAT_100835850);
        FUN_10007f314(&local_e0,auStack_f8,&DAT_100aa2688,&DAT_100835850);
        uVar2 = uVar15;
        FUN_1000094a4(uVar15,uVar7,uVar16,uVar10);
        switchD_10004048c::caseD_6d(uVar14,uVar16,uVar10);
        if ((uVar2 & 1) == 0) goto LAB_1004efa90;
      }
      else {
        if (uVar10 >> 0x3c < 0xf) {
LAB_1004efac8:
          puVar11 = &DAT_100aa2688;
          puVar12 = &DAT_100835850;
          FUN_10007f314(&local_c0,auStack_f8,&DAT_100aa2688,&DAT_100835850);
          puVar3 = &local_e0;
          puVar4 = auStack_f8;
          uVar2 = uVar7;
          uVar8 = uVar15;
          uVar9 = uVar13;
          uVar7 = uVar10;
          uVar15 = uVar16;
          uVar13 = uVar14;
          goto LAB_1004ef974;
        }
        FUN_10007f314(&local_c0,auStack_f8,&DAT_100aa2688,&DAT_100835850);
        FUN_10007f314(&local_e0,auStack_f8,&DAT_100aa2688,&DAT_100835850);
      }
      switchD_10004048c::caseD_6d(uVar13,uVar15,uVar7);
      lVar5 = param_1[5];
      FUN_1000094a4(lVar5,param_1[6],param_2[5],param_2[6]);
      uVar1 = (uint)lVar5;
      goto LAB_1004efa98;
    }
  }
  uVar1 = 0;
LAB_1004efa98:
  return uVar1 & 1;
}

