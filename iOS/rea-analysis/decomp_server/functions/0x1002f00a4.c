// rea decompile_all
// name: FUN_1002f00a4
// address: 0x1002f00a4
// body: available
// range: 0x1002f00a4-0x1002f01ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1002f00a4(uint *param_1,uint param_2,long param_3)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  byte bVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  
  lVar11 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  iVar6 = *(int *)(lVar11 + 0x54);
  uVar8 = 0;
  if (iVar6 != 0) {
    uVar8 = iVar6 - 1;
  }
  uVar3 = uVar8;
  if (uVar8 < 0x80000000) {
    uVar3 = 0x7fffffff;
  }
  lVar2 = 7;
  if (iVar6 == 0) {
    lVar2 = 8;
  }
  if (param_2 == 0) {
    return 0;
  }
  bVar7 = *(byte *)(lVar11 + 0x50);
  if (uVar3 < param_2) {
    uVar10 = (lVar2 + *(long *)(lVar11 + 0x40) +
              ((ulong)bVar7 + 0x38 & ((ulong)bVar7 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) +
             0x40;
    uVar1 = uVar10 & 0xfffffff8;
    uVar9 = (uint)uVar1;
    uVar12 = 2;
    uVar5 = uVar12;
    if (uVar1 == 0) {
      uVar5 = (param_2 - uVar3) + 1;
    }
    if (0xffff < uVar5) {
      uVar12 = 4;
    }
    if (uVar5 < 0x100) {
      uVar12 = 1;
    }
    uVar4 = 0;
    if (1 < uVar5) {
      uVar4 = uVar12;
    }
    if (uVar4 < 2) {
      if ((uVar4 != 0) &&
         (uVar12 = (uint)*(byte *)((long)param_1 + uVar10), *(byte *)((long)param_1 + uVar10) != 0))
      goto LAB_1002f016c;
    }
    else if (uVar4 == 2) {
      uVar12 = (uint)*(ushort *)((long)param_1 + uVar10);
      if (*(ushort *)((long)param_1 + uVar10) != 0) {
LAB_1002f016c:
        uVar12 = uVar12 - 1;
        if (uVar1 != 0) {
          uVar12 = 0;
          uVar9 = *param_1;
        }
        return uVar3 + (uVar9 | uVar12) + 1;
      }
    }
    else {
      uVar12 = *(uint *)((long)param_1 + uVar10);
      if (uVar12 != 0) goto LAB_1002f016c;
    }
  }
  if (-1 < (int)uVar8) {
    uVar10 = *(ulong *)(param_1 + 6);
    if (0xfffffffe < uVar10) {
      uVar10 = 0xffffffff;
    }
    return (int)uVar10 + 1;
  }
  uVar8 = ((int)param_1 + 0x2fU & 0xfffffff8) + (uint)bVar7 + 0x10 & ~(uint)bVar7;
  (**(code **)(lVar11 + 0x30))();
  iVar6 = 0;
  if (1 < uVar8) {
    iVar6 = uVar8 - 1;
  }
  return iVar6;
}

