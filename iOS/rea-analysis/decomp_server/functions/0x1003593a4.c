// rea decompile_all
// name: FUN_1003593a4
// address: 0x1003593a4
// body: available
// range: 0x1003593a4-0x10035944b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_1003593a4(undefined8 param_1,undefined8 param_2,long param_3,undefined8 param_4,code *param_5)

{
  undefined8 *unaff_x20;
  undefined8 uVar1;
  
  uVar1 = *unaff_x20;
  _swift_unownedRetainStrong();
  _swift_unownedRetain();
  _swift_unownedRetain();
  _swift_release();
  _swift_allocObject(param_3,0x30,7);
  *(undefined8 **)(param_3 + 0x10) = unaff_x20;
  *(undefined8 *)(param_3 + 0x18) = param_1;
  *(undefined8 *)(param_3 + 0x20) = param_2;
  *(undefined8 *)(param_3 + 0x28) = uVar1;
  _swift_retain(param_2);
  (*param_5)(param_4,param_3);
  _swift_retain();
  _swift_release(param_3);
  _swift_unownedRelease();
  return param_4;
}

