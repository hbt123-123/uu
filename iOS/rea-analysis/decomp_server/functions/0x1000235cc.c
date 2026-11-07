// rea decompile_all
// name: FUN_1000235cc
// address: 0x1000235cc
// body: available
// range: 0x1000235cc-0x1000237af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000235cc(undefined8 *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 in_x4;
  
  __ss11_StringGutsV4growyySiF(0x5f);
  __sSS6appendyySSF(0xd000000000000035,0x800000010087a060);
  puVar3 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  puVar1 = PTR___ss6UInt32VN_100995dc0;
  puVar2 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x496e656572637320,0xea00000000003a64);
  puVar2 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x3a6b6361727420,0xe700000000000000);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  uVar4 = 0xe800000000000000;
  __sSS6appendyySSF(0x3a6769666e6f6320,0xe800000000000000);
  FUN_10003ea18(in_x4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  uVar4 = 0xe700000000000000;
  __sSS6appendyySSF(0x3a657461747320,0xe700000000000000);
  FUN_100015370();
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

