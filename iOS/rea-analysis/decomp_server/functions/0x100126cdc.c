// rea decompile_all
// name: FUN_100126cdc
// address: 0x100126cdc
// body: available
// range: 0x100126cdc-0x100126e63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_100126cdc(void *param_1,void *param_2,long param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  long lVar6;
  void *pvVar7;
  undefined *puVar8;
  long lVar9;
  long lVar10;
  long lVar11;
  undefined8 uVar12;
  
  lVar6 = 0;
  __s10Foundation4UUIDVMa();
  lVar9 = *(long *)(lVar6 + -8);
  pvVar7 = param_2;
  (**(code **)(lVar9 + 0x30))(param_2,1,lVar6);
  if ((int)pvVar7 == 0) {
    (**(code **)(lVar9 + 0x20))(param_1,param_2,lVar6);
    (**(code **)(lVar9 + 0x38))(param_1,0,1,lVar6);
  }
  else {
    puVar8 = &DAT_100a79890;
    FUN_100004bb4(&DAT_100a79890,&DAT_10080e600);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x18);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  puVar4 = (undefined8 *)((long)param_2 + (long)iVar3);
  uVar12 = *puVar4;
  puVar5 = (undefined8 *)((long)param_1 + (long)iVar3);
  puVar5[1] = puVar4[1];
  *puVar5 = uVar12;
  iVar3 = *(int *)(param_3 + 0x20);
  puVar1 = (undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar2 = (undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *puVar1 = *puVar2;
  *(undefined1 *)(puVar1 + 1) = *(undefined1 *)(puVar2 + 1);
  *(undefined8 *)((long)param_1 + (long)iVar3) = *(undefined8 *)((long)param_2 + (long)iVar3);
  lVar10 = (long)*(int *)(param_3 + 0x24);
  lVar9 = 0;
  __s10Foundation4DateVMa();
  lVar11 = *(long *)(lVar9 + -8);
  lVar6 = (long)param_2 + lVar10;
  (**(code **)(lVar11 + 0x30))(lVar6,1,lVar9);
  if ((int)lVar6 == 0) {
    (**(code **)(lVar11 + 0x20))((long)param_1 + lVar10,(long)param_2 + lVar10,lVar9);
    (**(code **)(lVar11 + 0x38))((long)param_1 + lVar10,0,1,lVar9);
  }
  else {
    puVar8 = &DAT_100a76718;
    FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
    _memcpy((void *)((long)param_1 + lVar10),(void *)((long)param_2 + lVar10),
            *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x2c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *(undefined1 *)((long)param_1 + (long)iVar3) = *(undefined1 *)((long)param_2 + (long)iVar3);
  return param_1;
}

