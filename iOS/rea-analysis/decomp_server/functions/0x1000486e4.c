// rea decompile_all
// name: FUN_1000486e4
// address: 0x1000486e4
// body: available
// range: 0x1000486e4-0x1000488d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000486e4(int *param_1,int *param_2,int *param_3,int *param_4)

{
  ulong uVar1;
  int iVar2;
  ulong uVar3;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  int *piVar4;
  
  lVar9 = (long)param_2 - (long)param_1;
  lVar11 = lVar9 + 3;
  if (-1 < lVar9) {
    lVar11 = lVar9;
  }
  lVar11 = lVar11 >> 2;
  lVar10 = (long)param_3 - (long)param_2;
  lVar12 = lVar10 + 3;
  if (-1 < lVar10) {
    lVar12 = lVar10;
  }
  lVar12 = lVar12 >> 2;
  if (lVar11 < lVar12) {
    if ((param_4 != param_1) || (param_1 + lVar11 <= param_4)) {
      _memmove(param_4,param_1,lVar11 << 2);
    }
    piVar4 = param_4 + lVar11;
    piVar7 = param_1;
    if (3 < lVar9) {
      do {
        if (param_3 <= param_2) break;
        iVar2 = *param_2;
        if (iVar2 < *param_4) {
          piVar8 = param_4;
          piVar5 = param_2 + 1;
          piVar6 = param_2;
        }
        else {
          iVar2 = *param_4;
          piVar8 = param_4 + 1;
          piVar5 = param_2;
          piVar6 = param_4;
        }
        param_2 = piVar5;
        param_4 = piVar8;
        if (piVar7 != piVar6) {
          *piVar7 = iVar2;
        }
        piVar7 = piVar7 + 1;
      } while (param_4 < piVar4);
    }
  }
  else {
    if ((param_4 != param_2) || (param_2 + lVar12 <= param_4)) {
      _memmove(param_4,param_2,lVar12 << 2);
    }
    piVar6 = param_4 + lVar12;
    piVar4 = piVar6;
    piVar7 = param_2;
    if (3 < lVar10) {
      while (piVar4 = piVar6, piVar7 = param_2, param_1 < param_2) {
        piVar5 = param_2 + -1;
        piVar8 = param_3;
        while( true ) {
          param_3 = piVar8 + -1;
          piVar4 = piVar6 + -1;
          if (*piVar4 < *piVar5) break;
          if (piVar8 != piVar6) {
            *param_3 = *piVar4;
          }
          piVar6 = piVar4;
          piVar8 = param_3;
          if (piVar4 <= param_4) goto LAB_100048874;
        }
        if (piVar8 != param_2) {
          *param_3 = *piVar5;
        }
        piVar4 = piVar6;
        piVar7 = piVar5;
        param_2 = piVar5;
        if (piVar6 <= param_4) break;
      }
    }
  }
LAB_100048874:
  uVar3 = (long)piVar4 - (long)param_4;
  uVar1 = uVar3 + 3;
  if (-1 < (long)uVar3) {
    uVar1 = uVar3;
  }
  if ((piVar7 != param_4) || ((int *)((long)param_4 + (uVar1 & 0xfffffffffffffffc)) <= piVar7)) {
    _memmove(piVar7,param_4,((long)uVar1 >> 2) << 2);
  }
  return 1;
}

