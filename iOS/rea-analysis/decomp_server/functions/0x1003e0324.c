// rea decompile_all
// name: FUN_1003e0324
// address: 0x1003e0324
// body: available
// range: 0x1003e0324-0x1003e0433 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e0324(long *param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_88 [40];
  
  lVar4 = *param_1;
  lVar3 = *param_2;
  puVar1 = &DAT_1009ba838;
  _swift_allocObject(&DAT_1009ba838,0x38,7);
  uVar5 = *(undefined8 *)(lVar3 + 0x50);
  *(undefined8 *)(puVar1 + 0x10) = uVar5;
  uVar6 = *(undefined8 *)(lVar3 + 0x58);
  *(undefined8 *)(puVar1 + 0x18) = uVar6;
  *(undefined8 *)(puVar1 + 0x20) = param_7;
  *(undefined8 *)(puVar1 + 0x28) = param_8;
  *(long **)(puVar1 + 0x30) = param_1;
  puVar2 = &DAT_1009ba860;
  _swift_allocObject(&DAT_1009ba860,0x38,7);
  *(undefined8 *)(puVar2 + 0x10) = uVar5;
  *(undefined8 *)(puVar2 + 0x18) = uVar6;
  *(undefined8 *)(puVar2 + 0x20) = param_7;
  *(undefined8 *)(puVar2 + 0x28) = param_8;
  *(long **)(puVar2 + 0x30) = param_1;
  uVar5 = *(undefined8 *)(lVar4 + 0x50);
  _swift_retain_n(param_1,2);
  FUN_1003df750(auStack_88,param_3,param_4,param_5,param_6,FUN_1003e2510,puVar1,FUN_1003e2530,puVar2
                ,uVar5,param_7,param_8);
  _swift_release(puVar1);
  _swift_release(puVar2);
  FUN_10003f094(auStack_88);
  return;
}

