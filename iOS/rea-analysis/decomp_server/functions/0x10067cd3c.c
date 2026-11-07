// rea decompile_all
// name: FUN_10067cd3c
// address: 0x10067cd3c
// body: available
// range: 0x10067cd3c-0x10067ce03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10067cd3c(long param_1)

{
  undefined8 uVar1;
  long lVar2;
  long lVar3;
  
  FUN_10067cc78();
  lVar2 = *(long *)(param_1 + 0x10);
  if (lVar2 == 0) {
    _swift_bridgeObjectRelease(param_1);
  }
  else {
    lVar3 = 0x20;
    do {
      uVar1 = 0x30;
      if (*(char *)(param_1 + lVar3) != '\0') {
        uVar1 = 0x31;
      }
      __sSS6appendyySSF(uVar1,0xe100000000000000);
      _swift_bridgeObjectRelease(0xe100000000000000);
      if (((int)lVar3 - 0x1fU & 7) == 0) {
        __sSS6appendyySSF(0x20,0xe100000000000000);
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 - lVar2 != 0x20);
    _swift_bridgeObjectRelease(param_1);
  }
  return ZEXT816(0xe000000000000000) << 0x40;
}

