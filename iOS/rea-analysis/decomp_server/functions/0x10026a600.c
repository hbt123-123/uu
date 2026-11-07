// rea decompile_all
// name: FUN_10026a600
// address: 0x10026a600
// body: available
// range: 0x10026a600-0x10026a717 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10026a600(long *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined8 param_7)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 *puVar3;
  long *plVar4;
  code *pcVar5;
  undefined8 local_b0 [3];
  undefined8 local_98;
  undefined **ppuStack_90;
  undefined1 auStack_88 [24];
  long local_70;
  undefined **ppuStack_68;
  
  plVar4 = *(long **)(param_2 + 0x40);
  lVar1 = 0;
  __s10Foundation10URLRequestVMa();
  ppuStack_68 = &PTR_PTR_1009af618;
  local_70 = lVar1;
  FUN_1000efc08(auStack_88);
  (**(code **)(*(long *)(lVar1 + -8) + 0x10))();
  uVar2 = 0;
  FUN_100264cec();
  ppuStack_90 = &PTR_PTR_1009a8d00;
  pcVar5 = *(code **)(*plVar4 + 0x130);
  local_b0[0] = param_4;
  local_98 = uVar2;
  _swift_retain(param_4);
  puVar3 = auStack_88;
  (*pcVar5)(puVar3,local_b0,2,param_5,param_6);
  FUN_100040bb4(local_b0,&DAT_100a81368,&DAT_100815500);
  FUN_10003f094(auStack_88);
  FUN_1002699b8(param_4,param_7,puVar3);
  *param_1 = (long)puVar3;
  return;
}

