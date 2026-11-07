// rea decompile_all
// name: FUN_1003d1da0
// address: 0x1003d1da0
// body: available
// range: 0x1003d1da0-0x1003d1ebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003d1da0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  ID IVar2;
  long unaff_x20;
  
  puVar1 = &_OBJC_CLASS___NSLock;
  _objc_allocWithZone();
  IVar2 = _objc_msgSend((ID)puVar1,"init");
  puVar1 = PTR___swiftEmptyArrayStorage_100995ea0;
  *(ID *)(unaff_x20 + 0x30) = IVar2;
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  *(undefined8 *)(unaff_x20 + 0x10) = param_1;
  *(undefined8 *)(unaff_x20 + 0x18) = param_4;
  __ss11_StringGutsV4growyySiF(0x1e);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _getuid();
  puVar1 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar1);
  __sSS6appendyySSF(0x2e,0xe100000000000000);
  __sSS6appendyySSF(param_2,param_3);
  _swift_bridgeObjectRelease(param_3);
  *(undefined8 *)(unaff_x20 + 0x20) = 0xd000000000000019;
  *(undefined8 *)(unaff_x20 + 0x28) = 0x80000001008b44f0;
  FUN_1003d1ec0();
  return;
}

