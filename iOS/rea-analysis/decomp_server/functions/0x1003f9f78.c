// rea decompile_all
// name: FUN_1003f9f78
// address: 0x1003f9f78
// body: available
// range: 0x1003f9f78-0x1003fa0b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003f9f78(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  char *pcVar2;
  char *pcVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  if (param_2 < 3) {
    uVar5 = 0xec000000656c6261;
    uVar1 = 0x6c6c6f72746e6f63;
    if (param_2 != 1) {
      uVar5 = 0xe800000000000000;
      uVar1 = 0x6465747369737361;
    }
    uVar4 = 0x75616c5f6f747561;
    uVar6 = 0xeb0000000068636e;
    if (param_2 != 0) {
      uVar4 = uVar1;
      uVar6 = uVar5;
    }
  }
  else {
    pcVar2 = "privacy_screen_shortcut";
    uVar4 = 0xd000000000000027;
    if (param_2 != 5) {
      pcVar2 = "fault_receive_directory";
      uVar4 = 0xd000000000000026;
    }
    uVar1 = 0xd000000000000023;
    pcVar3 = "nch";
    if (param_2 != 3) {
      uVar1 = 0xd000000000000017;
      pcVar3 = "le_transfer_enabled";
    }
    if (param_2 < 5) {
      pcVar2 = pcVar3;
      uVar4 = uVar1;
    }
    uVar6 = (ulong)pcVar2 | 0x8000000000000000;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar4,uVar6);
  _swift_bridgeObjectRelease(uVar6);
  __ss6HasherV9_finalizeSiyF();
  return;
}

