// rea decompile_all
// name: FUN_1001b0368
// address: 0x1001b0368
// body: available
// range: 0x1001b0368-0x1001b05df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001b0368(undefined8 *param_1,ID param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  ulong uVar6;
  
  __ss11_StringGutsV4growyySiF(0x3e);
  __sSS6appendyySSF(0x100000000000002e,0x800000010089b4f0);
  _objc_msgSend(param_2,"type");
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar3 = PTR___sSiN_100995968;
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x3d74736f68202c,0xe700000000000000);
  __sSS6appendyySSF(*(undefined8 *)(param_3 + 0x10),*(undefined8 *)(param_3 + 0x18));
  __sSS6appendyySSF(0x3a,0xe100000000000000);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x202c,0xe200000000000000);
  __ss11_StringGutsV4growyySiF(0x1e);
  _swift_bridgeObjectRelease(0xe000000000000000);
  if ((*(ulong *)(param_3 + 0x30) >> 0x3d & 1) == 0) {
    uVar6 = *(ulong *)(param_3 + 0x28) & 0xffffffffffff;
  }
  else {
    uVar6 = *(ulong *)(param_3 + 0x30) >> 0x38 & 0xf;
  }
  uVar2 = 0x65736c6166;
  if (uVar6 != 0) {
    uVar2 = 0x65757274;
  }
  uVar1 = 0xe500000000000000;
  if (uVar6 != 0) {
    uVar1 = 0xe400000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __sSS6appendyySSF(0x736150736168202c,0xee003d64726f7773);
  if ((*(ulong *)(param_3 + 0x40) >> 0x3d & 1) == 0) {
    uVar6 = *(ulong *)(param_3 + 0x38) & 0xffffffffffff;
  }
  else {
    uVar6 = *(ulong *)(param_3 + 0x40) >> 0x38 & 0xf;
  }
  uVar2 = 0x65736c6166;
  if (uVar6 != 0) {
    uVar2 = 0x65757274;
  }
  uVar1 = 0xe500000000000000;
  if (uVar6 != 0) {
    uVar1 = 0xe400000000000000;
  }
  __sSS6appendyySSF(uVar2,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  _swift_bridgeObjectRetain(0xe000000000000000);
  __sSS6appendyySSF(0x6e72657355736168,0xec0000003d656d61);
  _swift_bridgeObjectRelease(0xe000000000000000);
  _swift_bridgeObjectRelease(0xec0000003d656d61);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

