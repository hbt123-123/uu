// rea decompile_all
// name: FUN_100316240
// address: 0x100316240
// body: available
// range: 0x100316240-0x1003163af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_100316240(void *param_1,void *param_2,long param_3)

{
  size_t sVar1;
  long lVar2;
  void *pvVar3;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  int iVar7;
  undefined8 uVar8;
  long lVar9;
  size_t sVar10;
  undefined8 *puVar11;
  
  lVar2 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x1008f97a8,
             &TargetProtocolRequirement_1008f97b8);
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
  puVar4 = (undefined8 *)(sVar10 + 7 + (long)param_2 & 0xfffffffffffffff8);
  puVar11 = (undefined8 *)(sVar10 + 7 + (long)param_1 & 0xfffffffffffffff8);
  *puVar11 = *puVar4;
  uVar5 = puVar4[1];
  if (0xfffffffe < uVar5) {
    _swift_errorRetain(uVar5);
  }
  puVar11[1] = uVar5;
  puVar11[2] = puVar4[2];
  uVar8 = puVar4[4];
  uVar6 = puVar4[3];
  *(undefined1 *)(puVar11 + 5) = *(undefined1 *)(puVar4 + 5);
  puVar11[4] = uVar8;
  puVar11[3] = uVar6;
  uVar6 = puVar4[6];
  puVar11[6] = uVar6;
  uVar8 = puVar4[7];
  puVar11[7] = uVar8;
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar6);
  _swift_bridgeObjectRetain(uVar8);
  return param_1;
}

