// rea decompile_all
// name: FUN_10036d4ac
// address: 0x10036d4ac
// body: available
// range: 0x10036d4ac-0x10036d593 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036d4ac(undefined8 param_1,byte param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined1 auStack_68 [72];
  
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  uVar6 = 0x706d62;
  if (param_2 != 5) {
    uVar6 = 0x666967;
  }
  uVar1 = 0xe300000000000000;
  uVar4 = 0x66666974;
  if (param_2 != 3) {
    uVar4 = 0x63696568;
  }
  if (param_2 < 5) {
    uVar1 = 0xe400000000000000;
    uVar6 = uVar4;
  }
  uVar4 = 0x70626577;
  if (param_2 != 1) {
    uVar4 = 0x676e70;
  }
  uVar2 = 0xe400000000000000;
  if (param_2 != 1) {
    uVar2 = 0xe300000000000000;
  }
  uVar5 = 0x6765706a;
  if (param_2 != 0) {
    uVar5 = uVar4;
  }
  uVar3 = 0xe400000000000000;
  if (param_2 != 0) {
    uVar3 = uVar2;
  }
  if (param_2 < 3) {
    uVar1 = uVar3;
    uVar6 = uVar5;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar6,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}

