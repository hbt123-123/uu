// rea decompile_all
// name: FUN_100014d5c
// address: 0x100014d5c
// body: available
// range: 0x100014d5c-0x100014e83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_100014d5c(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  size_t sVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 *puVar5;
  void *pvVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  long lVar10;
  size_t sVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  *param_1 = *param_2;
  lVar9 = *(long *)(param_3 + 0x10);
  lVar10 = *(long *)(lVar9 + -8);
  uVar3 = (ulong)*(byte *)(lVar10 + 0x50);
  pvVar4 = (void *)((ulong)(param_1 + uVar3 + 1) & (uVar3 ^ 0xffffffffffffffff));
  pvVar6 = (void *)((ulong)(param_2 + uVar3 + 1) & (uVar3 ^ 0xffffffffffffffff));
  pvVar2 = pvVar6;
  (**(code **)(lVar10 + 0x30))(pvVar6,1,lVar9);
  if ((int)pvVar2 == 0) {
    (**(code **)(lVar10 + 0x20))(pvVar4,pvVar6,lVar9);
    (**(code **)(lVar10 + 0x38))(pvVar4,0,1,lVar9);
    iVar8 = *(int *)(lVar10 + 0x54);
    sVar11 = *(size_t *)(lVar10 + 0x40);
  }
  else {
    iVar8 = *(int *)(lVar10 + 0x54);
    sVar11 = *(size_t *)(lVar10 + 0x40);
    sVar1 = sVar11;
    if (iVar8 == 0) {
      sVar1 = sVar11 + 1;
    }
    _memcpy(pvVar4,pvVar6,sVar1);
  }
  if (iVar8 == 0) {
    sVar11 = sVar11 + 1;
  }
  puVar5 = (undefined8 *)((long)pvVar6 + sVar11 + 7 & 0xfffffffffffffff8);
  uVar13 = puVar5[1];
  uVar12 = *puVar5;
  uVar15 = puVar5[3];
  uVar14 = puVar5[2];
  puVar7 = (undefined8 *)((long)pvVar4 + sVar11 + 7 & 0xfffffffffffffff8);
  puVar7[4] = puVar5[4];
  puVar7[1] = uVar13;
  *puVar7 = uVar12;
  puVar7[3] = uVar15;
  puVar7[2] = uVar14;
  lVar9 = 0;
  __s10Foundation4DateVMa();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar9 + -8) + 0x50);
  (**(code **)(*(long *)(lVar9 + -8) + 0x20))
            ((long)puVar7 + uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff),
             (long)puVar5 + uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff),lVar9);
  return param_1;
}

