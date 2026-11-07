// rea decompile_all
// name: FUN_10039ff4c
// address: 0x10039ff4c
// body: available
// range: 0x10039ff4c-0x1003a0143 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10039ff4c(ulong *param_1,uint param_2,uint param_3,long param_4)

{
  uint uVar1;
  size_t sVar2;
  uint uVar3;
  uint uVar4;
  undefined2 uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  
  lVar6 = *(long *)(*(long *)(param_4 + 0x10) + -8);
  uVar4 = *(uint *)(lVar6 + 0x54);
  uVar3 = uVar4;
  if (uVar4 < 0x80000000) {
    uVar3 = 0x7fffffff;
  }
  uVar7 = (ulong)*(byte *)(lVar6 + 0x50);
  sVar2 = (uVar7 + 8 & (uVar7 ^ 0xffffffffffffffff)) + *(long *)(lVar6 + 0x40);
  uVar9 = (uint)sVar2;
  if (param_3 < uVar3 || param_3 - uVar3 == 0) {
    uVar10 = 0;
  }
  else if (uVar9 < 4) {
    uVar1 = ((param_3 - uVar3) + ~(-1 << (ulong)(uVar9 << 3 & 0x1f)) >> (ulong)(uVar9 << 3 & 0x1f))
            + 1;
    if (uVar1 >> 0x10 == 0) {
      uVar8 = 1;
      if (0xff < uVar1) {
        uVar8 = 2;
      }
      uVar10 = 0;
      if (1 < uVar1) {
        uVar10 = uVar8;
      }
    }
    else {
      uVar10 = 4;
    }
  }
  else {
    uVar10 = 1;
  }
  if (uVar3 < param_2) {
    param_2 = ~uVar3 + param_2;
    if (uVar9 < 4) {
      iVar11 = (param_2 >> (ulong)(uVar9 << 3 & 0x1f)) + 1;
      if (uVar9 != 0) {
        uVar3 = param_2 & (-1 << (ulong)(uVar9 << 3 & 0x1f) ^ 0xffffffffU);
        _bzero(param_1,sVar2);
        uVar5 = (undefined2)uVar3;
        if (uVar9 == 3) {
          *(undefined2 *)param_1 = uVar5;
          *(char *)((long)param_1 + 2) = (char)(uVar3 >> 0x10);
        }
        else if (uVar9 == 2) {
          *(undefined2 *)param_1 = uVar5;
        }
        else {
          *(char *)param_1 = (char)param_2;
        }
      }
    }
    else {
      _bzero(param_1,sVar2);
      *(uint *)param_1 = param_2;
      iVar11 = 1;
    }
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(char *)((long)param_1 + sVar2) = (char)iVar11;
      }
    }
    else if (uVar10 == 2) {
      *(short *)((long)param_1 + sVar2) = (short)iVar11;
    }
    else {
      *(int *)((long)param_1 + sVar2) = iVar11;
    }
  }
  else {
    if (uVar10 < 2) {
      if (uVar10 != 0) {
        *(undefined1 *)((long)param_1 + sVar2) = 0;
      }
    }
    else if (uVar10 == 2) {
      *(undefined2 *)((long)param_1 + sVar2) = 0;
    }
    else {
      *(undefined4 *)((long)param_1 + sVar2) = 0;
    }
    if (param_2 != 0) {
      if ((int)uVar4 < 0) {
                    /* WARNING: Could not recover jumptable at 0x0001003a00e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(lVar6 + 0x38))((long)param_1 + uVar7 + 8 & ~uVar7);
        return;
      }
      if ((int)param_2 < 0) {
        *param_1 = (ulong)(param_2 & 0x7fffffff);
      }
      else {
        *param_1 = (ulong)(param_2 - 1);
      }
    }
  }
  return;
}

