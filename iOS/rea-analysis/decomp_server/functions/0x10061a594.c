// rea decompile_all
// name: FUN_10061a594
// address: 0x10061a594
// body: available
// range: 0x10061a594-0x10061a663 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10061a594(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,undefined8 param_7,undefined8 param_8,
             long param_9,undefined8 param_10)

{
  undefined8 uVar1;
  
  _swift_allocObject(param_9,0x40,7);
  *(undefined8 *)(param_9 + 0x10) = param_5;
  *(undefined8 *)(param_9 + 0x18) = param_6;
  *(undefined8 *)(param_9 + 0x20) = param_7;
  *(undefined8 *)(param_9 + 0x28) = param_8;
  *(undefined8 *)(param_9 + 0x30) = param_3;
  *(undefined8 *)(param_9 + 0x38) = param_4;
  uVar1 = 0;
  __sSaMa(0,param_6);
  _swift_retain(param_4);
  FUN_100617950(param_1,param_2,param_10,param_9,param_5,uVar1,param_7);
  _swift_release(param_9);
  return param_1;
}

