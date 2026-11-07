// rea decompile_all
// name: FUN_10000a13c
// address: 0x10000a13c
// body: available
// range: 0x10000a13c-0x10000a36b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10000a13c(byte param_1,byte param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  undefined1 *puVar4;
  char *pcVar5;
  char *pcVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 *puVar3;
  
  puVar4 = (undefined1 *)0x6970646968;
  puVar3 = &DAT_d000000000000013;
  if (param_1 < 4) {
    pcVar5 = "hidpi";
    if (param_1 != 2) {
      pcVar5 = "remote_clipboard_v1";
    }
    puVar1 = puVar4;
    if (param_1 != 0) {
      puVar1 = (undefined1 *)0x63735f69746c756d;
    }
    uVar8 = 0xe500000000000000;
    if (param_1 != 0) {
      uVar8 = 0xec0000006e656572;
    }
    uVar7 = (ulong)pcVar5 | 0x8000000000000000;
    if (param_1 < 2) {
      puVar3 = puVar1;
      uVar7 = uVar8;
    }
  }
  else {
    pcVar5 = "remote_clipboard_v5";
    if (param_1 != 6) {
      pcVar5 = "remote_clipboard_v4";
      puVar3 = &DAT_d000000000000018;
    }
    pcVar6 = "remote_clipboard_v21";
    puVar1 = &DAT_d000000000000013;
    if (param_1 == 4) {
      pcVar6 = "remote_clipboard_v2";
      puVar1 = (undefined1 *)0xd000000000000014;
    }
    if (param_1 < 6) {
      pcVar5 = pcVar6;
      puVar3 = puVar1;
    }
    uVar7 = (ulong)pcVar5 | 0x8000000000000000;
  }
  if (param_2 < 4) {
    if (1 < param_2) {
      if (param_2 == 2) {
        pcVar5 = "remote_clipboard_v1";
      }
      else {
        pcVar5 = "remote_clipboard_v2";
      }
      goto LAB_10000a2f8;
    }
    if (param_2 == 0) {
      uVar8 = 0xe500000000000000;
      if (puVar3 != (undefined1 *)0x6970646968) goto LAB_10000a334;
      goto LAB_10000a308;
    }
    puVar4 = (undefined1 *)0x63735f69746c756d;
    uVar8 = 0xec0000006e656572;
    if (puVar3 == (undefined1 *)0x63735f69746c756d) goto LAB_10000a308;
  }
  else {
    if (param_2 < 6) {
      if (param_2 == 4) {
        uVar8 = 0x8000000100876000;
        puVar4 = (undefined1 *)0xd000000000000014;
        if (puVar3 == (undefined1 *)0xd000000000000014) goto LAB_10000a308;
        goto LAB_10000a334;
      }
      pcVar5 = "remote_clipboard_v5";
LAB_10000a2f8:
      uVar8 = (ulong)(pcVar5 + -0x20) | 0x8000000000000000;
      puVar1 = &DAT_d000000000000013;
      puVar4 = &DAT_d000000000000013;
    }
    else {
      if (param_2 == 6) {
        pcVar5 = "remote_clipboard_v4";
        goto LAB_10000a2f8;
      }
      uVar8 = 0x8000000100876060;
      puVar1 = &DAT_d000000000000018;
      puVar4 = &DAT_d000000000000018;
    }
    if (puVar3 == puVar1) {
LAB_10000a308:
      if (uVar7 == uVar8) {
        uVar2 = 1;
        goto LAB_10000a348;
      }
    }
  }
LAB_10000a334:
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (puVar3,uVar7,puVar4,uVar8,0);
  uVar2 = (uint)puVar3;
LAB_10000a348:
  _swift_bridgeObjectRelease(uVar7);
  _swift_bridgeObjectRelease(uVar8);
  return uVar2 & 1;
}

