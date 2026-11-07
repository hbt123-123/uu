// rea decompile_all
// name: FUN_10033f3d8
// address: 0x10033f3d8
// body: available
// range: 0x10033f3d8-0x10033f4f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long * FUN_10033f3d8(long *param_1,long *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  long *plVar3;
  long *plVar4;
  undefined8 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  long lVar9;
  ulong uVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  
  uVar8 = *(uint *)(*(long *)(param_3 + -8) + 0x50);
  if ((uVar8 >> 0x11 & 1) == 0) {
    lVar9 = 0;
    __s8Dispatch0A12TimeIntervalOMa();
    (**(code **)(*(long *)(lVar9 + -8) + 0x10))(param_1,param_2,lVar9);
    iVar6 = *(int *)(param_3 + 0x18);
    puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14));
    puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
    uVar5 = puVar2[1];
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
    puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
    uVar5 = puVar2[1];
    iVar6 = *(int *)(param_3 + 0x1c);
    iVar7 = *(int *)(param_3 + 0x20);
    uVar11 = *(undefined8 *)((long)param_2 + (long)iVar6);
    *puVar1 = *puVar2;
    puVar1[1] = uVar5;
    *(undefined8 *)((long)param_1 + (long)iVar6) = uVar11;
    plVar3 = (long *)((long)param_1 + (long)iVar7);
    plVar4 = (long *)((long)param_2 + (long)iVar7);
    lVar9 = *plVar4;
    _swift_retain();
    _swift_retain(uVar5);
    _swift_retain(uVar11);
    if (lVar9 == 0) {
      lVar9 = *plVar4;
      lVar13 = plVar4[3];
      lVar12 = plVar4[2];
      plVar3[1] = plVar4[1];
      *plVar3 = lVar9;
      plVar3[3] = lVar13;
      plVar3[2] = lVar12;
    }
    else {
      *plVar3 = lVar9;
      lVar9 = plVar4[3];
      lVar12 = plVar4[1];
      plVar3[2] = plVar4[2];
      plVar3[1] = lVar12;
      plVar3[3] = lVar9;
      _swift_retain(lVar12);
      _swift_retain(lVar9);
    }
    *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x24)) =
         *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x24));
    _swift_bridgeObjectRetain();
  }
  else {
    lVar9 = *param_2;
    *param_1 = lVar9;
    uVar10 = (ulong)uVar8 & 0xff;
    param_1 = (long *)(lVar9 + (uVar10 + 0x10 & (uVar10 ^ 0xffffffffffffffff)));
    _swift_retain();
  }
  return param_1;
}

