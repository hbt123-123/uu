// rea decompile_all
// name: FUN_100316710
// address: 0x100316710
// body: available
// range: 0x100316710-0x1003168fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_100316710(void *param_1,void *param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  undefined8 uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  size_t sVar7;
  undefined8 *puVar8;
  ulong *puVar9;
  long lVar10;
  code *pcVar11;
  undefined8 uVar12;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x1008f97a8,
             &TargetProtocolRequirement_1008f97b8);
  lVar10 = *(long *)(lVar1 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  pvVar2 = param_1;
  (*pcVar11)(param_1,1,lVar1);
  pvVar3 = param_2;
  (*pcVar11)(param_2,1,lVar1);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 != 0) {
      (**(code **)(lVar10 + 8))(param_1,lVar1);
      goto LAB_1003167c4;
    }
    (**(code **)(lVar10 + 0x28))(param_1,param_2,lVar1);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar10 + 0x20))(param_1,param_2,lVar1);
    (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar1);
  }
  else {
LAB_1003167c4:
    sVar7 = *(size_t *)(lVar10 + 0x40);
    if (*(int *)(lVar10 + 0x54) == 0) {
      sVar7 = sVar7 + 1;
    }
    _memcpy(param_1,param_2,sVar7);
  }
  lVar1 = *(long *)(lVar10 + 0x40);
  if (*(int *)(lVar10 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  puVar8 = (undefined8 *)(lVar1 + 7 + (long)param_1 & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)(lVar1 + 7 + (long)param_2 & 0xfffffffffffffff8);
  *puVar8 = *puVar5;
  puVar9 = puVar8 + 1;
  uVar6 = puVar5[1];
  if (0xfffffffe < *puVar9) {
    if (0xfffffffe < uVar6) {
      *puVar9 = uVar6;
      _swift_errorRelease();
      goto LAB_100316858;
    }
    _swift_errorRelease();
    uVar6 = puVar5[1];
  }
  *puVar9 = uVar6;
LAB_100316858:
  uVar4 = puVar8[2];
  puVar8[2] = puVar5[2];
  _swift_bridgeObjectRelease(uVar4);
  uVar12 = puVar5[4];
  uVar4 = puVar5[3];
  *(undefined1 *)(puVar8 + 5) = *(undefined1 *)(puVar5 + 5);
  puVar8[4] = uVar12;
  puVar8[3] = uVar4;
  uVar4 = puVar8[6];
  puVar8[6] = puVar5[6];
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = puVar8[7];
  puVar8[7] = puVar5[7];
  _swift_bridgeObjectRelease(uVar4);
  return param_1;
}

