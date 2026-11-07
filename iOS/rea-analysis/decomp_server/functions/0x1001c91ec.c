// rea decompile_all
// name: FUN_1001c91ec
// address: 0x1001c91ec
// body: available
// range: 0x1001c91ec-0x1001c935f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001c91ec(undefined8 *param_1,undefined8 param_2,long param_3,undefined8 param_4)

{
  uint uVar1;
  code *pcVar2;
  undefined *puVar3;
  uint uVar4;
  
  __ss11_StringGutsV4growyySiF(0x46);
  __sSS6appendyySSF(0x1000000000000031,0x800000010089d390);
  puVar3 = PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32Vs23CustomStringConvertiblesWP_100995df0);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0xb0e5a7a4e58cbcef,0xaa00000000003d8f);
  uVar1 = (uint)((ulong)param_4 >> 0x20);
  uVar4 = uVar1 >> 0x1e;
  if (uVar1 >> 0x1e < 2) {
    if ((uVar4 != 0) && (SBORROW4((int)((ulong)param_3 >> 0x20),(int)param_3))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1001c9360);
      (*pcVar2)();
    }
  }
  else if ((uVar4 == 2) && (SBORROW8(*(long *)(param_3 + 0x18),*(long *)(param_3 + 0x10)))) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001c92d4);
    (*pcVar2)();
  }
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x828ae897ade520,0xa700000000000000);
  param_1[3] = PTR___sSSN_1009957f8;
  *param_1 = 0;
  param_1[1] = 0xe000000000000000;
  return;
}

