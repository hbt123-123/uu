// rea decompile_all
// name: FUN_1004fc438
// address: 0x1004fc438
// body: available
// range: 0x1004fc438-0x1004fc5d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fc438(uint *param_1,uint param_2,uint param_3,long param_4)

{
  size_t sVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  lVar8 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar4 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar4;
  if (uVar4 < 0x7fffffff) {
    uVar2 = 0x7ffffffe;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  sVar1 = (lVar9 + 0x37U & 0xfffffffffffffff8) + 9;
  if (uVar2 < param_3) {
    uVar10 = 2;
    uVar3 = uVar10;
    if ((uint)sVar1 < 4) {
      uVar3 = ((param_3 - uVar2) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar3) {
      uVar10 = 4;
    }
    if (uVar3 < 0x100) {
      uVar10 = 1;
    }
    uVar5 = 0;
    if (1 < uVar3) {
      uVar5 = uVar10;
    }
  }
  else {
    uVar5 = 0;
  }
  if (uVar2 < param_2) {
    param_2 = ~uVar2 + param_2;
    _bzero(param_1,sVar1);
    iVar6 = 1;
    if ((uint)sVar1 < 4) {
      iVar6 = (param_2 >> 8) + 1;
      *(char *)param_1 = (char)param_2;
    }
    else {
      *param_1 = param_2;
    }
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(char *)((long)param_1 + sVar1) = (char)iVar6;
      }
    }
    else if (uVar5 == 2) {
      *(short *)((long)param_1 + sVar1) = (short)iVar6;
    }
    else {
      *(int *)((long)param_1 + sVar1) = iVar6;
    }
  }
  else {
    if (uVar5 < 2) {
      if (uVar5 != 0) {
        *(undefined1 *)((long)param_1 + sVar1) = 0;
      }
    }
    else if (uVar5 == 2) {
      *(undefined2 *)((long)param_1 + sVar1) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar1) = 0;
    }
    if (param_2 != 0) {
      if (0x7ffffffd < uVar4) {
                    /* WARNING: Could not recover jumptable at 0x0001004fc55c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar8 + 0x38))(param_1);
        return;
      }
      piVar7 = (int *)((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8);
      if (param_2 < 0x7fffffff) {
        *(ulong *)(piVar7 + 6) = (ulong)param_2;
      }
      else {
        piVar7[8] = 0;
        piVar7[9] = 0;
        piVar7[2] = 0;
        piVar7[3] = 0;
        piVar7[0] = 0;
        piVar7[1] = 0;
        piVar7[6] = 0;
        piVar7[7] = 0;
        piVar7[4] = 0;
        piVar7[5] = 0;
        *piVar7 = param_2 + 0x80000001;
      }
    }
  }
  return;
}

