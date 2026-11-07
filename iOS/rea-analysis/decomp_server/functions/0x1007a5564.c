// rea decompile_all
// name: FUN_1007a5564
// address: 0x1007a5564
// body: available
// range: 0x1007a5564-0x1007a5c8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007a5564(undefined8 param_1,ulong *param_2)

{
  char cVar1;
  uint uVar2;
  byte bVar3;
  undefined *puVar4;
  uint uVar5;
  ulong *puVar6;
  ulong uVar7;
  undefined8 uVar8;
  ulong uVar9;
  code *UNRECOVERED_JUMPTABLE_00;
  char *pcVar10;
  long lVar11;
  long lVar12;
  char *pcVar13;
  char *pcVar14;
  int iVar15;
  
  puVar4 = PTR___DefaultRuneLocale_100995488;
  pcVar14 = (char *)*param_2;
  pcVar10 = (char *)param_2[1];
  if (pcVar14 < pcVar10) {
    do {
      cVar1 = *pcVar14;
      if (cVar1 < 0) {
        uVar5 = ___maskrune((int)cVar1,0x4000);
      }
      else {
        uVar5 = *(uint *)(puVar4 + ((long)cVar1 & 0xffffffffU) * 4 + 0x3c) & 0x4000;
      }
      if (uVar5 == 0) {
        pcVar14 = (char *)*param_2;
        pcVar10 = (char *)param_2[1];
        break;
      }
      pcVar14 = pcVar14 + 1;
      *param_2 = (ulong)pcVar14;
      pcVar10 = (char *)param_2[1];
    } while (pcVar14 < pcVar10);
  }
  if (pcVar10 <= pcVar14) {
    return;
  }
  cVar1 = *pcVar14;
  if ('Z' < cVar1) {
    if (cVar1 < 'n') {
      if (cVar1 == '[') {
        *param_2 = (ulong)(pcVar14 + 1);
        (**(code **)(param_2[6] + 0x38))(param_1,param_2[7]);
        puVar4 = PTR___DefaultRuneLocale_100995488;
        if ((int)param_1 != 0) {
          return;
        }
        pcVar14 = (char *)*param_2;
        pcVar10 = (char *)param_2[1];
        if (pcVar10 <= pcVar14) {
          return;
        }
LAB_1007a5ad4:
        do {
          if (pcVar14 < pcVar10) {
            cVar1 = *pcVar14;
            if (cVar1 < 0) {
              uVar5 = ___maskrune((int)cVar1,0x4000);
            }
            else {
              uVar5 = *(uint *)(puVar4 + ((long)cVar1 & 0xffffffffU) * 4 + 0x3c) & 0x4000;
            }
            if (uVar5 != 0) {
              pcVar14 = pcVar14 + 1;
              *param_2 = (ulong)pcVar14;
              pcVar10 = (char *)param_2[1];
              goto LAB_1007a5ad4;
            }
            pcVar14 = (char *)*param_2;
            pcVar10 = (char *)param_2[1];
          }
          if (pcVar10 <= pcVar14) {
            return;
          }
          if (*pcVar14 == ']') goto LAB_1007a5c5c;
          iVar15 = 0;
          FUN_1007a5564(0,param_2);
          if (iVar15 != 0) {
            return;
          }
          pcVar14 = (char *)*param_2;
          while (pcVar10 = (char *)param_2[1], pcVar14 < pcVar10) {
            cVar1 = *pcVar14;
            if (cVar1 < 0) {
              uVar5 = ___maskrune((int)cVar1,0x4000);
            }
            else {
              uVar5 = *(uint *)(puVar4 + ((long)cVar1 & 0xffffffffU) * 4 + 0x3c) & 0x4000;
            }
            if (uVar5 == 0) {
              pcVar14 = (char *)*param_2;
              pcVar10 = (char *)param_2[1];
              break;
            }
            pcVar14 = pcVar14 + 1;
            *param_2 = (ulong)pcVar14;
          }
          if (pcVar10 <= pcVar14) {
            return;
          }
          if (*pcVar14 == ',') {
            pcVar14 = pcVar14 + 1;
            *param_2 = (ulong)pcVar14;
          }
          if (pcVar10 <= pcVar14) {
            return;
          }
        } while( true );
      }
      if (cVar1 != 'f') {
        return;
      }
      if ((long)pcVar10 - (long)pcVar14 < 5) {
        return;
      }
      if (pcVar14[1] != 'a') {
        return;
      }
      if (pcVar14[2] != 'l') {
        return;
      }
      if (pcVar14[3] != 's') {
        return;
      }
      if (pcVar14[4] != 'e') {
        return;
      }
      *param_2 = (ulong)(pcVar14 + 5);
      uVar7 = param_2[7];
      UNRECOVERED_JUMPTABLE_00 = *(code **)param_2[6];
      uVar8 = 0;
    }
    else {
      if (cVar1 == 'n') {
        if ((long)pcVar10 - (long)pcVar14 < 4) {
          return;
        }
        if (pcVar14[1] != 'u') {
          return;
        }
        if (pcVar14[2] != 'l') {
          return;
        }
        if (pcVar14[3] != 'l') {
          return;
        }
        *param_2 = (ulong)(pcVar14 + 4);
                    /* WARNING: Could not recover jumptable at 0x0001007a5a04. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(param_2[6] + 0x20))(param_1,param_2[7]);
        return;
      }
      if (cVar1 != 't') {
        if (cVar1 != 0x7b) {
          return;
        }
        *param_2 = (ulong)(pcVar14 + 1);
        (**(code **)(param_2[6] + 0x30))(param_1,param_2[7]);
        puVar4 = PTR___DefaultRuneLocale_100995488;
        if ((int)param_1 != 0) {
          return;
        }
        pcVar14 = (char *)*param_2;
        pcVar10 = (char *)param_2[1];
        if (pcVar10 <= pcVar14) {
          return;
        }
LAB_1007a56c8:
        do {
          if (pcVar14 < pcVar10) {
            cVar1 = *pcVar14;
            if (cVar1 < 0) {
              uVar5 = ___maskrune((int)cVar1,0x4000);
            }
            else {
              uVar5 = *(uint *)(puVar4 + ((long)cVar1 & 0xffffffffU) * 4 + 0x3c) & 0x4000;
            }
            if (uVar5 != 0) {
              pcVar14 = pcVar14 + 1;
              *param_2 = (ulong)pcVar14;
              pcVar10 = (char *)param_2[1];
              goto LAB_1007a56c8;
            }
            pcVar14 = (char *)*param_2;
            pcVar10 = (char *)param_2[1];
          }
          if (pcVar10 <= pcVar14) {
            return;
          }
          if (*pcVar14 == '}') {
LAB_1007a5c5c:
            *param_2 = (ulong)(pcVar14 + 1);
                    /* WARNING: Could not recover jumptable at 0x0001007a5c80. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (**(code **)(param_2[6] + 0x40))(param_2[7]);
            return;
          }
          puVar6 = param_2;
          FUN_1007a6328(param_2,param_2[2],(int)param_2[3]);
          if ((int)puVar6 != 0) {
            return;
          }
          pcVar14 = (char *)*param_2;
          while (pcVar10 = (char *)param_2[1], pcVar14 < pcVar10) {
            cVar1 = *pcVar14;
            if (cVar1 < 0) {
              uVar5 = ___maskrune((int)cVar1,0x4000);
            }
            else {
              uVar5 = *(uint *)(puVar4 + ((long)cVar1 & 0xffffffffU) * 4 + 0x3c) & 0x4000;
            }
            if (uVar5 == 0) {
              pcVar14 = (char *)*param_2;
              pcVar10 = (char *)param_2[1];
              break;
            }
            pcVar14 = pcVar14 + 1;
            *param_2 = (ulong)pcVar14;
          }
          if (pcVar10 <= pcVar14) {
            return;
          }
          if (*pcVar14 != ':') {
            return;
          }
          do {
            pcVar14 = pcVar14 + 1;
            *param_2 = (ulong)pcVar14;
            if ((char *)param_2[1] <= pcVar14) break;
            cVar1 = *pcVar14;
            if (cVar1 < 0) {
              uVar5 = ___maskrune((int)cVar1,0x4000);
            }
            else {
              uVar5 = *(uint *)(puVar4 + ((long)cVar1 & 0xffffffffU) * 4 + 0x3c) & 0x4000;
            }
          } while (uVar5 != 0);
          uVar7 = param_2[2];
          FUN_1007a5564(uVar7,param_2);
          if ((int)uVar7 != 0) {
            return;
          }
          pcVar14 = (char *)*param_2;
          while (pcVar10 = (char *)param_2[1], pcVar14 < pcVar10) {
            cVar1 = *pcVar14;
            if (cVar1 < 0) {
              uVar5 = ___maskrune((int)cVar1,0x4000);
            }
            else {
              uVar5 = *(uint *)(puVar4 + ((long)cVar1 & 0xffffffffU) * 4 + 0x3c) & 0x4000;
            }
            if (uVar5 == 0) {
              pcVar14 = (char *)*param_2;
              pcVar10 = (char *)param_2[1];
              break;
            }
            pcVar14 = pcVar14 + 1;
            *param_2 = (ulong)pcVar14;
          }
          if (pcVar10 <= pcVar14) {
            return;
          }
          if (*pcVar14 == ',') {
            pcVar14 = pcVar14 + 1;
            *param_2 = (ulong)pcVar14;
          }
          if (pcVar10 <= pcVar14) {
            return;
          }
        } while( true );
      }
      if ((long)pcVar10 - (long)pcVar14 < 4) {
        return;
      }
      if (pcVar14[1] != 'r') {
        return;
      }
      if (pcVar14[2] != 'u') {
        return;
      }
      if (pcVar14[3] != 'e') {
        return;
      }
      *param_2 = (ulong)(pcVar14 + 4);
      uVar7 = param_2[7];
      UNRECOVERED_JUMPTABLE_00 = *(code **)param_2[6];
      uVar8 = 1;
    }
                    /* WARNING: Could not recover jumptable at 0x0001007a5a64. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE_00)(param_1,uVar8,uVar7);
    return;
  }
  if ((int)cVar1 - 0x30U < 10) {
    bVar3 = 0;
    iVar15 = 1;
    pcVar13 = pcVar14;
  }
  else {
    if (cVar1 == '\"') {
      puVar6 = param_2;
      FUN_1007a6328(param_2,param_2[4],(int)param_2[5]);
      if ((int)puVar6 != 0) {
        return;
      }
      uVar9 = param_2[7];
      UNRECOVERED_JUMPTABLE_00 = *(code **)(param_2[6] + 0x28);
      uVar7 = param_2[4];
      goto LAB_1007a5a88;
    }
    if (cVar1 != '-') {
      return;
    }
    pcVar13 = pcVar14 + 1;
    *param_2 = (ulong)pcVar13;
    bVar3 = 1;
    if ((int)pcVar14[1] - 0x3aU < 0xfffffff6) {
      return;
    }
    iVar15 = -1;
  }
  if (pcVar10 <= pcVar13) {
    return;
  }
  lVar12 = 0;
  lVar11 = 0;
  uVar7 = 0;
  while( true ) {
    uVar5 = (int)pcVar13[lVar12] - 0x30;
    if ((9 < uVar5 || 0x1999999999999999 < uVar7) ||
       (uVar7 = uVar7 * 10, CARRY8(uVar7,(ulong)uVar5))) break;
    uVar7 = uVar7 + uVar5;
    *param_2 = (ulong)(pcVar13 + lVar12 + 1);
    lVar11 = lVar11 + 0x100000000;
    lVar12 = lVar12 + 1;
    if ((long)pcVar10 - (long)pcVar13 == lVar12) {
      return;
    }
  }
  uVar2 = (int)pcVar13[lVar12] - 0x2b;
  if ((uVar2 < 0x3b && (1L << ((ulong)uVar2 & 0x3f) & 0x400000004007fedU) != 0 || uVar5 < 10) ||
     ((!(bool)(bVar3 & uVar7 < 0x8000000000000001) && ((long)uVar7 < 0)))) {
    if (((uVar2 < 0x3b) && ((1L << ((ulong)uVar2 & 0x3f) & 0x400000004007fedU) != 0)) ||
       (!(bool)(9 < uVar5 & (bVar3 ^ 1)))) {
      if (pcVar10 <= pcVar13 + lVar12) {
        return;
      }
      while (((int)pcVar13[lVar12] - 0x30U < 10 ||
             (uVar5 = (int)pcVar13[lVar12] - 0x2b,
             uVar5 < 0x3b && (1L << ((ulong)uVar5 & 0x3f) & 0x40000000400000dU) != 0))) {
        *param_2 = (ulong)(pcVar13 + lVar12 + 1);
        lVar11 = lVar11 + 0x100000000;
        lVar12 = lVar12 + 1;
        if ((long)pcVar10 - (long)pcVar13 == lVar12) {
          return;
        }
      }
      if ((int)param_2[5] <= (int)lVar12) {
        return;
      }
      _strncpy((char *)param_2[4],pcVar13,lVar11 >> 0x20);
      *(undefined1 *)(param_2[4] + (lVar11 >> 0x20)) = 0;
      _sscanf((char *)param_2[4],"%lg");
      (**(code **)(param_2[6] + 8))(param_1,param_2[7]);
      return;
    }
    uVar9 = param_2[7];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(param_2[6] + 0x18);
  }
  else {
    uVar7 = uVar7 * (long)iVar15;
    uVar9 = param_2[7];
    UNRECOVERED_JUMPTABLE_00 = *(code **)(param_2[6] + 0x10);
  }
LAB_1007a5a88:
                    /* WARNING: Could not recover jumptable at 0x0001007a5aa0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE_00)(param_1,uVar7,uVar9);
  return;
}

