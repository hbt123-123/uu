// rea decompile_all
// name: FUN_1004fa810
// address: 0x1004fa810
// body: available
// range: 0x1004fa810-0x1004fa8cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fa810(long param_1,undefined8 param_2,undefined8 *param_3,undefined1 param_4,
                  undefined8 param_5,undefined1 param_6,long param_7,undefined8 param_8,
                  undefined8 param_9,undefined8 param_10)

{
  undefined8 *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  (**(code **)(*(long *)(param_7 + -8) + 0x20))(param_1,param_2,param_7);
  uStack_68 = param_10;
  lVar2 = 0;
  local_80 = param_7;
  uStack_78 = param_8;
  local_70 = param_9;
  FUN_1004fa8d0(0,&local_80);
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x34));
  uVar3 = *param_3;
  uVar5 = param_3[3];
  uVar4 = param_3[2];
  puVar1[1] = param_3[1];
  *puVar1 = uVar3;
  puVar1[3] = uVar5;
  puVar1[2] = uVar4;
  puVar1[4] = param_3[4];
  *(undefined1 *)(param_1 + *(int *)(lVar2 + 0x38)) = param_4;
  puVar1 = (undefined8 *)(param_1 + *(int *)(lVar2 + 0x3c));
  *puVar1 = param_5;
  *(undefined1 *)(puVar1 + 1) = param_6;
  return;
}

