// rea decompile_all
// name: FUN_100682f28
// address: 0x100682f28
// body: available
// range: 0x100682f28-0x100682fcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100682f28(void)

{
  byte bVar1;
  long lVar2;
  long unaff_x20;
  long local_28;
  
  if (*(char *)(unaff_x20 + 0x31) == '\x03') {
    lVar2 = 0;
  }
  else if (*(char *)(unaff_x20 + 0x31) == '\x04') {
    lVar2 = *(long *)(unaff_x20 + 8);
    bVar1 = *(byte *)(lVar2 + 0x20);
    local_28 = lVar2;
    _swift_bridgeObjectRetain(lVar2);
    lVar2 = lVar2 + 0x40;
    __ss10_HashTableV11startBucketAB0D0Vvg(lVar2,~(-1L << ((ulong)bVar1 & 0x3f)));
    FUN_100040bb4(&local_28,&DAT_100ab9ea0,&DAT_10084d528);
  }
  else {
    lVar2 = 0;
  }
  return lVar2;
}

