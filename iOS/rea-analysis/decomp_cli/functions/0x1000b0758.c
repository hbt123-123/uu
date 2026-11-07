// rea decompile_all
// name: FUN_1000b0758
// address: 0x1000b0758
// body: available
// range: 0x1000b0758-0x1000b0a1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000b0758(long *param_1,long *param_2,long *param_3,long *param_4)

{
  long *plVar1;
  long *plVar2;
  long *plVar3;
  size_t sVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  undefined8 uVar11;
  
  lVar7 = ((long)param_2 - (long)param_1) / 0x18;
  lVar10 = ((long)param_3 - (long)param_2) / 0x18;
  if (lVar7 < lVar10) {
    if ((param_4 != param_1) || (param_1 + lVar7 * 3 <= param_4)) {
      _memmove(param_4,param_1,lVar7 * 0x18);
    }
    plVar6 = param_4 + lVar7 * 3;
    plVar3 = param_1;
    if (0x17 < (long)param_2 - (long)param_1) {
      do {
        if (param_3 <= param_2) break;
        if ((*(byte *)((long)param_2 + 0x11) & 1) != 0) goto LAB_1000b07fc;
        if (((*(byte *)((long)param_4 + 0x11) & 1) != 0) || (*param_2 < *param_4))
        goto LAB_1000b0850;
        if (*param_2 == *param_4) {
          if ((*(byte *)(param_2 + 2) & 1) == 0) {
            if (((*(byte *)(param_4 + 2) & 1) == 0) && (param_2[1] < param_4[1]))
            goto LAB_1000b0850;
            goto LAB_1000b07fc;
          }
          if ((*(byte *)(param_4 + 2) & 1) != 0) goto LAB_1000b07fc;
LAB_1000b0850:
          plVar5 = param_2 + 3;
          plVar1 = param_4;
          plVar2 = param_2;
        }
        else {
LAB_1000b07fc:
          plVar5 = param_2;
          plVar1 = param_4 + 3;
          plVar2 = param_4;
        }
        param_4 = plVar1;
        param_2 = plVar5;
        if (plVar3 != plVar2) {
          lVar10 = plVar2[1];
          lVar7 = *plVar2;
          plVar3[2] = plVar2[2];
          plVar3[1] = lVar10;
          *plVar3 = lVar7;
        }
        plVar3 = plVar3 + 3;
      } while (param_4 < plVar6);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar10 * 3 <= param_4)) {
      _memmove(param_4,param_2,lVar10 * 0x18);
    }
    plVar6 = param_4 + lVar10 * 3;
    plVar3 = param_2;
    if ((0x17 < (long)param_3 - (long)param_2) && (param_1 < param_2)) {
LAB_1000b08d8:
      plVar5 = plVar6;
      lVar7 = 0;
      plVar2 = param_2 + -3;
      do {
        lVar10 = (long)plVar5 + lVar7;
        lVar8 = *(long *)(lVar10 + -0x18);
        if ((*(byte *)(lVar10 + -7) & 1) == 0) {
          if (((*(byte *)((long)param_2 + -7) & 1) != 0) || (lVar8 < param_2[-3]))
          goto LAB_1000b0970;
          if (lVar8 == param_2[-3]) {
            if ((*(byte *)(lVar10 + -8) & 1) == 0) {
              if (((*(byte *)(param_2 + -1) & 1) == 0) && (*(long *)(lVar10 + -0x10) < param_2[-2]))
              goto LAB_1000b0970;
            }
            else if ((*(byte *)(param_2 + -1) & 1) == 0) goto LAB_1000b0970;
          }
        }
        lVar8 = (long)param_3 + lVar7;
        if (lVar8 != lVar10) {
          uVar11 = *(undefined8 *)(lVar10 + -0x10);
          lVar9 = *(long *)(lVar10 + -0x18);
          *(undefined8 *)(lVar8 + -8) = *(undefined8 *)(lVar10 + -8);
          *(undefined8 *)(lVar8 + -0x10) = uVar11;
          *(long *)(lVar8 + -0x18) = lVar9;
        }
        lVar7 = lVar7 + -0x18;
        plVar6 = (long *)((long)plVar5 + lVar7);
        plVar3 = param_2;
        if (plVar6 <= param_4) break;
      } while( true );
    }
  }
LAB_1000b09bc:
  lVar7 = (long)plVar6 - (long)param_4;
  sVar4 = (((ulong)(lVar7 / 6 + (lVar7 >> 0x3f)) >> 2) - (lVar7 >> 0x3f)) * 0x18;
  if ((plVar3 != param_4) || ((long *)((long)plVar6 + (sVar4 - lVar7)) <= plVar3)) {
    _memmove(plVar3,param_4,sVar4);
  }
  return 1;
LAB_1000b0970:
  plVar3 = (long *)((long)param_3 + lVar7);
  param_3 = plVar3 + -3;
  if (plVar3 != param_2) {
    lVar8 = param_2[-2];
    lVar10 = *plVar2;
    plVar3[-1] = param_2[-1];
    plVar3[-2] = lVar8;
    *param_3 = lVar10;
  }
  if (((long *)((long)plVar5 + lVar7) <= param_4) ||
     (plVar6 = (long *)((long)plVar5 + lVar7), param_2 = plVar2, plVar2 <= param_1))
  goto LAB_1000b09a8;
  goto LAB_1000b08d8;
LAB_1000b09a8:
  plVar6 = (long *)((long)plVar5 + lVar7);
  plVar3 = plVar2;
  goto LAB_1000b09bc;
}

