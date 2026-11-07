// rea decompile_all
// name: FUN_10033f684
// address: 0x10033f684
// body: available
// range: 0x10033f684-0x10033f7eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10033f684(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar5 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x18))(param_1,param_2,lVar5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar8 = puVar2[1];
  uVar7 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  _swift_retain();
  _swift_release(uVar7);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  uVar8 = puVar2[1];
  uVar7 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar8;
  _swift_retain();
  _swift_release(uVar7);
  lVar5 = (long)*(int *)(param_3 + 0x1c);
  uVar8 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = *(undefined8 *)(param_2 + lVar5);
  _swift_retain();
  _swift_release(uVar8);
  plVar3 = (long *)(param_1 + *(int *)(param_3 + 0x20));
  plVar4 = (long *)(param_2 + *(int *)(param_3 + 0x20));
  lVar5 = *plVar4;
  if (*plVar3 == 0) {
    if (lVar5 == 0) {
      lVar5 = *plVar4;
      lVar9 = plVar4[3];
      lVar6 = plVar4[2];
      plVar3[1] = plVar4[1];
      *plVar3 = lVar5;
      plVar3[3] = lVar9;
      plVar3[2] = lVar6;
    }
    else {
      lVar6 = plVar4[1];
      *plVar3 = lVar5;
      plVar3[1] = lVar6;
      lVar5 = plVar4[3];
      plVar3[2] = plVar4[2];
      plVar3[3] = lVar5;
      _swift_retain();
      _swift_retain(lVar5);
    }
  }
  else if (lVar5 == 0) {
    FUN_10033f7ec(plVar3);
    lVar9 = *plVar4;
    lVar6 = plVar4[3];
    lVar5 = plVar4[2];
    plVar3[1] = plVar4[1];
    *plVar3 = lVar9;
    plVar3[3] = lVar6;
    plVar3[2] = lVar5;
  }
  else {
    lVar6 = plVar4[1];
    lVar9 = plVar3[1];
    *plVar3 = lVar5;
    plVar3[1] = lVar6;
    _swift_retain();
    _swift_release(lVar9);
    lVar5 = plVar4[3];
    lVar6 = plVar3[3];
    plVar3[2] = plVar4[2];
    plVar3[3] = lVar5;
    _swift_retain();
    _swift_release(lVar6);
  }
  lVar5 = (long)*(int *)(param_3 + 0x24);
  uVar8 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = *(undefined8 *)(param_2 + lVar5);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar8);
  return param_1;
}

