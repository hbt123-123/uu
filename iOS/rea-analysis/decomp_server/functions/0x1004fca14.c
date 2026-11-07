// rea decompile_all
// name: FUN_1004fca14
// address: 0x1004fca14
// body: available
// range: 0x1004fca14-0x1004fcbdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_1004fca14(void *param_1,void *param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  size_t sVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  code *pcVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_100996088,PTR___s13AsyncIteratorSciTl_100995fe8);
  lVar8 = *(long *)(lVar1 + -8);
  pcVar9 = *(code **)(lVar8 + 0x30);
  pvVar2 = param_1;
  (*pcVar9)(param_1,1,lVar1);
  pvVar3 = param_2;
  (*pcVar9)(param_2,1,lVar1);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 != 0) {
      (**(code **)(lVar8 + 8))(param_1,lVar1);
      goto LAB_1004fcacc;
    }
    (**(code **)(lVar8 + 0x18))(param_1,param_2,lVar1);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar8 + 0x10))(param_1,param_2,lVar1);
    (**(code **)(lVar8 + 0x38))(param_1,0,1,lVar1);
  }
  else {
LAB_1004fcacc:
    sVar5 = *(size_t *)(lVar8 + 0x40);
    if (*(int *)(lVar8 + 0x54) == 0) {
      sVar5 = sVar5 + 1;
    }
    _memcpy(param_1,param_2,sVar5);
  }
  lVar1 = *(long *)(lVar8 + 0x40);
  if (*(int *)(lVar8 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  puVar6 = (undefined8 *)((long)param_1 + lVar1 + 7 & 0xfffffffffffffff8);
  puVar7 = (undefined8 *)((long)param_2 + lVar1 + 7 & 0xfffffffffffffff8);
  uVar4 = puVar7[3];
  if ((ulong)puVar6[3] < 0xffffffff) {
    if (0xfffffffe < uVar4) {
      puVar6[3] = uVar4;
      puVar6[4] = puVar7[4];
      (*(code *)**(undefined8 **)(uVar4 - 8))(puVar6,puVar7);
      goto LAB_1004fcb84;
    }
  }
  else {
    if (0xfffffffe < uVar4) {
      FUN_100260848(puVar6,puVar7);
      goto LAB_1004fcb84;
    }
    FUN_10003f094(puVar6);
  }
  uVar11 = puVar7[1];
  uVar10 = *puVar7;
  uVar13 = puVar7[3];
  uVar12 = puVar7[2];
  puVar6[4] = puVar7[4];
  puVar6[1] = uVar11;
  *puVar6 = uVar10;
  puVar6[3] = uVar13;
  puVar6[2] = uVar12;
LAB_1004fcb84:
  *(undefined1 *)(puVar6 + 5) = *(undefined1 *)(puVar7 + 5);
  puVar6 = (undefined8 *)((long)param_1 + lVar1 + 0x37 & 0xfffffffffffffff8);
  puVar7 = (undefined8 *)((long)param_2 + lVar1 + 0x37 & 0xfffffffffffffff8);
  *puVar6 = *puVar7;
  *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar7 + 1);
  return param_1;
}

