// rea decompile_all
// name: FUN_1001268ac
// address: 0x1001268ac
// body: available
// range: 0x1001268ac-0x100126a67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_1001268ac(void *param_1,void *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  int iVar6;
  long lVar7;
  void *pvVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  long lVar13;
  long lVar14;
  code *pcVar15;
  
  lVar7 = 0;
  __s10Foundation4UUIDVMa();
  lVar10 = *(long *)(lVar7 + -8);
  pvVar8 = param_2;
  (**(code **)(lVar10 + 0x30))(param_2,1,lVar7);
  if ((int)pvVar8 == 0) {
    (**(code **)(lVar10 + 0x10))(param_1,param_2,lVar7);
    (**(code **)(lVar10 + 0x38))(param_1,0,1,lVar7);
  }
  else {
    puVar9 = &DAT_100a79890;
    FUN_100004bb4(&DAT_100a79890,&DAT_10080e600);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  iVar6 = *(int *)(param_3 + 0x18);
  uVar11 = *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x14));
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x14)) = uVar11;
  puVar1 = (undefined8 *)((long)param_1 + (long)iVar6);
  puVar2 = (undefined8 *)((long)param_2 + (long)iVar6);
  uVar5 = puVar2[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar5;
  iVar6 = *(int *)(param_3 + 0x20);
  puVar3 = (undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar4 = (undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  *puVar3 = *puVar4;
  uVar12 = *(undefined8 *)((long)param_2 + (long)iVar6);
  *(undefined8 *)((long)param_1 + (long)iVar6) = uVar12;
  lVar13 = (long)*(int *)(param_3 + 0x24);
  lVar10 = 0;
  __s10Foundation4DateVMa();
  lVar14 = *(long *)(lVar10 + -8);
  pcVar15 = *(code **)(lVar14 + 0x30);
  _swift_bridgeObjectRetain(uVar11);
  _swift_bridgeObjectRetain(uVar5);
  _swift_bridgeObjectRetain(uVar12);
  lVar7 = (long)param_2 + lVar13;
  (*pcVar15)(lVar7,1,lVar10);
  if ((int)lVar7 == 0) {
    (**(code **)(lVar14 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,lVar10);
    (**(code **)(lVar14 + 0x38))((long)param_1 + lVar13,0,1,lVar10);
  }
  else {
    puVar9 = &DAT_100a76718;
    FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
    _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
            *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  iVar6 = *(int *)(param_3 + 0x2c);
  *(undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x28)) =
       *(undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x28));
  *(undefined1 *)((long)param_1 + (long)iVar6) = *(undefined1 *)((long)param_2 + (long)iVar6);
  _swift_bridgeObjectRetain();
  return param_1;
}

