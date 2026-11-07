// rea decompile_all
// name: FUN_100269900
// address: 0x100269900
// body: available
// range: 0x100269900-0x1002699b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100269900(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,
                  long param_5,undefined8 param_6)

{
  undefined8 uVar1;
  long lVar2;
  undefined1 auStack_88 [24];
  long local_70;
  undefined8 uStack_68;
  
  uVar1 = *(undefined8 *)(param_3 + 0x18);
  lVar2 = *(long *)(param_3 + 0x20);
  FUN_10003f030(param_3,uVar1);
  local_70 = param_5;
  uStack_68 = param_6;
  FUN_1000efc08(auStack_88);
  (**(code **)(*(long *)(param_5 + -8) + 0x10))();
  (**(code **)(lVar2 + 8))(param_1,param_2,auStack_88,uVar1,lVar2);
  FUN_10003f094(auStack_88);
  return;
}

