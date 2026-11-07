// rea decompile_all
// name: FUN_1004110b0
// address: 0x1004110b0
// body: available
// range: 0x1004110b0-0x100411173 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004110b0(void)

{
  undefined1 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  byte bVar4;
  undefined1 *puVar5;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  uVar3 = 0x80000001008afcd0;
  puVar5 = &DAT_d000000000000013;
  if (bVar4 != 2) {
    uVar3 = 0xe900000000000070;
    puVar5 = (undefined1 *)0x6d617473656d6974;
  }
  puVar1 = (undefined1 *)0x646970;
  if (bVar4 != 0) {
    puVar1 = (undefined1 *)0x6d5f79726f6d656d;
  }
  uVar2 = 0xe300000000000000;
  if (bVar4 != 0) {
    uVar2 = 0xe900000000000062;
  }
  if (bVar4 < 2) {
    uVar3 = uVar2;
    puVar5 = puVar1;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,puVar5,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}

