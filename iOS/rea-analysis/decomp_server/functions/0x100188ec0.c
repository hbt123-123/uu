// rea decompile_all
// name: FUN_100188ec0
// address: 0x100188ec0
// body: available
// range: 0x100188ec0-0x10018900f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100188ec0(undefined8 *param_1,undefined8 param_2,long param_3,ulong param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined8 uVar3;
  undefined *puVar4;
  uint uVar5;
  
  __ss11_StringGutsV4growyySiF(0x3d);
  uVar3 = 0x80000001008986e0;
  __sSS6appendyySSF(0x1000000000000031,0x80000001008986e0);
  __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(param_2);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(uVar3);
  __sSS6appendyySSF(0x3aa6bae5bf95e92d,0xa800000000000000);
  if (param_4 >> 0x3c < 0xf) {
    uVar1 = (uint)(param_4 >> 0x20);
    uVar5 = uVar1 >> 0x1e;
    if (uVar1 >> 0x1e < 2) {
      if ((uVar5 != 0) && (SBORROW4((int)((ulong)param_3 >> 0x20),(int)param_3))) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x100189010);
        (*pcVar2)();
      }
    }
    else if ((uVar5 == 2) && (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10)))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100188ff8);
      (*pcVar2)();
    }
  }
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

