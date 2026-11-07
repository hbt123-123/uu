// rea decompile_all
// name: FUN_100054c98
// address: 0x100054c98
// body: available
// range: 0x100054c98-0x100054d67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100054c98(void)

{
  undefined1 auVar1 [16];
  long *plVar2;
  long lVar3;
  long *plVar4;
  long *unaff_x20;
  long lVar5;
  
  __ss11_StringGutsV4growyySiF(0x2a);
  lVar3 = *unaff_x20;
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x10) == 0)) {
    plVar2 = unaff_x20 + 2;
    plVar4 = unaff_x20 + 3;
  }
  else {
    plVar2 = (long *)(lVar3 + 0x20);
    plVar4 = (long *)(lVar3 + 0x28);
  }
  lVar3 = *plVar2;
  lVar5 = *plVar4;
  _swift_bridgeObjectRetain(lVar5);
  __sSS6appendyySSF(lVar3,lVar5);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _swift_bridgeObjectRelease(lVar5);
  __sSS6appendyySSF(0xd000000000000028,0x80000001000c9cb0);
  auVar1._8_8_ = 0xe200000000000000;
  auVar1._0_8_ = 0x5f5f;
  return auVar1;
}

