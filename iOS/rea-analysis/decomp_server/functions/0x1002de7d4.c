// rea decompile_all
// name: FUN_1002de7d4
// address: 0x1002de7d4
// body: available
// range: 0x1002de7d4-0x1002deab3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void * FUN_1002de7d4(void *param_1,void *param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  void *pvVar5;
  ulong uVar6;
  uint uVar7;
  ulong uVar8;
  int iVar9;
  uint uVar10;
  undefined8 *puVar11;
  uint *puVar12;
  undefined8 *puVar13;
  void *pvVar14;
  size_t sVar15;
  void *pvVar16;
  undefined8 uVar17;
  long lVar18;
  uint uVar19;
  
  lVar4 = 0;
  __s10Foundation10URLRequestVMa();
  lVar18 = *(long *)(lVar4 + -8);
  pvVar5 = param_2;
  (**(code **)(lVar18 + 0x30))(param_2,1,lVar4);
  if ((int)pvVar5 == 0) {
    (**(code **)(lVar18 + 0x10))(param_1,param_2,lVar4);
    (**(code **)(lVar18 + 0x38))(param_1,0,1,lVar4);
    iVar9 = *(int *)(lVar18 + 0x54);
    sVar15 = *(size_t *)(lVar18 + 0x40);
  }
  else {
    iVar9 = *(int *)(lVar18 + 0x54);
    sVar15 = *(size_t *)(lVar18 + 0x40);
    sVar1 = sVar15;
    if (iVar9 == 0) {
      sVar1 = sVar15 + 1;
    }
    _memcpy(param_1,param_2,sVar1);
  }
  if (iVar9 == 0) {
    sVar15 = sVar15 + 1;
  }
  puVar11 = (undefined8 *)(sVar15 + 7 + (long)param_1 & 0xfffffffffffffff8);
  puVar13 = (undefined8 *)(sVar15 + 7 + (long)param_2 & 0xfffffffffffffff8);
  *puVar11 = *puVar13;
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar18 = *(long *)(lVar4 + -8);
  uVar6 = (ulong)*(byte *)(lVar18 + 0x50);
  pvVar16 = (void *)(uVar6 + 8 + (long)puVar11 & (uVar6 ^ 0xffffffffffffffff));
  pvVar14 = (void *)(uVar6 + 8 + (long)puVar13 & (uVar6 ^ 0xffffffffffffffff));
  pvVar5 = pvVar14;
  (**(code **)(lVar18 + 0x30))(pvVar14,1,lVar4);
  if ((int)pvVar5 == 0) {
    (**(code **)(lVar18 + 0x10))(pvVar16,pvVar14,lVar4);
    (**(code **)(lVar18 + 0x38))(pvVar16,0,1,lVar4);
    iVar9 = *(int *)(lVar18 + 0x54);
    sVar15 = *(size_t *)(lVar18 + 0x40);
  }
  else {
    iVar9 = *(int *)(lVar18 + 0x54);
    sVar15 = *(size_t *)(lVar18 + 0x40);
    sVar1 = sVar15;
    if (iVar9 == 0) {
      sVar1 = sVar15 + 1;
    }
    _memcpy(pvVar16,pvVar14,sVar1);
  }
  if (iVar9 == 0) {
    sVar15 = sVar15 + 1;
  }
  puVar11 = (undefined8 *)((long)pvVar16 + sVar15 + 7 & 0xfffffffffffffff8);
  puVar13 = (undefined8 *)((long)pvVar14 + sVar15 + 7 & 0xfffffffffffffff8);
  uVar6 = puVar13[1];
  if ((uVar6 & 0x3000000000000000) == 0) {
    uVar17 = *puVar13;
    FUN_100008184(uVar17,uVar6);
    *puVar11 = uVar17;
    puVar11[1] = uVar6;
  }
  else {
    uVar17 = *puVar13;
    puVar11[1] = puVar13[1];
    *puVar11 = uVar17;
  }
  puVar11[2] = puVar13[2];
  puVar11[3] = puVar13[3];
  lVar18 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  lVar4 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar8 = (ulong)(*(byte *)(lVar4 + 0x50) | *(byte *)(lVar18 + 0x50));
  puVar12 = (uint *)(uVar8 + 8 + (long)(puVar13 + 3) & (uVar8 ^ 0xffffffffffffffff));
  uVar6 = *(ulong *)(lVar4 + 0x40);
  if (*(ulong *)(lVar4 + 0x40) <= *(ulong *)(lVar18 + 0x40)) {
    uVar6 = *(ulong *)(lVar18 + 0x40);
  }
  bVar3 = *(byte *)((long)puVar12 + uVar6);
  uVar10 = (uint)bVar3;
  if (1 < bVar3) {
    uVar19 = (uint)uVar6;
    uVar7 = 4;
    if (uVar19 < 4) {
      uVar7 = uVar19;
    }
    if ((int)uVar7 < 2) {
      if (uVar7 == 0) goto LAB_1002dea64;
      uVar7 = (uint)(byte)*puVar12;
    }
    else if (uVar7 == 2) {
      uVar7 = (uint)(ushort)*puVar12;
    }
    else if (uVar7 == 3) {
      uVar7 = (uint)(uint3)*puVar12;
    }
    else {
      uVar7 = *puVar12;
    }
    uVar10 = uVar7 | bVar3 - 2 << (ulong)((uVar19 & 3) << 3);
    if (3 < uVar19) {
      uVar10 = uVar7;
    }
    uVar10 = uVar10 + 2;
  }
LAB_1002dea64:
  uVar8 = uVar8 + 8 + (long)(puVar11 + 3) & ~uVar8;
  lVar2 = *(long *)(param_3 + 0x18);
  if (uVar10 != 1) {
    lVar2 = *(long *)(param_3 + 0x10);
    lVar4 = lVar18;
  }
  (**(code **)(lVar4 + 0x10))(uVar8,puVar12,lVar2);
  *(bool *)(uVar8 + uVar6) = uVar10 == 1;
  return param_1;
}

