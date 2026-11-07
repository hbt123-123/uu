// rea decompile_all
// name: FUN_100241cbc
// address: 0x100241cbc
// body: available
// range: 0x100241cbc-0x100241d6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100241cbc(long param_1)

{
  long lVar1;
  undefined *self;
  ID IVar2;
  char *pcVar3;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  FUN_100242668();
  lVar1 = param_1;
  FUN_100241bf8();
  _swift_bridgeObjectRelease(param_1);
  uVar4 = *(undefined8 *)(lVar1 + 0x10);
  self = &_OBJC_CLASS___NSData;
  _objc_allocWithZone();
  IVar2 = _objc_msgSend((ID)self,"initWithBytes:length:",lVar1 + 0x20,uVar4);
  pcVar3 = "base64EncodedStringWithOptions:";
  IVar2 = _objc_msgSend(IVar2,"base64EncodedStringWithOptions:",0);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar2);
  _swift_bridgeObjectRelease(lVar1);
  auVar5._8_8_ = pcVar3;
  auVar5._0_8_ = IVar2;
  return auVar5;
}

