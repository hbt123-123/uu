// rea decompile_all
// name: FUN_1003901fc
// address: 0x1003901fc
// body: available
// range: 0x1003901fc-0x1003902ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1003901fc(long param_1)

{
  long lVar1;
  int *piVar2;
  undefined4 uVar3;
  
  uVar3 = 3;
  if (*(char *)(param_1 + 0x30) != '\0') {
    uVar3 = 1;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  _mmap(lVar1,*(undefined8 *)(param_1 + 0x28),uVar3,1,*(undefined4 *)(param_1 + 0x18),0);
  *(long *)(param_1 + 0x20) = lVar1;
  if (lVar1 == -1) {
    piVar2 = ___error();
    _strerror(*piVar2);
    FUN_100386734(3,"MemoryFile.cpp","mmap",0xd8,"fail to mmap [%s], mode %x, %s");
    *(undefined8 *)(param_1 + 0x20) = 0;
  }
  else {
    FUN_100386734(1,"MemoryFile.cpp","mmap",0xdc,"mmap to address [%p], oldPtr [%p], [%s]");
  }
  return lVar1 != -1;
}

