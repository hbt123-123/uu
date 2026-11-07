// rea decompile_all
// name: FUN_1003165d0
// address: 0x1003165d0
// body: available
// range: 0x1003165d0-0x10031670f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_1003165d0(void *param_1,void *param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  int iVar6;
  long lVar7;
  size_t sVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x1008f97a8,
             &TargetProtocolRequirement_1008f97b8);
  lVar7 = *(long *)(lVar2 + -8);
  pvVar3 = param_2;
  (**(code **)(lVar7 + 0x30))(param_2,1,lVar2);
  if ((int)pvVar3 == 0) {
    (**(code **)(lVar7 + 0x20))(param_1,param_2,lVar2);
    (**(code **)(lVar7 + 0x38))(param_1,0,1,lVar2);
    iVar6 = *(int *)(lVar7 + 0x54);
    sVar8 = *(size_t *)(lVar7 + 0x40);
  }
  else {
    iVar6 = *(int *)(lVar7 + 0x54);
    sVar8 = *(size_t *)(lVar7 + 0x40);
    sVar1 = sVar8;
    if (iVar6 == 0) {
      sVar1 = sVar8 + 1;
    }
    _memcpy(param_1,param_2,sVar1);
  }
  if (iVar6 == 0) {
    sVar8 = sVar8 + 1;
  }
  puVar4 = (undefined8 *)(sVar8 + 7 + (long)param_2 & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)(sVar8 + 7 + (long)param_1 & 0xfffffffffffffff8);
  *puVar5 = *puVar4;
  puVar5[1] = puVar4[1];
  puVar5[2] = puVar4[2];
  uVar10 = puVar4[4];
  uVar9 = puVar4[3];
  *(undefined1 *)(puVar5 + 5) = *(undefined1 *)(puVar4 + 5);
  puVar5[4] = uVar10;
  puVar5[3] = uVar9;
  puVar5[6] = puVar4[6];
  puVar5[7] = puVar4[7];
  return param_1;
}

