// rea decompile_all
// name: FUN_100138530
// address: 0x100138530
// body: available
// range: 0x100138530-0x1001386af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100138530(undefined8 *param_1,undefined8 *param_2)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  undefined *puVar4;
  uint uVar5;
  
  __ss11_StringGutsV4growyySiF(0x55);
  __sSS6appendyySSF(0x1000000000000031,0x80000001008903c0);
  __sSS6appendyySSF(*param_2,param_2[1]);
  __sSS6appendyySSF(0x69849ae7979de52d,0xaa00000000003a64);
  puVar4 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x1000000000000014,0x8000000100890400);
  lVar1 = param_2[3];
  uVar2 = (uint)((ulong)param_2[4] >> 0x20);
  uVar5 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if ((uVar5 != 0) && (SBORROW4((int)((ulong)lVar1 >> 0x20),(int)lVar1))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001386b0);
      (*pcVar3)();
    }
  }
  else if ((uVar5 == 2) && (SBORROW8(*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x10)))) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100138644);
    (*pcVar3)();
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

