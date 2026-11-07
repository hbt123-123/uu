// rea decompile_all
// name: FUN_100052ee8
// address: 0x100052ee8
// body: available
// range: 0x100052ee8-0x100052f73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100052ee8(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  
  if (param_1 == 0) {
    _swift_bridgeObjectRetain(param_3);
  }
  else {
    uVar1 = 0x27;
    uVar2 = 0xe100000000000000;
    FUN_100053b50(0x27,0xe100000000000000,0x27275c27,0xe400000000000000,param_2,param_3);
    param_2 = param_1 + -1;
    FUN_100052ee8(param_2,uVar1,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    param_3 = uVar1;
  }
  auVar3._8_8_ = param_3;
  auVar3._0_8_ = param_2;
  return auVar3;
}

