// rea decompile_all
// name: FUN_1004fcbdc
// address: 0x1004fcbdc
// body: available
// range: 0x1004fcbdc-0x1004fccf3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_1004fcbdc(void *param_1,void *param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  int iVar7;
  long lVar8;
  size_t sVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x20),*(undefined8 *)(param_3 + 0x10),
             PTR___sSciTL_100996088,PTR___s13AsyncIteratorSciTl_100995fe8);
  lVar8 = *(long *)(lVar2 + -8);
  pvVar3 = param_2;
  (**(code **)(lVar8 + 0x30))(param_2,1,lVar2);
  if ((int)pvVar3 == 0) {
    (**(code **)(lVar8 + 0x20))(param_1,param_2,lVar2);
    (**(code **)(lVar8 + 0x38))(param_1,0,1,lVar2);
    iVar7 = *(int *)(lVar8 + 0x54);
    sVar9 = *(size_t *)(lVar8 + 0x40);
  }
  else {
    iVar7 = *(int *)(lVar8 + 0x54);
    sVar9 = *(size_t *)(lVar8 + 0x40);
    sVar1 = sVar9;
    if (iVar7 == 0) {
      sVar1 = sVar9 + 1;
    }
    _memcpy(param_1,param_2,sVar1);
  }
  if (iVar7 == 0) {
    sVar9 = sVar9 + 1;
  }
  puVar4 = (undefined8 *)((long)param_1 + sVar9 + 7 & 0xfffffffffffffff8);
  puVar6 = (undefined8 *)((long)param_2 + sVar9 + 7 & 0xfffffffffffffff8);
  uVar10 = puVar6[1];
  uVar5 = *puVar6;
  uVar12 = puVar6[3];
  uVar11 = puVar6[2];
  puVar4[4] = puVar6[4];
  puVar4[1] = uVar10;
  *puVar4 = uVar5;
  puVar4[3] = uVar12;
  puVar4[2] = uVar11;
  *(undefined1 *)(puVar4 + 5) = *(undefined1 *)(puVar6 + 5);
  puVar6 = (undefined8 *)((long)param_1 + sVar9 + 0x37 & 0xfffffffffffffff8);
  puVar4 = (undefined8 *)((long)param_2 + sVar9 + 0x37 & 0xfffffffffffffff8);
  uVar5 = *puVar4;
  *(undefined1 *)(puVar6 + 1) = *(undefined1 *)(puVar4 + 1);
  *puVar6 = uVar5;
  return param_1;
}

