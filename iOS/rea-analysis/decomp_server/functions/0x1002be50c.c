// rea decompile_all
// name: FUN_1002be50c
// address: 0x1002be50c
// body: available
// range: 0x1002be50c-0x1002be583 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1002be50c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  if (DAT_100a81b40 != -1) {
    _swift_once(&DAT_100a81b40,FUN_1002be0a0);
  }
  uVar2 = DAT_100b36498;
  uVar1 = DAT_100b36480;
  _swift_bridgeObjectRetain(DAT_100b36488);
  _swift_bridgeObjectRetain(uVar2);
  return uVar1;
}

