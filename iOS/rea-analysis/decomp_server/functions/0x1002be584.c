// rea decompile_all
// name: FUN_1002be584
// address: 0x1002be584
// body: available
// range: 0x1002be584-0x1002be60f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002be584(long param_1)

{
  long lVar1;
  long lVar2;
  
  __s10Foundation6LocaleV18preferredLanguagesSaySSGvgZ();
  lVar2 = param_1 + 0x20;
  lVar1 = param_1;
  FUN_1002be2fc();
  _swift_bridgeObjectRelease(param_1);
  DAT_100b364a0 = 0x4c2d747065636341;
  DAT_100b364a8 = 0xef65676175676e61;
  DAT_100b364b0 = lVar1;
  DAT_100b364b8 = lVar2;
  return;
}

