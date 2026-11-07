// rea decompile_all
// name: FUN_1003d3228
// address: 0x1003d3228
// body: available
// range: 0x1003d3228-0x1003d334f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003d3228(byte param_1)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (param_1 < 4) {
    uVar6 = 0xea00000000006469;
    uVar2 = 0x5f7070615f637063;
    if (param_1 != 2) {
      uVar6 = 0xe800000000000000;
      uVar2 = 0x657079745f707061;
    }
    uVar3 = 0x64695f70706164;
    if (param_1 != 0) {
      uVar3 = 0x64695f707061;
    }
    uVar4 = 0xe700000000000000;
    if (param_1 != 0) {
      uVar4 = 0xe600000000000000;
    }
    if (param_1 < 2) {
      uVar6 = uVar4;
      uVar2 = uVar3;
    }
    auVar8._8_8_ = uVar6;
    auVar8._0_8_ = uVar2;
    return auVar8;
  }
  uVar6 = 0x80000001008af910;
  puVar1 = &DAT_d000000000000010;
  if (param_1 != 7) {
    uVar6 = 0xea00000000007375;
    puVar1 = (undefined1 *)0x746174735f707061;
  }
  uVar2 = 0xeb00000000687461;
  puVar5 = (undefined1 *)0x705f746567726174;
  if (param_1 != 6) {
    uVar2 = uVar6;
    puVar5 = puVar1;
  }
  puVar1 = (undefined1 *)0x656d616e;
  if (param_1 != 4) {
    puVar1 = (undefined1 *)0x6c72755f6e6f6369;
  }
  uVar6 = 0xe400000000000000;
  if (param_1 != 4) {
    uVar6 = 0xe800000000000000;
  }
  if (param_1 < 6) {
    uVar2 = uVar6;
    puVar5 = puVar1;
  }
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = puVar5;
  return auVar7;
}

