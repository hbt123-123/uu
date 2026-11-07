// rea decompile_all
// name: FUN_1003990d4
// address: 0x1003990d4
// body: available
// range: 0x1003990d4-0x100399177 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003990d4(void)

{
  undefined8 uVar1;
  ulong uVar2;
  undefined8 uVar3;
  byte bVar4;
  uint uVar5;
  ulong uVar6;
  byte *unaff_x20;
  undefined1 auStack_68 [72];
  
  bVar4 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar5 = 0x35646d;
  if (bVar4 != 2) {
    uVar5 = 0x656d696d;
  }
  uVar1 = 0xe300000000000000;
  if (bVar4 != 2) {
    uVar1 = 0xe400000000000000;
  }
  uVar2 = 0x657a697366;
  if (bVar4 != 0) {
    uVar2 = 0x6c7275;
  }
  uVar3 = 0xe500000000000000;
  if (bVar4 != 0) {
    uVar3 = 0xe300000000000000;
  }
  uVar6 = (ulong)uVar5;
  if (bVar4 < 2) {
    uVar1 = uVar3;
    uVar6 = uVar2;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar6,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}

