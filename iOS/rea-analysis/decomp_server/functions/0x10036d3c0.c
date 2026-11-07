// rea decompile_all
// name: FUN_10036d3c0
// address: 0x10036d3c0
// body: available
// range: 0x10036d3c0-0x10036d4ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036d3c0(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar5 = 0x35646d;
  if (param_1 != 4) {
    uVar5 = 0x766f436f65646976;
  }
  uVar4 = 0xe300000000000000;
  if (param_1 != 4) {
    uVar4 = 0xea00000000007265;
  }
  uVar1 = 0x657a6953636970;
  if (param_1 != 3) {
    uVar1 = uVar5;
  }
  uVar5 = 0xe700000000000000;
  if (param_1 != 3) {
    uVar5 = uVar4;
  }
  uVar4 = 0x657a697366;
  if (param_1 != 1) {
    uVar4 = 0x656d696d;
  }
  uVar2 = 0xe500000000000000;
  if (param_1 != 1) {
    uVar2 = 0xe400000000000000;
  }
  uVar3 = 0x6c7275;
  if (param_1 != 0) {
    uVar3 = uVar4;
  }
  uVar4 = 0xe300000000000000;
  if (param_1 != 0) {
    uVar4 = uVar2;
  }
  if (param_1 < 3) {
    uVar5 = uVar4;
    uVar1 = uVar3;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar1,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  __ss6HasherV9_finalizeSiyF();
  return;
}

