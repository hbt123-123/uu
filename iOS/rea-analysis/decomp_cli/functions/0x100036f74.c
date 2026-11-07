// rea decompile_all
// name: FUN_100036f74
// address: 0x100036f74
// body: available
// range: 0x100036f74-0x100037283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100036f74(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 auVar13 [16];
  
  puVar8 = PTR___swiftEmptyArrayStorage_1000f0740;
  lVar12 = *(long *)(param_1 + 0x30);
  lVar11 = *(long *)(lVar12 + 0x10);
  if (lVar11 == 0) {
    uVar9 = 0x80000001000c5f40;
    uVar6 = 0xd000000000000032;
  }
  else {
    lVar10 = *(long *)(param_1 + 0x38);
    FUN_100021c68(0,lVar11,0);
    puVar5 = (undefined8 *)(lVar12 + 0x38);
    do {
      uVar6 = puVar5[-3];
      uVar2 = puVar5[-2];
      uVar9 = puVar5[-1];
      uVar3 = *puVar5;
      _swift_bridgeObjectRetain(uVar2);
      _swift_bridgeObjectRetain(uVar3);
      __ss11_StringGutsV4growyySiF(0x15);
      _swift_bridgeObjectRelease(0xe000000000000000);
      __sSS6appendyySSF(uVar9,uVar3);
      __sSS6appendyySSF(0x2820,0xe200000000000000);
      __sSS6appendyySSF(uVar6,uVar2);
      __sSS6appendyySSF(0x29,0xe100000000000000);
      _swift_bridgeObjectRelease(uVar3);
      _swift_bridgeObjectRelease(uVar2);
      uVar1 = *(ulong *)(puVar8 + 0x10);
      if (*(ulong *)(puVar8 + 0x18) >> 1 <= uVar1) {
        FUN_100021c68(1 < *(ulong *)(puVar8 + 0x18),uVar1 + 1,1);
      }
      *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0x656e6e6f63736944;
      *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0xee00203a64657463;
      puVar5 = puVar5 + 4;
      lVar11 = lVar11 + -1;
    } while (lVar11 != 0);
    if (1 < lVar10) {
      __ss11_StringGutsV4growyySiF(0x24);
      _swift_bridgeObjectRelease(0xe000000000000000);
      puVar4 = PTR___sSis23CustomStringConvertiblesWP_1000f0418;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_1000f03e8,PTR___sSis23CustomStringConvertiblesWP_1000f0418);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar4);
      __sSS6appendyySSF(0xd000000000000015,0x80000001000c5f20);
      puVar4 = puVar8;
      _swift_isUniquelyReferenced_nonNull_native();
      puVar7 = puVar8;
      if (((ulong)puVar4 & 1) == 0) {
        puVar7 = (undefined *)0x0;
        FUN_100021cb0(0,*(long *)(puVar8 + 0x10) + 1,1,puVar8);
      }
      uVar1 = *(ulong *)(puVar7 + 0x10);
      puVar8 = puVar7;
      if (*(ulong *)(puVar7 + 0x18) >> 1 <= uVar1) {
        puVar8 = (undefined *)(ulong)(1 < *(ulong *)(puVar7 + 0x18));
        FUN_100021cb0(puVar8,uVar1 + 1,1,puVar7);
      }
      *(ulong *)(puVar8 + 0x10) = uVar1 + 1;
      *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x20) = 0x656e6e6f63736944;
      *(undefined8 *)(puVar8 + uVar1 * 0x10 + 0x28) = 0xed00002064657463;
    }
    puVar4 = &DAT_100102c38;
    FUN_10000eb08(&DAT_100102c38,&DAT_1000d1b90);
    puVar5 = &DAT_100102c40;
    FUN_10002cf3c(&DAT_100102c40,&DAT_100102c38,&DAT_1000d1b90,PTR___sSayxGSKsMc_1000f0378);
    uVar6 = 10;
    uVar9 = 0xe100000000000000;
    __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(10,0xe100000000000000,puVar4,puVar5);
    _swift_bridgeObjectRelease(puVar8);
  }
  auVar13._8_8_ = uVar9;
  auVar13._0_8_ = uVar6;
  return auVar13;
}

