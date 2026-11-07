// rea decompile_all
// name: FUN_100014e84
// address: 0x100014e84
// body: available
// range: 0x100014e84-0x10001505b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_100014e84(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  ulong uVar4;
  size_t sVar5;
  void *pvVar6;
  undefined8 *puVar7;
  void *pvVar8;
  undefined8 *puVar9;
  long lVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  
  *param_1 = *param_2;
  lVar10 = *(long *)(param_3 + 0x10);
  lVar11 = *(long *)(lVar10 + -8);
  uVar4 = (ulong)*(byte *)(lVar11 + 0x50);
  pvVar8 = (void *)((ulong)(param_1 + uVar4 + 1) & (uVar4 ^ 0xffffffffffffffff));
  pvVar6 = (void *)((ulong)(param_2 + uVar4 + 1) & (uVar4 ^ 0xffffffffffffffff));
  pcVar12 = *(code **)(lVar11 + 0x30);
  pvVar1 = pvVar8;
  (*pcVar12)(pvVar8,1,lVar10);
  pvVar2 = pvVar6;
  (*pcVar12)(pvVar6,1,lVar10);
  if ((int)pvVar1 == 0) {
    if ((int)pvVar2 != 0) {
      (**(code **)(lVar11 + 8))(pvVar8,lVar10);
      goto LAB_100014f3c;
    }
    (**(code **)(lVar11 + 0x28))(pvVar8,pvVar6,lVar10);
  }
  else if ((int)pvVar2 == 0) {
    (**(code **)(lVar11 + 0x20))(pvVar8,pvVar6,lVar10);
    (**(code **)(lVar11 + 0x38))(pvVar8,0,1,lVar10);
  }
  else {
LAB_100014f3c:
    sVar5 = *(size_t *)(lVar11 + 0x40);
    if (*(int *)(lVar11 + 0x54) == 0) {
      sVar5 = sVar5 + 1;
    }
    _memcpy(pvVar8,pvVar6,sVar5);
  }
  lVar10 = *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar10 = lVar10 + 1;
  }
  puVar9 = (undefined8 *)((long)pvVar8 + lVar10 + 7 & 0xfffffffffffffff8);
  puVar7 = (undefined8 *)((long)pvVar6 + lVar10 + 7 & 0xfffffffffffffff8);
  if (0xfffffffe < (ulong)puVar9[2]) {
    if (0xfffffffe < (ulong)puVar7[2]) {
      *puVar9 = *puVar7;
      puVar9[1] = puVar7[1];
      puVar9[2] = puVar7[2];
      _swift_bridgeObjectRelease();
      puVar9[3] = puVar7[3];
      uVar3 = puVar9[4];
      puVar9[4] = puVar7[4];
      _swift_bridgeObjectRelease(uVar3);
      goto LAB_100014ff4;
    }
    _swift_bridgeObjectRelease();
    _swift_bridgeObjectRelease(puVar9[4]);
  }
  uVar13 = puVar7[1];
  uVar3 = *puVar7;
  uVar15 = puVar7[3];
  uVar14 = puVar7[2];
  puVar9[4] = puVar7[4];
  puVar9[1] = uVar13;
  *puVar9 = uVar3;
  puVar9[3] = uVar15;
  puVar9[2] = uVar14;
LAB_100014ff4:
  lVar10 = 0;
  __s10Foundation4DateVMa();
  uVar4 = (ulong)*(byte *)(*(long *)(lVar10 + -8) + 0x50);
  (**(code **)(*(long *)(lVar10 + -8) + 0x28))
            ((long)puVar9 + uVar4 + 0x28 & (uVar4 ^ 0xffffffffffffffff),
             (long)puVar7 + uVar4 + 0x28 & (uVar4 ^ 0xffffffffffffffff),lVar10);
  return param_1;
}

