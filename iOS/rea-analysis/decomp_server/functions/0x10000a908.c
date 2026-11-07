// rea decompile_all
// name: FUN_10000a908
// address: 0x10000a908
// body: available
// range: 0x10000a908-0x10000aa33 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10000aa30 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10000a908(undefined8 param_1,byte param_2)

{
  ulong uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  char *pcVar5;
  ulong uVar6;
  
  if (param_2 < 4) {
    pcVar2 = "hidpi";
    if (param_2 != 2) {
      pcVar2 = "remote_clipboard_v1";
    }
    puVar4 = (undefined1 *)0x6970646968;
    if (param_2 != 0) {
      puVar4 = (undefined1 *)0x63735f69746c756d;
    }
    uVar1 = 0xe500000000000000;
    if (param_2 != 0) {
      uVar1 = 0xec0000006e656572;
    }
    puVar3 = &DAT_d000000000000013;
    uVar6 = (ulong)pcVar2 | 0x8000000000000000;
    if (param_2 < 2) {
      puVar3 = puVar4;
      uVar6 = uVar1;
    }
  }
  else {
    pcVar2 = "remote_clipboard_v5";
    puVar3 = &DAT_d000000000000013;
    if (param_2 != 6) {
      pcVar2 = "remote_clipboard_v4";
      puVar3 = &DAT_d000000000000018;
    }
    puVar4 = &DAT_d000000000000013;
    pcVar5 = "remote_clipboard_v21";
    if (param_2 == 4) {
      puVar4 = (undefined1 *)0xd000000000000014;
      pcVar5 = "remote_clipboard_v2";
    }
    if (param_2 < 6) {
      pcVar2 = pcVar5;
      puVar3 = puVar4;
    }
    uVar6 = (ulong)pcVar2 | 0x8000000000000000;
  }
  __sSS4hash4intoys6HasherVz_tF(param_1,puVar3,uVar6);
  _swift_bridgeObjectRelease(uVar6);
  return;
}

