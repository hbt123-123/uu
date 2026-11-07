// rea decompile_all
// name: FUN_1003909e4
// address: 0x1003909e4
// body: available
// range: 0x1003909e4-0x100390abb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1003909e4(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  int *piVar2;
  
  pcVar1 = param_1;
  _renamex_np(param_1,param_2,2);
  if ((int)pcVar1 != 0) {
    piVar2 = ___error();
    if (*piVar2 != 2) {
      piVar2 = ___error();
      _strerror(*piVar2);
      FUN_100386734(3,"MemoryFile_OSX.cpp","tryAtomicRename",0x45,"fail to renamex_np %s to %s, %s")
      ;
    }
    pcVar1 = param_1;
    _rename(param_1,param_2);
    if ((int)pcVar1 != 0) {
      piVar2 = ___error();
      _strerror(*piVar2);
      FUN_100386734(3,"MemoryFile_OSX.cpp","tryAtomicRename",0x4c,"fail to rename %s to %s, %s");
      return 0;
    }
  }
  _unlink(param_1);
  return 1;
}

