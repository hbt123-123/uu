// rea decompile_all
// name: FUN_1001ecf3c
// address: 0x1001ecf3c
// body: available
// range: 0x1001ecf3c-0x1001ed0bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001ecf3c(undefined8 *param_1,undefined8 param_2,char param_3,undefined8 param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined8 uVar3;
  
  __ss11_StringGutsV4growyySiF(0x5e);
  __sSS6appendyySSF(0x1000000000000040,0x80000001008a0450);
  puVar2 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x6c616e69668cbcef,0xae003d6574617453);
  if (param_3 == '\0') {
    uVar3 = 0xe700000000000000;
    uVar1 = 0x676e696e6e7572;
  }
  else {
    uVar1 = 0x6465686361746564;
    if (param_3 != '\x01') {
      uVar1 = 0x646574697865;
    }
    uVar3 = 0xe800000000000000;
    if (param_3 != '\x01') {
      uVar3 = 0xe600000000000000;
    }
  }
  __sSS6appendyySSF(uVar1,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x6f736165728cbcef,0xaa00000000003d6e);
  __sSS6appendyySSF(param_4,param_5);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

