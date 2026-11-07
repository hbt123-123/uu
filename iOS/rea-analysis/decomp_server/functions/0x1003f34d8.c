// rea decompile_all
// name: FUN_1003f34d8
// address: 0x1003f34d8
// body: available
// range: 0x1003f34d8-0x1003f35ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1003f35ec to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003f34d8(undefined8 param_1)

{
  undefined8 uVar1;
  byte bVar2;
  char *pcVar3;
  char *pcVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  byte *unaff_x20;
  
  bVar2 = *unaff_x20;
  if (bVar2 < 3) {
    uVar6 = 0xec000000656c6261;
    uVar1 = 0x6c6c6f72746e6f63;
    if (bVar2 != 1) {
      uVar6 = 0xe800000000000000;
      uVar1 = 0x6465747369737361;
    }
    uVar5 = 0x75616c5f6f747561;
    uVar7 = 0xeb0000000068636e;
    if (bVar2 != 0) {
      uVar5 = uVar1;
      uVar7 = uVar6;
    }
  }
  else {
    pcVar3 = "privacy_screen_shortcut";
    uVar5 = 0xd000000000000027;
    if (bVar2 != 5) {
      pcVar3 = "fault_receive_directory";
      uVar5 = 0xd000000000000026;
    }
    uVar1 = 0xd000000000000023;
    pcVar4 = "nch";
    if (bVar2 != 3) {
      uVar1 = 0xd000000000000017;
      pcVar4 = "le_transfer_enabled";
    }
    if (bVar2 < 5) {
      pcVar3 = pcVar4;
      uVar5 = uVar1;
    }
    uVar7 = (ulong)pcVar3 | 0x8000000000000000;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,uVar5,uVar7);
  _swift_bridgeObjectRelease(uVar7);
  return;
}

