// rea decompile_all
// name: FUN_10012e8d8
// address: 0x10012e8d8
// body: available
// range: 0x10012e8d8-0x10012ec8b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10012e8d8(undefined8 *param_1,long *param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  ulong uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  
  __ss11_StringGutsV4growyySiF(0x40);
  __sSS6appendyySSF(0x100000000000003c,0x800000010088f130);
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar3 = PTR___sSiN_100995968;
  lVar11 = *param_2;
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x202c,0xe200000000000000);
  __ss11_StringGutsV4growyySiF(0x25);
  _swift_bridgeObjectRelease(0xe000000000000000);
  puVar4 = puVar5;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0xd00000000000001a,0x800000010088f170);
  lVar6 = param_2[10];
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x202c,0xe200000000000000);
  _swift_bridgeObjectRetain(0xe000000000000000);
  __sSS6appendyySSF(0x3d65707974,0xe500000000000000);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _swift_bridgeObjectRelease(0xe500000000000000);
  __ss11_StringGutsV4growyySiF(0x20);
  _swift_bridgeObjectRelease(0xe000000000000000);
  if (((ulong)param_2[6] >> 0x3d & 1) == 0) {
    uVar7 = param_2[5] & 0xffffffffffff;
  }
  else {
    uVar7 = (ulong)param_2[6] >> 0x38 & 0xf;
  }
  uVar10 = 0x65736c6166;
  uVar9 = 0x65757274;
  uVar2 = uVar10;
  if (uVar7 != 0) {
    uVar2 = uVar9;
  }
  uVar1 = 0xe500000000000000;
  if (uVar7 != 0) {
    uVar1 = 0xe400000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x736150736168202c,0xee003d64726f7773);
  if (((ulong)param_2[8] >> 0x3d & 1) == 0) {
    uVar7 = param_2[7] & 0xffffffffffff;
  }
  else {
    uVar7 = (ulong)param_2[8] >> 0x38 & 0xf;
  }
  uVar2 = uVar10;
  if (uVar7 != 0) {
    uVar2 = uVar9;
  }
  uVar8 = 0xe500000000000000;
  uVar1 = 0xe500000000000000;
  if (uVar7 != 0) {
    uVar1 = 0xe400000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x202c,0xe200000000000000);
  _swift_bridgeObjectRetain(0xe000000000000000);
  __sSS6appendyySSF(0x6e72657355736168,0xec0000003d656d61);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _swift_bridgeObjectRelease(0xec0000003d656d61);
  __ss11_StringGutsV4growyySiF(0x14);
  _swift_bridgeObjectRelease(0xe000000000000000);
  if ((lVar11 == 2) || ((lVar11 == 1 && (lVar6 != 1)))) {
    uVar8 = 0xe400000000000000;
    uVar10 = uVar9;
  }
  __sSS6appendyySSF(uVar10,uVar8);
  _swift_bridgeObjectRelease(uVar8);
  _swift_bridgeObjectRetain(0xe000000000000000);
  __sSS6appendyySSF(0xd000000000000012,0x800000010088f190);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _swift_bridgeObjectRelease(0x800000010088f190);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

