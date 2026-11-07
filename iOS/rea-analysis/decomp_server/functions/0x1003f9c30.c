// rea decompile_all
// name: FUN_1003f9c30
// address: 0x1003f9c30
// body: available
// range: 0x1003f9c30-0x1003f9d57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003f9c30(byte param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar1 = 0xec0000006567616d;
  uVar4 = 0x695f6d6f74737563;
  if (param_1 != 4) {
    uVar1 = 0xed00006769666e6f;
    uVar4 = 0x635f746573657270;
  }
  uVar3 = 0x80000001008afa50;
  uVar5 = 0xd000000000000012;
  if (param_1 != 3) {
    uVar3 = uVar1;
    uVar5 = uVar4;
  }
  uVar1 = 0x80000001008afa20;
  uVar4 = 0xd000000000000012;
  if (param_1 != 1) {
    uVar1 = 0xee007865646e695f;
    uVar4 = 0x64657463656c6573;
  }
  uVar2 = 0xed0000657079745f;
  uVar6 = 0x64657463656c6573;
  if (param_1 != 0) {
    uVar2 = uVar1;
    uVar6 = uVar4;
  }
  if (param_1 < 3) {
    uVar3 = uVar2;
    uVar5 = uVar6;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar5,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}

