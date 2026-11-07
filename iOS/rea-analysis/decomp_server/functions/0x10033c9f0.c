// rea decompile_all
// name: FUN_10033c9f0
// address: 0x10033c9f0
// body: available
// range: 0x10033c9f0-0x10033cb67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10033c9f0(ulong param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined1 auVar10 [16];
  bool bVar11;
  
  uVar1 = 0x2d;
  if ((param_1 & 2) != 0) {
    uVar1 = 0x52;
  }
  uVar2 = 0x2d;
  if ((param_1 & 4) != 0) {
    uVar2 = 99;
  }
  uVar3 = 0x2d;
  if ((param_1 & 1) != 0) {
    uVar3 = 0x74;
  }
  uVar4 = 0x2d;
  if ((param_1 & 0x10) != 0) {
    uVar4 = 0x69;
  }
  uVar5 = 0x2d;
  if ((param_1 & 0x20) != 0) {
    uVar5 = 0x44;
  }
  uVar6 = 0x2d;
  if ((param_1 & 0x10000) != 0) {
    uVar6 = 0x6c;
  }
  uVar7 = 0x2d;
  if ((param_1 & 0x20000) != 0) {
    uVar7 = 100;
  }
  bVar11 = (param_1 & 8) != 0;
  uVar8 = 0x2d;
  if (bVar11) {
    uVar8 = 0x43;
  }
  uVar9 = 0x2d;
  if (bVar11) {
    uVar9 = 0x61;
  }
  __ss11_StringGutsV4growyySiF(0x15);
  _swift_bridgeObjectRelease(0xe000000000000000);
  __sSS6appendyySSF(uVar1,0xe100000000000000);
  __sSS6appendyySSF(0x20,0xe100000000000000);
  __sSS6appendyySSF(uVar2,0xe100000000000000);
  __sSS6appendyySSF(uVar3,0xe100000000000000);
  __sSS6appendyySSF(uVar4,0xe100000000000000);
  __sSS6appendyySSF(uVar8,0xe100000000000000);
  __sSS6appendyySSF(uVar5,0xe100000000000000);
  __sSS6appendyySSF(uVar6,0xe100000000000000);
  __sSS6appendyySSF(uVar7,0xe100000000000000);
  __sSS6appendyySSF(uVar9,0xe100000000000000);
  auVar10._8_8_ = 0xe100000000000000;
  auVar10._0_8_ = 0x2d;
  return auVar10;
}

