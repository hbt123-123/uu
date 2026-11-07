// rea decompile_all
// name: FUN_10013ee10
// address: 0x10013ee10
// body: available
// range: 0x10013ee10-0x10013efb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10013ee10(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  uint uVar4;
  
  __ss11_StringGutsV4growyySiF(0x3f);
  __sSS6appendyySSF(0x100000000000002b,0x8000000100891080);
  puVar3 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x3a617461642d,0xe600000000000000);
  uVar1 = (uint)((ulong)param_4 >> 0x20);
  uVar4 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if ((uVar4 != 0) && (SBORROW4((int)((ulong)param_3 >> 0x20),(int)param_3))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10013efb8);
      (*pcVar2)();
    }
  }
  else if ((uVar4 == 2) && (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10)))) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10013eefc);
    (*pcVar2)();
  }
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x3a74657366666f2d,0xe800000000000000);
  puVar3 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

