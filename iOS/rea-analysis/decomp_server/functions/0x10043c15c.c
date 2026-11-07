// rea decompile_all
// name: FUN_10043c15c
// address: 0x10043c15c
// body: available
// range: 0x10043c15c-0x10043c7ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10043c15c(long *param_1,long *param_2)

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
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
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
  else if (lVar6 < 2) {
    if (lVar6 == 0) {
      if (lVar5 != 0) {
        return 0;
      }
    }
    else if (lVar5 != 1) {
      return 0;
    }
  }
  else if (lVar6 == 2) {
    if (lVar5 != 2) {
      return 0;
    }
  }
  else if (lVar6 == 3) {
    if (lVar5 != 3) {
      return 0;
    }
  }
  else if (lVar5 != 4) {
    return 0;
  }
  lVar5 = param_1[2];
  lVar6 = param_2[2];
  if ((*(byte *)(param_2 + 3) & 1) == 0) {
    if (lVar5 != lVar6) {
      return 0;
    }
  }
  else if (lVar6 < 3) {
    if (lVar6 == 0) {
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
  }
  else if (lVar6 < 5) {
    if (lVar6 == 3) {
      if (lVar5 != 3) {
        return 0;
      }
    }
    else if (lVar5 != 4) {
      return 0;
    }
  }
  else if (lVar6 == 5) {
    if (lVar5 != 5) {
      return 0;
    }
  }
  else if (lVar5 != 6) {
    return 0;
  }
  if (((*(byte *)((long)param_1 + 0x19) ^ *(byte *)((long)param_2 + 0x19)) & 1) != 0) {
    return 0;
  }
  lVar5 = param_1[4];
  lVar6 = param_2[4];
  if ((*(byte *)(param_2 + 5) & 1) == 0) {
    if (lVar5 != lVar6) {
      return 0;
    }
  }
  else if (lVar6 < 2) {
    if (lVar6 == 0) {
      if (lVar5 != 0) {
        return 0;
      }
    }
    else if (lVar5 != 1) {
      return 0;
    }
  }
  else if (lVar6 == 2) {
    if (lVar5 != 2) {
      return 0;
    }
  }
  else if (lVar6 == 3) {
    if (lVar5 != 3) {
      return 0;
    }
  }
  else if (lVar5 != 4) {
    return 0;
  }
  uVar13 = param_1[0xe];
  uVar11 = param_1[0xd];
  uVar7 = param_1[0xf];
  uVar14 = param_2[0xe];
  uVar12 = param_2[0xd];
  uVar10 = param_2[0xf];
  local_a0 = uVar12;
  uStack_98 = uVar14;
  local_90 = uVar10;
  local_80 = uVar11;
  uStack_78 = uVar13;
  local_70 = uVar7;
  if (uVar7 >> 0x3c < 0xf) {
    if (0xe < uVar10 >> 0x3c) goto LAB_10043c428;
    if (((int)uVar11 == (int)uVar12) && ((uVar12 ^ uVar11) >> 0x20 == 0)) {
      FUN_10007f314(&local_80,&local_c0,&DAT_100a9f788,&DAT_100828028);
      FUN_10007f314(&local_a0,&local_c0,&DAT_100a9f788,&DAT_100828028);
      uVar2 = uVar13;
      FUN_1000094a4(uVar13,uVar7,uVar14,uVar10);
      switchD_10004048c::caseD_6d(uVar12,uVar14,uVar10);
      if ((uVar2 & 1) != 0) goto LAB_10043c31c;
    }
    else {
      FUN_10007f314(&local_80,&local_c0,&DAT_100a9f788,&DAT_100828028);
      puVar3 = &local_a0;
      puVar4 = &local_c0;
LAB_10043c64c:
      FUN_10007f314(puVar3,puVar4,&DAT_100a9f788,&DAT_100828028);
      switchD_10004048c::caseD_6d(uVar12,uVar14,uVar10);
    }
LAB_10043c674:
    switchD_10004048c::caseD_6d(uVar11,uVar13,uVar7);
  }
  else {
    if (uVar10 >> 0x3c < 0xf) {
LAB_10043c428:
      FUN_10007f314(&local_80,&local_c0,&DAT_100a9f788,&DAT_100828028);
      puVar3 = &local_a0;
      puVar4 = &local_c0;
      uVar2 = uVar7;
      uVar8 = uVar13;
      uVar9 = uVar11;
      uVar7 = uVar10;
      uVar13 = uVar14;
      uVar11 = uVar12;
LAB_10043c578:
      FUN_10007f314(puVar3,puVar4,&DAT_100a9f788,&DAT_100828028);
      switchD_10004048c::caseD_6d(uVar9,uVar8,uVar2);
      goto LAB_10043c674;
    }
    FUN_10007f314(&local_80,&local_c0,&DAT_100a9f788,&DAT_100828028);
    FUN_10007f314(&local_a0,&local_c0,&DAT_100a9f788,&DAT_100828028);
LAB_10043c31c:
    switchD_10004048c::caseD_6d(uVar11,uVar13,uVar7);
    uVar13 = param_1[0x11];
    uVar11 = param_1[0x10];
    uVar7 = param_1[0x12];
    uVar14 = param_2[0x11];
    uVar12 = param_2[0x10];
    uVar10 = param_2[0x12];
    local_e0 = uVar12;
    uStack_d8 = uVar14;
    local_d0 = uVar10;
    local_c0 = uVar11;
    uStack_b8 = uVar13;
    local_b0 = uVar7;
    if (uVar7 >> 0x3c < 0xf) {
      if (0xe < uVar10 >> 0x3c) goto LAB_10043c54c;
      if (((int)uVar11 != (int)uVar12) || ((uVar12 ^ uVar11) >> 0x20 != 0)) {
        FUN_10007f314(&local_c0,auStack_f8,&DAT_100a9f788,&DAT_100828028);
        puVar3 = &local_e0;
        puVar4 = auStack_f8;
        goto LAB_10043c64c;
      }
      FUN_10007f314(&local_c0,auStack_f8,&DAT_100a9f788,&DAT_100828028);
      FUN_10007f314(&local_e0,auStack_f8,&DAT_100a9f788,&DAT_100828028);
      uVar2 = uVar13;
      FUN_1000094a4(uVar13,uVar7,uVar14,uVar10);
      switchD_10004048c::caseD_6d(uVar12,uVar14,uVar10);
      if ((uVar2 & 1) == 0) goto LAB_10043c674;
    }
    else {
      if (uVar10 >> 0x3c < 0xf) {
LAB_10043c54c:
        FUN_10007f314(&local_c0,auStack_f8,&DAT_100a9f788,&DAT_100828028);
        puVar3 = &local_e0;
        puVar4 = auStack_f8;
        uVar2 = uVar7;
        uVar8 = uVar13;
        uVar9 = uVar11;
        uVar7 = uVar10;
        uVar13 = uVar14;
        uVar11 = uVar12;
        goto LAB_10043c578;
      }
      FUN_10007f314(&local_c0,auStack_f8,&DAT_100a9f788,&DAT_100828028);
      FUN_10007f314(&local_e0,auStack_f8,&DAT_100a9f788,&DAT_100828028);
    }
    switchD_10004048c::caseD_6d(uVar11,uVar13,uVar7);
    lVar5 = param_1[6];
    lVar6 = param_2[6];
    if ((*(byte *)(param_2 + 7) & 1) == 0) {
      if (lVar5 == lVar6) goto LAB_10043c6a8;
    }
    else if (lVar6 < 2) {
      if (lVar6 == 0) {
        if (lVar5 == 0) {
LAB_10043c6a8:
          if ((*(int *)((long)param_1 + 0x3c) == *(int *)((long)param_2 + 0x3c)) &&
             (((*(byte *)(param_1 + 8) ^ *(byte *)(param_2 + 8)) & 1) == 0)) {
            lVar5 = param_1[9];
            lVar6 = param_2[9];
            if ((*(byte *)(param_2 + 10) & 1) == 0) {
              if (lVar5 == lVar6) goto LAB_10043c734;
            }
            else if (lVar6 < 3) {
              if (lVar6 == 0) {
                if (lVar5 == 0) goto LAB_10043c734;
              }
              else if (lVar6 == 1) {
                if (lVar5 == 1) goto LAB_10043c734;
              }
              else if (lVar5 == 2) goto LAB_10043c734;
            }
            else if (lVar6 < 5) {
              if (lVar6 == 3) {
                if (lVar5 == 3) {
LAB_10043c734:
                  if (*(int *)((long)param_1 + 0x54) == *(int *)((long)param_2 + 0x54)) {
                    lVar5 = param_1[0xb];
                    FUN_1000094a4(lVar5,param_1[0xc],param_2[0xb],param_2[0xc]);
                    uVar1 = (uint)lVar5;
                    goto LAB_10043c67c;
                  }
                }
              }
              else if (lVar5 == 4) goto LAB_10043c734;
            }
            else if (lVar6 == 5) {
              if (lVar5 == 5) goto LAB_10043c734;
            }
            else if (lVar5 == 6) goto LAB_10043c734;
          }
        }
      }
      else if (lVar5 == 1) goto LAB_10043c6a8;
    }
    else if (lVar6 == 2) {
      if (lVar5 == 2) goto LAB_10043c6a8;
    }
    else if (lVar6 == 3) {
      if (lVar5 == 3) goto LAB_10043c6a8;
    }
    else if (lVar5 == 4) goto LAB_10043c6a8;
  }
  uVar1 = 0;
LAB_10043c67c:
  return uVar1 & 1;
}

