// rea decompile_all
// name: FUN_1001d8efc
// address: 0x1001d8efc
// body: available
// range: 0x1001d8efc-0x1001d917f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001d8efc(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5,long param_6,undefined8 param_7,undefined8 param_8,
                  undefined8 param_9,long param_10)

{
  undefined8 uVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  __ss11_StringGutsV4growyySiF(0x5b);
  __sSS6appendyySSF(0x1000000000000024,0x800000010089f660);
  puVar3 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x3d656d616e8cbcef,0xa800000000000000);
  uVar1 = 0x6c696e;
  if (param_4 != 0) {
    uVar1 = param_3;
  }
  lVar2 = -0x1d00000000000000;
  if (param_4 != 0) {
    lVar2 = param_4;
  }
  _swift_bridgeObjectRetain(param_4);
  __sSS6appendyySSF(uVar1,lVar2);
  _swift_bridgeObjectRelease(lVar2);
  __sSS6appendyySSF(0x6c6c6568738cbcef,0xa90000000000003d);
  uVar1 = 0x6c696e;
  if (param_6 != 0) {
    uVar1 = param_5;
  }
  lVar2 = -0x1d00000000000000;
  if (param_6 != 0) {
    lVar2 = param_6;
  }
  _swift_bridgeObjectRetain(param_6);
  __sSS6appendyySSF(uVar1,lVar2);
  _swift_bridgeObjectRelease(lVar2);
  __sSS6appendyySSF(0x3d736c6f638cbcef,0xa800000000000000);
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar3 = PTR___sSiN_100995968;
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x3d73776f728cbcef,0xa800000000000000);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x6f6974706f8cbcef,0xaa00000000003d6e);
  uVar1 = 0x6c696e;
  if (param_10 != 0) {
    uVar1 = param_9;
  }
  lVar2 = -0x1d00000000000000;
  if (param_10 != 0) {
    lVar2 = param_10;
  }
  _swift_bridgeObjectRetain(param_10);
  __sSS6appendyySSF(uVar1,lVar2);
  _swift_bridgeObjectRelease(lVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

