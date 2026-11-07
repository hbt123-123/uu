// rea decompile_all
// name: FUN_1003163b0
// address: 0x1003163b0
// body: available
// range: 0x1003163b0-0x1003165cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_1003163b0(void *param_1,void *param_2,long param_3)

{
  long lVar1;
  void *pvVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  size_t sVar6;
  undefined8 *puVar7;
  ulong uVar8;
  undefined8 uVar9;
  ulong *puVar10;
  long lVar11;
  code *pcVar12;
  undefined8 uVar13;
  
  lVar1 = 0;
  _swift_getAssociatedTypeWitness
            (0,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x10),0x1008f97a8,
             &TargetProtocolRequirement_1008f97b8);
  lVar11 = *(long *)(lVar1 + -8);
  pcVar12 = *(code **)(lVar11 + 0x30);
  pvVar2 = param_1;
  (*pcVar12)(param_1,1,lVar1);
  pvVar3 = param_2;
  (*pcVar12)(param_2,1,lVar1);
  if ((int)pvVar2 == 0) {
    if ((int)pvVar3 == 0) {
      (**(code **)(lVar11 + 0x18))(param_1,param_2,lVar1);
      goto LAB_100316480;
    }
    (**(code **)(lVar11 + 8))(param_1,lVar1);
  }
  else if ((int)pvVar3 == 0) {
    (**(code **)(lVar11 + 0x10))(param_1,param_2,lVar1);
    (**(code **)(lVar11 + 0x38))(param_1,0,1,lVar1);
    goto LAB_100316480;
  }
  sVar6 = *(size_t *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    sVar6 = sVar6 + 1;
  }
  _memcpy(param_1,param_2,sVar6);
LAB_100316480:
  lVar1 = *(long *)(lVar11 + 0x40);
  if (*(int *)(lVar11 + 0x54) == 0) {
    lVar1 = lVar1 + 1;
  }
  puVar7 = (undefined8 *)(lVar1 + 7 + (long)param_1 & 0xfffffffffffffff8);
  puVar5 = (undefined8 *)(lVar1 + 7 + (long)param_2 & 0xfffffffffffffff8);
  *puVar7 = *puVar5;
  puVar10 = puVar7 + 1;
  uVar8 = puVar5[1];
  if (*puVar10 < 0xffffffff) {
    if (0xfffffffe < uVar8) {
      _swift_errorRetain(uVar8);
    }
    *puVar10 = uVar8;
  }
  else if (uVar8 < 0xffffffff) {
    _swift_errorRelease();
    *puVar10 = puVar5[1];
  }
  else {
    _swift_errorRetain(uVar8);
    uVar4 = *puVar10;
    *puVar10 = uVar8;
    _swift_errorRelease(uVar4);
  }
  uVar9 = puVar7[2];
  puVar7[2] = puVar5[2];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  uVar13 = puVar5[4];
  uVar9 = puVar5[3];
  *(undefined1 *)(puVar7 + 5) = *(undefined1 *)(puVar5 + 5);
  puVar7[4] = uVar13;
  puVar7[3] = uVar9;
  uVar9 = puVar7[6];
  puVar7[6] = puVar5[6];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  uVar9 = puVar7[7];
  puVar7[7] = puVar5[7];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar9);
  return param_1;
}

