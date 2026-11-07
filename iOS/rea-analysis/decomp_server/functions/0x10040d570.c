// rea decompile_all
// name: FUN_10040d570
// address: 0x10040d570
// body: available
// range: 0x10040d570-0x10040d6bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10040d570(byte param_1,byte param_2)

{
  undefined1 *puVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  long lVar6;
  uint uVar7;
  
  if (param_1 < 2) {
    puVar5 = (undefined1 *)0x646970;
    if (param_1 != 0) {
      puVar5 = (undefined1 *)0x6d5f79726f6d656d;
    }
    lVar6 = -0x1d00000000000000;
    if (param_1 != 0) {
      lVar6 = -0x16ffffffffffff9e;
    }
  }
  else {
    puVar5 = &DAT_d000000000000013;
    lVar6 = -0x7ffffffeff750330;
    if (param_1 != 2) {
      puVar5 = (undefined1 *)0x6d617473656d6974;
      lVar6 = -0x16ffffffffffff90;
    }
  }
  lVar3 = -0x7ffffffeff750330;
  puVar4 = &DAT_d000000000000013;
  if (param_2 != 2) {
    lVar3 = -0x16ffffffffffff90;
    puVar4 = (undefined1 *)0x6d617473656d6974;
  }
  puVar1 = (undefined1 *)0x646970;
  if (param_2 != 0) {
    puVar1 = (undefined1 *)0x6d5f79726f6d656d;
  }
  lVar2 = -0x1d00000000000000;
  if (param_2 != 0) {
    lVar2 = -0x16ffffffffffff9e;
  }
  if (param_2 < 2) {
    lVar3 = lVar2;
    puVar4 = puVar1;
  }
  if ((puVar5 == puVar4) && (lVar6 == lVar3)) {
    uVar7 = 1;
  }
  else {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (puVar5,lVar6,puVar4,lVar3,0);
    uVar7 = (uint)puVar5;
  }
  _swift_bridgeObjectRelease(lVar6);
  _swift_bridgeObjectRelease(lVar3);
  return uVar7 & 1;
}

