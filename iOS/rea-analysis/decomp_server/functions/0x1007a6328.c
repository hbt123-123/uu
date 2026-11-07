// rea decompile_all
// name: FUN_1007a6328
// address: 0x1007a6328
// body: available
// range: 0x1007a6328-0x1007a6643 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1007a6328(long *param_1,char *param_2,int param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  undefined8 uVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char cVar9;
  long lVar10;
  long lVar11;
  int iVar12;
  char *local_68;
  
  *param_2 = '\0';
  pcVar8 = (char *)*param_1;
  if (*pcVar8 == '\"') {
    pcVar6 = pcVar8 + 1;
    if (pcVar6 < (char *)param_1[1]) {
      lVar11 = 0;
      lVar10 = 1;
      bVar4 = true;
      uVar5 = 4;
      do {
        if (pcVar8[lVar10] == '\"') {
          iVar12 = (int)lVar10 + -1;
          if (param_3 <= iVar12) {
            return 2;
          }
          *param_1 = (long)(pcVar8 + lVar11 + 2);
          if (bVar4) {
            _memcpy(param_2,pcVar6,(long)iVar12);
            param_2[iVar12] = '\0';
            return 0;
          }
          if (lVar10 < 2) goto LAB_1007a6638;
          pcVar8 = pcVar8 + lVar10;
          local_68 = param_2;
          goto LAB_1007a642c;
        }
        lVar1 = lVar11 + 2;
        lVar11 = lVar10;
        if (pcVar8[lVar10] == '\\') {
          bVar4 = false;
          lVar11 = lVar1;
        }
        lVar10 = lVar11 + 1;
      } while (pcVar8 + lVar10 < (char *)param_1[1]);
    }
    else {
LAB_1007a6608:
      uVar5 = 4;
    }
  }
  else {
LAB_1007a662c:
    uVar5 = 1;
  }
switchD_1007a64a4_caseD_6f:
  return uVar5;
LAB_1007a642c:
  if (*pcVar6 == '\\') {
    pcVar7 = pcVar6 + 1;
    cVar9 = *pcVar7;
    uVar5 = 1;
    iVar12 = (int)cVar9;
    if (cVar9 < 'b') {
      if (cVar9 == '\"') {
        cVar9 = '\"';
      }
      else if (iVar12 == 0x2f) {
        cVar9 = '/';
      }
      else {
        if (iVar12 != 0x5c) {
          return 1;
        }
        cVar9 = '\\';
      }
LAB_1007a6584:
      *local_68 = cVar9;
    }
    else {
      switch(iVar12) {
      case 0x6e:
        *local_68 = '\n';
        break;
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x73:
        goto switchD_1007a64a4_caseD_6f;
      case 0x72:
        *local_68 = '\r';
        break;
      case 0x74:
        *local_68 = '\t';
        break;
      case 0x75:
        if (pcVar8 < pcVar6 + 6) goto LAB_1007a6608;
        uVar2 = *(int *)(&DAT_1008508c0 + (long)pcVar6[3] * 4) << 8 |
                *(int *)(&DAT_1008508c0 + (long)pcVar6[2] * 4) << 0xc |
                *(int *)(&DAT_1008508c0 + (long)pcVar6[4] * 4) << 4 |
                *(uint *)(&DAT_1008508c0 + (long)pcVar6[5] * 4);
        if (uVar2 >> 0x10 != 0 || (uVar2 & 0xfffffc00) == 0xdc00) goto LAB_1007a662c;
        if ((uVar2 & 0xfffffc00) == 0xd800) {
          if (pcVar8 < pcVar6 + 0xc) goto LAB_1007a6608;
          if (((pcVar6[6] != '\\') || (pcVar6[7] != 'u')) ||
             (uVar3 = *(int *)(&DAT_1008508c0 + (long)pcVar6[9] * 4) << 8 |
                      *(int *)(&DAT_1008508c0 + (long)pcVar6[8] * 4) << 0xc |
                      *(int *)(&DAT_1008508c0 + (long)pcVar6[10] * 4) << 4 |
                      *(uint *)(&DAT_1008508c0 + (long)pcVar6[0xb] * 4), uVar3 - 0xe000 < 0xfffffc00
             )) goto LAB_1007a662c;
          uVar2 = uVar3 - 0xdc00 | uVar2 * 0x400 + 0xfca00000;
          lVar10 = 7;
        }
        else {
          lVar10 = 1;
        }
        FUN_1007a6644(uVar2,&local_68);
        pcVar7 = pcVar6 + 4 + lVar10;
        goto LAB_1007a6444;
      default:
        if (iVar12 == 0x62) {
          cVar9 = '\b';
        }
        else {
          if (cVar9 != 'f') {
            return 1;
          }
          cVar9 = '\f';
        }
        goto LAB_1007a6584;
      }
    }
    local_68 = local_68 + 1;
  }
  else {
    *local_68 = *pcVar6;
    pcVar7 = pcVar6;
    local_68 = local_68 + 1;
  }
LAB_1007a6444:
  pcVar6 = pcVar7 + 1;
  param_2 = local_68;
  if (pcVar8 <= pcVar6) {
LAB_1007a6638:
    *param_2 = '\0';
    return 0;
  }
  goto LAB_1007a642c;
}

