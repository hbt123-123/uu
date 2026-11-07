// rea decompile_all
// name: FUN_1000d4054
// address: 0x1000d4054
// body: available
// range: 0x1000d4054-0x1000d4147 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1000d4054(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined *puVar6;
  long lVar7;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  iVar3 = *(int *)(param_3 + 0x18);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar7 = *(long *)(lVar4 + -8);
  puVar5 = param_2 + iVar3;
  (**(code **)(lVar7 + 0x30))(puVar5,1,lVar4);
  if ((int)puVar5 == 0) {
    (**(code **)(lVar7 + 0x10))(param_1 + iVar3,param_2 + iVar3,lVar4);
    (**(code **)(lVar7 + 0x38))(param_1 + iVar3,0,1,lVar4);
  }
  else {
    puVar6 = &DAT_100a76718;
    FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
    _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar6 + -8) + 0x40));
  }
  iVar3 = *(int *)(param_3 + 0x1c);
  iVar2 = *(int *)(param_3 + 0x20);
  uVar1 = *(undefined8 *)((long)(param_2 + iVar3) + 8);
  *(undefined8 *)(param_1 + iVar3) = *(undefined8 *)(param_2 + iVar3);
  *(undefined8 *)((long)(param_1 + iVar3) + 8) = uVar1;
  param_1[iVar2] = param_2[iVar2];
  _swift_bridgeObjectRetain();
  return param_1;
}

