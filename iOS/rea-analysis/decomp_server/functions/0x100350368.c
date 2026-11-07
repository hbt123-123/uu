// rea decompile_all
// name: FUN_100350368
// address: 0x100350368
// body: available
// range: 0x100350368-0x10035040f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100350368(void)

{
  undefined *puVar1;
  ID self;
  long lVar2;
  undefined4 *puVar3;
  
  puVar1 = &_OBJC_CLASS___NSISO8601DateFormatter;
  _objc_allocWithZone();
  self = _objc_msgSend((ID)puVar1,"init");
  _objc_msgSend(self,"setFormatOptions:",0x773);
  puVar1 = &DAT_100a88420;
  FUN_100004bb4(&DAT_100a88420,&DAT_10081c4a0);
  _swift_allocObject();
  lVar2 = 0;
  FUN_1002c6dd8();
  _swift_allocObject();
  puVar3 = (undefined4 *)0x4;
  _swift_slowAlloc(4,0xffffffffffffffff);
  *(undefined4 **)(lVar2 + 0x10) = puVar3;
  *puVar3 = 0;
  *(long *)(puVar1 + 0x10) = lVar2;
  *(ID *)(puVar1 + 0x18) = self;
  DAT_100a87e78 = puVar1;
  return;
}

