// rea decompile_all
// name: FUN_1003d8888
// address: 0x1003d8888
// body: available
// range: 0x1003d8888-0x1003d8977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003d8888(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  ID self;
  long unaff_x20;
  undefined8 uVar3;
  ulong uVar4;
  ID self_00;
  undefined1 auVar5 [16];
  undefined8 local_60;
  undefined8 uStack_58;
  
  self = *(ID *)(unaff_x20 + _TtC8UUCommon14FileDataMapper::lock);
  _objc_msgSend(self,"lock");
  puVar1 = (undefined8 *)(unaff_x20 + _TtC8UUCommon14FileDataMapper::cache);
  uVar4 = puVar1[1];
  if (uVar4 >> 0x3c < 0xf) {
    uVar3 = *puVar1;
    FUN_100008184(uVar3,uVar4);
  }
  else {
    self_00 = *(ID *)(unaff_x20 + _TtC8UUCommon14FileDataMapper::fileLock);
    _objc_msgSend(self_00,"lock");
    FUN_1003d8d28(&local_60);
    _objc_msgSend(self_00,"unlock");
    uVar3 = *puVar1;
    uVar2 = puVar1[1];
    puVar1[1] = uStack_58;
    *puVar1 = local_60;
    FUN_100006cc8(uVar3,uVar2);
    uVar3 = *puVar1;
    uVar4 = puVar1[1];
    FUN_10010bd10(uVar3,uVar4);
  }
  _objc_msgSend(self,"unlock");
  auVar5._8_8_ = uVar4;
  auVar5._0_8_ = uVar3;
  return auVar5;
}

