// rea decompile_all
// name: FUN_10033f590
// address: 0x10033f590
// body: available
// range: 0x10033f590-0x10033f683 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10033f590(long param_1,long param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  long lVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  
  lVar8 = 0;
  __s8Dispatch0A12TimeIntervalOMa();
  (**(code **)(*(long *)(lVar8 + -8) + 0x10))(param_1,param_2,lVar8);
  iVar6 = *(int *)(param_3 + 0x18);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x14));
  puVar2 = (undefined8 *)(param_2 + *(int *)(param_3 + 0x14));
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  puVar1 = (undefined8 *)(param_1 + iVar6);
  puVar2 = (undefined8 *)(param_2 + iVar6);
  uVar5 = puVar2[1];
  iVar6 = *(int *)(param_3 + 0x1c);
  iVar7 = *(int *)(param_3 + 0x20);
  uVar9 = *(undefined8 *)(param_2 + iVar6);
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  *(undefined8 *)(param_1 + iVar6) = uVar9;
  plVar3 = (long *)(param_1 + iVar7);
  plVar4 = (long *)(param_2 + iVar7);
  lVar8 = *plVar4;
  _swift_retain();
  _swift_retain(uVar5);
  _swift_retain(uVar9);
  if (lVar8 == 0) {
    lVar8 = *plVar4;
    lVar11 = plVar4[3];
    lVar10 = plVar4[2];
    plVar3[1] = plVar4[1];
    *plVar3 = lVar8;
    plVar3[3] = lVar11;
    plVar3[2] = lVar10;
  }
  else {
    *plVar3 = lVar8;
    lVar8 = plVar4[3];
    lVar10 = plVar4[1];
    plVar3[2] = plVar4[2];
    plVar3[1] = lVar10;
    plVar3[3] = lVar8;
    _swift_retain(lVar10);
    _swift_retain(lVar8);
  }
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x24)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x24));
  _swift_bridgeObjectRetain();
  return param_1;
}

