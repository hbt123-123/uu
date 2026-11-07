// rea decompile_all
// name: FUN_1002dd7d4
// address: 0x1002dd7d4
// body: available
// range: 0x1002dd7d4-0x1002dd9af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_1002dd7d4(void *param_1,void *param_2,long param_3)

{
  size_t sVar1;
  ulong uVar2;
  long lVar3;
  byte bVar4;
  long lVar5;
  void *pvVar6;
  uint *puVar7;
  undefined8 *puVar8;
  undefined8 *puVar9;
  uint uVar10;
  uint uVar11;
  ulong uVar12;
  uint uVar13;
  int iVar14;
  long lVar15;
  size_t sVar16;
  undefined8 uVar17;
  
  lVar5 = 0;
  __s10Foundation10URLRequestVMa();
  lVar15 = *(long *)(lVar5 + -8);
  pvVar6 = param_2;
  (**(code **)(lVar15 + 0x30))(param_2,1,lVar5);
  if ((int)pvVar6 == 0) {
    (**(code **)(lVar15 + 0x20))(param_1,param_2,lVar5);
    (**(code **)(lVar15 + 0x38))(param_1,0,1,lVar5);
    iVar14 = *(int *)(lVar15 + 0x54);
    sVar16 = *(size_t *)(lVar15 + 0x40);
  }
  else {
    iVar14 = *(int *)(lVar15 + 0x54);
    sVar16 = *(size_t *)(lVar15 + 0x40);
    sVar1 = sVar16;
    if (iVar14 == 0) {
      sVar1 = sVar16 + 1;
    }
    _memcpy(param_1,param_2,sVar1);
  }
  if (iVar14 == 0) {
    sVar16 = sVar16 + 1;
  }
  puVar9 = (undefined8 *)(sVar16 + 7 + (long)param_1 & 0xfffffffffffffff8);
  puVar8 = (undefined8 *)(sVar16 + 7 + (long)param_2 & 0xfffffffffffffff8);
  *puVar9 = *puVar8;
  uVar17 = puVar8[1];
  puVar9[2] = puVar8[2];
  puVar9[1] = uVar17;
  puVar9[3] = puVar8[3];
  puVar9[4] = puVar8[4];
  lVar15 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar5 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar12 = (ulong)(*(byte *)(lVar5 + 0x50) | *(byte *)(lVar15 + 0x50));
  puVar7 = (uint *)(uVar12 + 8 + (long)(puVar8 + 4) & (uVar12 ^ 0xffffffffffffffff));
  uVar2 = *(ulong *)(lVar5 + 0x40);
  if (*(ulong *)(lVar5 + 0x40) <= *(ulong *)(lVar15 + 0x40)) {
    uVar2 = *(ulong *)(lVar15 + 0x40);
  }
  bVar4 = *(byte *)((long)puVar7 + uVar2);
  uVar10 = (uint)bVar4;
  if (1 < bVar4) {
    uVar13 = (uint)uVar2;
    uVar11 = 4;
    if (uVar13 < 4) {
      uVar11 = uVar13;
    }
    if ((int)uVar11 < 2) {
      if (uVar11 == 0) goto LAB_1002dd970;
      uVar11 = (uint)(byte)*puVar7;
    }
    else if (uVar11 == 2) {
      uVar11 = (uint)(ushort)*puVar7;
    }
    else if (uVar11 == 3) {
      uVar11 = (uint)(uint3)*puVar7;
    }
    else {
      uVar11 = *puVar7;
    }
    uVar10 = uVar11 | bVar4 - 2 << (ulong)((uVar13 & 3) << 3);
    if (3 < uVar13) {
      uVar10 = uVar11;
    }
    uVar10 = uVar10 + 2;
  }
LAB_1002dd970:
  uVar12 = uVar12 + 8 + (long)(puVar9 + 4) & ~uVar12;
  lVar3 = *(long *)(param_3 + 0x18);
  if (uVar10 != 1) {
    lVar3 = *(long *)(param_3 + 0x10);
    lVar5 = lVar15;
  }
  (**(code **)(lVar5 + 0x20))(uVar12,puVar7,lVar3);
  *(bool *)(uVar12 + uVar2) = uVar10 == 1;
  return param_1;
}

