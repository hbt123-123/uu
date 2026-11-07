// rea decompile_all
// name: FUN_1003fb758
// address: 0x1003fb758
// body: available
// range: 0x1003fb758-0x1003fb91b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1003fb758(byte param_1)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  
  if (5 < param_1) {
    uVar9 = 0x9be7ae94e9898ce6;
    uVar3 = 0xac000000b385e5b8;
    if (param_1 != 10) {
      uVar9 = 0x1000000000000012;
      uVar3 = 0x80000001008b5f70;
    }
    uVar5 = 0xa9000000000000a1;
    uVar7 = 0xbfe49a80e9435058;
    if (param_1 != 9) {
      uVar5 = uVar3;
      uVar7 = uVar9;
    }
    uVar9 = 0x80000001008b5f90;
    uVar3 = 0x1000000000000012;
    if (param_1 != 7) {
      uVar9 = 0xafb385e5b89be791;
      uVar3 = 0x84e8b594e791bae4;
    }
    uVar4 = 0x80000001008b5fb0;
    uVar8 = 0x1000000000000015;
    if (param_1 != 6) {
      uVar4 = uVar9;
      uVar8 = uVar3;
    }
    if (param_1 < 9) {
      uVar5 = uVar4;
      uVar7 = uVar8;
    }
    auVar11._8_8_ = uVar5;
    auVar11._0_8_ = uVar7;
    return auVar11;
  }
  pcVar6 = s__1008b5ff0;
  uVar9 = 0x1000000000000017;
  if (param_1 != 4) {
    pcVar6 = s__1008b5fd0;
    uVar9 = 0x1000000000000015;
  }
  uVar2 = 0xafb385e5b89be782;
  uVar3 = 0xb1e6b7afe8495041;
  if (param_1 != 3) {
    uVar2 = (ulong)pcVar6 | 0x8000000000000000;
    uVar3 = uVar9;
  }
  uVar9 = 0x9be7b5a1e996a6e9;
  if (param_1 != 1) {
    uVar9 = 0x9be7a78ee6aba2e8;
  }
  uVar1 = 0xa9000000000000bb;
  uVar5 = 0xb1e78688e5a097e6;
  if (param_1 != 0) {
    uVar1 = 0xac000000b385e5b8;
    uVar5 = uVar9;
  }
  if (param_1 < 3) {
    uVar2 = uVar1;
    uVar3 = uVar5;
  }
  auVar10._8_8_ = uVar2;
  auVar10._0_8_ = uVar3;
  return auVar10;
}

