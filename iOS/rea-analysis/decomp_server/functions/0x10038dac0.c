// rea decompile_all
// name: FUN_10038dac0
// address: 0x10038dac0
// body: available
// range: 0x10038dac0-0x10038dda3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10038dac0(long *param_1,long *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  ulong uVar5;
  int iVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  long *plVar13;
  long *plVar14;
  
  uVar5 = (long)param_2 - (long)param_1 >> 3;
  if ((long)uVar5 < 3) {
    if (uVar5 < 2) {
      return true;
    }
    if (uVar5 == 2) {
      lVar7 = *param_1;
      if (*(uint *)(param_2[-1] + 8) < *(uint *)(lVar7 + 8)) {
        *param_1 = param_2[-1];
        param_2[-1] = lVar7;
        return true;
      }
      return true;
    }
  }
  else {
    if (uVar5 == 3) {
      lVar7 = *param_1;
      lVar8 = param_1[1];
      uVar1 = *(uint *)(lVar8 + 8);
      uVar2 = *(uint *)(lVar7 + 8);
      lVar11 = param_2[-1];
      if (uVar1 < uVar2) {
        if (*(uint *)(lVar11 + 8) < uVar1) {
          *param_1 = lVar11;
        }
        else {
          *param_1 = lVar8;
          param_1[1] = lVar7;
          if (uVar2 <= *(uint *)(param_2[-1] + 8)) {
            return true;
          }
          param_1[1] = param_2[-1];
        }
        param_2[-1] = lVar7;
        return true;
      }
      if (*(uint *)(lVar11 + 8) < uVar1) {
        param_1[1] = lVar11;
        param_2[-1] = lVar8;
        lVar7 = *param_1;
        if (*(uint *)(param_1[1] + 8) < *(uint *)(lVar7 + 8)) {
          *param_1 = param_1[1];
          param_1[1] = lVar7;
          return true;
        }
        return true;
      }
      return true;
    }
    if (uVar5 == 4) {
      plVar12 = param_1 + 1;
      lVar7 = *plVar12;
      plVar13 = param_1 + 2;
      lVar8 = *plVar13;
      uVar1 = *(uint *)(lVar7 + 8);
      lVar11 = *param_1;
      uVar2 = *(uint *)(lVar11 + 8);
      uVar3 = *(uint *)(lVar8 + 8);
      plVar9 = param_1;
      if (uVar1 < uVar2) {
        lVar4 = lVar11;
        plVar14 = plVar13;
        if (uVar1 <= uVar3) {
          *param_1 = lVar7;
          param_1[1] = lVar11;
          lVar7 = lVar8;
          plVar9 = plVar12;
          goto joined_r0x00010038dd04;
        }
      }
      else {
        lVar10 = lVar8;
        if (uVar1 <= uVar3) goto LAB_10038dd1c;
        *plVar12 = lVar8;
        *plVar13 = lVar7;
        plVar14 = plVar12;
        lVar4 = lVar7;
joined_r0x00010038dd04:
        lVar10 = lVar7;
        if (uVar2 <= uVar3) goto LAB_10038dd1c;
      }
      *plVar9 = lVar8;
      *plVar14 = lVar11;
      lVar10 = lVar4;
LAB_10038dd1c:
      if (*(uint *)(lVar10 + 8) <= *(uint *)(param_2[-1] + 8)) {
        return true;
      }
      *plVar13 = param_2[-1];
      param_2[-1] = lVar10;
      lVar8 = *plVar13;
      uVar1 = *(uint *)(lVar8 + 8);
      lVar7 = *plVar12;
      if (uVar1 < *(uint *)(lVar7 + 8)) {
        param_1[1] = lVar8;
        param_1[2] = lVar7;
        lVar7 = *param_1;
        if (uVar1 < *(uint *)(lVar7 + 8)) {
          *param_1 = lVar8;
          param_1[1] = lVar7;
          return true;
        }
        return true;
      }
      return true;
    }
    if (uVar5 == 5) {
      FUN_10038d94c(param_1,param_1 + 1,param_1 + 2,param_1 + 3,param_2 + -1);
      return true;
    }
  }
  plVar9 = param_1 + 2;
  lVar7 = *plVar9;
  plVar13 = param_1 + 1;
  lVar11 = *plVar13;
  uVar1 = *(uint *)(lVar11 + 8);
  lVar8 = *param_1;
  uVar2 = *(uint *)(lVar8 + 8);
  uVar3 = *(uint *)(lVar7 + 8);
  plVar12 = param_1;
  if (uVar1 < uVar2) {
    plVar14 = plVar9;
    if (uVar1 <= uVar3) {
      *param_1 = lVar11;
      param_1[1] = lVar8;
      plVar12 = plVar13;
      plVar13 = plVar9;
      goto LAB_10038dc48;
    }
  }
  else {
    if (uVar1 <= uVar3) goto LAB_10038dc58;
    *plVar13 = lVar7;
    *plVar9 = lVar11;
LAB_10038dc48:
    plVar14 = plVar13;
    if (uVar2 <= uVar3) goto LAB_10038dc58;
  }
  *plVar12 = lVar7;
  *plVar14 = lVar8;
LAB_10038dc58:
  if (param_1 + 3 != param_2) {
    iVar6 = 0;
    lVar7 = 0x18;
    plVar12 = param_1 + 3;
    do {
      plVar13 = plVar12;
      lVar10 = *plVar13;
      uVar1 = *(uint *)(lVar10 + 8);
      lVar11 = *plVar9;
      lVar8 = lVar7;
      if (uVar1 < *(uint *)(lVar11 + 8)) {
        do {
          *(long *)((long)param_1 + lVar8) = lVar11;
          lVar4 = lVar8 + -8;
          plVar9 = param_1;
          if (lVar4 == 0) goto LAB_10038dcb8;
          lVar11 = *(long *)((long)param_1 + lVar8 + -0x10);
          lVar8 = lVar4;
        } while (uVar1 < *(uint *)(lVar11 + 8));
        plVar9 = (long *)((long)param_1 + lVar4);
LAB_10038dcb8:
        *plVar9 = lVar10;
        iVar6 = iVar6 + 1;
        if (iVar6 == 8) {
          return plVar13 + 1 == param_2;
        }
      }
      lVar7 = lVar7 + 8;
      plVar12 = plVar13 + 1;
      plVar9 = plVar13;
    } while (plVar13 + 1 != param_2);
  }
  return true;
}

