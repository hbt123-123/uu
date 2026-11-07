// rea decompile_all
// name: FUN_1004fccf4
// address: 0x1004fccf4
// body: available
// range: 0x1004fccf4-0x1004fce6f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_1004fccf4(void *param_1,void *param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  size_t sVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  long lVar7;
  code *pcVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_100996088,PTR___s13AsyncIteratorSciTl_100995fe8);
  lVar7 = *(long *)(lVar1 + -8);
  pcVar8 = *(code **)(lVar7 + 0x30);
  pvVar2 = param_1;
  (*pcVar8)(param_1,1,lVar1);
  pvVar3 = param_2;
  (*pcVar8)(param_2,1,lVar1);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 == 0) {
      (**(code **)(lVar7 + 0x28))(param_1,param_2,lVar1);
      goto LAB_1004fcdc8;
    }
    (**(code **)(lVar7 + 8))(param_1,lVar1);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar1);
    (**(code **)(lVar7 + 0x38))(param_1,0,1,lVar1);
    goto LAB_1004fcdc8;
  }
  sVar4 = *(size_t *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    sVar4 = sVar4 + 1;
  }
  _memcpy(param_1,param_2,sVar4);
LAB_1004fcdc8:
  lVar1 = *(long *)(lVar7 + 0x40);
  if (*(int *)(lVar7 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  puVar6 = (undefined8 *)((long)param_1 + lVar1 + 7 & 0xfffffffffffffff8);
  if (0xfffffffe < (ulong)puVar6[3]) {
    FUN_10003f094(puVar6);
  }
  puVar5 = (undefined8 *)((long)param_2 + lVar1 + 7 & 0xfffffffffffffff8);
  uVar10 = puVar5[1];
  uVar9 = *puVar5;
  uVar12 = puVar5[3];
  uVar11 = puVar5[2];
  puVar6[4] = puVar5[4];
  puVar6[1] = uVar10;
  *puVar6 = uVar9;
  puVar6[3] = uVar12;
  puVar6[2] = uVar11;
  *(undefined1 *)(puVar6 + 5) = *(undefined1 *)(puVar5 + 5);
  puVar5 = (undefined8 *)((long)param_1 + lVar1 + 0x37 & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)((long)param_2 + lVar1 + 0x37 & 0xfffffffffffffff8);
  *puVar5 = *puVar6;
  *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(puVar6 + 1);
  return param_1;
}

