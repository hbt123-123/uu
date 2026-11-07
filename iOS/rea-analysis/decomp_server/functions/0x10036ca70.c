// rea decompile_all
// name: FUN_10036ca70
// address: 0x10036ca70
// body: available
// range: 0x10036ca70-0x10036cd67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10036ca70(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  long lVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  long lVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  long lVar12;
  undefined *puVar13;
  undefined8 local_70;
  undefined8 uStack_68;
  
  lVar4 = 0;
  __sSS10FoundationE8EncodingVMa();
  lVar8 = (long)&local_70 - (*(long *)(*(long *)(lVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar5 = &DAT_100a888b8;
  FUN_100004bb4(&DAT_100a888b8,&DAT_10081cb00);
  lVar9 = lVar8 - (*(long *)(*(long *)(puVar5 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  __s10Foundation10URLRequestV3urlAA3URLVSgvg(lVar9);
  puVar5 = (undefined *)0x0;
  __s10Foundation3URLVMa();
  lVar12 = *(long *)(puVar5 + -8);
  lVar7 = 1;
  lVar4 = lVar9;
  (**(code **)(lVar12 + 0x30))(lVar9,1,puVar5);
  if ((int)lVar4 == 1) {
    puVar5 = &DAT_100a888b8;
    FUN_100040bb4(lVar9,&DAT_100a888b8,&DAT_10081cb00);
    lVar4 = 0;
    lVar7 = 0;
  }
  else {
    __s10Foundation3URLV14absoluteStringSSvg();
    (**(code **)(lVar12 + 8))();
  }
  __s10Foundation10URLRequestV19allHTTPHeaderFieldsSDyS2SGSgvg();
  if (lVar9 == 0) {
    uVar10 = 0;
    uVar11 = 0xe000000000000000;
  }
  else {
    if (*(long *)(lVar9 + 0x10) == 0) {
      uVar10 = 0;
      uVar11 = 0xe000000000000000;
    }
    else {
      _swift_bridgeObjectRetain(lVar9);
      lVar12 = 0x7a69726f68747541;
      puVar5 = (undefined *)0xed00006e6f697461;
      FUN_1001a2c70();
      if (((ulong)puVar5 & 1) == 0) {
        uVar10 = 0;
        uVar11 = 0xe000000000000000;
      }
      else {
        puVar1 = (undefined8 *)(*(long *)(lVar9 + 0x38) + lVar12 * 0x10);
        uVar10 = *puVar1;
        uVar11 = puVar1[1];
        _swift_bridgeObjectRetain(uVar11);
      }
      _swift_bridgeObjectRelease(lVar9);
    }
    _swift_bridgeObjectRelease(lVar9);
  }
  __s10Foundation10URLRequestV8httpBodyAA4DataVSgvg();
  if ((ulong)puVar5 >> 0x3c < 0xf) {
    __sSS10FoundationE8EncodingV4utf8ACvgZ(lVar8);
    lVar12 = lVar9;
    puVar13 = puVar5;
    __sSS10FoundationE4data8encodingSSSgAA4DataVh_SSAAE8EncodingVtcfC(lVar9,puVar5,lVar8);
    FUN_100006cc8(lVar9,puVar5);
  }
  else {
    lVar12 = 0;
    puVar13 = (undefined *)0x0;
  }
  local_70 = 0;
  uStack_68 = 0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x35);
  __sSS6appendyySSF(&DAT_d000000000000010,0x80000001008acc60);
  lVar9 = 0;
  if (lVar7 != 0) {
    lVar9 = lVar4;
  }
  lVar4 = -0x2000000000000000;
  if (lVar7 != 0) {
    lVar4 = lVar7;
  }
  __sSS6appendyySSF(lVar9,lVar4);
  _swift_bridgeObjectRelease(lVar4);
  uVar6 = 0x654d70747468202c;
  lVar4 = -0x11ffdfc59b90978c;
  __sSS6appendyySSF(0x654d70747468202c);
  __s10Foundation10URLRequestV10httpMethodSSSgvg();
  uVar2 = 0;
  if (lVar4 != 0) {
    uVar2 = uVar6;
  }
  lVar9 = -0x2000000000000000;
  if (lVar4 != 0) {
    lVar9 = lVar4;
  }
  __sSS6appendyySSF(uVar2,lVar9);
  _swift_bridgeObjectRelease(lVar9);
  __sSS6appendyySSF(0x3a6e656b6f54202c,0xe800000000000000);
  __sSS6appendyySSF(uVar10,uVar11);
  _swift_bridgeObjectRelease(uVar11);
  __sSS6appendyySSF(0x3a79646f42202c,0xe700000000000000);
  lVar4 = 0;
  if (puVar13 != (undefined *)0x0) {
    lVar4 = lVar12;
  }
  puVar5 = (undefined *)0xe000000000000000;
  if (puVar13 != (undefined *)0x0) {
    puVar5 = puVar13;
  }
  __sSS6appendyySSF(lVar4,puVar5);
  _swift_bridgeObjectRelease(puVar5);
  auVar3._8_8_ = uStack_68;
  auVar3._0_8_ = local_70;
  return auVar3;
}

