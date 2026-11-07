// rea decompile_all
// name: FUN_10033f8a8
// address: 0x10033f8a8
// body: available
// range: 0x10033f8a8-0x10033f9a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10033f8a8(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 uVar8;
  long lVar9;
  
  lVar5 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  (**(code **)(*(long *)(lVar5 + -8) + 0x28))(param_1,param_2,lVar5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  uVar6 = puVar1[1];
  puVar4 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar8 = *puVar4;
  puVar1[1] = puVar4[1];
  *puVar1 = uVar8;
  _swift_release(uVar6);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  uVar6 = puVar1[1];
  puVar4 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  uVar8 = *puVar4;
  puVar1[1] = puVar4[1];
  *puVar1 = uVar8;
  _swift_release(uVar6);
  lVar5 = (long)*(int *)(param_3 + 0x1c);
  uVar6 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = *(undefined8 *)(param_2 + lVar5);
  _swift_release(uVar6);
  plVar2 = (long *)(param_1 + *(int *)(param_3 + 0x20));
  plVar3 = (long *)(param_2 + *(int *)(param_3 + 0x20));
  if (*plVar2 != 0) {
    if (*plVar3 != 0) {
      lVar7 = plVar3[1];
      lVar5 = plVar2[1];
      *plVar2 = *plVar3;
      plVar2[1] = lVar7;
      _swift_release(lVar5);
      lVar5 = plVar2[3];
      lVar7 = plVar3[2];
      plVar2[3] = plVar3[3];
      plVar2[2] = lVar7;
      _swift_release(lVar5);
      goto LAB_10033f97c;
    }
    FUN_10033f7ec(plVar2);
  }
  lVar5 = *plVar3;
  lVar9 = plVar3[3];
  lVar7 = plVar3[2];
  plVar2[1] = plVar3[1];
  *plVar2 = lVar5;
  plVar2[3] = lVar9;
  plVar2[2] = lVar7;
LAB_10033f97c:
  lVar5 = (long)*(int *)(param_3 + 0x24);
  uVar6 = *(undefined8 *)(param_1 + lVar5);
  *(undefined8 *)(param_1 + lVar5) = *(undefined8 *)(param_2 + lVar5);
  _swift_bridgeObjectRelease(uVar6);
  return param_1;
}

