// rea decompile_all
// name: FUN_10012ff10
// address: 0x10012ff10
// body: available
// range: 0x10012ff10-0x10013027b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10012ff10(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  uint param_5,undefined8 param_6,undefined8 param_7)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  
  __ss11_StringGutsV4growyySiF(0x42);
  __sSS6appendyySSF(0x100000000000003e,0x800000010088f750);
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0x202c,0xe200000000000000);
  __ss11_StringGutsV4growyySiF(0x19);
  _swift_bridgeObjectRelease(0xe000000000000000);
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar3 = PTR___sSiN_100995968;
  param_4 = param_4 + _TtC14UURemoteServer30ControlledProxySessionDelegate::proxy;
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x3d65707974202c,0xe700000000000000);
  puVar5 = puVar6;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar6);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x202c,0xe200000000000000);
  _swift_bridgeObjectRetain(0xe000000000000000);
  __sSS6appendyySSF(0x54676e6974746573,0xec0000003d657079);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _swift_bridgeObjectRelease(0xec0000003d657079);
  __ss11_StringGutsV4growyySiF(0x17);
  _swift_bridgeObjectRelease(0xe000000000000000);
  __sSS6appendyySSF(*(undefined8 *)(param_4 + 0x10),*(undefined8 *)(param_4 + 0x18));
  __sSS6appendyySSF(0x3a,0xe100000000000000);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar6);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x202c,0xe200000000000000);
  _swift_bridgeObjectRetain(0xe000000000000000);
  __sSS6appendyySSF(&DAT_d000000000000010,0x800000010088f790);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _swift_bridgeObjectRelease(0x800000010088f790);
  __ss11_StringGutsV4growyySiF(0x24);
  _swift_bridgeObjectRelease(0xe000000000000000);
  bVar4 = (param_5 & 1) == 0;
  uVar1 = 0x65757274;
  if (bVar4) {
    uVar1 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar4) {
    uVar2 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0x65746f6d6572202c,0xee003d7374726f50);
  __sSS6appendyySSF(param_6,param_7);
  _swift_bridgeObjectRetain(0xe000000000000000);
  __sSS6appendyySSF(0xd000000000000012,0x800000010088f7b0);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _swift_bridgeObjectRelease(0x800000010088f7b0);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

