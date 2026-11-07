// rea decompile_all
// name: FUN_100174518
// address: 0x100174518
// body: available
// range: 0x100174518-0x1001747cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100174518(undefined8 *param_1,undefined8 param_2,undefined8 param_3,ID param_4)

{
  ID IVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  char *pcVar5;
  
  __ss11_StringGutsV4growyySiF(0x87);
  __sSS6appendyySSF(0x1000000000000037,0x80000001008962f0);
  puVar3 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  puVar4 = PTR___ss6UInt32VN_100995dc0;
  puVar2 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x497473696c8cbcef,0xad00003d7865646e);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x664f736f708cbcef,0xad00003d74657366);
  puVar4 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x726f7272658cbcef,0xaf3d6e69616d6f44);
  pcVar5 = "domain";
  IVar1 = _objc_msgSend(param_4,"domain");
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar1);
  __sSS6appendyySSF(IVar1,pcVar5);
  _swift_bridgeObjectRelease(pcVar5);
  __sSS6appendyySSF(0x726f7272658cbcef,0xad00003d65646f43);
  _objc_msgSend(param_4,"code");
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x52646e65738cbcef,0xae003d746c757365);
  puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

