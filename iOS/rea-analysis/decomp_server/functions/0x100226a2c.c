// rea decompile_all
// name: FUN_100226a2c
// address: 0x100226a2c
// body: available
// range: 0x100226a2c-0x100226bb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_100226a2c(double param_1,undefined8 param_2,double param_3,double param_4)

{
  code *pcVar1;
  ID self;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined1 auVar5 [16];
  
  self = NSScreen::mainScreen((ID)&_OBJC_CLASS___NSScreen,"mainScreen");
  if (self == 0) {
    puVar4 = (undefined *)0x0;
    puVar2 = (undefined *)0x0;
  }
  else {
    NSScreen::backingScaleFactor(self,"backingScaleFactor");
    NSScreen::frame(self,"frame");
    param_3 = param_1 * param_3;
    if (0x7fefffffffffffff < (ulong)ABS(param_3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100226ba0);
      (*pcVar1)();
    }
    if (param_3 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100226ba4);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100226ba8);
      (*pcVar1)();
    }
    puVar2 = PTR___sSiN_100995968;
    puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj();
    __sSS6appendyySSF(0x78,0xe100000000000000);
    param_1 = param_1 * param_4;
    if (0x7fefffffffffffff < (ulong)ABS(param_1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100226bac);
      (*pcVar1)();
    }
    if (param_1 <= -9.223372036854778e+18) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100226bb0);
      (*pcVar1)();
    }
    if (9.223372036854776e+18 <= param_1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100226bb4);
      (*pcVar1)();
    }
    puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar3);
  }
  auVar5._8_8_ = puVar4;
  auVar5._0_8_ = puVar2;
  return auVar5;
}

