// rea decompile_all
// name: FUN_10063c228
// address: 0x10063c228
// body: available
// range: 0x10063c228-0x10063c293 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10063c228(ulong param_1,ulong param_2,ulong param_3,ulong param_4)

{
  ulong uVar1;
  bool bVar2;
  bool bVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  auVar8._0_8_ = 0;
  auVar8._8_8_ = 0;
  uVar5 = 0;
  uVar6 = 0x8000000000000000;
  lVar7 = 0x80;
  do {
    uVar1 = param_1 << 0x3f;
    bVar2 = (uVar6 & (param_3 ^ 0xffffffffffffffff)) != 0;
    bVar3 = (uVar5 & (param_4 ^ 0xffffffffffffffff)) != 0;
    uVar4 = param_1;
    if (bVar2 || bVar3) {
      uVar4 = 0;
    }
    auVar8._0_8_ = uVar4 ^ auVar8._0_8_;
    uVar4 = param_2;
    if (bVar2 || bVar3) {
      uVar4 = 0;
    }
    auVar8._8_8_ = uVar4 ^ auVar8._8_8_;
    uVar4 = param_1 >> 1;
    param_1 = param_1 >> 1 ^ 0xe100000000000000;
    if ((param_2 & 1) == 0) {
      param_1 = uVar4;
    }
    uVar5 = uVar5 >> 1 | uVar6 << 0x3f;
    uVar6 = uVar6 >> 1;
    lVar7 = lVar7 + -1;
    param_2 = param_2 >> 1 | uVar1;
  } while (lVar7 != 0);
  return auVar8;
}

