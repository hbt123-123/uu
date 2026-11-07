// rea decompile_all
// name: FUN_10000a7dc
// address: 0x10000a7dc
// body: available
// range: 0x10000a7dc-0x10000a8e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10000a7dc(byte param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  char *pcVar4;
  undefined1 *puVar5;
  char *pcVar6;
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  
  if (3 < param_1) {
    pcVar4 = "remote_clipboard_v5";
    puVar1 = &DAT_d000000000000013;
    if (param_1 != 6) {
      pcVar4 = "remote_clipboard_v4";
      puVar1 = &DAT_d000000000000018;
    }
    puVar5 = &DAT_d000000000000013;
    pcVar6 = "remote_clipboard_v21";
    if (param_1 == 4) {
      puVar5 = (undefined1 *)0xd000000000000014;
      pcVar6 = "remote_clipboard_v2";
    }
    if (param_1 < 6) {
      pcVar4 = pcVar6;
      puVar1 = puVar5;
    }
    auVar8._8_8_ = (ulong)pcVar4 | 0x8000000000000000;
    auVar8._0_8_ = puVar1;
    return auVar8;
  }
  pcVar4 = "hidpi";
  if (param_1 != 2) {
    pcVar4 = "remote_clipboard_v1";
  }
  puVar1 = (undefined1 *)0x6970646968;
  if (param_1 != 0) {
    puVar1 = (undefined1 *)0x63735f69746c756d;
  }
  uVar2 = 0xe500000000000000;
  if (param_1 != 0) {
    uVar2 = 0xec0000006e656572;
  }
  uVar3 = (ulong)pcVar4 | 0x8000000000000000;
  puVar5 = &DAT_d000000000000013;
  if (param_1 < 2) {
    uVar3 = uVar2;
    puVar5 = puVar1;
  }
  auVar7._8_8_ = uVar3;
  auVar7._0_8_ = puVar5;
  return auVar7;
}

