// rea decompile_all
// name: FUN_10000ae0c
// address: 0x10000ae0c
// body: available
// range: 0x10000ae0c-0x10000af1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000ae0c(undefined8 *param_1)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  byte bVar4;
  char *pcVar5;
  undefined1 *puVar6;
  char *pcVar7;
  byte *unaff_x20;
  
  bVar4 = *unaff_x20;
  if (3 < bVar4) {
    pcVar5 = "remote_clipboard_v5";
    puVar1 = &DAT_d000000000000013;
    if (bVar4 != 6) {
      pcVar5 = "remote_clipboard_v4";
      puVar1 = &DAT_d000000000000018;
    }
    puVar6 = &DAT_d000000000000013;
    pcVar7 = "remote_clipboard_v21";
    if (bVar4 == 4) {
      puVar6 = (undefined1 *)0xd000000000000014;
      pcVar7 = "remote_clipboard_v2";
    }
    if (bVar4 < 6) {
      pcVar5 = pcVar7;
      puVar1 = puVar6;
    }
    *param_1 = puVar1;
    param_1[1] = (ulong)pcVar5 | 0x8000000000000000;
    return;
  }
  pcVar5 = "hidpi";
  if (bVar4 != 2) {
    pcVar5 = "remote_clipboard_v1";
  }
  puVar1 = (undefined1 *)0x6970646968;
  if (bVar4 != 0) {
    puVar1 = (undefined1 *)0x63735f69746c756d;
  }
  uVar2 = 0xe500000000000000;
  if (bVar4 != 0) {
    uVar2 = 0xec0000006e656572;
  }
  uVar3 = (ulong)pcVar5 | 0x8000000000000000;
  puVar6 = &DAT_d000000000000013;
  if (bVar4 < 2) {
    uVar3 = uVar2;
    puVar6 = puVar1;
  }
  *param_1 = puVar6;
  param_1[1] = uVar3;
  return;
}

