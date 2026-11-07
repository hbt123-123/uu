// rea decompile_all
// name: FUN_1005ca26c
// address: 0x1005ca26c
// body: available
// range: 0x1005ca26c-0x1005ca403 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1005ca26c(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined8 uVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  undefined *puVar8;
  long lVar9;
  code *pcVar10;
  code *pcVar11;
  
  *param_1 = *param_2;
  iVar3 = *(int *)(param_3 + 0x14);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar9 = *(long *)(lVar4 + -8);
  pcVar10 = *(code **)(lVar9 + 0x28);
  (*pcVar10)(param_1 + iVar3,param_2 + iVar3,lVar4);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x18));
  uVar2 = *(undefined8 *)((long)(param_2 + *(int *)(param_3 + 0x18)) + 8);
  uVar5 = puVar1[1];
  *puVar1 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x18));
  puVar1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar5);
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  uVar2 = *(undefined8 *)((long)(param_2 + *(int *)(param_3 + 0x1c)) + 8);
  uVar5 = puVar1[1];
  *puVar1 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  puVar1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar5);
  iVar3 = *(int *)(param_3 + 0x24);
  param_1[*(int *)(param_3 + 0x20)] = param_2[*(int *)(param_3 + 0x20)];
  *(undefined8 *)(param_1 + iVar3) = *(undefined8 *)(param_2 + iVar3);
  iVar3 = *(int *)(param_3 + 0x28);
  pcVar11 = *(code **)(lVar9 + 0x30);
  puVar6 = param_1 + iVar3;
  (*pcVar11)(puVar6,1,lVar4);
  puVar7 = param_2 + iVar3;
  (*pcVar11)(puVar7,1,lVar4);
  if ((int)puVar6 == 0) {
    if ((int)puVar7 == 0) {
      (*pcVar10)(param_1 + iVar3,param_2 + iVar3,lVar4);
      goto LAB_1005ca3b0;
    }
    (**(code **)(lVar9 + 8))(param_1 + iVar3,lVar4);
  }
  else if ((int)puVar7 == 0) {
    (**(code **)(lVar9 + 0x20))(param_1 + iVar3,param_2 + iVar3,lVar4);
    (**(code **)(lVar9 + 0x38))(param_1 + iVar3,0,1,lVar4);
    goto LAB_1005ca3b0;
  }
  puVar8 = &DAT_100aad5f8;
  FUN_100004bb4(&DAT_100aad5f8,&DAT_10083eb90);
  _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar8 + -8) + 0x40));
LAB_1005ca3b0:
  iVar3 = *(int *)(param_3 + 0x30);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x2c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x2c));
  *(undefined8 *)(param_1 + iVar3) = *(undefined8 *)(param_2 + iVar3);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x34)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x34));
  return param_1;
}

