// rea decompile_all
// name: FUN_100042e58
// address: 0x100042e58
// body: available
// range: 0x100042e58-0x100042f17 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100042e58(undefined8 *param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_88;
  
  FUN_100060260();
  uVar1 = *param_2;
  puVar2 = param_2;
  FUN_100041830();
  uVar3 = 0;
  FUN_10006b084(&local_a8,0,0xe000000000000000,uVar1,&DAT_1000f5e28,puVar2);
  uVar1 = *param_2;
  FUN_10002f0ec();
  FUN_10006b084(&uStack_d8,0,0xe000000000000000,uVar1,&DAT_1000f31f0,uVar3);
  param_1[5] = uStack_d8;
  param_1[4] = local_88;
  param_1[7] = uStack_c8;
  param_1[6] = local_d0;
  param_1[9] = uStack_b8;
  param_1[8] = uStack_c0;
  param_1[1] = uStack_a0;
  *param_1 = local_a8;
  param_1[3] = uStack_90;
  param_1[2] = local_98;
  return;
}

