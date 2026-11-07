// rea decompile_all
// name: FUN_100042c44
// address: 0x100042c44
// body: available
// range: 0x100042c44-0x100042e33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100042c44(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  
  __ss11_StringGutsV4growyySiF(0x5a);
  __sSS6appendyySSF(&DAT_d000000000000030,0x800000010087ca90);
  puVar3 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x7473657571657220,0xeb000000003a4449);
  uVar6 = *(ulong *)(param_3 + 0xb8) >> 0x3c;
  uVar1 = 0;
  if (uVar6 < 0xf) {
    uVar1 = *(undefined8 *)(param_3 + 0xb0);
  }
  uVar2 = 0xc000000000000000;
  if (uVar6 < 0xf) {
    uVar2 = *(ulong *)(param_3 + 0xb8);
  }
  FUN_100040b80();
  FUN_100006cdc(uVar1,uVar2);
  puVar3 = PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int64VN_100995cc0,PTR___ss5Int64Vs23CustomStringConvertiblesWP_100995cf0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x6f43726f72726520,0xeb000000003a6564);
  puVar5 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  puVar3 = PTR___ss5Int32VN_100995c78;
  puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x736552646e657320,0xec0000003a746c75);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

