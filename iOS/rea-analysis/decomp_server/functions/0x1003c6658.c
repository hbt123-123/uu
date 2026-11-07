// rea decompile_all
// name: FUN_1003c6658
// address: 0x1003c6658
// body: available
// range: 0x1003c6658-0x1003c6763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003c6658(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  void *pvVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  code *pcVar11;
  
  uVar3 = *param_2;
  uVar4 = param_2[1];
  *param_1 = uVar3;
  param_1[1] = uVar4;
  pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar6 = 0;
  FUN_1003c63e0();
  lVar10 = *(long *)(lVar6 + -8);
  pcVar11 = *(code **)(lVar10 + 0x30);
  _swift_bridgeObjectRetain(uVar3);
  _swift_bridgeObjectRetain(uVar4);
  pvVar7 = pvVar2;
  (*pcVar11)(pvVar2,1,lVar6);
  if ((int)pvVar7 == 0) {
    lVar9 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar9 + -8) + 0x10))(pvVar1,pvVar2,lVar9);
    iVar5 = *(int *)(lVar6 + 0x14);
    lVar9 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar9 + -8) + 0x10))
              ((long)pvVar1 + (long)iVar5,(long)pvVar2 + (long)iVar5,lVar9);
    (**(code **)(lVar10 + 0x38))(pvVar1,0,1,lVar6);
  }
  else {
    puVar8 = &DAT_100a8c688;
    FUN_100004bb4(&DAT_100a8c688,&DAT_100822420);
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  return param_1;
}

