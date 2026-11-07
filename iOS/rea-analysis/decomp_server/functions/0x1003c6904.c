// rea decompile_all
// name: FUN_1003c6904
// address: 0x1003c6904
// body: available
// range: 0x1003c6904-0x1003c69f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 * FUN_1003c6904(undefined8 *param_1,undefined8 *param_2,long param_3)

{
  void *pvVar1;
  void *pvVar2;
  int iVar3;
  long lVar4;
  void *pvVar5;
  undefined *puVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  
  uVar9 = *param_2;
  param_1[1] = param_2[1];
  *param_1 = uVar9;
  pvVar1 = (void *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  pvVar2 = (void *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  lVar4 = 0;
  FUN_1003c63e0();
  lVar8 = *(long *)(lVar4 + -8);
  pvVar5 = pvVar2;
  (**(code **)(lVar8 + 0x30))(pvVar2,1,lVar4);
  if ((int)pvVar5 == 0) {
    lVar7 = 0;
    __s10Foundation3URLVMa();
    (**(code **)(*(long *)(lVar7 + -8) + 0x20))(pvVar1,pvVar2,lVar7);
    iVar3 = *(int *)(lVar4 + 0x14);
    lVar7 = 0;
    __s10Foundation4DateVMa();
    (**(code **)(*(long *)(lVar7 + -8) + 0x20))
              ((long)pvVar1 + (long)iVar3,(long)pvVar2 + (long)iVar3,lVar7);
    (**(code **)(lVar8 + 0x38))(pvVar1,0,1,lVar4);
  }
  else {
    puVar6 = &DAT_100a8c688;
    FUN_100004bb4(&DAT_100a8c688,&DAT_100822420);
    _memcpy(pvVar1,pvVar2,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  return param_1;
}

