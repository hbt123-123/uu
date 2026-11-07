// rea decompile_all
// name: FUN_1002296d8
// address: 0x1002296d8
// body: available
// range: 0x1002296d8-0x1002297ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002296d8(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar4 = 0xeb000000006c7275;
  uVar5 = 0x5f616d69786f7270;
  if (param_1 != 4) {
    uVar4 = 0x80000001008a58d0;
    uVar5 = 0xd000000000000019;
  }
  if (param_1 == 3) {
    uVar5 = 0xd000000000000012;
    uVar4 = 0x80000001008a58b0;
  }
  uVar2 = 0xee00746572636573;
  uVar1 = 0x5f7463656a6f7270;
  if (param_1 != 1) {
    uVar1 = 0xd000000000000011;
    uVar2 = 0x80000001008a5890;
  }
  uVar3 = 0xec000000656d616e;
  uVar6 = 0x5f7463656a6f7270;
  if (param_1 != 0) {
    uVar3 = uVar2;
    uVar6 = uVar1;
  }
  if (param_1 < 3) {
    uVar4 = uVar3;
    uVar5 = uVar6;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar5,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}

