// rea decompile_all
// name: FUN_10006f72c
// address: 0x10006f72c
// body: available
// range: 0x10006f72c-0x10006f923 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10006f72c(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  long lVar2;
  ulong uVar3;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long *plVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar4;
  
  lVar10 = (long)param_2 - (long)param_1;
  lVar2 = lVar10 + 0xf;
  if (-1 < lVar10) {
    lVar2 = lVar10;
  }
  lVar2 = lVar2 >> 4;
  lVar11 = (long)param_3 - (long)param_2;
  lVar5 = lVar11 + 0xf;
  if (-1 < lVar11) {
    lVar5 = lVar11;
  }
  lVar5 = lVar5 >> 4;
  if (lVar2 < lVar5) {
    if ((param_4 != param_1) || (param_1 + lVar2 * 2 <= param_4)) {
      _memmove(param_4,param_1,lVar2 * 0x10);
    }
    plVar4 = param_4 + lVar2 * 2;
    plVar8 = param_1;
    if (0xf < lVar10) {
      do {
        if (param_3 <= param_2) break;
        if (*param_2 < *param_4) {
          plVar9 = param_4;
          plVar7 = param_2;
          param_2 = param_2 + 2;
        }
        else {
          plVar9 = param_4 + 2;
          plVar7 = param_4;
        }
        param_4 = plVar9;
        if (plVar8 != plVar7) {
          lVar2 = *plVar7;
          plVar8[1] = plVar7[1];
          *plVar8 = lVar2;
        }
        plVar8 = plVar8 + 2;
      } while (param_4 < plVar4);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar5 * 2 <= param_4)) {
      _memmove(param_4,param_2,lVar5 * 0x10);
    }
    plVar7 = param_4 + lVar5 * 2;
    plVar4 = plVar7;
    plVar8 = param_2;
    if (0xf < lVar11) {
      while (plVar4 = plVar7, plVar8 = param_2, param_1 < param_2) {
        plVar6 = param_2 + -2;
        plVar9 = param_3;
        while( true ) {
          param_3 = plVar9 + -2;
          plVar4 = plVar7 + -2;
          if (*plVar4 < *plVar6) break;
          if (plVar9 != plVar7) {
            lVar2 = *plVar4;
            plVar9[-1] = plVar7[-1];
            *param_3 = lVar2;
          }
          plVar7 = plVar4;
          plVar9 = param_3;
          if (plVar4 <= param_4) goto LAB_10006f8d0;
        }
        if (plVar9 != param_2) {
          lVar2 = *plVar6;
          plVar9[-1] = param_2[-1];
          *param_3 = lVar2;
        }
        plVar4 = plVar7;
        plVar8 = plVar6;
        param_2 = plVar6;
        if (plVar7 <= param_4) break;
      }
    }
  }
LAB_10006f8d0:
  uVar3 = (long)plVar4 - (long)param_4;
  uVar1 = uVar3 + 0xf;
  if (-1 < (long)uVar3) {
    uVar1 = uVar3;
  }
  if ((plVar8 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff0)) <= plVar8)) {
    _memmove(plVar8,param_4,uVar1 & 0xfffffffffffffff0);
  }
  return 1;
}

