// rea decompile_all
// name: FUN_10040de60
// address: 0x10040de60
// body: available
// range: 0x10040de60-0x10040dfdb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10040de60(byte param_1,byte param_2)

{
  undefined1 *puVar1;
  ulong uVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  undefined1 *puVar6;
  ulong uVar7;
  char *pcVar8;
  ulong uVar9;
  uint uVar10;
  
  uVar9 = 0xea00000000007461;
  puVar6 = (undefined1 *)0x5f64657461647075;
  uVar7 = 0x80000001008afc70;
  puVar1 = (undefined1 *)0xd000000000000021;
  if (param_1 != 4) {
    uVar7 = 0xea00000000007461;
    puVar1 = puVar6;
  }
  uVar3 = 0x80000001008afc50;
  puVar5 = &DAT_d000000000000010;
  if (param_1 != 3) {
    uVar3 = uVar7;
    puVar5 = puVar1;
  }
  puVar1 = (undefined1 *)0xd00000000000001e;
  pcVar8 = "multi_instance_conflict_report";
  uVar7 = 0x80000001008afc10;
  if (param_1 != 1) {
    puVar1 = &DAT_d000000000000010;
    uVar7 = 0x80000001008afc30;
  }
  uVar2 = 0x80000001008afbf0;
  puVar4 = &DAT_d000000000000013;
  if (param_1 != 0) {
    uVar2 = uVar7;
    puVar4 = puVar1;
  }
  if (param_1 < 3) {
    uVar3 = uVar2;
    puVar5 = puVar4;
  }
  if (param_2 < 3) {
    if (param_2 == 0) {
      uVar9 = 0x80000001008afbf0;
      puVar6 = &DAT_d000000000000013;
      goto LAB_10040df8c;
    }
    if (param_2 == 1) {
      uVar9 = 0x80000001008afc10;
      puVar6 = (undefined1 *)0xd00000000000001e;
      goto LAB_10040df8c;
    }
  }
  else {
    pcVar8 = "xpc_guard_report";
    if (param_2 != 3) {
      if (param_2 == 4) {
        uVar9 = 0x80000001008afc70;
        puVar6 = (undefined1 *)0xd000000000000021;
      }
      goto LAB_10040df8c;
    }
  }
  uVar9 = (ulong)pcVar8 | 0x8000000000000000;
  puVar6 = &DAT_d000000000000010;
LAB_10040df8c:
  if ((puVar5 == puVar6) && (uVar3 == uVar9)) {
    uVar10 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (puVar5,uVar3,puVar6,uVar9,0);
    uVar10 = (uint)puVar5;
  }
  _swift_bridgeObjectRelease(uVar3);
  _swift_bridgeObjectRelease(uVar9);
  return uVar10 & 1;
}

