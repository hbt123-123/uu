// rea decompile_all
// name: FUN_100014b2c
// address: 0x100014b2c
// body: available
// range: 0x100014b2c-0x100014d5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_100014b2c(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  size_t sVar4;
  void *pvVar5;
  undefined8 uVar6;
  void *pvVar7;
  undefined8 *puVar8;
  long lVar9;
  undefined8 *puVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  *param_1 = *param_2;
  lVar9 = *(long *)(param_3 + 0x10);
  lVar11 = *(long *)(lVar9 + -8);
  uVar3 = (ulong)*(byte *)(lVar11 + 0x50);
  pvVar7 = (void *)((ulong)(param_1 + uVar3 + 1) & (uVar3 ^ 0xffffffffffffffff));
  pvVar5 = (void *)((ulong)(param_2 + uVar3 + 1) & (uVar3 ^ 0xffffffffffffffff));
  pcVar12 = *(code **)(lVar11 + 0x30);
  pvVar1 = pvVar7;
  (*pcVar12)(pvVar7,1,lVar9);
  pvVar2 = pvVar5;
  (*pcVar12)(pvVar5,1,lVar9);
  if ((int)pvVar1 == 0) {
    if ((int)pvVar2 != 0) {
      (**(code **)(lVar11 + 8))(pvVar7,lVar9);
      goto LAB_100014be4;
    }
    (**(code **)(lVar11 + 0x18))(pvVar7,pvVar5,lVar9);
  }
  else if ((int)pvVar2 == 0) {
    (**(code **)(lVar11 + 0x10))(pvVar7,pvVar5,lVar9);
    (**(code **)(lVar11 + 0x38))(pvVar7,0,1,lVar9);
  }
  else {
LAB_100014be4:
    sVar4 = *(size_t *)(lVar11 + 0x40);
    if (*(int *)(lVar11 + 0x54) == 0) {
      sVar4 = sVar4 + 1;
    }
    _memcpy(pvVar7,pvVar5,sVar4);
  }
  lVar9 = *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar9 = lVar9 + 1;
  }
  puVar8 = (undefined8 *)((long)pvVar7 + lVar9 + 7 & 0xfffffffffffffff8);
  puVar10 = (undefined8 *)((long)pvVar5 + lVar9 + 7 & 0xfffffffffffffff8);
  uVar3 = puVar8[2];
  if (uVar3 < 0xffffffff) {
    if (0xfffffffe < (ulong)puVar10[2]) {
      *puVar8 = *puVar10;
      puVar8[1] = puVar10[1];
      puVar8[2] = puVar10[2];
      puVar8[3] = puVar10[3];
      uVar6 = puVar10[4];
      puVar8[4] = uVar6;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar6);
      goto LAB_100014cf4;
    }
  }
  else {
    if (0xfffffffe < (ulong)puVar10[2]) {
      *puVar8 = *puVar10;
      puVar8[1] = puVar10[1];
      puVar8[2] = puVar10[2];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar3);
      puVar8[3] = puVar10[3];
      uVar6 = puVar8[4];
      puVar8[4] = puVar10[4];
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRelease(uVar6);
      goto LAB_100014cf4;
    }
    _swift_bridgeObjectRelease(uVar3);
    _swift_bridgeObjectRelease(puVar8[4]);
  }
  uVar13 = puVar10[1];
  uVar6 = *puVar10;
  uVar15 = puVar10[3];
  uVar14 = puVar10[2];
  puVar8[4] = puVar10[4];
  puVar8[1] = uVar13;
  *puVar8 = uVar6;
  puVar8[3] = uVar15;
  puVar8[2] = uVar14;
LAB_100014cf4:
  lVar9 = 0;
  __s10Foundation4DateVMa();
  uVar3 = (ulong)*(byte *)(*(long *)(lVar9 + -8) + 0x50);
  (**(code **)(*(long *)(lVar9 + -8) + 0x18))
            ((long)puVar8 + uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff),
             (long)puVar10 + uVar3 + 0x28 & (uVar3 ^ 0xffffffffffffffff),lVar9);
  return param_1;
}

