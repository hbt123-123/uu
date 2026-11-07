// rea decompile_all
// name: FUN_1004fc8c0
// address: 0x1004fc8c0
// body: available
// range: 0x1004fc8c0-0x1004fca13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_1004fc8c0(void *param_1,void *param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  undefined8 *puVar8;
  long lVar9;
  size_t sVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_100996088,PTR___s13AsyncIteratorSciTl_100995fe8);
  lVar9 = *(long *)(lVar2 + -8);
  pvVar3 = param_2;
  (**(code **)(lVar9 + 0x30))(param_2,1,lVar2);
  if ((int)pvVar3 == 0) {
    (**(code **)(lVar9 + 0x10))(param_1,param_2,lVar2);
    (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar2);
    iVar7 = *(int *)(lVar9 + 0x54);
    sVar10 = *(size_t *)(lVar9 + 0x40);
  }
  else {
    iVar7 = *(int *)(lVar9 + 0x54);
    sVar10 = *(size_t *)(lVar9 + 0x40);
    sVar1 = sVar10;
    if (iVar7 == 0) {
      sVar1 = sVar10 + 1;
    }
    _memcpy(param_1,param_2,sVar1);
  }
  if (iVar7 == 0) {
    sVar10 = sVar10 + 1;
  }
  puVar6 = (undefined8 *)((long)param_1 + sVar10 + 7 & 0xfffffffffffffff8);
  puVar8 = (undefined8 *)((long)param_2 + sVar10 + 7 & 0xfffffffffffffff8);
  uVar4 = puVar8[3];
  if (uVar4 < 0xffffffff) {
    uVar11 = puVar8[1];
    uVar5 = *puVar8;
    uVar13 = puVar8[3];
    uVar12 = puVar8[2];
    puVar6[4] = puVar8[4];
    puVar6[1] = uVar11;
    *puVar6 = uVar5;
    puVar6[3] = uVar13;
    puVar6[2] = uVar12;
  }
  else {
    puVar6[3] = uVar4;
    puVar6[4] = puVar8[4];
    (*(code *)**(undefined8 **)(uVar4 - 8))(puVar6,puVar8);
  }
  *(undefined1 *)(puVar6 + 5) = *(undefined1 *)(puVar8 + 5);
  puVar6 = (undefined8 *)((long)param_1 + sVar10 + 0x37 & 0xfffffffffffffff8);
  puVar8 = (undefined8 *)((long)param_2 + sVar10 + 0x37 & 0xfffffffffffffff8);
  uVar5 = *puVar8;
  *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar8 + 1);
  *puVar6 = uVar5;
  return param_1;
}

