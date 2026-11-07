// rea decompile_all
// name: FUN_100005e80
// address: 0x100005e80
// body: available
// range: 0x100005e80-0x100005f4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100005e80(void)

{
  byte bVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar1 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar4 = 0xec00000064657463;
  uVar5 = 0xe900000000000064;
  uVar2 = 0x657463656e6e6f63;
  if (bVar1 != 2) {
    uVar5 = 0xe600000000000000;
    uVar2 = 0x64656c696166;
  }
  uVar3 = 0x656e6e6f63736964;
  if (bVar1 != 0) {
    uVar4 = 0xea0000000000676e;
    uVar3 = 0x697463656e6e6f63;
  }
  if (bVar1 < 2) {
    uVar5 = uVar4;
    uVar2 = uVar3;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar2,uVar5);
  _swift_bridgeObjectRelease(uVar5);
  __ss6HasherV9_finalizeSiyF();
  return;
}

