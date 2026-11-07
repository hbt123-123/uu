// rea decompile_all
// name: FUN_100359080
// address: 0x100359080
// body: available
// range: 0x100359080-0x100359133 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100359080(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auVar4 [16];
  
  lVar3 = *(long *)(param_7 + -8);
  puVar2 = &stack0xffffffffffffffb0 + -(*(long *)(lVar3 + 0x40) + 0xfU & 0xfffffffffffffff0);
  _swift_unownedRetainStrong(param_3);
  (*param_4)(puVar2);
  puVar1 = puVar2;
  FUN_10035ab0c(puVar2,param_2,param_7,param_8);
  _swift_release(param_3);
  (**(code **)(lVar3 + 8))(puVar2,param_7);
  auVar4._8_4_ = (uint)param_2 & 1;
  auVar4._0_8_ = puVar1;
  auVar4._12_4_ = 0;
  return auVar4;
}

