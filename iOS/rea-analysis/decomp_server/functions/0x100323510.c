// rea decompile_all
// name: FUN_100323510
// address: 0x100323510
// body: available
// range: 0x100323510-0x100323607 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_100323510(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
             long param_5,undefined8 param_6,code *param_7)

{
  long lVar1;
  undefined8 unaff_x20;
  undefined1 auStack_78 [40];
  
  FUN_1000b142c(param_2,auStack_78);
  lVar1 = 0;
  FUN_100347cbc();
  _swift_allocObject();
  FUN_1000a0074(auStack_78,lVar1 + 0x10);
  *(undefined8 *)(lVar1 + 0x38) = param_3;
  *(undefined8 *)(lVar1 + 0x40) = param_4;
  _swift_allocObject(param_5,0x20,7);
  *(undefined8 *)(param_5 + 0x10) = unaff_x20;
  *(long *)(param_5 + 0x18) = lVar1;
  _swift_bridgeObjectRetain(param_3);
  _swift_bridgeObjectRetain(param_4);
  _swift_retain();
  _swift_retain(lVar1);
  (*param_7)(param_1,param_6,param_5);
  _swift_release(param_5);
  _swift_release(lVar1);
  return param_1;
}

