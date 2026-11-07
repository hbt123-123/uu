// rea decompile_all
// name: FUN_10005bd64
// address: 0x10005bd64
// body: available
// range: 0x10005bd64-0x10005c0d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10005bd64(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  undefined *puVar4;
  bool bVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong in_x4;
  
  __ss11_StringGutsV4growyySiF(0xa6);
  __sSS6appendyySSF(0xd000000000000036,0x800000010087e0b0);
  puVar7 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar4 = PTR___sSiN_100995968;
  bVar3 = *(byte *)(param_2 + 0x28);
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x656e6547646c6f20,0xef3a6e6f69746172);
  puVar6 = puVar7;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x656e654777656e20,0xef3a6e6f69746172);
  puVar6 = puVar7;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0xd000000000000012,0x800000010087e0f0);
  puVar6 = puVar7;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x78,0xe100000000000000);
  puVar6 = puVar7;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(&DAT_d000000000000013,0x800000010087e110);
  bVar5 = (in_x4 & 1) == 0;
  uVar2 = 0x65757274;
  if (bVar5) {
    uVar2 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar5) {
    uVar1 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x4d74656772617420,0xec0000003a65646f);
  puVar6 = puVar7;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x78,0xe100000000000000);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar4,puVar7);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar7);
  __sSS6appendyySSF(0x4874656772617420,0xed00003a49504469);
  bVar5 = (bVar3 & 1) == 0;
  uVar2 = 0x65757274;
  if (bVar5) {
    uVar2 = 0x65736c6166;
  }
  uVar1 = 0xe400000000000000;
  if (bVar5) {
    uVar1 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

