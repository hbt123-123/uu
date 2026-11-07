// rea decompile_all
// name: FUN_100021030
// address: 0x100021030
// body: available
// range: 0x100021030-0x10002118f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100021030(undefined8 *param_1,undefined8 param_2,ID param_3)

{
  undefined8 uVar1;
  bool bVar2;
  ID IVar3;
  undefined *puVar4;
  undefined8 uVar5;
  
  __ss11_StringGutsV4growyySiF(0x4f);
  __sSS6appendyySSF(0xd000000000000031,0x80000001008786c0);
  puVar4 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(&DAT_d000000000000010,0x8000000100878700);
  IVar3 = _objc_msgSend(param_3,"isSecondScreen");
  bVar2 = (int)IVar3 == 0;
  uVar5 = 0x65757274;
  if (bVar2) {
    uVar5 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar2) {
    uVar1 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar5,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  uVar5 = 0xe800000000000000;
  __sSS6appendyySSF(0x3a6769666e6f6320,0xe800000000000000);
  FUN_10003ea18(param_3);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar5);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

