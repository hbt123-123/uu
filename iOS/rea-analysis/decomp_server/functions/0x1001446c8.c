// rea decompile_all
// name: FUN_1001446c8
// address: 0x1001446c8
// body: available
// range: 0x1001446c8-0x100144acf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1001446c8(long param_1)

{
  uint uVar1;
  short sVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined8 uVar9;
  ulong uVar10;
  long lVar11;
  ulong uVar12;
  undefined1 auVar13 [16];
  
  lVar11 = param_1 % 0xe10;
  uVar1 = (int)lVar11 + ((uint)((short)lVar11 * -0x7777) >> 0x10);
  sVar2 = (short)lVar11 +
          ((short)((int)(uVar1 * 0x10000) >> 0x15) + (short)((uVar1 & 0x8000) >> 0xf)) * -0x3c;
  if (param_1 < 0xe10) {
    if (0x3b < lVar11) {
      puVar4 = PTR___sSiN_100995968;
      puVar8 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
      __ss23CustomStringConvertibleP11descriptionSSvgTj();
      __sSS6appendyySSF(0x8688e58680e2,0xa600000000000000);
      puVar7 = (undefined *)0x0;
      FUN_100033898(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
      uVar12 = *(ulong *)(puVar7 + 0x10);
      uVar10 = *(ulong *)(puVar7 + 0x18);
      goto LAB_1001448a4;
    }
    if (0 < sVar2) {
      puVar4 = PTR___sSiN_100995968;
      puVar8 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
      __ss23CustomStringConvertibleP11descriptionSSvgTj();
      __sSS6appendyySSF(0x92a7e78680e2,0xa600000000000000);
      puVar7 = (undefined *)0x0;
      FUN_100033898(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
      uVar12 = *(ulong *)(puVar7 + 0x10);
      uVar10 = *(ulong *)(puVar7 + 0x18);
      goto LAB_100144998;
    }
    puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (*(long *)(PTR___swiftEmptyArrayStorage_100995ea0 + 0x10) == 0) {
      _swift_bridgeObjectRelease(PTR___swiftEmptyArrayStorage_100995ea0);
      uVar9 = 0xa700000000000000;
      uVar6 = 0x92a7e78680e230;
      goto LAB_100144a18;
    }
  }
  else {
    puVar4 = PTR___sSiN_100995968;
    puVar8 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj();
    __sSS6appendyySSF(0x97e68fb0e58680e2,0xa9000000000000b6);
    puVar3 = (undefined *)0x0;
    FUN_100033898(0,1,1,PTR___swiftEmptyArrayStorage_100995ea0);
    uVar12 = *(ulong *)(puVar3 + 0x10);
    puVar7 = puVar3;
    if (*(ulong *)(puVar3 + 0x18) >> 1 <= uVar12) {
      puVar7 = (undefined *)(ulong)(1 < *(ulong *)(puVar3 + 0x18));
      FUN_100033898(puVar7,uVar12 + 1,1,puVar3);
    }
    *(ulong *)(puVar7 + 0x10) = uVar12 + 1;
    *(undefined **)(puVar7 + uVar12 * 0x10 + 0x20) = puVar4;
    *(undefined **)(puVar7 + uVar12 * 0x10 + 0x28) = puVar8;
    puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    if (0x3b < lVar11) {
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar4);
      __sSS6appendyySSF(0x8688e58680e2,0xa600000000000000);
      puVar4 = (undefined *)0x8680e2;
      puVar8 = (undefined *)0xa300000000000000;
      uVar12 = *(ulong *)(puVar7 + 0x10);
      uVar10 = *(ulong *)(puVar7 + 0x18);
LAB_1001448a4:
      puVar3 = puVar7;
      if (uVar10 >> 1 <= uVar12) {
        puVar3 = (undefined *)(ulong)(1 < uVar10);
        FUN_100033898(puVar3,uVar12 + 1,1,puVar7);
      }
      *(ulong *)(puVar3 + 0x10) = uVar12 + 1;
      *(undefined **)(puVar3 + uVar12 * 0x10 + 0x20) = puVar4;
      *(undefined **)(puVar3 + uVar12 * 0x10 + 0x28) = puVar8;
      puVar7 = puVar3;
      puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    }
    PTR___sSis23CustomStringConvertiblesWP_1009959b8 = puVar4;
    if (0 < sVar2) {
      __ss23CustomStringConvertibleP11descriptionSSvgTj(PTR___sSiN_100995968,puVar4);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar4);
      __sSS6appendyySSF(0x92a7e78680e2,0xa600000000000000);
      puVar4 = (undefined *)0x8680e2;
      puVar8 = (undefined *)0xa300000000000000;
      uVar12 = *(ulong *)(puVar7 + 0x10);
      uVar10 = *(ulong *)(puVar7 + 0x18);
LAB_100144998:
      puVar3 = puVar7;
      if (uVar10 >> 1 <= uVar12) {
        puVar3 = (undefined *)(ulong)(1 < uVar10);
        FUN_100033898(puVar3,uVar12 + 1,1,puVar7);
      }
      *(ulong *)(puVar3 + 0x10) = uVar12 + 1;
      *(undefined **)(puVar3 + uVar12 * 0x10 + 0x20) = puVar4;
      *(undefined **)(puVar3 + uVar12 * 0x10 + 0x28) = puVar8;
      puVar7 = puVar3;
    }
  }
  puVar4 = &DAT_100a756e8;
  FUN_100004bb4(&DAT_100a756e8,&BYTE_100809720);
  puVar5 = &DAT_100a756f0;
  FUN_10003f840(&DAT_100a756f0,&DAT_100a756e8,&BYTE_100809720,PTR___sSayxGSKsMc_100995888);
  uVar6 = 0;
  uVar9 = 0xe000000000000000;
  __sSKsSS7ElementRtzrlE6joined9separatorS2S_tF(0,0xe000000000000000,puVar4,puVar5);
  _swift_bridgeObjectRelease(puVar7);
LAB_100144a18:
  auVar13._8_8_ = uVar9;
  auVar13._0_8_ = uVar6;
  return auVar13;
}

