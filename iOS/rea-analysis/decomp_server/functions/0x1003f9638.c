// rea decompile_all
// name: FUN_1003f9638
// address: 0x1003f9638
// body: available
// range: 0x1003f9638-0x1003f9763 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1003f9638(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  int iVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  long lVar6;
  code *pcVar7;
  
  *param_1 = *param_2;
  param_1[1] = param_2[1];
  param_1[2] = param_2[2];
  param_1[3] = param_2[3];
  param_1[4] = param_2[4];
  iVar1 = *(int *)(param_3 + 0x24);
  lVar2 = 0;
  __s10Foundation4DateVMa();
  lVar6 = *(long *)(lVar2 + -8);
  pcVar7 = *(code **)(lVar6 + 0x30);
  puVar3 = param_1 + iVar1;
  (*pcVar7)(puVar3,1,lVar2);
  puVar4 = param_2 + iVar1;
  (*pcVar7)(puVar4,1,lVar2);
  if ((int)puVar3 == 0) {
    if ((int)puVar4 == 0) {
      (**(code **)(lVar6 + 0x18))(param_1 + iVar1,param_2 + iVar1,lVar2);
      return param_1;
    }
    (**(code **)(lVar6 + 8))(param_1 + iVar1,lVar2);
  }
  else if ((int)puVar4 == 0) {
    (**(code **)(lVar6 + 0x10))(param_1 + iVar1,param_2 + iVar1,lVar2);
    (**(code **)(lVar6 + 0x38))(param_1 + iVar1,0,1,lVar2);
    return param_1;
  }
  puVar5 = &DAT_100a76718;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  _memcpy(param_1 + iVar1,param_2 + iVar1,*(size_t *)(*(long *)(puVar5 + -8) + 0x40));
  return param_1;
}

