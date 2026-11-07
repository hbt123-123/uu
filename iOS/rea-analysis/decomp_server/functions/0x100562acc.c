// rea decompile_all
// name: FUN_100562acc
// address: 0x100562acc
// body: available
// range: 0x100562acc-0x100562d2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100562acc(int param_1)

{
  code *pcVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined1 auVar10 [16];
  
  if (param_1 == 0) {
    uVar2 = 0;
    uVar5 = 0xe000000000000000;
    goto LAB_100562cfc;
  }
  puVar4 = PTR___ss5Int32VN_100995c78;
  puVar6 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  if ((param_1 * 0x68c26139 + 0x218c0U >> 6 | param_1 * -0x1c000000) < 0x10c7) {
    if (param_1 < 0) {
      if (SBORROW4(0,param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100562d24);
        (*pcVar1)();
      }
      if (-param_1 < -999999) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100562d18);
        (*pcVar1)();
      }
    }
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
    puVar3 = puVar4;
    __sSS5countSivg();
    if ((long)puVar3 < 3) {
      puVar3 = puVar4;
      __sSS5countSivg(puVar4,puVar6);
      lVar7 = 3 - (long)puVar3;
      puVar8 = puVar6;
      puVar9 = puVar4;
      if (SBORROW8(3,(long)puVar3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100562c28);
        (*pcVar1)();
      }
      goto LAB_100562ca0;
    }
  }
  else if ((param_1 * 0x26e978d5 + 0x10624d8U >> 3 | param_1 * -0x60000000) < 0x418937) {
    if (param_1 < 0) {
      if (SBORROW4(0,param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100562d2c);
        (*pcVar1)();
      }
      if (-param_1 < -999) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100562d1c);
        (*pcVar1)();
      }
    }
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
    puVar3 = puVar4;
    __sSS5countSivg();
    if ((long)puVar3 < 6) {
      puVar3 = puVar4;
      __sSS5countSivg(puVar4,puVar6);
      lVar7 = 6 - (long)puVar3;
      puVar8 = puVar6;
      puVar9 = puVar4;
      if (SBORROW8(6,(long)puVar3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100562d28);
        (*pcVar1)();
      }
      goto LAB_100562ca0;
    }
  }
  else {
    if (param_1 < 0) {
      if (SBORROW4(0,param_1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100562d20);
        (*pcVar1)();
      }
      if (-param_1 < 0) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100562d14);
        (*pcVar1)();
      }
    }
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
    puVar3 = puVar4;
    __sSS5countSivg();
    if ((long)puVar3 < 9) {
      puVar3 = puVar4;
      __sSS5countSivg(puVar4,puVar6);
      lVar7 = 9 - (long)puVar3;
      puVar8 = puVar6;
      puVar9 = puVar4;
      if (SBORROW8(9,(long)puVar3)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100562b98);
        (*pcVar1)();
      }
LAB_100562ca0:
      puVar4 = (undefined *)0x30;
      puVar6 = (undefined *)0xe100000000000000;
      __sSS9repeating5countS2S_SitcfC(0x30,0xe100000000000000,lVar7);
      _swift_bridgeObjectRetain(puVar6);
      __sSS6appendyySSF(puVar9,puVar8);
      _swift_bridgeObjectRelease(puVar8);
      _swift_bridgeObjectRelease(puVar6);
    }
  }
  __sSS6appendyySSF(puVar4,puVar6);
  _swift_bridgeObjectRelease(puVar6);
  uVar2 = 0x2e;
  uVar5 = 0xe100000000000000;
LAB_100562cfc:
  auVar10._8_8_ = uVar5;
  auVar10._0_8_ = uVar2;
  return auVar10;
}

