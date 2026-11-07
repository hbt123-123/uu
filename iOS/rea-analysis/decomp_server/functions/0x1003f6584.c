// rea decompile_all
// name: FUN_1003f6584
// address: 0x1003f6584
// body: available
// range: 0x1003f6584-0x1003f6623 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1003f6584(char *param_1,char *param_2)

{
  char *pcVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  
  pcVar1 = "controlled_ability_map";
  if (*param_1 == '\0') {
    pcVar1 = "ectory";
  }
  uVar2 = (ulong)pcVar1 | 0x8000000000000000;
  pcVar1 = "controlled_ability_map";
  if (*param_2 == '\0') {
    pcVar1 = "ectory";
  }
  uVar3 = (ulong)pcVar1 | 0x8000000000000000;
  if (uVar2 == uVar3) {
    uVar4 = 1;
  }
  else {
    uVar4 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0xd000000000000016,uVar2,0xd000000000000016,uVar3,0);
  }
  _swift_bridgeObjectRelease(uVar2);
  _swift_bridgeObjectRelease(uVar3);
  return uVar4 & 1;
}

