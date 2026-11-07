// rea decompile_all
// name: FUN_1002efb3c
// address: 0x1002efb3c
// body: available
// range: 0x1002efb3c-0x1002efd43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1002efb3c(long param_1,long param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  ulong uVar3;
  size_t sVar4;
  void *pvVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  void *pvVar9;
  ulong uVar10;
  ulong *puVar11;
  long lVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 *puVar15;
  code *pcVar16;
  
  FUN_100260848();
  puVar13 = (undefined8 *)(param_1 + 0x2fU & 0xfffffffffffffff8);
  puVar15 = (undefined8 *)(param_2 + 0x2fU & 0xfffffffffffffff8);
  *puVar13 = *puVar15;
  uVar8 = puVar13[1];
  puVar13[1] = puVar15[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  lVar12 = *(long *)(param_3 + 0x10);
  lVar14 = *(long *)(lVar12 + -8);
  uVar3 = (ulong)*(byte *)(lVar14 + 0x50);
  pvVar5 = (void *)(uVar3 + 0x10 + (long)puVar13 & (uVar3 ^ 0xffffffffffffffff));
  pvVar9 = (void *)(uVar3 + 0x10 + (long)puVar15 & (uVar3 ^ 0xffffffffffffffff));
  pcVar16 = *(code **)(lVar14 + 0x30);
  pvVar1 = pvVar5;
  (*pcVar16)(pvVar5,1,lVar12);
  pvVar2 = pvVar9;
  (*pcVar16)(pvVar9,1,lVar12);
  if ((int)pvVar1 == 0) {
    if ((int)pvVar2 == 0) {
      (**(code **)(lVar14 + 0x18))(pvVar5,pvVar9,lVar12);
      goto LAB_1002efc44;
    }
    (**(code **)(lVar14 + 8))(pvVar5,lVar12);
  }
  else if ((int)pvVar2 == 0) {
    (**(code **)(lVar14 + 0x10))(pvVar5,pvVar9,lVar12);
    (**(code **)(lVar14 + 0x38))(pvVar5,0,1,lVar12);
    goto LAB_1002efc44;
  }
  sVar4 = *(size_t *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    sVar4 = sVar4 + 1;
  }
  _memcpy(pvVar5,pvVar9,sVar4);
LAB_1002efc44:
  lVar12 = *(long *)(lVar14 + 0x40);
  if (*(int *)(lVar14 + 0x54) == 0) {
    lVar12 = lVar12 + 1;
  }
  uVar6 = (long)pvVar5 + lVar12 + 7 & 0xfffffffffffffff8;
  uVar10 = (long)pvVar9 + lVar12 + 7 & 0xfffffffffffffff8;
  FUN_100260848(uVar6,uVar10);
  uVar8 = *(undefined8 *)(uVar6 + 0x28);
  *(undefined8 *)(uVar6 + 0x28) = *(undefined8 *)(uVar10 + 0x28);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  puVar11 = (ulong *)(uVar6 + 0x30);
  uVar3 = *(ulong *)(uVar10 + 0x30);
  if (*puVar11 < 0xffffffff) {
    if (0xfffffffe < uVar3) {
      uVar8 = *(undefined8 *)(uVar10 + 0x38);
      *puVar11 = uVar3;
      *(undefined8 *)(uVar6 + 0x38) = uVar8;
      _swift_retain();
      return param_1;
    }
  }
  else {
    if (0xfffffffe < uVar3) {
      uVar8 = *(undefined8 *)(uVar10 + 0x38);
      uVar7 = *(undefined8 *)(uVar6 + 0x38);
      *puVar11 = uVar3;
      *(undefined8 *)(uVar6 + 0x38) = uVar8;
      _swift_retain();
      _swift_release(uVar7);
      return param_1;
    }
    _swift_release(*(undefined8 *)(uVar6 + 0x38));
  }
  uVar3 = *(ulong *)(uVar10 + 0x30);
  *(undefined8 *)(uVar6 + 0x38) = *(undefined8 *)(uVar10 + 0x38);
  *puVar11 = uVar3;
  return param_1;
}

