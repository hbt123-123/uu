// rea decompile_all
// name: FUN_1002deeec
// address: 0x1002deeec
// body: available
// range: 0x1002deeec-0x1002df17b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_1002deeec(void *param_1,void *param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  void *pvVar5;
  uint *puVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  void *pvVar12;
  int iVar13;
  undefined8 *puVar14;
  void *pvVar15;
  long lVar16;
  size_t sVar17;
  undefined8 *puVar18;
  undefined8 uVar19;
  
  lVar4 = 0;
  __s10Foundation10URLRequestVMa();
  lVar16 = *(long *)(lVar4 + -8);
  pvVar5 = param_2;
  (**(code **)(lVar16 + 0x30))(param_2,1,lVar4);
  if ((int)pvVar5 == 0) {
    (**(code **)(lVar16 + 0x20))(param_1,param_2,lVar4);
    (**(code **)(lVar16 + 0x38))(param_1,0,1,lVar4);
    iVar13 = *(int *)(lVar16 + 0x54);
    sVar17 = *(size_t *)(lVar16 + 0x40);
  }
  else {
    iVar13 = *(int *)(lVar16 + 0x54);
    sVar17 = *(size_t *)(lVar16 + 0x40);
    sVar1 = sVar17;
    if (iVar13 == 0) {
      sVar1 = sVar17 + 1;
    }
    _memcpy(param_1,param_2,sVar1);
  }
  if (iVar13 == 0) {
    sVar17 = sVar17 + 1;
  }
  puVar14 = (undefined8 *)(sVar17 + 7 + (long)param_1 & 0xfffffffffffffff8);
  puVar18 = (undefined8 *)(sVar17 + 7 + (long)param_2 & 0xfffffffffffffff8);
  *puVar14 = *puVar18;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar16 = *(long *)(lVar4 + -8);
  uVar7 = (ulong)*(byte *)(lVar16 + 0x50);
  pvVar12 = (void *)(uVar7 + 8 + (long)puVar14 & (uVar7 ^ 0xffffffffffffffff));
  pvVar15 = (void *)(uVar7 + 8 + (long)puVar18 & (uVar7 ^ 0xffffffffffffffff));
  pvVar5 = pvVar15;
  (**(code **)(lVar16 + 0x30))(pvVar15,1,lVar4);
  if ((int)pvVar5 == 0) {
    (**(code **)(lVar16 + 0x20))(pvVar12,pvVar15,lVar4);
    (**(code **)(lVar16 + 0x38))(pvVar12,0,1,lVar4);
    iVar13 = *(int *)(lVar16 + 0x54);
    sVar17 = *(size_t *)(lVar16 + 0x40);
  }
  else {
    iVar13 = *(int *)(lVar16 + 0x54);
    sVar17 = *(size_t *)(lVar16 + 0x40);
    sVar1 = sVar17;
    if (iVar13 == 0) {
      sVar1 = sVar17 + 1;
    }
    _memcpy(pvVar12,pvVar15,sVar1);
  }
  if (iVar13 == 0) {
    sVar17 = sVar17 + 1;
  }
  puVar18 = (undefined8 *)((long)pvVar12 + sVar17 + 7 & 0xfffffffffffffff8);
  puVar14 = (undefined8 *)((long)pvVar15 + sVar17 + 7 & 0xfffffffffffffff8);
  uVar19 = *puVar14;
  puVar18[1] = puVar14[1];
  *puVar18 = uVar19;
  puVar18[2] = puVar14[2];
  puVar18[3] = puVar14[3];
  lVar16 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar4 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar10 = (ulong)(*(byte *)(lVar4 + 0x50) | *(byte *)(lVar16 + 0x50));
  puVar6 = (uint *)(uVar10 + 8 + (long)(puVar14 + 3) & (uVar10 ^ 0xffffffffffffffff));
  uVar7 = *(ulong *)(lVar4 + 0x40);
  if (*(ulong *)(lVar4 + 0x40) <= *(ulong *)(lVar16 + 0x40)) {
    uVar7 = *(ulong *)(lVar16 + 0x40);
  }
  bVar3 = *(byte *)((long)puVar6 + uVar7);
  uVar8 = (uint)bVar3;
  if (1 < bVar3) {
    uVar11 = (uint)uVar7;
    uVar9 = 4;
    if (uVar11 < 4) {
      uVar9 = uVar11;
    }
    if ((int)uVar9 < 2) {
      if (uVar9 == 0) goto LAB_1002df138;
      uVar9 = (uint)(byte)*puVar6;
    }
    else if (uVar9 == 2) {
      uVar9 = (uint)(ushort)*puVar6;
    }
    else if (uVar9 == 3) {
      uVar9 = (uint)(uint3)*puVar6;
    }
    else {
      uVar9 = *puVar6;
    }
    uVar8 = uVar9 | bVar3 - 2 << (ulong)((uVar11 & 3) << 3);
    if (3 < uVar11) {
      uVar8 = uVar9;
    }
    uVar8 = uVar8 + 2;
  }
LAB_1002df138:
  uVar10 = uVar10 + 8 + (long)(puVar18 + 3) & ~uVar10;
  lVar2 = *(long *)(param_3 + 0x18);
  if (uVar8 != 1) {
    lVar2 = *(long *)(param_3 + 0x10);
    lVar4 = lVar16;
  }
  (**(code **)(lVar4 + 0x20))(uVar10,puVar6,lVar2);
  *(bool *)(uVar10 + uVar7) = uVar8 == 1;
  return param_1;
}

