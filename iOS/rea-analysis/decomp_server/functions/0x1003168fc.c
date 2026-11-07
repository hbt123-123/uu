// rea decompile_all
// name: FUN_1003168fc
// address: 0x1003168fc
// body: available
// range: 0x1003168fc-0x100316a83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1003168fc(int *param_1,uint param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  
  lVar6 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x1008f97a8,
             &TargetProtocolRequirement_1008f97b8);
  lVar8 = *(long *)(lVar6 + -8);
  iVar5 = *(int *)(lVar8 + 0x54);
  uVar1 = 0;
  if (iVar5 != 0) {
    uVar1 = iVar5 - 1;
  }
  uVar2 = uVar1;
  if (uVar1 < 0x80000000) {
    uVar2 = 0x7fffffff;
  }
  lVar9 = *(long *)(lVar8 + 0x40);
  if (iVar5 == 0) {
    lVar9 = lVar9 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  if (uVar2 < param_2) {
    uVar7 = (lVar9 + 7U & 0xfffffffffffffff8) + 0x40;
    uVar10 = 2;
    uVar4 = uVar10;
    if ((uVar7 & 0xfffffff8) == 0) {
      uVar4 = (param_2 - uVar2) + 1;
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
         (uVar10 = (uint)*(byte *)((long)param_1 + uVar7), *(byte *)((long)param_1 + uVar7) != 0))
      goto LAB_1003169ec;
    }
    else if (uVar3 == 2) {
      uVar10 = (uint)*(ushort *)((long)param_1 + uVar7);
      if (*(ushort *)((long)param_1 + uVar7) != 0) {
LAB_1003169ec:
        iVar5 = uVar10 - 1;
        if ((uVar7 & 0xfffffff8) != 0) {
          iVar5 = *param_1;
        }
        return uVar2 + iVar5 + 1;
      }
    }
    else {
      uVar10 = *(uint *)((long)param_1 + uVar7);
      if (uVar10 != 0) goto LAB_1003169ec;
    }
  }
  if (uVar1 < 0x7fffffff) {
    uVar7 = *(ulong *)(((long)param_1 + lVar9 + 7 & 0xfffffffffffffff8U) + 0x10);
    if (0xfffffffe < uVar7) {
      uVar7 = 0xffffffff;
    }
    iVar5 = (int)uVar7 + 1;
  }
  else {
    (**(code **)(lVar8 + 0x30))(param_1,iVar5,lVar6);
    iVar5 = 0;
    if (1 < (uint)param_1) {
      iVar5 = (uint)param_1 - 1;
    }
  }
  return iVar5;
}

