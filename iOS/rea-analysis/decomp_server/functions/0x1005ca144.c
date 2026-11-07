// rea decompile_all
// name: FUN_1005ca144
// address: 0x1005ca144
// body: available
// range: 0x1005ca144-0x1005ca26b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1005ca144(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  int iVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  undefined8 uVar8;
  
  *param_1 = *param_2;
  iVar2 = *(int *)(param_3 + 0x14);
  lVar3 = 0;
  __s10Foundation3URLVMa();
  lVar6 = *(long *)(lVar3 + -8);
  pcVar7 = *(code **)(lVar6 + 0x20);
  (*pcVar7)(param_1 + iVar2,param_2 + iVar2,lVar3);
  iVar2 = *(int *)(param_3 + 0x18);
  iVar1 = *(int *)(param_3 + 0x1c);
  uVar8 = *(undefined8 *)(param_2 + iVar2);
  *(undefined8 *)((long)(param_1 + iVar2) + 8) = *(undefined8 *)((long)(param_2 + iVar2) + 8);
  *(undefined8 *)(param_1 + iVar2) = uVar8;
  uVar8 = *(undefined8 *)(param_2 + iVar1);
  *(undefined8 *)((long)(param_1 + iVar1) + 8) = *(undefined8 *)((long)(param_2 + iVar1) + 8);
  *(undefined8 *)(param_1 + iVar1) = uVar8;
  iVar2 = *(int *)(param_3 + 0x24);
  param_1[*(int *)(param_3 + 0x20)] = param_2[*(int *)(param_3 + 0x20)];
  *(undefined8 *)(param_1 + iVar2) = *(undefined8 *)(param_2 + iVar2);
  iVar2 = *(int *)(param_3 + 0x28);
  puVar4 = param_2 + iVar2;
  (**(code **)(lVar6 + 0x30))(puVar4,1,lVar3);
  if ((int)puVar4 == 0) {
    (*pcVar7)(param_1 + iVar2,param_2 + iVar2,lVar3);
    (**(code **)(lVar6 + 0x38))(param_1 + iVar2,0,1,lVar3);
  }
  else {
    puVar5 = &DAT_100aad5f8;
    FUN_100004bb4(&DAT_100aad5f8,&DAT_10083eb90);
    _memcpy(param_1 + iVar2,param_2 + iVar2,*(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  }
  iVar2 = *(int *)(param_3 + 0x30);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x2c)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x2c));
  *(undefined8 *)(param_1 + iVar2) = *(undefined8 *)(param_2 + iVar2);
  *(undefined8 *)(param_1 + *(int *)(param_3 + 0x34)) =
       *(undefined8 *)(param_2 + *(int *)(param_3 + 0x34));
  return param_1;
}

