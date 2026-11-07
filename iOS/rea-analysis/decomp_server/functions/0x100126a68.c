// rea decompile_all
// name: FUN_100126a68
// address: 0x100126a68
// body: available
// range: 0x100126a68-0x100126cdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void * FUN_100126a68(void *param_1,void *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  long lVar6;
  void *pvVar7;
  void *pvVar8;
  undefined *puVar9;
  long lVar10;
  undefined8 uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  long lVar15;
  
  lVar6 = 0;
  __s10Foundation4UUIDVMa();
  lVar12 = *(long *)(lVar6 + -8);
  pcVar14 = *(code **)(lVar12 + 0x30);
  pvVar7 = param_1;
  (*pcVar14)(param_1,1,lVar6);
  pvVar8 = param_2;
  (*pcVar14)(param_2,1,lVar6);
  if ((int)pvVar7 == 0) {
    if ((int)pvVar8 != 0) {
      (**(code **)(lVar12 + 8))(param_1,lVar6);
      goto LAB_100126b10;
    }
    (**(code **)(lVar12 + 0x18))(param_1,param_2,lVar6);
  }
  else if ((int)pvVar8 == 0) {
    (**(code **)(lVar12 + 0x10))(param_1,param_2,lVar6);
    (**(code **)(lVar12 + 0x38))(param_1,0,1,lVar6);
  }
  else {
LAB_100126b10:
    puVar9 = &DAT_100a79890;
    FUN_100004bb4(&DAT_100a79890,&DAT_10080e600);
    _memcpy(param_1,param_2,*(size_t *)(*(long *)(puVar9 + -8) + 0x40));
  }
  lVar6 = (long)*(int *)(param_3 + 0x14);
  uVar11 = *(undefined8 *)((long)param_1 + lVar6);
  *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  puVar1 = (undefined8 *)((long)param_1 + (long)*(int *)(param_3 + 0x18));
  puVar2 = (undefined8 *)((long)param_2 + (long)*(int *)(param_3 + 0x18));
  *puVar1 = *puVar2;
  uVar11 = puVar1[1];
  puVar1[1] = puVar2[1];
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  puVar3 = (undefined4 *)((long)param_1 + (long)*(int *)(param_3 + 0x1c));
  puVar4 = (undefined4 *)((long)param_2 + (long)*(int *)(param_3 + 0x1c));
  uVar5 = *puVar4;
  *(undefined1 *)(puVar3 + 1) = *(undefined1 *)(puVar4 + 1);
  *puVar3 = uVar5;
  lVar6 = (long)*(int *)(param_3 + 0x20);
  uVar11 = *(undefined8 *)((long)param_1 + lVar6);
  *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  lVar13 = (long)*(int *)(param_3 + 0x24);
  lVar10 = 0;
  __s10Foundation4DateVMa();
  lVar15 = *(long *)(lVar10 + -8);
  pcVar14 = *(code **)(lVar15 + 0x30);
  lVar6 = (long)param_1 + lVar13;
  (*pcVar14)(lVar6,1,lVar10);
  lVar12 = (long)param_2 + lVar13;
  (*pcVar14)(lVar12,1,lVar10);
  if ((int)lVar6 == 0) {
    if ((int)lVar12 == 0) {
      (**(code **)(lVar15 + 0x18))((long)param_1 + lVar13,(long)param_2 + lVar13,lVar10);
      goto LAB_100126c68;
    }
    (**(code **)(lVar15 + 8))((long)param_1 + lVar13,lVar10);
  }
  else if ((int)lVar12 == 0) {
    (**(code **)(lVar15 + 0x10))((long)param_1 + lVar13,(long)param_2 + lVar13,lVar10);
    (**(code **)(lVar15 + 0x38))((long)param_1 + lVar13,0,1,lVar10);
    goto LAB_100126c68;
  }
  puVar9 = &DAT_100a76718;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  _memcpy((void *)((long)param_1 + lVar13),(void *)((long)param_2 + lVar13),
          *(size_t *)(*(long *)(puVar9 + -8) + 0x40));
LAB_100126c68:
  lVar6 = (long)*(int *)(param_3 + 0x28);
  uVar11 = *(undefined8 *)((long)param_1 + lVar6);
  *(undefined8 *)((long)param_1 + lVar6) = *(undefined8 *)((long)param_2 + lVar6);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRelease(uVar11);
  *(undefined1 *)((long)param_1 + (long)*(int *)(param_3 + 0x2c)) =
       *(undefined1 *)((long)param_2 + (long)*(int *)(param_3 + 0x2c));
  return param_1;
}

