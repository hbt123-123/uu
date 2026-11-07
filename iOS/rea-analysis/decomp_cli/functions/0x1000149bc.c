// rea decompile_all
// name: FUN_1000149bc
// address: 0x1000149bc
// body: available
// range: 0x1000149bc-0x100014b2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1000149bc(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  size_t sVar1;
  void *pvVar2;
  ulong uVar3;
  void *pvVar4;
  undefined8 uVar5;
  void *pvVar6;
  undefined8 *puVar7;
  int iVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  size_t sVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  *param_1 = *param_2;
  lVar9 = *(long *)(param_3 + 0x10);
  lVar11 = *(long *)(lVar9 + -8);
  uVar3 = (ulong)*(byte *)(lVar11 + 0x50);
  pvVar6 = (void *)((ulong)(param_1 + uVar3 + 1) & (uVar3 ^ 0xffffffffffffffff));
  pvVar4 = (void *)((ulong)(param_2 + uVar3 + 1) & (uVar3 ^ 0xffffffffffffffff));
  pvVar2 = pvVar4;
  (**(code **)(lVar11 + 0x30))(pvVar4,1,lVar9);
  if ((int)pvVar2 == 0) {
    (**(code **)(lVar11 + 0x10))(pvVar6,pvVar4,lVar9);
    (**(code **)(lVar11 + 0x38))(pvVar6,0,1,lVar9);
    iVar8 = *(int *)(lVar11 + 0x54);
    sVar12 = *(size_t *)(lVar11 + 0x40);
  }
  else {
    iVar8 = *(int *)(lVar11 + 0x54);
    sVar12 = *(size_t *)(lVar11 + 0x40);
    sVar1 = sVar12;
    if (iVar8 == 0) {
      sVar1 = sVar12 + 1;
    }
    _memcpy(pvVar6,pvVar4,sVar1);
  }
  if (iVar8 == 0) {
    sVar12 = sVar12 + 1;
  }
  puVar7 = (undefined8 *)((long)pvVar6 + sVar12 + 7 & 0xfffffffffffffff8);
  puVar10 = (undefined8 *)((long)pvVar4 + sVar12 + 7 & 0xfffffffffffffff8);
  if ((ulong)puVar10[2] < 0xffffffff) {
    uVar13 = puVar10[1];
    uVar5 = *puVar10;
    uVar15 = puVar10[3];
    uVar14 = puVar10[2];
    puVar7[4] = puVar10[4];
    puVar7[1] = uVar13;
    *puVar7 = uVar5;
    puVar7[3] = uVar15;
    puVar7[2] = uVar14;
  }
  else {
    *puVar7 = *puVar10;
    puVar7[1] = puVar10[1];
    puVar7[2] = puVar10[2];
    puVar7[3] = puVar10[3];
    uVar5 = puVar10[4];
    puVar7[4] = uVar5;
    _swift_bridgeObjectRetain();
    _swift_bridgeObjectRetain(uVar5);
  }
  lVar9 = 0;
  __s10Foundation4DateVMa();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar9 + -8) + 0x50);
  (**(code **)(*(long *)(lVar9 + -8) + 0x10))
            ((long)puVar7 + uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff),
             (long)puVar10 + uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff),lVar9);
  return param_1;
}

