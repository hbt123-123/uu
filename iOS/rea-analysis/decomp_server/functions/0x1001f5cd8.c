// rea decompile_all
// name: FUN_1001f5cd8
// address: 0x1001f5cd8
// body: available
// range: 0x1001f5cd8-0x1001f5f7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f5cd8(undefined8 *param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,ulong *param_6,undefined8 param_7,ulong param_8)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  
  puVar1 = (undefined *)0xe900000000000064;
  puVar2 = (undefined *)0x6574696d696c6e75;
  __ss11_StringGutsV4growyySiF(0x60);
  __sSS6appendyySSF(0x100000000000002e,0x80000001008a0a40);
  puVar3 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x3d65646f6d8cbcef,0xa800000000000000);
  __sSS6appendyySSF(param_3,param_4);
  __sSS6appendyySSF(0x726f6665628cbcef,0xaa00000000003d65);
  puVar3 = (undefined *)0xe900000000000064;
  if (*param_6 < 0x7fffffffffffffff) {
    puVar3 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  }
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x2f,0xe100000000000000);
  puVar3 = (undefined *)0xe900000000000064;
  if (param_6[1] < 0x7fffffffffffffff) {
    puVar3 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  }
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x65677261748cbcef,0xaa00000000003d74);
  puVar3 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x72657466618cbcef,0xa90000000000003d);
  if (param_8 < 0x7fffffffffffffff) {
    puVar2 = PTR___ss6UInt64VN_100995e10;
    puVar1 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  }
  __sSS6appendyySSF(puVar2,puVar1);
  _swift_bridgeObjectRelease(puVar1);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

