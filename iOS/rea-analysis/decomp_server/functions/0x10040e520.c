// rea decompile_all
// name: FUN_10040e520
// address: 0x10040e520
// body: available
// range: 0x10040e520-0x10040e73f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10040e520(byte param_1,byte param_2)

{
  char *pcVar1;
  long lVar2;
  uint uVar3;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar4;
  
  uVar7 = 0xeb0000000068636e;
  lVar5 = 0x75616c5f6f747561;
  if (param_1 < 3) {
    uVar6 = 0xec000000656c6261;
    lVar2 = 0x6c6c6f72746e6f63;
    if (param_1 != 1) {
      uVar6 = 0xe800000000000000;
      lVar2 = 0x6465747369737361;
    }
    lVar4 = lVar5;
    uVar8 = uVar7;
    if (param_1 != 0) {
      lVar4 = lVar2;
      uVar8 = uVar6;
    }
  }
  else if (param_1 < 5) {
    lVar4 = -0x2fffffffffffffdd;
    pcVar1 = "nch";
    if (param_1 != 3) {
      lVar4 = -0x2fffffffffffffe9;
      pcVar1 = "le_transfer_enabled";
    }
    uVar8 = (ulong)pcVar1 | 0x8000000000000000;
  }
  else {
    pcVar1 = "privacy_screen_shortcut";
    lVar4 = -0x2fffffffffffffd9;
    if (param_1 != 5) {
      pcVar1 = "fault_receive_directory";
      lVar4 = -0x2fffffffffffffda;
    }
    uVar8 = (ulong)pcVar1 | 0x8000000000000000;
  }
  if (param_2 < 3) {
    if (param_2 == 0) goto joined_r0x00010040e664;
    if (param_2 != 1) {
      uVar7 = 0xe800000000000000;
      lVar5 = 0x6465747369737361;
      if (lVar4 != 0x6465747369737361) goto LAB_10040e708;
      goto LAB_10040e6dc;
    }
    lVar5 = 0x6c6c6f72746e6f63;
    uVar7 = 0xec000000656c6261;
    if (lVar4 == 0x6c6c6f72746e6f63) goto LAB_10040e6dc;
  }
  else {
    if (param_2 < 5) {
      lVar5 = -0x2fffffffffffffdd;
      pcVar1 = "nch";
      if (param_2 != 3) {
        lVar5 = -0x2fffffffffffffe9;
        pcVar1 = "le_transfer_enabled";
      }
      uVar7 = (ulong)pcVar1 | 0x8000000000000000;
    }
    else {
      pcVar1 = "privacy_screen_shortcut";
      lVar5 = -0x2fffffffffffffd9;
      if (param_2 != 5) {
        pcVar1 = "fault_receive_directory";
        lVar5 = -0x2fffffffffffffda;
      }
      uVar7 = (ulong)pcVar1 | 0x8000000000000000;
    }
joined_r0x00010040e664:
    if (lVar4 == lVar5) {
LAB_10040e6dc:
      if (uVar8 == uVar7) {
        uVar3 = 1;
        goto LAB_10040e71c;
      }
    }
  }
LAB_10040e708:
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (lVar4,uVar8,lVar5,uVar7,0);
  uVar3 = (uint)lVar4;
LAB_10040e71c:
  _swift_bridgeObjectRelease(uVar8);
  _swift_bridgeObjectRelease(uVar7);
  return uVar3 & 1;
}

