// rea decompile_all
// name: FUN_1005c9e38
// address: 0x1005c9e38
// body: available
// range: 0x1005c9e38-0x1005c9f83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1005c9e38(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  code *pcVar8;
  code *pcVar9;
  
  *param_1 = *param_2;
  iVar3 = *(int *)(param_3 + 0x14);
  lVar4 = 0;
  __s10Foundation3URLVMa();
  lVar7 = *(long *)(lVar4 + -8);
  pcVar8 = *(code **)(lVar7 + 0x10);
  (*pcVar8)(param_1 + iVar3,param_2 + iVar3,lVar4);
  iVar3 = *(int *)(param_3 + 0x18);
  iVar2 = *(int *)(param_3 + 0x1c);
  uVar1 = *(undefined8 *)((long)(param_2 + iVar3) + 8);
  *(undefined8 *)(param_1 + iVar3) = *(undefined8 *)(param_2 + iVar3);
  *(undefined8 *)((long)(param_1 + iVar3) + 8) = uVar1;
  uVar1 = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  *(undefined8 *)(param_1 + iVar2) = *(undefined8 *)(param_2 + iVar2);
  *(undefined8 *)((long)(param_1 + iVar2) + 8) = uVar1;
  iVar3 = *(int *)(param_3 + 0x24);
  param_1[*(int *)(param_3 + 0x20)] = param_2[*(int *)(param_3 + 0x20)];
  *(undefined8 *)(param_1 + iVar3) = *(undefined8 *)(param_2 + iVar3);
  iVar3 = *(int *)(param_3 + 0x28);
  pcVar9 = *(code **)(lVar7 + 0x30);
  _swift_bridgeObjectRetain();
  _swift_bridgeObjectRetain(uVar1);
  puVar5 = param_2 + iVar3;
  (*pcVar9)(puVar5,1,lVar4);
  if ((int)puVar5 == 0) {
    (*pcVar8)(param_1 + iVar3,param_2 + iVar3,lVar4);
    (**(code **)(lVar7 + 0x38))(param_1 + iVar3,0,1,lVar4);
  }
  else {
    puVar6 = &DAT_100aad5f8;
    FUN_100004bb4(&DAT_100aad5f8,&DAT_10083eb90);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x30);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x2c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x2c));
  *(undefined8 *)(param_1 + iVar3) = *(undefined8 *)(param_2 + iVar3);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x34)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x34));
  return param_1;
}

