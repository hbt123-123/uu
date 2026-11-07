// rea decompile_all
// name: FUN_1000792a0
// address: 0x1000792a0
// body: available
// range: 0x1000792a0-0x100079343 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_1000792a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined1 *puVar1;
  undefined1 auVar2 [16];
  undefined8 local_d8;
  long lStack_d0;
  
  puVar1 = &stack0xffffffffffffff20;
  FUN_100078908(&local_d8);
  _swift_bridgeObjectRetain(lStack_d0);
  FUN_10006e954(&local_d8);
  if (lStack_d0 == 0) {
    FUN_10000eb08(param_3,param_4);
    __sSS10describingSSx_tclufC(&stack0xffffffffffffff20,param_3);
    local_d8 = 0x2d;
    lStack_d0 = -0x1f00000000000000;
    FUN_100078034(0x2d,0xe100000000000000,puVar1,param_3);
    _swift_bridgeObjectRelease(param_3);
  }
  auVar2._8_8_ = lStack_d0;
  auVar2._0_8_ = local_d8;
  return auVar2;
}

