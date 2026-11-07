// rea decompile_all
// name: FUN_1002ddcc0
// address: 0x1002ddcc0
// body: available
// range: 0x1002ddcc0-0x1002ddeaf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1002ddcc0(uint *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  long lVar11;
  uint uVar12;
  long lVar13;
  
  lVar4 = 0;
  __s10Foundation10URLRequestVMa();
  lVar5 = *(long *)(lVar4 + -8);
  iVar3 = *(int *)(lVar5 + 0x54);
  uVar2 = 0;
  if (iVar3 != 0) {
    uVar2 = iVar3 - 1;
  }
  uVar1 = uVar2;
  if (uVar2 < 0x7fffffff) {
    uVar1 = 0x7ffffffe;
  }
  lVar11 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar7 = *(ulong *)(lVar11 + 0x40);
  lVar13 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar10 = *(ulong *)(lVar13 + 0x40);
  if (uVar10 <= uVar7) {
    uVar10 = uVar7;
  }
  lVar8 = *(long *)(lVar5 + 0x40);
  if (iVar3 == 0) {
    lVar8 = lVar8 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (param_2 < uVar1 || param_2 - uVar1 == 0) goto LAB_1002dde34;
  uVar7 = (ulong)(*(byte *)(lVar13 + 0x50) | *(byte *)(lVar11 + 0x50));
  lVar11 = uVar10 + (uVar7 + (lVar8 + 7U & 0xfffffffffffffff8) + 0x28 & (uVar7 ^ 0xffffffffffffffff)
                    ) + 1;
  uVar9 = (uint)lVar11;
  uVar6 = uVar9 << 3;
  if (uVar9 < 4) {
    uVar12 = ((param_2 - uVar1) + ~(-1 << (ulong)(uVar6 & 0x1f)) >> (ulong)(uVar6 & 0x1f)) + 1;
    if (uVar12 >> 0x10 == 0) {
      if (uVar12 < 0x100) {
        if (uVar12 < 2) goto LAB_1002dde34;
        goto LAB_1002ddd84;
      }
      uVar12 = (uint)*(ushort *)((long)param_1 + lVar11);
    }
    else {
      uVar12 = *(uint *)((long)param_1 + lVar11);
    }
    if (uVar12 != 0) goto LAB_1002dddd4;
  }
  else {
LAB_1002ddd84:
    uVar12 = (uint)*(byte *)((long)param_1 + lVar11);
    if (*(byte *)((long)param_1 + lVar11) != 0) {
LAB_1002dddd4:
      uVar2 = 0;
      if (uVar9 < 4) {
        uVar2 = uVar12 - 1 << (ulong)(uVar6 & 0x1f);
      }
      if (uVar9 == 0) {
        uVar6 = 0;
      }
      else {
        uVar6 = 4;
        if (uVar9 < 4) {
          uVar6 = uVar9;
        }
        if ((int)uVar6 < 3) {
          if (uVar6 == 1) {
            uVar6 = (uint)(byte)*param_1;
          }
          else {
            uVar6 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar6 == 3) {
          uVar6 = (uint)(uint3)*param_1;
        }
        else {
          uVar6 = *param_1;
        }
      }
      return uVar1 + (uVar6 | uVar2) + 1;
    }
  }
LAB_1002dde34:
  if (uVar2 < 0x7ffffffe) {
    uVar10 = *(ulong *)((ulong)((long)param_1 + lVar8 + 7) & 0xfffffffffffffff8);
    if (0xfffffffe < uVar10) {
      uVar10 = 0xffffffff;
    }
    iVar3 = 0;
    if (1 < (int)uVar10 + 1U) {
      iVar3 = (int)uVar10;
    }
  }
  else {
    (**(code **)(lVar5 + 0x30))(param_1,iVar3,lVar4);
    iVar3 = 0;
    if (1 < (uint)param_1) {
      iVar3 = (uint)param_1 - 1;
    }
  }
  return iVar3;
}

