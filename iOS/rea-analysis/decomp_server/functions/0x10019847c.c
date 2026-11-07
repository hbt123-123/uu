// rea decompile_all
// name: FUN_10019847c
// address: 0x10019847c
// body: available
// range: 0x10019847c-0x10019865f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019847c(undefined8 *param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint uVar7;
  undefined *puVar6;
  
  __ss11_StringGutsV4growyySiF(0x59);
  __sSS6appendyySSF(0x1000000000000032,0x8000000100899410);
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar6 = PTR___sSiN_100995968;
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x6382b1e681a6e82d,0xad00003a746e756f);
  FUN_100194728();
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar6,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  uVar7 = 0x80000001;
  lVar3 = 0x1000000000000014;
  __sSS6appendyySSF();
  FUN_10019478c();
  if (uVar7 >> 0x1e < 2) {
    if (uVar7 >> 0x1e == 0) {
      FUN_100006cdc();
    }
    else {
      FUN_100006cdc();
      if (SBORROW4((int)((ulong)lVar3 >> 0x20),(int)lVar3)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100198660);
        (*pcVar2)();
      }
    }
  }
  else if (uVar7 >> 0x1e == 2) {
    lVar1 = *(long *)(lVar3 + 0x10);
    lVar3 = *(long *)(lVar3 + 0x18);
    FUN_100006cdc();
    if (SBORROW8(lVar3,lVar1)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001985dc);
      (*pcVar2)();
    }
  }
  else {
    FUN_100006cdc();
  }
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

