// rea decompile_all
// name: FUN_1005226b0
// address: 0x1005226b0
// body: available
// range: 0x1005226b0-0x100522c77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1005226b0(long param_1,ulong param_2)

{
  uint uVar1;
  undefined1 auVar2 [16];
  code *pcVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  uint uVar9;
  undefined *puVar10;
  undefined *puVar11;
  uint uVar12;
  ulong uVar13;
  
  uVar9 = (uint)param_2;
  uVar12 = (uint)((param_2 >> 9 & 0x7fffff) * 0x44b83 >> 0x27);
  if ((param_2 & 0x80000000) != 0) {
    uVar12 = ~(uint)((ulong)(~uVar9 >> 9) * 0x44b83 >> 0x27);
  }
  lVar5 = param_1 + (int)uVar12;
  if (SCARRY8(param_1,(long)(int)uVar12)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100522c48);
    (*pcVar3)();
  }
  uVar1 = (int)uVar9 % 1000000000;
  uVar12 = uVar1 + 1000000000;
  if (-1 < (int)uVar1) {
    uVar12 = uVar1;
  }
  uVar13 = (ulong)uVar12;
  if (lVar5 - 0x3afff44180U < 0xffffffb68879c780) {
    uVar13 = 0;
  }
  else {
    lVar4 = lVar5;
    FUN_100562d2c();
    uVar12 = uVar9;
    FUN_100562de4();
    if ((int)lVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100522c4c);
      (*pcVar3)();
    }
    puVar6 = PTR___ss5Int32VN_100995c78;
    puVar10 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
    puVar7 = puVar6;
    __sSS5countSivg();
    puVar11 = puVar10;
    puVar8 = puVar6;
    if ((long)puVar7 < 4) {
      puVar7 = puVar6;
      __sSS5countSivg(puVar6,puVar10);
      if (SBORROW8(4,(long)puVar7)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100522c64);
        (*pcVar3)();
      }
      puVar8 = (undefined *)0x30;
      puVar11 = (undefined *)0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x30,0xe100000000000000,4 - (long)puVar7);
      _swift_bridgeObjectRetain(puVar11);
      __sSS6appendyySSF(puVar6,puVar10);
      _swift_bridgeObjectRelease(puVar10);
      _swift_bridgeObjectRelease(puVar11);
    }
    __sSS6appendyySSF(puVar8,puVar11);
    _swift_bridgeObjectRelease(puVar11);
    __sSS6appendyySSF(0x2d,0xe100000000000000);
    if (lVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100522c50);
      (*pcVar3)();
    }
    puVar6 = PTR___ss5Int32VN_100995c78;
    puVar10 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
    puVar7 = puVar6;
    __sSS5countSivg();
    puVar11 = puVar10;
    puVar8 = puVar6;
    if ((long)puVar7 < 2) {
      puVar7 = puVar6;
      __sSS5countSivg(puVar6,puVar10);
      if (SBORROW8(2,(long)puVar7)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100522c68);
        (*pcVar3)();
      }
      puVar8 = (undefined *)0x30;
      puVar11 = (undefined *)0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x30,0xe100000000000000,2 - (long)puVar7);
      _swift_bridgeObjectRetain(puVar11);
      __sSS6appendyySSF(puVar6,puVar10);
      _swift_bridgeObjectRelease(puVar10);
      _swift_bridgeObjectRelease(puVar11);
    }
    __sSS6appendyySSF(puVar8,puVar11);
    _swift_bridgeObjectRelease(puVar11);
    __sSS6appendyySSF(0x2d,0xe100000000000000);
    if ((int)uVar12 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100522c54);
      (*pcVar3)();
    }
    puVar6 = PTR___ss5Int32VN_100995c78;
    puVar10 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
    puVar7 = puVar6;
    __sSS5countSivg();
    puVar11 = puVar10;
    puVar8 = puVar6;
    if ((long)puVar7 < 2) {
      puVar7 = puVar6;
      __sSS5countSivg(puVar6,puVar10);
      if (SBORROW8(2,(long)puVar7)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100522c6c);
        (*pcVar3)();
      }
      puVar8 = (undefined *)0x30;
      puVar11 = (undefined *)0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x30,0xe100000000000000,2 - (long)puVar7);
      _swift_bridgeObjectRetain(puVar11);
      __sSS6appendyySSF(puVar6,puVar10);
      _swift_bridgeObjectRelease(puVar10);
      _swift_bridgeObjectRelease(puVar11);
    }
    __sSS6appendyySSF(puVar8,puVar11);
    _swift_bridgeObjectRelease(puVar11);
    if ((int)lVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100522c58);
      (*pcVar3)();
    }
    puVar6 = PTR___ss5Int32VN_100995c78;
    puVar10 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
    puVar7 = puVar6;
    __sSS5countSivg();
    puVar11 = puVar10;
    puVar8 = puVar6;
    if ((long)puVar7 < 2) {
      puVar7 = puVar6;
      __sSS5countSivg(puVar6,puVar10);
      if (SBORROW8(2,(long)puVar7)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100522c70);
        (*pcVar3)();
      }
      puVar8 = (undefined *)0x30;
      puVar11 = (undefined *)0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x30,0xe100000000000000,2 - (long)puVar7);
      _swift_bridgeObjectRetain(puVar11);
      __sSS6appendyySSF(puVar6,puVar10);
      _swift_bridgeObjectRelease(puVar10);
      _swift_bridgeObjectRelease(puVar11);
    }
    __sSS6appendyySSF(puVar8,puVar11);
    _swift_bridgeObjectRelease(puVar11);
    __sSS6appendyySSF(0x3a,0xe100000000000000);
    if (lVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100522c5c);
      (*pcVar3)();
    }
    puVar6 = PTR___ss5Int32VN_100995c78;
    puVar10 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
    puVar7 = puVar6;
    __sSS5countSivg();
    puVar11 = puVar10;
    puVar8 = puVar6;
    if ((long)puVar7 < 2) {
      puVar7 = puVar6;
      __sSS5countSivg(puVar6,puVar10);
      if (SBORROW8(2,(long)puVar7)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100522c74);
        (*pcVar3)();
      }
      puVar8 = (undefined *)0x30;
      puVar11 = (undefined *)0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x30,0xe100000000000000,2 - (long)puVar7);
      _swift_bridgeObjectRetain(puVar11);
      __sSS6appendyySSF(puVar6,puVar10);
      _swift_bridgeObjectRelease(puVar10);
      _swift_bridgeObjectRelease(puVar11);
    }
    __sSS6appendyySSF(puVar8,puVar11);
    _swift_bridgeObjectRelease(puVar11);
    __sSS6appendyySSF(0x3a,0xe100000000000000);
    if ((int)uVar9 < 0) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100522c60);
      (*pcVar3)();
    }
    puVar6 = PTR___ss5Int32VN_100995c78;
    puVar10 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
    puVar7 = puVar6;
    __sSS5countSivg();
    puVar11 = puVar10;
    puVar8 = puVar6;
    if ((long)puVar7 < 2) {
      puVar7 = puVar6;
      __sSS5countSivg(puVar6,puVar10);
      if (SBORROW8(2,(long)puVar7)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100522c78);
        (*pcVar3)();
      }
      puVar8 = (undefined *)0x30;
      puVar11 = (undefined *)0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x30,0xe100000000000000,2 - (long)puVar7);
      _swift_bridgeObjectRetain(puVar11);
      __sSS6appendyySSF(puVar6,puVar10);
      _swift_bridgeObjectRelease(puVar10);
      _swift_bridgeObjectRelease(puVar11);
    }
    puVar6 = puVar11;
    __sSS6appendyySSF(puVar8,puVar11);
    _swift_bridgeObjectRelease(puVar11);
    FUN_100562acc(uVar13);
    __sSS6appendyySSF(0x54,0xe100000000000000);
    __sSS6appendyySSF(0,0xe000000000000000);
    _swift_bridgeObjectRelease(0xe000000000000000);
    __sSS6appendyySSF(uVar13,puVar6);
    _swift_bridgeObjectRelease(puVar6);
    __sSS6appendyySSF(0x5a,0xe100000000000000);
    uVar13 = 0xe000000000000000;
  }
  auVar2._8_8_ = 0;
  auVar2._0_8_ = uVar13;
  return auVar2 << 0x40;
}

