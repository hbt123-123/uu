// rea decompile_all
// name: FUN_100126e64
// address: 0x100126e64
// body: available
// range: 0x100126e64-0x1001270ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_100126e64(void *param_1,void *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  long lVar5;
  void *pvVar6;
  void *pvVar7;
  undefined *puVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  
  lVar5 = 0;
  __s10Foundation4UUIDVMa();
  lVar12 = *(long *)(lVar5 + -8);
  pcVar14 = *(code **)(lVar12 + 0x30);
  pvVar6 = param_1;
  (*pcVar14)(param_1,1,lVar5);
  pvVar7 = param_2;
  (*pcVar14)(param_2,1,lVar5);
  if ((int)pvVar6 == 0) {
    if ((int)pvVar7 != 0) {
      (**(code **)(lVar12 + 8))(param_1,lVar5);
      goto LAB_100126f0c;
    }
    (**(code **)(lVar12 + 0x28))(param_1,param_2,lVar5);
  }
  else if ((int)pvVar7 == 0) {
    (**(code **)(lVar12 + 0x20))(param_1,param_2,lVar5);
    (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar5);
  }
  else {
LAB_100126f0c:
    puVar8 = &DAT_100a79890;
    FUN_100004bb4(&DAT_100a79890,&DAT_10080e600);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
  }
  lVar5 = (long)*(int *)(param_3 + 0x14);
  uVar9 = *(undefined8 *)((long)param_1 + lVar5);
  *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_2 + lVar5);
  _swift_bridgeObjectRelease(uVar9);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  uVar9 = puVar2[1];
  uVar10 = puVar1[1];
  *puVar1 = *puVar2;
  puVar1[1] = uVar9;
  _swift_bridgeObjectRelease(uVar10);
  lVar5 = (long)*(int *)(param_3 + 0x20);
  puVar3 = (undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar4 = (undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  *puVar3 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  uVar9 = *(undefined8 *)((long)param_1 + lVar5);
  *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_2 + lVar5);
  _swift_bridgeObjectRelease(uVar9);
  lVar13 = (long)*(int *)(param_3 + 0x24);
  lVar11 = 0;
  __s10Foundation4DateVMa();
  lVar15 = *(long *)(lVar11 + -8);
  pcVar14 = *(code **)(lVar15 + 0x30);
  lVar5 = (long)param_1 + lVar13;
  (*pcVar14)(lVar5,1,lVar11);
  lVar12 = (long)param_2 + lVar13;
  (*pcVar14)(lVar12,1,lVar11);
  if ((int)lVar5 == 0) {
    if ((int)lVar12 == 0) {
      (**(code **)(lVar15 + 0x28))((long)param_1 + lVar13,(long)param_2 + lVar13,lVar11);
      goto LAB_100127040;
    }
    (**(code **)(lVar15 + 8))((long)param_1 + lVar13,lVar11);
  }
  else if ((int)lVar12 == 0) {
    (**(code **)(lVar15 + 0x20))((long)param_1 + lVar13,(long)param_2 + lVar13,lVar11);
    (**(code **)(lVar15 + 0x38))((long)param_1 + lVar13,0,1,lVar11);
    goto LAB_100127040;
  }
  puVar8 = &DAT_100a76718;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
          *(size_t *)(*(long *)(puVar8 + -8) + 0x40));
LAB_100127040:
  lVar5 = (long)*(int *)(param_3 + 0x28);
  uVar9 = *(undefined8 *)((long)param_1 + lVar5);
  *(undefined8 *)((long)param_1 + lVar5) = *(undefined8 *)((long)param_2 + lVar5);
  _swift_bridgeObjectRelease(uVar9);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  return param_1;
}

