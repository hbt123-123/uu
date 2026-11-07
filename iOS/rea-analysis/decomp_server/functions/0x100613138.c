// rea decompile_all
// name: FUN_100613138
// address: 0x100613138
// body: available
// range: 0x100613138-0x1006131f3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_100613138(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             undefined8 param_5,undefined8 param_6,long param_7,undefined8 param_8)

{
  undefined8 uVar1;
  long *unaff_x20;
  long lVar2;
  
  lVar2 = *unaff_x20;
  _swift_allocObject(param_7,0x38,7);
  *(undefined8 *)(param_7 + 0x10) = *(undefined8 *)(lVar2 + 0x50);
  *(undefined8 *)(param_7 + 0x18) = param_5;
  *(undefined8 *)(param_7 + 0x20) = param_6;
  *(undefined8 *)(param_7 + 0x28) = param_3;
  *(undefined8 *)(param_7 + 0x30) = param_4;
  uVar1 = 0;
  __sSaMa(0,param_5);
  _swift_retain(param_4);
  FUN_1006119f0(param_1,param_2,param_8,param_7,uVar1);
  _swift_release(param_7);
  return param_1;
}

