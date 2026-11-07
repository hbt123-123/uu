// rea decompile_all
// name: FUN_10038cc90
// address: 0x10038cc90
// body: available
// range: 0x10038cc90-0x10038cf9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10038cc90(long *param_1,long *param_2)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  uint uVar7;
  long lVar8;
  long lVar9;
  long *plVar10;
  long *plVar11;
  long *plVar12;
  uint uVar13;
  
  uVar2 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar2 < 3) {
    if (uVar2 < 2) {
      return true;
    }
    if (uVar2 == 2) {
      lVar4 = *param_1;
      if (*(uint *)(lVar4 + 8) <= *(uint *)(param_2[-1] + 8)) {
        return true;
      }
      *param_1 = param_2[-1];
      param_2[-1] = lVar4;
      return true;
    }
  }
  else {
    if (uVar2 == 3) {
      lVar4 = *param_1;
      lVar5 = param_1[1];
      uVar7 = *(uint *)(lVar5 + 8);
      lVar8 = param_2[-1];
      if (uVar7 < *(uint *)(lVar4 + 8)) {
        if (*(uint *)(lVar8 + 8) < uVar7) {
          *param_1 = lVar8;
        }
        else {
          *param_1 = lVar5;
          param_1[1] = lVar4;
          if (*(uint *)(lVar4 + 8) <= *(uint *)(param_2[-1] + 8)) {
            return true;
          }
          param_1[1] = param_2[-1];
        }
        param_2[-1] = lVar4;
        return true;
      }
      if (uVar7 <= *(uint *)(lVar8 + 8)) {
        return true;
      }
      param_1[1] = lVar8;
      param_2[-1] = lVar5;
      lVar4 = *param_1;
      if (*(uint *)(lVar4 + 8) <= *(uint *)(param_1[1] + 8)) {
        return true;
      }
      *param_1 = param_1[1];
      param_1[1] = lVar4;
      return true;
    }
    if (uVar2 == 4) {
      plVar10 = param_1 + 1;
      lVar5 = *plVar10;
      plVar11 = param_1 + 2;
      lVar8 = *plVar11;
      lVar9 = *param_1;
      uVar7 = *(uint *)(lVar5 + 8);
      lVar4 = lVar8;
      plVar6 = param_1;
      if (uVar7 < *(uint *)(lVar9 + 8)) {
        lVar1 = lVar9;
        plVar12 = plVar11;
        if (uVar7 <= *(uint *)(lVar8 + 8)) {
          *param_1 = lVar5;
          param_1[1] = lVar9;
          plVar6 = plVar10;
          if (*(uint *)(lVar9 + 8) <= *(uint *)(lVar8 + 8)) goto LAB_10038cf10;
        }
      }
      else {
        if (uVar7 <= *(uint *)(lVar8 + 8)) goto LAB_10038cf10;
        *plVar10 = lVar8;
        *plVar11 = lVar5;
        lVar1 = lVar5;
        lVar4 = lVar5;
        plVar12 = plVar10;
        if (*(uint *)(lVar9 + 8) <= *(uint *)(lVar8 + 8)) goto LAB_10038cf10;
      }
      *plVar6 = lVar8;
      *plVar12 = lVar9;
      lVar4 = lVar1;
LAB_10038cf10:
      if (*(uint *)(lVar4 + 8) <= *(uint *)(param_2[-1] + 8)) {
        return true;
      }
      *plVar11 = param_2[-1];
      param_2[-1] = lVar4;
      lVar5 = *plVar11;
      lVar4 = *plVar10;
      if (*(uint *)(lVar4 + 8) <= *(uint *)(lVar5 + 8)) {
        return true;
      }
      param_1[1] = lVar5;
      param_1[2] = lVar4;
      lVar4 = *param_1;
      if (*(uint *)(lVar4 + 8) <= *(uint *)(lVar5 + 8)) {
        return true;
      }
      *param_1 = lVar5;
      param_1[1] = lVar4;
      return true;
    }
    if (uVar2 == 5) {
      FUN_10038cb18(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
      return true;
    }
  }
  plVar6 = param_1 + 2;
  lVar4 = *plVar6;
  plVar11 = param_1 + 1;
  lVar8 = *plVar11;
  lVar5 = *param_1;
  uVar7 = *(uint *)(lVar8 + 8);
  plVar10 = param_1;
  if (uVar7 < *(uint *)(lVar5 + 8)) {
    plVar12 = plVar6;
    if (uVar7 <= *(uint *)(lVar4 + 8)) {
      *param_1 = lVar8;
      param_1[1] = lVar5;
      uVar7 = *(uint *)(lVar4 + 8);
      uVar13 = *(uint *)(lVar5 + 8);
      plVar10 = plVar11;
      plVar11 = plVar6;
      goto LAB_10038ce30;
    }
  }
  else {
    if (uVar7 <= *(uint *)(lVar4 + 8)) goto LAB_10038ce40;
    *plVar11 = lVar4;
    *plVar6 = lVar8;
    uVar7 = *(uint *)(lVar4 + 8);
    uVar13 = *(uint *)(lVar5 + 8);
LAB_10038ce30:
    plVar12 = plVar11;
    if (uVar13 <= uVar7) goto LAB_10038ce40;
  }
  *plVar10 = lVar4;
  *plVar12 = lVar5;
LAB_10038ce40:
  if (param_1 + 3 != param_2) {
    iVar3 = 0;
    lVar4 = 0x18;
    plVar10 = param_1 + 3;
    do {
      plVar11 = plVar10;
      lVar9 = *plVar11;
      lVar8 = *plVar6;
      lVar5 = lVar4;
      if (*(uint *)(lVar9 + 8) < *(uint *)(lVar8 + 8)) {
        do {
          *(long *)((long)param_1 + lVar5) = lVar8;
          lVar1 = lVar5 + -8;
          plVar6 = param_1;
          if (lVar1 == 0) goto LAB_10038cea4;
          lVar8 = *(long *)((long)param_1 + lVar5 + -0x10);
          lVar5 = lVar1;
        } while (*(uint *)(lVar9 + 8) < *(uint *)(lVar8 + 8));
        plVar6 = (long *)((long)param_1 + lVar1);
LAB_10038cea4:
        *plVar6 = lVar9;
        iVar3 = iVar3 + 1;
        if (iVar3 == 8) {
          return plVar11 + 1 == param_2;
        }
      }
      lVar4 = lVar4 + 8;
      plVar10 = plVar11 + 1;
      plVar6 = plVar11;
    } while (plVar11 + 1 != param_2);
  }
  return true;
}

