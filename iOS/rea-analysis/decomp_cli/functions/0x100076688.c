// rea decompile_all
// name: FUN_100076688
// address: 0x100076688
// body: available
// range: 0x100076688-0x1000766ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100076688(undefined8 param_1)

{
  undefined1 auVar1 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  char local_38;
  
  _swift_errorRetain();
  FUN_1000aaaa0(&local_68,param_1);
  auVar1._8_8_ = uStack_60;
  auVar1._0_8_ = local_68;
  if (local_38 == '\x01') {
    _swift_bridgeObjectRetain(uStack_60);
    FUN_1000767d8(&local_68);
  }
  return auVar1;
}

