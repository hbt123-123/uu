// rea decompile_all
// name: FUN_10019fc84
// address: 0x10019fc84
// body: available
// range: 0x10019fc84-0x10019fd57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10019fc84(char *param_1,char *param_2)

{
  char *pcVar1;
  char *pcVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  ulong uVar5;
  ulong uVar6;
  uint uVar7;
  
  pcVar2 = "remote_display_info";
  puVar3 = (undefined1 *)0xd000000000000012;
  if (*param_1 != '\x01') {
    pcVar2 = "local_display_info";
    puVar3 = &DAT_d000000000000018;
  }
  pcVar1 = "width";
  puVar4 = &DAT_d000000000000013;
  if (*param_1 != '\0') {
    pcVar1 = pcVar2;
    puVar4 = puVar3;
  }
  uVar5 = (ulong)pcVar1 | 0x8000000000000000;
  pcVar2 = "remote_display_info";
  puVar3 = (undefined1 *)0xd000000000000012;
  if (*param_2 != '\x01') {
    pcVar2 = "local_display_info";
    puVar3 = &DAT_d000000000000018;
  }
  if (*param_2 == '\0') {
    puVar3 = &DAT_d000000000000013;
    pcVar2 = "width";
  }
  uVar6 = (ulong)pcVar2 | 0x8000000000000000;
  if ((puVar4 == puVar3) && (uVar5 == uVar6)) {
    uVar7 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (puVar4,uVar5,puVar3,uVar6,0);
    uVar7 = (uint)puVar4;
  }
  _swift_bridgeObjectRelease(uVar5);
  _swift_bridgeObjectRelease(uVar6);
  return uVar7 & 1;
}

