// rea decompile_all
// name: FUN_100390384
// address: 0x100390384
// body: available
// range: 0x100390384-0x100390427 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100390384(long param_1,int param_2)

{
  long lVar1;
  int *piVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  
  if ((*(byte *)(param_1 + 0x30) & 1) != 0) {
    return 1;
  }
  lVar1 = *(long *)(param_1 + 0x20);
  uVar3 = 0;
  if (lVar1 != 0) {
    uVar4 = 0x10;
    if (param_2 == 0) {
      uVar4 = 1;
    }
    _msync(lVar1,*(undefined8 *)(param_1 + 0x28),uVar4);
    if ((int)lVar1 == 0) {
      uVar3 = 1;
    }
    else {
      piVar2 = ___error();
      _strerror(*piVar2);
      FUN_100386734(3,"MemoryFile.cpp","msync",0xce,"fail to msync [%s], %s");
      uVar3 = 0;
    }
  }
  return uVar3;
}

