// rea decompile_all
// name: FUN_1000d4388
// address: 0x1000d4388
// body: available
// range: 0x1000d4388-0x1000d44cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_1000d4388(undefined1 *param_1,undefined1 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int iVar3;
  long lVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  undefined *puVar7;
  undefined8 uVar8;
  long lVar9;
  code *pcVar10;
  
  *param_1 = *param_2;
  *(undefined8 *)(param_1 + 8) = *(undefined8 *)(param_2 + 8);
  param_1[0x10] = param_2[0x10];
  iVar3 = *(int *)(param_3 + 0x18);
  lVar4 = 0;
  __s10Foundation4DateVMa();
  lVar9 = *(long *)(lVar4 + -8);
  pcVar10 = *(code **)(lVar9 + 0x30);
  puVar5 = param_1 + iVar3;
  (*pcVar10)(puVar5,1,lVar4);
  puVar6 = param_2 + iVar3;
  (*pcVar10)(puVar6,1,lVar4);
  if ((int)puVar5 == 0) {
    if ((int)puVar6 == 0) {
      (**(code **)(lVar9 + 0x28))(param_1 + iVar3,param_2 + iVar3,lVar4);
      goto LAB_1000d4474;
    }
    (**(code **)(lVar9 + 8))(param_1 + iVar3,lVar4);
  }
  else if ((int)puVar6 == 0) {
    (**(code **)(lVar9 + 0x20))(param_1 + iVar3,param_2 + iVar3,lVar4);
    (**(code **)(lVar9 + 0x38))(param_1 + iVar3,0,1,lVar4);
    goto LAB_1000d4474;
  }
  puVar7 = &DAT_100a76718;
  FUN_100004bb4(&DAT_100a76718,&DAT_10080ccc0);
  _memcpy(param_1 + iVar3,param_2 + iVar3,*(size_t *)(*(long *)(puVar7 + -8) + 0x40));
LAB_1000d4474:
  puVar1 = (undefined8 *)(param_1 + *(int *)(param_3 + 0x1c));
  uVar2 = *(undefined8 *)((long)(param_2 + *(int *)(param_3 + 0x1c)) + 8);
  uVar8 = puVar1[1];
  *puVar1 = *(undefined8 *)(param_2 + *(int *)(param_3 + 0x1c));
  puVar1[1] = uVar2;
  _swift_bridgeObjectRelease(uVar8);
  param_1[*(int *)(param_3 + 0x20)] = param_2[*(int *)(param_3 + 0x20)];
  return param_1;
}

