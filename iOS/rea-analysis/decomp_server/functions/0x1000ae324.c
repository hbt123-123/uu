// rea decompile_all
// name: FUN_1000ae324
// address: 0x1000ae324
// body: available
// range: 0x1000ae324-0x1000ae3d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000ae324(void)

{
  undefined8 uVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar2 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68,0);
  uVar5 = 0xee0064695f656369;
  uVar3 = 0x7665645f72657375;
  if (cVar2 != '\x01') {
    uVar5 = 0xe900000000000064;
    uVar3 = 0x695f656369766564;
  }
  uVar1 = 0xea00000000006469;
  uVar4 = 0x5f7463656c6c6f63;
  if (cVar2 != '\0') {
    uVar1 = uVar5;
    uVar4 = uVar3;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,uVar4,uVar1);
  _swift_bridgeObjectRelease(uVar1);
  __ss6HasherV9_finalizeSiyF();
  return;
}

