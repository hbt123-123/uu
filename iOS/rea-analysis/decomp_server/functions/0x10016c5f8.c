// rea decompile_all
// name: FUN_10016c5f8
// address: 0x10016c5f8
// body: available
// range: 0x10016c5f8-0x10016c75f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10016c5f8(byte param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  char *pcVar5;
  undefined1 *puVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (4 < param_1) {
    pcVar4 = "ileContentsForFileFastVersion()";
    puVar1 = (undefined1 *)0xd00000000000001b;
    if (param_1 != 8) {
      pcVar4 = "cancelAllFileOperations()";
      puVar1 = &DAT_d000000000000013;
    }
    pcVar5 = "ftTime";
    puVar6 = (undefined1 *)0xd000000000000012;
    if (param_1 != 7) {
      pcVar5 = pcVar4;
      puVar6 = puVar1;
    }
    uVar2 = 0x80000001008959a0;
    puVar1 = (undefined1 *)0xd000000000000014;
    if (param_1 != 5) {
      uVar2 = 0xed00006b6e756843;
      puVar1 = (undefined1 *)0x656c694664616572;
    }
    uVar3 = (ulong)pcVar5 | 0x8000000000000000;
    if (param_1 < 7) {
      uVar3 = uVar2;
      puVar6 = puVar1;
    }
    auVar8._8_8_ = uVar3;
    auVar8._0_8_ = puVar6;
    return auVar8;
  }
  pcVar4 = "checkIsMatchCount(dataBlock:)";
  puVar1 = &DAT_d000000000000010;
  if (param_1 != 3) {
    pcVar4 = s___platform__10088ed60 + 0x20;
    puVar1 = (undefined1 *)0xd000000000000015;
  }
  uVar2 = 0xea00000000006174;
  puVar6 = (undefined1 *)0x6144656c676e6973;
  if (param_1 != 2) {
    uVar2 = (ulong)pcVar4 | 0x8000000000000000;
    puVar6 = puVar1;
  }
  puVar1 = (undefined1 *)0x6b734161746164;
  if (param_1 != 0) {
    puVar1 = (undefined1 *)0x656c7069746c756d;
  }
  uVar3 = 0xe700000000000000;
  if (param_1 != 0) {
    uVar3 = 0xec00000061746144;
  }
  if (param_1 < 2) {
    uVar2 = uVar3;
    puVar6 = puVar1;
  }
  auVar7._8_8_ = uVar2;
  auVar7._0_8_ = puVar6;
  return auVar7;
}

