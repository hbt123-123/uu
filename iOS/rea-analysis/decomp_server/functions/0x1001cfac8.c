// rea decompile_all
// name: FUN_1001cfac8
// address: 0x1001cfac8
// body: available
// range: 0x1001cfac8-0x1001cfcd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001cfac8(undefined8 *param_1)

{
  long lVar1;
  uint uVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  long in_x3;
  uint uVar7;
  
  __ss11_StringGutsV4growyySiF(0x4d);
  __sSS6appendyySSF(0x1000000000000028,0x800000010089e2a0);
  puVar5 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  puVar6 = PTR___ss6UInt64VN_100995e10;
  puVar4 = PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss6UInt64VN_100995e10,PTR___ss6UInt64Vs23CustomStringConvertiblesWP_100995e40);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  __sSS6appendyySSF(0x496d61657274732d,0xea00000000003a64);
  __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar6,puVar5);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  __sSS6appendyySSF(0x676e69646e65702d,0xe90000000000003a);
  puVar6 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar6);
  __sSS6appendyySSF(0x6e696d6f636e692d,0xea00000000003a67);
  lVar1 = *(long *)(in_x3 + 0x28);
  uVar2 = (uint)((ulong)*(undefined8 *)(in_x3 + 0x30) >> 0x20);
  uVar7 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if ((uVar7 != 0) && (SBORROW4((int)((ulong)lVar1 >> 0x20),(int)lVar1))) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1001cfcd8);
      (*pcVar3)();
    }
  }
  else if ((uVar7 == 2) && (SBORROW8(*(long *)(lVar1 + 0x18),*(long *)(lVar1 + 0x10)))) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1001cfc64);
    (*pcVar3)();
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

