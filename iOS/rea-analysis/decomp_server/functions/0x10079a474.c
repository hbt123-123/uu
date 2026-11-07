// rea decompile_all
// name: FUN_10079a474
// address: 0x10079a474
// body: available
// range: 0x10079a474-0x10079a817 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10079a474(long param_1,undefined8 *param_2)

{
  uint uVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  char *pcVar8;
  int iVar9;
  ulong uVar10;
  ulong uVar11;
  uint *puVar12;
  uint *puVar13;
  ulong uVar14;
  int *piVar15;
  int *piVar16;
  
  param_2[1] = 0;
  *param_2 = 0;
  param_2[3] = 0;
  param_2[2] = 0;
  lVar4 = param_1;
  __dyld_image_count();
  if ((uint)lVar4 == 0) {
    return;
  }
  piVar15 = (int *)0x0;
  do {
    piVar5 = piVar15;
    __dyld_get_image_header();
    if (piVar5 != (int *)0x0) {
      piVar6 = piVar15;
      __dyld_get_image_vmaddr_slide();
      iVar9 = *piVar5;
      if (iVar9 < -0x1120532) {
        if (iVar9 == -0x31051202) {
LAB_10079a520:
          piVar7 = piVar5 + 7;
LAB_10079a52c:
          iVar9 = piVar5[4];
          if (iVar9 != 0) {
            uVar10 = param_1 - (long)piVar6;
            do {
              if (*piVar7 == 0x19) {
                if (*(ulong *)(piVar7 + 6) <= uVar10) {
                  uVar11 = *(long *)(piVar7 + 8) + *(ulong *)(piVar7 + 6);
                  goto LAB_10079a578;
                }
              }
              else if ((*piVar7 == 1) && ((uint)piVar7[6] <= uVar10)) {
                uVar11 = (ulong)(uint)(piVar7[7] + piVar7[6]);
LAB_10079a578:
                if (uVar10 < uVar11) {
                  if ((int)piVar15 == -1) {
                    return;
                  }
                  piVar5 = piVar15;
                  __dyld_get_image_header();
                  piVar6 = piVar15;
                  __dyld_get_image_vmaddr_slide();
                  piVar7 = piVar15;
                  __dyld_get_image_header();
                  uVar10 = 0;
                  iVar9 = *piVar7;
                  if (iVar9 < -0x1120532) {
                    if (iVar9 == -0x31051202) goto LAB_10079a624;
                    if (iVar9 != -0x30051202) goto LAB_10079a68c;
LAB_10079a62c:
                    piVar16 = piVar7 + 8;
                  }
                  else {
                    if (iVar9 == -0x1120531) goto LAB_10079a62c;
                    if (iVar9 != -0x1120532) goto LAB_10079a68c;
LAB_10079a624:
                    piVar16 = piVar7 + 7;
                  }
                  iVar9 = piVar7[4];
                  goto joined_r0x00010079a634;
                }
              }
              piVar7 = (int *)((long)piVar7 + (ulong)(uint)piVar7[1]);
              iVar9 = iVar9 + -1;
            } while (iVar9 != 0);
          }
        }
        else if (iVar9 == -0x30051202) goto LAB_10079a528;
      }
      else {
        if (iVar9 == -0x1120531) {
LAB_10079a528:
          piVar7 = piVar5 + 8;
          goto LAB_10079a52c;
        }
        if (iVar9 == -0x1120532) goto LAB_10079a520;
      }
    }
    uVar1 = (int)piVar15 + 1;
    piVar15 = (int *)(ulong)uVar1;
    if (uVar1 == (uint)lVar4) {
      return;
    }
  } while( true );
joined_r0x00010079a634:
  if (iVar9 == 0) goto LAB_10079a688;
  if (*piVar16 == 0x19) {
    iVar3 = _strcmp((char *)(piVar16 + 2),"__LINKEDIT");
    if (iVar3 == 0) {
      uVar10 = *(long *)(piVar16 + 6) - *(long *)(piVar16 + 10);
      goto LAB_10079a68c;
    }
  }
  else if ((*piVar16 == 1) && (iVar3 = _strcmp((char *)(piVar16 + 2),"__LINKEDIT"), iVar3 == 0)) {
    uVar10 = (ulong)(uint)(piVar16[6] - piVar16[8]);
    goto LAB_10079a68c;
  }
  piVar16 = (int *)((long)piVar16 + (ulong)(uint)piVar16[1]);
  iVar9 = iVar9 + -1;
  goto joined_r0x00010079a634;
LAB_10079a688:
  uVar10 = 0;
LAB_10079a68c:
  lVar4 = uVar10 + (long)piVar6;
  if (lVar4 == 0) {
    return;
  }
  __dyld_get_image_name();
  *param_2 = piVar15;
  param_2[1] = piVar5;
  iVar9 = *piVar5;
  if (iVar9 < -0x1120532) {
    if (iVar9 == -0x31051202) {
LAB_10079a708:
      piVar15 = piVar5 + 7;
      goto LAB_10079a714;
    }
    if (iVar9 != -0x30051202) {
      return;
    }
  }
  else if (iVar9 != -0x1120531) {
    if (iVar9 != -0x1120532) {
      return;
    }
    goto LAB_10079a708;
  }
  piVar15 = piVar5 + 8;
LAB_10079a714:
  if (piVar5[4] != 0) {
    iVar9 = 0;
    uVar10 = 0xffffffffffffffff;
    do {
      if ((*piVar15 == 2) && (uVar11 = (ulong)(uint)piVar15[3], piVar15[3] != 0)) {
        puVar12 = (uint *)0x0;
        puVar13 = (uint *)(lVar4 + (ulong)(uint)piVar15[2]);
        do {
          uVar14 = *(ulong *)(puVar13 + 2);
          if ((uVar14 != 0) &&
             (uVar2 = (param_1 - (long)piVar6) - uVar14,
             uVar14 <= (ulong)(param_1 - (long)piVar6) && uVar2 <= uVar10)) {
            uVar10 = uVar2;
            puVar12 = puVar13;
          }
          puVar13 = puVar13 + 4;
          uVar11 = uVar11 - 1;
        } while (uVar11 != 0);
        if (puVar12 != (uint *)0x0) {
          uVar1 = piVar15[4];
          param_2[3] = *(long *)(puVar12 + 2) + (long)piVar6;
          if (*(short *)((long)puVar12 + 6) == 0x10) {
            pcVar8 = (char *)0x0;
          }
          else {
            pcVar8 = (char *)(lVar4 + (ulong)uVar1 + (ulong)*puVar12);
            param_2[2] = pcVar8;
            if (*pcVar8 != '_') {
              return;
            }
            pcVar8 = pcVar8 + 1;
          }
          param_2[2] = pcVar8;
          return;
        }
      }
      piVar15 = (int *)((long)piVar15 + (ulong)(uint)piVar15[1]);
      iVar9 = iVar9 + 1;
    } while (iVar9 != piVar5[4]);
  }
  return;
}

