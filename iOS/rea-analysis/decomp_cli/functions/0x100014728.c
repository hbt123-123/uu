// rea decompile_all
// name: FUN_100014728
// address: 0x100014728
// body: available
// range: 0x100014728-0x1000148ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_100014728(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  long lVar3;
  void *pvVar4;
  ulong uVar5;
  size_t sVar6;
  ulong uVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 *puVar10;
  void *pvVar11;
  undefined8 *puVar12;
  ulong uVar13;
  void *pvVar14;
  long lVar15;
  long lVar16;
  undefined8 uVar17;
  undefined8 uVar18;
  undefined8 uVar19;
  
  lVar8 = *(long *)(param_3 + 0x10);
  lVar16 = *(long *)(lVar8 + -8);
  uVar2 = *(uint *)(lVar16 + 0x50);
  uVar13 = (ulong)uVar2 & 0xff;
  sVar6 = *(size_t *)(lVar16 + 0x40);
  if (*(int *)(lVar16 + 0x54) == 0) {
    sVar6 = sVar6 + 1;
  }
  lVar1 = sVar6 + 7;
  lVar3 = 0;
  __s10Foundation4DateVMa();
  lVar15 = *(long *)(lVar3 + -8);
  uVar7 = (ulong)*(uint *)(lVar15 + 0x50) & 0xff;
  uVar5 = uVar7 | uVar13;
  if ((uVar5 < 8 && ((*(uint *)(lVar15 + 0x50) | uVar2) & 0x100000) == 0) &&
      0xffffffffffffffe6 <
      ((((-uVar13 - 2 | uVar13) - lVar1 | 7) - uVar7) - 0x28 | uVar7) - *(long *)(lVar15 + 0x40)) {
    *(char *)param_1 = (char)*param_2;
    pvVar11 = (void *)((ulong)((long)param_1 + uVar13 + 1) & (uVar13 ^ 0xffffffffffffffff));
    pvVar14 = (void *)((ulong)((long)param_2 + uVar13 + 1) & (uVar13 ^ 0xffffffffffffffff));
    pvVar4 = pvVar14;
    (**(code **)(lVar16 + 0x30))(pvVar14,1,lVar8);
    if ((int)pvVar4 == 0) {
      (**(code **)(lVar16 + 0x10))(pvVar11,pvVar14,lVar8);
      (**(code **)(lVar16 + 0x38))(pvVar11,0,1,lVar8);
    }
    else {
      _memcpy(pvVar11,pvVar14,sVar6);
    }
    puVar10 = (undefined8 *)(lVar1 + (long)pvVar11 & 0xfffffffffffffff8);
    puVar12 = (undefined8 *)(lVar1 + (long)pvVar14 & 0xfffffffffffffff8);
    if ((ulong)puVar12[2] < 0xffffffff) {
      uVar17 = puVar12[1];
      uVar9 = *puVar12;
      uVar19 = puVar12[3];
      uVar18 = puVar12[2];
      puVar10[4] = puVar12[4];
      puVar10[1] = uVar17;
      *puVar10 = uVar9;
      puVar10[3] = uVar19;
      puVar10[2] = uVar18;
    }
    else {
      *puVar10 = *puVar12;
      puVar10[1] = puVar12[1];
      puVar10[2] = puVar12[2];
      puVar10[3] = puVar12[3];
      uVar9 = puVar12[4];
      puVar10[4] = uVar9;
      _swift_bridgeObjectRetain();
      _swift_bridgeObjectRetain(uVar9);
    }
    (**(code **)(lVar15 + 0x10))(puVar10 + 5,puVar12 + 5,lVar3);
  }
  else {
    lVar8 = *param_2;
    *param_1 = lVar8;
    param_1 = (long *)(lVar8 + ((ulong)((uint)uVar5 & 0xf8 ^ 0x1f8) & uVar5 + 0x10));
    _swift_retain();
  }
  return param_1;
}

