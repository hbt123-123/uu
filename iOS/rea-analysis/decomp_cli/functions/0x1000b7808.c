// rea decompile_all
// name: FUN_1000b7808
// address: 0x1000b7808
// body: available
// range: 0x1000b7808-0x1000b78b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b7808(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  undefined8 uVar6;
  char *unaff_x20;
  undefined1 auStack_78 [72];
  
  cVar5 = *unaff_x20;
  uVar3 = *(undefined8 *)(unaff_x20 + 8);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x10);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  uVar6 = 0x74726f6873;
  if (cVar5 != '\x01') {
    uVar6 = 0xd000000000000012;
  }
  uVar1 = 0xe500000000000000;
  if (cVar5 != '\x01') {
    uVar1 = 0x80000001000c9c90;
  }
  uVar2 = 0x676e6f6c;
  if (cVar5 != '\0') {
    uVar2 = uVar6;
  }
  uVar6 = 0xe400000000000000;
  if (cVar5 != '\0') {
    uVar6 = uVar1;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar2,uVar6);
  _swift_bridgeObjectRelease(uVar6);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar3,uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}

