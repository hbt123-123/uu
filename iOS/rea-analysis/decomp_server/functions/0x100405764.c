// rea decompile_all
// name: FUN_100405764
// address: 0x100405764
// body: available
// range: 0x100405764-0x100405c93 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16]
FUN_100405764(double param_1,double param_2,undefined8 param_3,undefined8 param_4,undefined8 param_5
             ,ID param_6)

{
  code *pcVar1;
  ID IVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  char *pcVar8;
  undefined *puVar9;
  undefined *puVar10;
  double dVar11;
  
  IVar2 = _objc_msgSend(param_6,"frame");
  FUN_1003d541c();
  _CGDisplayCopyDisplayMode();
  dVar11 = param_1;
  _CGRectGetWidth(param_1,param_2,param_3,param_4);
  if (0x7fefffffffffffff < (ulong)ABS(dVar11)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100405c68);
    (*pcVar1)();
  }
  if (dVar11 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100405c6c);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100405c70);
    (*pcVar1)();
  }
  puVar3 = PTR___sSiN_100995968;
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj();
  __sSS6appendyySSF(0x78,0xe100000000000000);
  dVar11 = param_1;
  _CGRectGetHeight(param_1,param_2,param_3,param_4);
  if (0x7fefffffffffffff < (ulong)ABS(dVar11)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100405c74);
    (*pcVar1)();
  }
  if (dVar11 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100405c78);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= dVar11) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100405c7c);
    (*pcVar1)();
  }
  puVar10 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar10);
  if (IVar2 == 0) {
    puVar9 = (undefined *)0xe700000000000000;
    puVar10 = (undefined *)0x6e776f6e6b6e75;
  }
  else {
    _CGDisplayModeGetPixelWidth();
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    puVar6 = PTR___sSiN_100995968;
    puVar10 = PTR___sSiN_100995968;
    puVar9 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj();
    __sSS6appendyySSF(0x78,0xe100000000000000);
    _CGDisplayModeGetPixelHeight();
    __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar6,puVar5);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar5);
  }
  __ss11_StringGutsV4growyySiF(0x55);
  __sSS6appendyySSF(0x3d7865646e697b,0xe700000000000000);
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x616c70736964202c,0xec0000003d644979);
  FUN_1003d541c();
  puVar6 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x3d656d617266202c,0xe800000000000000);
  if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100405c80);
    (*pcVar1)();
  }
  if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100405c84);
    (*pcVar1)();
  }
  if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100405c88);
    (*pcVar1)();
  }
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x2c,0xe100000000000000);
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar6 = PTR___sSiN_100995968;
  if (0x7fefffffffffffff < (ulong)ABS(param_2)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100405c8c);
    (*pcVar1)();
  }
  if (-9.223372036854778e+18 < param_2) {
    if (param_2 < 9.223372036854776e+18) {
      puVar7 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
      __ss23CustomStringConvertibleP11descriptionSSvgTj
                (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar7);
      __sSS6appendyySSF(0x2c,0xe100000000000000);
      __sSS6appendyySSF(puVar3,puVar4);
      _swift_bridgeObjectRelease(puVar4);
      __sSS6appendyySSF(0x6e696b636162202c,0xef3d656c61635367);
      pcVar8 = "backingScaleFactor";
      _objc_msgSend(param_6,"backingScaleFactor");
      __sSd11descriptionSSvg();
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(pcVar8);
      __sSS6appendyySSF(0xd000000000000012,0x80000001008b61a0);
      __sSS6appendyySSF(puVar10,puVar9);
      _swift_bridgeObjectRelease(puVar9);
      __sSS6appendyySSF(0x3d737066202c,0xe600000000000000);
      FUN_100405674();
      __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar6,puVar5);
      __sSS6appendyySSF();
      _swift_bridgeObjectRelease(puVar5);
      __sSS6appendyySSF(0x7d,0xe100000000000000);
      return ZEXT816(0xe000000000000000) << 0x40;
    }
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100405c94);
    (*pcVar1)();
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100405c90);
  (*pcVar1)();
}

