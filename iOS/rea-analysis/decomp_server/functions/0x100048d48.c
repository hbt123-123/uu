// rea decompile_all
// name: FUN_100048d48
// address: 0x100048d48
// body: available
// range: 0x100048d48-0x100048f37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100048d48(long *param_1,long *param_2,long *param_3,long *param_4)

{
  ulong uVar1;
  ulong uVar2;
  long *plVar4;
  long *plVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long *plVar3;
  
  lVar8 = (long)param_2 - (long)param_1;
  lVar10 = lVar8 + 7;
  if (-1 < lVar8) {
    lVar10 = lVar8;
  }
  lVar10 = lVar10 >> 3;
  lVar9 = (long)param_3 - (long)param_2;
  lVar11 = lVar9 + 7;
  if (-1 < lVar9) {
    lVar11 = lVar9;
  }
  lVar11 = lVar11 >> 3;
  if (lVar10 < lVar11) {
    if ((param_4 != param_1) || (param_1 + lVar10 <= param_4)) {
      _memmove(param_4,param_1,lVar10 << 3);
    }
    plVar3 = param_4 + lVar10;
    plVar6 = param_1;
    if (7 < lVar8) {
      do {
        if (param_3 <= param_2) break;
        lVar10 = *param_2;
        if (lVar10 < *param_4) {
          plVar7 = param_4;
          plVar4 = param_2 + 1;
          plVar5 = param_2;
        }
        else {
          lVar10 = *param_4;
          plVar7 = param_4 + 1;
          plVar4 = param_2;
          plVar5 = param_4;
        }
        param_2 = plVar4;
        param_4 = plVar7;
        if (plVar6 != plVar5) {
          *plVar6 = lVar10;
        }
        plVar6 = plVar6 + 1;
      } while (param_4 < plVar3);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar11 <= param_4)) {
      _memmove(param_4,param_2,lVar11 << 3);
    }
    plVar5 = param_4 + lVar11;
    plVar3 = plVar5;
    plVar6 = param_2;
    if (7 < lVar9) {
      while (plVar3 = plVar5, plVar6 = param_2, param_1 < param_2) {
        plVar4 = param_2 + -1;
        plVar7 = param_3;
        while( true ) {
          param_3 = plVar7 + -1;
          plVar3 = plVar5 + -1;
          if (*plVar3 < *plVar4) break;
          if (plVar7 != plVar5) {
            *param_3 = *plVar3;
          }
          plVar5 = plVar3;
          plVar7 = param_3;
          if (plVar3 <= param_4) goto LAB_100048ed8;
        }
        if (plVar7 != param_2) {
          *param_3 = *plVar4;
        }
        plVar3 = plVar5;
        plVar6 = plVar4;
        param_2 = plVar4;
        if (plVar5 <= param_4) break;
      }
    }
  }
LAB_100048ed8:
  uVar2 = (long)plVar3 - (long)param_4;
  uVar1 = uVar2 + 7;
  if (-1 < (long)uVar2) {
    uVar1 = uVar2;
  }
  if ((plVar6 != param_4) || ((long *)((long)param_4 + (uVar1 & 0xfffffffffffffff8)) <= plVar6)) {
    _memmove(plVar6,param_4,((long)uVar1 >> 3) << 3);
  }
  return 1;
}

