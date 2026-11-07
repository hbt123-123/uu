// rea decompile_all
// name: FUN_100259160
// address: 0x100259160
// body: available
// range: 0x100259160-0x1002591eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100259160(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar4 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  uVar3 = 0x67736d;
  if (cVar4 != '\x01') {
    uVar3 = 0x736c6961746564;
  }
  uVar1 = 0xe300000000000000;
  if (cVar4 != '\x01') {
    uVar1 = 0xe700000000000000;
  }
  uVar2 = 0x65646f63;
  if (cVar4 != '\0') {
    uVar2 = uVar3;
  }
  uVar3 = 0xe400000000000000;
  if (cVar4 != '\0') {
    uVar3 = uVar1;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar2,uVar3);
  _swift_bridgeObjectRelease(uVar3);
  __ss6HasherV9_finalizeSiyF();
  return;
}

