// rea decompile_all
// name: FUN_1006b9090
// address: 0x1006b9090
// body: available
// range: 0x1006b9090-0x1006b929b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int * FUN_1006b9090(int *param_1,long param_2,long param_3)

{
  int *piVar1;
  undefined4 *puVar2;
  byte bVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  int *piVar7;
  ulong uVar8;
  ulong uVar9;
  int *piVar10;
  
  piVar7 = param_1;
  FUN_1006b8330();
  if ((int *)0xffffffffffffff88 < piVar7) {
    return piVar7;
  }
  iVar6 = *param_1;
  if (iVar6 == 0) {
    return (int *)0xffffffffffffffc4;
  }
  piVar1 = (int *)(param_2 + (long)piVar7);
  uVar9 = param_3 - (long)piVar7;
  if (iVar6 == 3) {
    iVar6 = param_1[0x31];
    piVar10 = piVar1;
  }
  else if (iVar6 == 1) {
    iVar6 = param_1[0x30];
    iVar4 = param_1[0x31];
    if (uVar9 < 0x12) {
      return (int *)0xffffffffffffffba;
    }
    bVar3 = (char)param_1[0x29] * '\b' + 0xb0;
    if (param_1[0x28] == 0) {
      *piVar1 = -0x2d04ad8;
      uVar8 = 4;
    }
    else {
      uVar8 = 0;
    }
    *(byte *)((long)piVar1 + uVar8) = (0 < iVar4) << 2 | (iVar6 != 0) << 5;
    if (iVar6 != 0) {
      bVar3 = 0;
    }
    ((byte *)((long)piVar1 + uVar8))[1] = bVar3;
    puVar2 = (undefined4 *)((long)piVar1 + (uVar8 | 2));
    *param_1 = 2;
    piVar10 = (int *)((long)puVar2 + 3);
    *puVar2 = 1;
    uVar9 = (uVar9 - (uVar8 | 2)) - 3;
    iVar6 = param_1[0x31];
  }
  else {
    if (uVar9 < 4) {
      return (int *)0xffffffffffffffba;
    }
    *piVar1 = 1;
    uVar9 = uVar9 - 3;
    iVar6 = param_1[0x31];
    piVar10 = (int *)((long)piVar1 + 3);
  }
  if (iVar6 == 0) {
    *param_1 = 0;
    lVar5 = -(long)piVar1;
  }
  else {
    iVar6 = (int)param_1 + 0x198;
    FUN_1006b15a4();
    if (uVar9 < 4) {
      return (int *)0xffffffffffffffba;
    }
    *piVar10 = iVar6;
    *param_1 = 0;
    lVar5 = 4 - (long)piVar1;
  }
  piVar10 = (int *)((long)piVar10 + lVar5);
  if ((int *)0xffffffffffffff88 < piVar10) {
    return piVar10;
  }
  if ((*(long *)(param_1 + 0x60) != 0) &&
     (*(long *)(param_1 + 0x60) != *(long *)(param_1 + 0x62) + 1)) {
    return (int *)0xffffffffffffffb8;
  }
  return (int *)((long)piVar10 + (long)piVar7);
}

