// rea decompile_all
// name: FUN_1002ef9ac
// address: 0x1002ef9ac
// body: available
// range: 0x1002ef9ac-0x1002efb3b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1002ef9ac(long param_1,long param_2,long param_3)

{
  size_t sVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  ulong uVar6;
  void *pvVar7;
  void *pvVar8;
  ulong uVar9;
  int iVar10;
  long lVar11;
  ulong uVar12;
  long lVar13;
  size_t sVar14;
  code *pcVar15;
  
  lVar11 = *(long *)(param_2 + 0x18);
  *(undefined8 *)(param_1 + 0x20) = *(undefined8 *)(param_2 + 0x20);
  *(long *)(param_1 + 0x18) = lVar11;
  (*(code *)**(undefined8 **)(lVar11 + -8))();
  puVar4 = (undefined8 *)(param_1 + 0x2fU & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)(param_2 + 0x2fU & 0xfffffffffffffff8);
  *puVar4 = *puVar5;
  puVar4[1] = puVar5[1];
  lVar11 = *(long *)(param_3 + 0x10);
  lVar13 = *(long *)(lVar11 + -8);
  uVar6 = (ulong)*(byte *)(lVar13 + 0x50);
  pvVar7 = (void *)(uVar6 + 0x10 + (long)puVar4 & (uVar6 ^ 0xffffffffffffffff));
  pvVar8 = (void *)(uVar6 + 0x10 + (long)puVar5 & (uVar6 ^ 0xffffffffffffffff));
  pcVar15 = *(code **)(lVar13 + 0x30);
  _swift_bridgeObjectRetain();
  pvVar2 = pvVar8;
  (*pcVar15)(pvVar8,1,lVar11);
  if ((int)pvVar2 == 0) {
    (**(code **)(lVar13 + 0x10))(pvVar7,pvVar8,lVar11);
    (**(code **)(lVar13 + 0x38))(pvVar7,0,1,lVar11);
    iVar10 = *(int *)(lVar13 + 0x54);
    sVar14 = *(size_t *)(lVar13 + 0x40);
  }
  else {
    iVar10 = *(int *)(lVar13 + 0x54);
    sVar14 = *(size_t *)(lVar13 + 0x40);
    sVar1 = sVar14;
    if (iVar10 == 0) {
      sVar1 = sVar14 + 1;
    }
    _memcpy(pvVar7,pvVar8,sVar1);
  }
  if (iVar10 == 0) {
    sVar14 = sVar14 + 1;
  }
  uVar6 = (long)pvVar7 + sVar14 + 7 & 0xfffffffffffffff8;
  uVar9 = (long)pvVar8 + sVar14 + 7 & 0xfffffffffffffff8;
  lVar11 = *(long *)(uVar9 + 0x18);
  *(long *)(uVar6 + 0x18) = lVar11;
  *(undefined8 *)(uVar6 + 0x20) = *(undefined8 *)(uVar9 + 0x20);
  (*(code *)**(undefined8 **)(lVar11 + -8))(uVar6,uVar9);
  *(undefined8 *)(uVar6 + 0x28) = *(undefined8 *)(uVar9 + 0x28);
  uVar12 = *(ulong *)(uVar9 + 0x30);
  _swift_bridgeObjectRetain();
  if (uVar12 < 0xffffffff) {
    uVar12 = *(ulong *)(uVar9 + 0x30);
    *(undefined8 *)(uVar6 + 0x38) = *(undefined8 *)(uVar9 + 0x38);
    *(ulong *)(uVar6 + 0x30) = uVar12;
  }
  else {
    uVar3 = *(undefined8 *)(uVar9 + 0x38);
    *(ulong *)(uVar6 + 0x30) = uVar12;
    *(undefined8 *)(uVar6 + 0x38) = uVar3;
    _swift_retain();
  }
  return param_1;
}

