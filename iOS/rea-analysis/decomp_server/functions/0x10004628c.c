// rea decompile_all
// name: FUN_10004628c
// address: 0x10004628c
// body: available
// range: 0x10004628c-0x1000465c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004628c(undefined8 *param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  long param_5)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  undefined8 *puVar8;
  ulong uVar9;
  undefined8 uVar10;
  
  __ss11_StringGutsV4growyySiF(0x72);
  __sSS6appendyySSF(0xd00000000000002e,0x800000010087d010);
  __sSS6appendyySSF(param_2,param_3);
  __sSS6appendyySSF(0x3a746f6c7320,0xe600000000000000);
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar3 = PTR___sSiN_100995968;
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x3a656d616e20,0xe600000000000000);
  __sSS6appendyySSF(*(undefined8 *)(param_4 + 8),*(undefined8 *)(param_4 + 0x10));
  __sSS6appendyySSF(0x74756c6f73657220,0xec0000003a6e6f69);
  puVar6 = puVar5;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x78,0xe100000000000000);
  puVar6 = puVar5;
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x3a495044696820,0xe700000000000000);
  bVar4 = (*(byte *)(param_4 + 0x28) & 1) == 0;
  uVar10 = 0x65757274;
  if (bVar4) {
    uVar10 = 0x65736c6166;
  }
  uVar2 = 0xe400000000000000;
  if (bVar4) {
    uVar2 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar10,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0x6873657266657220,0xed00003a65746152);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar3,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x3a73746f6c7320,0xe700000000000000);
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  lVar7 = *(long *)(param_5 + 0x10);
  if (lVar7 != 0) {
    FUN_10006fc00(0,lVar7,0);
    puVar8 = (undefined8 *)(param_5 + 0x20);
    uVar9 = *(ulong *)(puVar3 + 0x10);
    do {
      uVar10 = *puVar8;
      uVar1 = uVar9 + 1;
      if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar9) {
        FUN_10006fc00(1 < *(ulong *)(puVar3 + 0x18),uVar1,1);
      }
      *(ulong *)(puVar3 + 0x10) = uVar1;
      *(undefined8 *)(puVar3 + uVar9 * 8 + 0x20) = uVar10;
      lVar7 = lVar7 + -1;
      puVar8 = puVar8 + 0xb;
      uVar9 = uVar1;
    } while (lVar7 != 0);
  }
  puVar5 = puVar3;
  puVar6 = PTR___sSiN_100995968;
  __sSa11descriptionSSvg(puVar3,PTR___sSiN_100995968);
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(puVar5,puVar6);
  _swift_bridgeObjectRelease(puVar6);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

