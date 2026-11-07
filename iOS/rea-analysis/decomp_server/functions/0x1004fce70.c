// rea decompile_all
// name: FUN_1004fce70
// address: 0x1004fce70
// body: available
// range: 0x1004fce70-0x1004fcfe3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1004fce70(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  long lVar11;
  uint uVar12;
  
  lVar7 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_100996088,PTR___s13AsyncIteratorSciTl_100995fe8);
  lVar9 = *(long *)(lVar7 + -8);
  iVar6 = *(int *)(lVar9 + 0x54);
  uVar5 = 0;
  if (iVar6 != 0) {
    uVar5 = iVar6 - 1;
  }
  uVar2 = uVar5;
  if (uVar5 < 0x7fffffff) {
    uVar2 = 0x7ffffffe;
  }
  lVar11 = *(long *)(lVar9 + 0x40);
  if (iVar6 == 0) {
    lVar11 = lVar11 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (uVar2 < param_2) {
    lVar1 = (lVar11 + 0x37U & 0xfffffffffffffff8) + 9;
    uVar12 = (uint)lVar1;
    uVar10 = 2;
    uVar4 = uVar10;
    if (uVar12 < 4) {
      uVar4 = ((param_2 - uVar2) + 0xff >> 8) + 1;
    }
    if (0xffff < uVar4) {
      uVar10 = 4;
    }
    if (uVar4 < 0x100) {
      uVar10 = 1;
    }
    uVar3 = 0;
    if (1 < uVar4) {
      uVar3 = uVar10;
    }
    if (uVar3 < 2) {
      if ((uVar3 != 0) &&
         (uVar10 = (uint)*(byte *)((long)param_1 + lVar1), *(byte *)((long)param_1 + lVar1) != 0))
      goto LAB_1004fcf4c;
    }
    else if (uVar3 == 2) {
      uVar10 = (uint)*(ushort *)((long)param_1 + lVar1);
      if (*(ushort *)((long)param_1 + lVar1) != 0) {
LAB_1004fcf4c:
        uVar5 = uVar10 - 1 << (ulong)((uVar12 & 3) << 3);
        if (uVar12 < 4) {
          uVar10 = (uint)(byte)*param_1;
        }
        else {
          uVar10 = *param_1;
          uVar5 = 0;
        }
        return uVar2 + (uVar10 | uVar5) + 1;
      }
    }
    else {
      uVar10 = *(uint *)((long)param_1 + lVar1);
      if (uVar10 != 0) goto LAB_1004fcf4c;
    }
  }
  if (uVar5 < 0x7ffffffe) {
    uVar8 = *(ulong *)(((ulong)((long)param_1 + lVar11 + 7) & 0xfffffffffffffff8) + 0x18);
    if (0xfffffffe < uVar8) {
      uVar8 = 0xffffffff;
    }
    iVar6 = 0;
    if (1 < (int)uVar8 + 1U) {
      iVar6 = (int)uVar8;
    }
  }
  else {
    (**(code **)(lVar9 + 0x30))(param_1,iVar6,lVar7);
    iVar6 = 0;
    if (1 < (uint)param_1) {
      iVar6 = (uint)param_1 - 1;
    }
  }
  return iVar6;
}

