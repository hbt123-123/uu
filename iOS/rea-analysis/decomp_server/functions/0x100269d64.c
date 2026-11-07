// rea decompile_all
// name: FUN_100269d64
// address: 0x100269d64
// body: available
// range: 0x100269d64-0x100269e4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100269d64(long param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 uVar3;
  undefined1 *puVar4;
  undefined1 auStack_b0 [24];
  long local_98;
  undefined8 uStack_90;
  undefined1 auStack_88 [24];
  undefined8 local_70;
  undefined **ppuStack_68;
  
  uVar1 = *(undefined8 *)(param_1 + 0x18);
  lVar2 = *(long *)(param_1 + 0x20);
  FUN_10003f030(param_1,uVar1);
  uVar3 = 0;
  FUN_100272854();
  ppuStack_68 = &PTR_PTR_1009a9b28;
  puVar4 = auStack_88;
  local_70 = uVar3;
  FUN_1000efc08(puVar4);
  FUN_100082394(param_2,puVar4,FUN_100272854);
  local_98 = param_4;
  uStack_90 = param_5;
  FUN_1000efc08(auStack_b0);
  (**(code **)(*(long *)(param_4 + -8) + 0x10))();
  (**(code **)(lVar2 + 0x10))(auStack_88,auStack_b0,uVar1,lVar2);
  FUN_10003f094(auStack_b0);
  FUN_10003f094(auStack_88);
  return;
}

