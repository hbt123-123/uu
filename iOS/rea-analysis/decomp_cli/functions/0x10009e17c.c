// rea decompile_all
// name: FUN_10009e17c
// address: 0x10009e17c
// body: available
// range: 0x10009e17c-0x10009e22f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10009e17c(undefined8 param_1,undefined8 param_2,uint param_3)

{
  undefined *puVar1;
  undefined *puVar2;
  
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_1000f0418;
  puVar1 = PTR___sSiN_1000f03e8;
  if ((param_3 & 1) == 0) {
    __ss23CustomStringConvertibleP11descriptionSSvgTj();
    __sSS6appendyySSF(0x2e,0xe100000000000000);
    __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar1,puVar2);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar2);
  }
  else {
    __ss23CustomStringConvertibleP11descriptionSSvgTj
              (PTR___sSiN_1000f03e8,PTR___sSis23CustomStringConvertiblesWP_1000f0418);
  }
  return;
}

