// rea decompile_all
// name: FUN_1002efe9c
// address: 0x1002efe9c
// body: available
// range: 0x1002efe9c-0x1002f00a3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1002efe9c(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  undefined8 uVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  size_t sVar5;
  undefined8 uVar6;
  void *pvVar7;
  ulong *puVar8;
  undefined8 *puVar9;
  void *pvVar10;
  long lVar11;
  undefined8 *puVar12;
  long lVar13;
  code *pcVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  FUN_10003f094();
  uVar1 = *param_2;
  uVar15 = param_2[3];
  uVar6 = param_2[2];
  param_1[1] = param_2[1];
  *param_1 = uVar1;
  param_1[3] = uVar15;
  param_1[2] = uVar6;
  param_1[4] = param_2[4];
  puVar12 = (undefined8 *)((long)param_1 + 0x2fU & 0xfffffffffffffff8);
  puVar9 = (undefined8 *)((long)param_2 + 0x2fU & 0xfffffffffffffff8);
  *puVar12 = *puVar9;
  uVar1 = puVar12[1];
  puVar12[1] = puVar9[1];
  _swift_bridgeObjectRelease(uVar1);
  lVar11 = *(long *)(param_3 + 0x10);
  lVar13 = *(long *)(lVar11 + -8);
  uVar4 = (ulong)*(byte *)(lVar13 + 0x50);
  pvVar7 = (void *)(uVar4 + 0x10 + (long)puVar12 & (uVar4 ^ 0xffffffffffffffff));
  pvVar10 = (void *)(uVar4 + 0x10 + (long)puVar9 & (uVar4 ^ 0xffffffffffffffff));
  pcVar14 = *(code **)(lVar13 + 0x30);
  pvVar2 = pvVar7;
  (*pcVar14)(pvVar7,1,lVar11);
  pvVar3 = pvVar10;
  (*pcVar14)(pvVar10,1,lVar11);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 == 0) {
      (**(code **)(lVar13 + 0x28))(pvVar7,pvVar10,lVar11);
      goto LAB_1002effac;
    }
    (**(code **)(lVar13 + 8))(pvVar7,lVar11);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar13 + 0x20))(pvVar7,pvVar10,lVar11);
    (**(code **)(lVar13 + 0x38))(pvVar7,0,1,lVar11);
    goto LAB_1002effac;
  }
  sVar5 = *(size_t *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    sVar5 = sVar5 + 1;
  }
  _memcpy(pvVar7,pvVar10,sVar5);
LAB_1002effac:
  lVar11 = *(long *)(lVar13 + 0x40);
  if (*(int *)(lVar13 + 0x54) == 0) {
    lVar11 = lVar11 + 1;
  }
  puVar9 = (undefined8 *)((long)pvVar7 + lVar11 + 7 & 0xfffffffffffffff8);
  puVar12 = (undefined8 *)((long)pvVar10 + lVar11 + 7 & 0xfffffffffffffff8);
  FUN_10003f094(puVar9);
  uVar6 = puVar12[1];
  uVar1 = *puVar12;
  uVar16 = puVar12[3];
  uVar15 = puVar12[2];
  puVar9[4] = puVar12[4];
  puVar9[1] = uVar6;
  *puVar9 = uVar1;
  puVar9[3] = uVar16;
  puVar9[2] = uVar15;
  uVar1 = puVar9[5];
  puVar9[5] = puVar12[5];
  _swift_bridgeObjectRelease(uVar1);
  puVar8 = puVar9 + 6;
  uVar4 = puVar12[6];
  if (*puVar8 < 0xffffffff) {
    if (0xfffffffe < uVar4) {
      uVar1 = puVar12[7];
      *puVar8 = uVar4;
      puVar9[7] = uVar1;
      return param_1;
    }
  }
  else {
    if (0xfffffffe < uVar4) {
      uVar6 = puVar12[7];
      uVar1 = puVar9[7];
      *puVar8 = uVar4;
      puVar9[7] = uVar6;
      _swift_release(uVar1);
      return param_1;
    }
    _swift_release(puVar9[7]);
  }
  uVar4 = puVar12[6];
  puVar9[7] = puVar12[7];
  *puVar8 = uVar4;
  return param_1;
}

