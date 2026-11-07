// rea decompile_all
// name: FUN_10066fae8
// address: 0x10066fae8
// body: available
// range: 0x10066fae8-0x10066fbd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10066fae8(void)

{
  char *pcVar1;
  undefined1 auVar2 [16];
  undefined *puVar3;
  long unaff_x20;
  undefined8 local_40;
  
  if (*(long *)(unaff_x20 + 0x68) == 0) {
    __ss11_StringGutsV4growyySiF(0x1d);
    _swift_bridgeObjectRelease(0xe000000000000000);
    pcVar1 = "CryptoSwift.RSA.PublicKey<";
    local_40 = 0xd00000000000001a;
  }
  else {
    __ss11_StringGutsV4growyySiF(0x1e);
    _swift_bridgeObjectRelease(0xe000000000000000);
    pcVar1 = "CryptoSwift.RSA.PrivateKey<";
    local_40 = 0xd00000000000001b;
  }
  puVar3 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar3);
  __sSS6appendyySSF(0x3e,0xe100000000000000);
  auVar2._8_8_ = (ulong)(pcVar1 + -0x20) | 0x8000000000000000;
  auVar2._0_8_ = local_40;
  return auVar2;
}

