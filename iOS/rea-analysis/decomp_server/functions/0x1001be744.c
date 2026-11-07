// rea decompile_all
// name: FUN_1001be744
// address: 0x1001be744
// body: available
// range: 0x1001be744-0x1001be7cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1001be744(long param_1)

{
  char cVar1;
  long lVar2;
  
  FUN_100117638();
  lVar2 = param_1;
  FUN_100117318();
  cVar1 = *(char *)(lVar2 + 0x10);
  _swift_release();
  if (cVar1 != '\x01') {
    FUN_1001173b8();
    cVar1 = *(char *)(lVar2 + 0x10);
    _swift_release();
    if (cVar1 != '\x01') {
      FUN_100117458();
      _swift_release(param_1);
      cVar1 = *(char *)(lVar2 + 0x10);
      _swift_release(lVar2);
      if (cVar1 == '\0') {
        return 3;
      }
      return 4;
    }
  }
  _swift_release(param_1);
  return 4;
}

