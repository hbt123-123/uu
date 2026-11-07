// rea decompile_all
// name: FUN_1001cae30
// address: 0x1001cae30
// body: available
// range: 0x1001cae30-0x1001cafdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1001cae30(int param_1)

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
  undefined1 auVar12 [16];
  
  if (param_1 < 8) {
    if (param_1 < 3) {
      if (param_1 == 1) {
        auVar7._8_8_ = 0xe600000000000000;
        auVar7._0_8_ = 0x505548474953;
        return auVar7;
      }
      if (param_1 == 2) {
        auVar5._8_8_ = 0xe600000000000000;
        auVar5._0_8_ = 0x544e49474953;
        return auVar5;
      }
    }
    else {
      if (param_1 == 3) {
        auVar9._8_8_ = 0xe700000000000000;
        auVar9._0_8_ = 0x54495551474953;
        return auVar9;
      }
      if (param_1 == 4) {
        auVar11._8_8_ = 0xe600000000000000;
        auVar11._0_8_ = 0x4c4c49474953;
        return auVar11;
      }
      if (param_1 == 6) {
        auVar3._8_8_ = 0xe700000000000000;
        auVar3._0_8_ = 0x54524241474953;
        return auVar3;
      }
    }
  }
  else if (param_1 < 0xb) {
    if (param_1 == 8) {
      auVar8._8_8_ = 0xe600000000000000;
      auVar8._0_8_ = 0x455046474953;
      return auVar8;
    }
    if (param_1 == 9) {
      auVar6._8_8_ = 0xe700000000000000;
      auVar6._0_8_ = 0x4c4c494b474953;
      return auVar6;
    }
  }
  else {
    if (param_1 == 0xb) {
      auVar10._8_8_ = 0xe700000000000000;
      auVar10._0_8_ = 0x56474553474953;
      return auVar10;
    }
    if (param_1 == 0xd) {
      auVar12._8_8_ = 0xe700000000000000;
      auVar12._0_8_ = 0x45504950474953;
      return auVar12;
    }
    if (param_1 == 0xf) {
      auVar4._8_8_ = 0xe700000000000000;
      auVar4._0_8_ = 0x4d524554474953;
      return auVar4;
    }
  }
  puVar2 = PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___ss5Int32VN_100995c78,PTR___ss5Int32Vs23CustomStringConvertiblesWP_100995ca8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar2);
  auVar1._8_8_ = 0xe300000000000000;
  auVar1._0_8_ = 0x474953;
  return auVar1;
}

