// rea decompile_all
// name: FUN_1002a6014
// address: 0x1002a6014
// body: available
// range: 0x1002a6014-0x1002a6077 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002a6014(void)

{
  undefined *puVar1;
  undefined8 uVar2;
  
  if (DAT_100a83390 != 0) {
    return;
  }
  puVar1 = &DAT_100a83398;
  FUN_100004c48(&DAT_100a83398,&DAT_100817878);
  uVar2 = 0x44000001;
  _swift_getFunctionTypeMetadata1(0x44000001,puVar1,PTR___sytN_100995e90 + 8);
  DAT_100a83390 = uVar2;
  return;
}

