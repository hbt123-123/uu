// rea decompile_all
// name: FUN_1001174f8
// address: 0x1001174f8
// body: available
// range: 0x1001174f8-0x10011755b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1001174f8(long param_1)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  
  FUN_100117318();
  bVar1 = *(byte *)(param_1 + 0x10);
  _swift_release();
  if ((bVar1 & 1) == 0) {
    FUN_1001173b8();
    bVar1 = *(byte *)(param_1 + 0x10);
    _swift_release();
    if ((bVar1 & 1) == 0) {
      FUN_100117458();
      cVar2 = *(char *)(param_1 + 0x10);
      _swift_release();
      uVar3 = 2;
      if (cVar2 == '\0') {
        uVar3 = 5;
      }
    }
    else {
      uVar3 = 1;
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}

