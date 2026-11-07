// rea decompile_all
// name: FUN_1003d804c
// address: 0x1003d804c
// body: available
// range: 0x1003d804c-0x1003d8103 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d804c(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ID self;
  long unaff_x20;
  undefined8 uVar3;
  code *pcVar4;
  undefined1 auStack_48 [24];
  
  self = *(ID *)(unaff_x20 + _TtC8UUCommon14FileDataMapper::lock);
  _objc_msgSend(self,"lock");
  puVar1 = (undefined8 *)(unaff_x20 + _TtC8UUCommon14FileDataMapper::cache);
  uVar3 = *puVar1;
  uVar2 = puVar1[1];
  puVar1[1] = 0xf000000000000000;
  *puVar1 = 0;
  FUN_100006cc8(uVar3,uVar2);
  _objc_msgSend(self,"unlock");
  puVar1 = (undefined8 *)(unaff_x20 + _TtC8UUCommon14FileDataMapper::fileChanged);
  _swift_beginAccess(puVar1,auStack_48,0,0);
  pcVar4 = (code *)*puVar1;
  if (pcVar4 != (code *)0x0) {
    uVar3 = puVar1[1];
    _swift_retain(uVar3);
    (*pcVar4)();
    FUN_10008317c(pcVar4,uVar3);
  }
  return;
}

