// rea decompile_all
// name: FUN_1003f3624
// address: 0x1003f3624
// body: available
// range: 0x1003f3624-0x1003f3723 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003f3624(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  char *pcVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  byte *unaff_x20;
  
  bVar3 = *unaff_x20;
  if (bVar3 < 3) {
    uVar7 = 0xec000000656c6261;
    uVar1 = 0x6c6c6f72746e6f63;
    if (bVar3 != 1) {
      uVar7 = 0xe800000000000000;
      uVar1 = 0x6465747369737361;
    }
    uVar2 = 0xeb0000000068636e;
    uVar6 = 0x75616c5f6f747561;
    if (bVar3 != 0) {
      uVar2 = uVar7;
      uVar6 = uVar1;
    }
    *param_1 = uVar6;
    param_1[1] = uVar2;
    return;
  }
  pcVar4 = "privacy_screen_shortcut";
  uVar7 = 0xd000000000000027;
  if (bVar3 != 5) {
    pcVar4 = "fault_receive_directory";
    uVar7 = 0xd000000000000026;
  }
  uVar1 = 0xd000000000000023;
  pcVar5 = "nch";
  if (bVar3 != 3) {
    uVar1 = 0xd000000000000017;
    pcVar5 = "le_transfer_enabled";
  }
  if (bVar3 < 5) {
    pcVar4 = pcVar5;
    uVar7 = uVar1;
  }
  *param_1 = uVar7;
  param_1[1] = (ulong)pcVar4 | 0x8000000000000000;
  return;
}

