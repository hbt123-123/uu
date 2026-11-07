// rea decompile_all
// name: FUN_1005421a4
// address: 0x1005421a4
// body: available
// range: 0x1005421a4-0x100542243 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005421a4(void)

{
  long lVar1;
  long unaff_x20;
  long lVar2;
  long lVar3;
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(unaff_x20 + 0x10,auStack_48,0,0);
  lVar1 = *(long *)(unaff_x20 + 0x10);
  lVar2 = *(long *)(lVar1 + 0x10);
  if (lVar2 != 0) {
    _swift_bridgeObjectRetain(lVar1);
    lVar3 = 0x20;
    do {
      if (*(long *)(lVar1 + lVar3) != 0) {
        _swift_slowDealloc(*(long *)(lVar1 + lVar3),0xffffffffffffffff,0xffffffffffffffff);
      }
      lVar3 = lVar3 + 0x10;
      lVar2 = lVar2 + -1;
    } while (lVar2 != 0);
    _swift_bridgeObjectRelease(lVar1);
    lVar1 = *(long *)(unaff_x20 + 0x10);
  }
  _swift_bridgeObjectRelease(lVar1);
  _swift_deallocClassInstance();
  return;
}

