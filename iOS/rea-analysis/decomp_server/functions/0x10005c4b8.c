// rea decompile_all
// name: FUN_10005c4b8
// address: 0x10005c4b8
// body: available
// range: 0x10005c4b8-0x10005c6bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005c4b8(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  
  __ss11_StringGutsV4growyySiF(0x5e);
  __sSS6appendyySSF(0xd000000000000039,0x800000010087df20);
  puVar7 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar4 = PTR___sSiN_100995968;
  bVar3 = *(byte *)(param_2 + 0x28);
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x79616c7073696420,0xeb000000003a4449);
  puVar6 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x3a74656772617420,0xe800000000000000);
  puVar6 = puVar7;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x78,0xe100000000000000);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar7);
  __sSS6appendyySSF(0x3a495044696820,0xe700000000000000);
  bVar5 = (bVar3 & 1) == 0;
  uVar1 = 0x65757274;
  if (bVar5) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar5) {
    uVar2 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

