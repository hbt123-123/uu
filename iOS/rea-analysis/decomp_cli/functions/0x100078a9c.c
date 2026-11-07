// rea decompile_all
// name: FUN_100078a9c
// address: 0x100078a9c
// body: available
// range: 0x100078a9c-0x100078b33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100078a9c(undefined8 param_1,long param_2)

{
  undefined8 *puVar1;
  undefined1 auVar2 [16];
  undefined8 local_d0;
  undefined8 local_c8;
  long lStack_c0;
  
  puVar1 = &local_d0;
  (**(code **)(param_2 + 0x10))(&local_c8);
  _swift_bridgeObjectRetain(lStack_c0);
  FUN_10006e954(&local_c8);
  if (lStack_c0 == 0) {
    local_d0 = param_1;
    _swift_getMetatypeMetadata(param_1);
    __sSS10describingSSx_tclufC(&local_d0,param_1);
    local_c8 = 0x2d;
    lStack_c0 = -0x1f00000000000000;
    FUN_100078034(0x2d,0xe100000000000000,puVar1,param_1);
    _swift_bridgeObjectRelease(param_1);
  }
  auVar2._8_8_ = lStack_c0;
  auVar2._0_8_ = local_c8;
  return auVar2;
}

