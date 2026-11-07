// rea decompile_all
// name: FUN_10021bd78
// address: 0x10021bd78
// body: available
// range: 0x10021bd78-0x10021be33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10021bd78(long param_1,uint param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined1 auVar3 [16];
  undefined *puVar4;
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  
  if ((param_2 >> 8 & 1) != 0) {
    auVar6._8_8_ = 0xe400000000000000;
    auVar6._0_8_ = 0x656e6f6e;
    return auVar6;
  }
  if (((param_2 & 1) != 0) && (param_1 != 0)) {
    uVar1 = 0x706f746b736564;
    if (param_1 != 1) {
      uVar1 = 0x6e61747369737361;
    }
    uVar2 = 0xe700000000000000;
    if (param_1 != 1) {
      uVar2 = 0xea00000000006563;
    }
    auVar5._8_8_ = uVar2;
    auVar5._0_8_ = uVar1;
    return auVar5;
  }
  puVar4 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar4);
  auVar3._8_8_ = 0xe400000000000000;
  auVar3._0_8_ = 0x5f776172;
  return auVar3;
}

