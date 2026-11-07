// rea decompile_all
// name: FUN_10057a264
// address: 0x10057a264
// body: available
// range: 0x10057a264-0x10057a2e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10057a264(undefined8 *param_1)

{
  char cVar1;
  char cVar2;
  void *pvVar3;
  long lVar4;
  long unaff_x20;
  undefined1 auVar5 [16];
  
  pvVar3 = (void *)0x58;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pvVar3 = _malloc(0x58);
  }
  else {
    _swift_coroFrameAlloc(0x58,0x6d11);
  }
  *param_1 = pvVar3;
  *(long *)((long)pvVar3 + 0x48) = unaff_x20;
  lVar4 = *(long *)(unaff_x20 + 0x10);
  _swift_beginAccess(lVar4 + 0x80,pvVar3,0,0);
  cVar2 = *(char *)(lVar4 + 0x80);
  cVar1 = '\0';
  if (cVar2 != '\x03') {
    cVar1 = cVar2;
  }
  *(char *)((long)pvVar3 + 0x50) = cVar1;
  auVar5._8_8_ = (char *)((long)pvVar3 + 0x50);
  auVar5._0_8_ = FUN_10057a2e8;
  return auVar5;
}

