// rea decompile_all
// name: FUN_100359008
// address: 0x100359008
// body: available
// range: 0x100359008-0x10035907f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16]
FUN_100359008(undefined8 param_1,undefined8 param_2,undefined8 param_3,code *param_4)

{
  undefined8 uVar1;
  undefined1 auVar2 [16];
  undefined8 local_38;
  
  _swift_unownedRetainStrong(param_3);
  (*param_4)(&local_38);
  uVar1 = local_38;
  FUN_10035b0f4(local_38,param_2);
  _swift_bridgeObjectRelease(local_38);
  _swift_release(param_3);
  auVar2._8_4_ = (uint)param_2 & 1;
  auVar2._0_8_ = uVar1;
  auVar2._12_4_ = 0;
  return auVar2;
}

