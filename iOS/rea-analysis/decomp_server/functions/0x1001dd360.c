// rea decompile_all
// name: FUN_1001dd360
// address: 0x1001dd360
// body: available
// range: 0x1001dd360-0x1001dd523 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001dd360(undefined8 *param_1,undefined8 param_2,byte param_3,char param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  uVar5 = 0x676e696e6e7572;
  __ss11_StringGutsV4growyySiF(0x40);
  __sSS6appendyySSF(0x1000000000000032,0x800000010089e740);
  puVar4 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x8cbcef,0xa300000000000000);
  uVar6 = 0x646574697865;
  if (param_3 != 2) {
    uVar6 = 0x6c696e;
  }
  uVar1 = 0xe600000000000000;
  if (param_3 != 2) {
    uVar1 = 0xe300000000000000;
  }
  uVar2 = uVar5;
  if (param_3 != 0) {
    uVar2 = 0x6465686361746564;
  }
  uVar3 = 0xe700000000000000;
  if (param_3 != 0) {
    uVar3 = 0xe800000000000000;
  }
  if (param_3 < 2) {
    uVar1 = uVar3;
    uVar6 = uVar2;
  }
  __sSS6appendyySSF(uVar6,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x209286e220,0xa500000000000000);
  if (param_4 == '\0') {
    uVar6 = 0xe700000000000000;
  }
  else if (param_4 == '\x01') {
    uVar6 = 0xe800000000000000;
    uVar5 = 0x6465686361746564;
  }
  else {
    uVar6 = 0xe600000000000000;
    uVar5 = 0x646574697865;
  }
  __sSS6appendyySSF(uVar5,uVar6);
  _swift_bridgeObjectRelease(uVar6);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

