// rea decompile_all
// name: FUN_10021bbe4
// address: 0x10021bbe4
// body: available
// range: 0x10021bbe4-0x10021bd77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10021bbe4(long param_1,ulong param_2)

{
  undefined1 auVar1 [16];
  undefined *puVar2;
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if ((param_2 & 1) != 0) {
    auVar3._8_8_ = 0xe400000000000000;
    auVar3._0_8_ = 0x656e6f6e;
    return auVar3;
  }
  if (param_1 < 4) {
    if (param_1 < 2) {
      if (param_1 == 0) {
        auVar8._8_8_ = 0xec00000064657463;
        auVar8._0_8_ = 0x656e6e6f63736964;
        return auVar8;
      }
      if (param_1 == 1) {
        auVar4._8_8_ = 0xea0000000000676e;
        auVar4._0_8_ = 0x697463656e6e6f63;
        return auVar4;
      }
    }
    else {
      if (param_1 == 2) {
        auVar10._8_8_ = 0xe500000000000000;
        auVar10._0_8_ = 0x726566666f;
        return auVar10;
      }
      if (param_1 == 3) {
        auVar6._8_8_ = 0xe600000000000000;
        auVar6._0_8_ = 0x726577736e61;
        return auVar6;
      }
    }
  }
  else if (param_1 < 6) {
    if (param_1 == 4) {
      auVar9._8_8_ = 0x80000001008a56e0;
      auVar9._0_8_ = 0xd000000000000012;
      return auVar9;
    }
    if (param_1 == 5) {
      auVar5._8_8_ = 0xe900000000000064;
      auVar5._0_8_ = 0x657463656e6e6f63;
      return auVar5;
    }
  }
  else {
    if (param_1 == 6) {
      auVar11._8_8_ = 0xe500000000000000;
      auVar11._0_8_ = 0x726f727265;
      return auVar11;
    }
    if (param_1 == 7) {
      auVar7._8_8_ = 0xe700000000000000;
      auVar7._0_8_ = 0x6e776f6e6b6e75;
      return auVar7;
    }
  }
  puVar2 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  auVar1._8_8_ = 0xe400000000000000;
  auVar1._0_8_ = 0x5f776172;
  return auVar1;
}

