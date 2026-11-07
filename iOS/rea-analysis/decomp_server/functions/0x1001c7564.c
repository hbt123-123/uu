// rea decompile_all
// name: FUN_1001c7564
// address: 0x1001c7564
// body: available
// range: 0x1001c7564-0x1001c77f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001c7564(undefined8 *param_1)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *in_x5;
  undefined8 *in_x6;
  undefined8 *in_x7;
  undefined8 uVar5;
  
  __ss11_StringGutsV4growyySiF(0x66);
  __sSS6appendyySSF(0x100000000000002f,0x800000010089d6b0);
  puVar2 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  __sSS6appendyySSF(0x3d736c6f638cbcef,0xa800000000000000);
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar2 = PTR___sSiN_100995968;
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x3d73776f728cbcef,0xa800000000000000);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar2,puVar4);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x6c6c6568738cbcef,0xa90000000000003d);
  lVar1 = in_x5[1];
  if (lVar1 == 0) {
    lVar1 = -0x1900000000000000;
    uVar5 = 0x746c7561666564;
  }
  else {
    uVar5 = *in_x5;
  }
  _swift_bridgeObjectRetain();
  __sSS6appendyySSF(uVar5,lVar1);
  _swift_bridgeObjectRelease(lVar1);
  __sSS6appendyySSF(0x6f6974706f8cbcef,0xaa00000000003d6e);
  lVar1 = in_x6[1];
  if (lVar1 == 0) {
    uVar5 = 0x6c696e;
    lVar1 = -0x1d00000000000000;
  }
  else {
    uVar5 = *in_x6;
  }
  _swift_bridgeObjectRetain();
  __sSS6appendyySSF(uVar5,lVar1);
  _swift_bridgeObjectRelease(lVar1);
  __sSS6appendyySSF(0x3d656d616e8cbcef,0xa800000000000000);
  lVar1 = in_x7[1];
  if (lVar1 == 0) {
    uVar5 = 0x6c696e;
    lVar1 = -0x1d00000000000000;
  }
  else {
    uVar5 = *in_x7;
  }
  _swift_bridgeObjectRetain();
  __sSS6appendyySSF(uVar5,lVar1);
  _swift_bridgeObjectRelease(lVar1);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

