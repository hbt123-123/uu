// rea decompile_all
// name: FUN_1002efd44
// address: 0x1002efd44
// body: available
// range: 0x1002efd44-0x1002efe9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002efd44(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  size_t sVar1;
  void *pvVar2;
  undefined8 *puVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  ulong uVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  long lVar10;
  long lVar11;
  size_t sVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  uVar5 = *param_2;
  uVar14 = param_2[3];
  uVar13 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar5;
  param_1[3] = uVar14;
  param_1[2] = uVar13;
  param_1[4] = param_2[4];
  puVar3 = (undefined8 *)((long)param_1 + 0x2fU & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)((long)param_2 + 0x2fU & 0xfffffffffffffff8);
  uVar5 = *puVar4;
  puVar3[1] = puVar4[1];
  *puVar3 = uVar5;
  lVar10 = *(long *)(param_3 + 0x10);
  lVar11 = *(long *)(lVar10 + -8);
  uVar6 = (ulong)*(byte *)(lVar11 + 0x50);
  pvVar7 = (void *)(uVar6 + 0x10 + (long)puVar3 & (uVar6 ^ 0xffffffffffffffff));
  pvVar8 = (void *)(uVar6 + 0x10 + (long)puVar4 & (uVar6 ^ 0xffffffffffffffff));
  pvVar2 = pvVar8;
  (**(code **)(lVar11 + 0x30))(pvVar8,1,lVar10);
  if ((int)pvVar2 == 0) {
    (**(code **)(lVar11 + 0x20))(pvVar7,pvVar8,lVar10);
    (**(code **)(lVar11 + 0x38))(pvVar7,0,1,lVar10);
    iVar9 = *(int *)(lVar11 + 0x54);
    sVar12 = *(size_t *)(lVar11 + 0x40);
  }
  else {
    iVar9 = *(int *)(lVar11 + 0x54);
    sVar12 = *(size_t *)(lVar11 + 0x40);
    sVar1 = sVar12;
    if (iVar9 == 0) {
      sVar1 = sVar12 + 1;
    }
    _memcpy(pvVar7,pvVar8,sVar1);
  }
  if (iVar9 == 0) {
    sVar12 = sVar12 + 1;
  }
  puVar4 = (undefined8 *)((long)pvVar7 + sVar12 + 7 & 0xfffffffffffffff8);
  puVar3 = (undefined8 *)((long)pvVar8 + sVar12 + 7 & 0xfffffffffffffff8);
  uVar13 = puVar3[1];
  uVar5 = *puVar3;
  uVar15 = puVar3[3];
  uVar14 = puVar3[2];
  puVar4[4] = puVar3[4];
  puVar4[1] = uVar13;
  *puVar4 = uVar5;
  puVar4[3] = uVar15;
  puVar4[2] = uVar14;
  puVar4[5] = puVar3[5];
  uVar6 = puVar3[6];
  if (uVar6 < 0xffffffff) {
    uVar6 = puVar3[6];
    puVar4[7] = puVar3[7];
    puVar4[6] = uVar6;
  }
  else {
    uVar5 = puVar3[7];
    puVar4[6] = uVar6;
    puVar4[7] = uVar5;
  }
  return param_1;
}

