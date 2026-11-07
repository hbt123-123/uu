// rea decompile_all
// name: FUN_100007d78
// address: 0x100007d78
// body: available
// range: 0x100007d78-0x100007f57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100007d78(undefined8 *param_1,undefined8 param_2,double param_3,long *param_4)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  undefined8 uVar4;
  undefined *puVar5;
  uint uVar6;
  double dVar7;
  
  __ss11_StringGutsV4growyySiF(0x41);
  uVar4 = 0x8000000100876930;
  __sSS6appendyySSF(0x100000000000002c,0x8000000100876930);
  __sSd11descriptionSSvg(param_2);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar4);
  __sSS6appendyySSF(0x3d74656772617420,0xe800000000000000);
  dVar7 = (double)(long)param_3;
  if (0x7fefffffffffffff < (ulong)ABS(dVar7)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100007f4c);
    (*pcVar3)();
  }
  if (-9.223372036854778e+18 < dVar7) {
    if (9.223372036854776e+18 <= dVar7) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100007f54);
      (*pcVar3)();
    }
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar5);
    __sSS6appendyySSF(0x3d736574796220,0xe700000000000000);
    lVar1 = *param_4;
    uVar2 = (uint)((ulong)param_4[1] >> 0x20);
    uVar6 = uVar2 >> 0x1e;
    if (uVar2 >> 0x1e < 2) {
      if ((uVar6 != 0) && (SBORROW4((int)((ulong)lVar1 >> 0x20),(int)lVar1))) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x100007f58);
        (*pcVar3)();
      }
    }
    else if ((uVar6 == 2) && (SBORROW8(*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x10)))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100007ed4);
      (*pcVar3)();
    }
    puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar5);
    param_1[3] = PTR___sSSN_1009957f8;
    *param_1 = 0;
    param_1[1] = 0xe000000000000000;
    return;
  }
                    /* WARNING: Does not return */
  pcVar3 = (code *)SoftwareBreakpoint(1,0x100007f50);
  (*pcVar3)();
}

