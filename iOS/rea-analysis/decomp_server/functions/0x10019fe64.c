// rea decompile_all
// name: FUN_10019fe64
// address: 0x10019fe64
// body: available
// range: 0x10019fe64-0x10019fef7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10019fe64(void)

{
  char *pcVar1;
  char *pcVar2;
  char cVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  char *unaff_x20;
  undefined1 auStack_68 [72];
  
  cVar3 = *unaff_x20;
  __ss6HasherV5_seedABSi_tcfC(auStack_68);
  pcVar1 = "remote_display_info";
  puVar4 = (undefined1 *)0xd000000000000012;
  if (cVar3 != '\x01') {
    pcVar1 = "local_display_info";
    puVar4 = &DAT_d000000000000018;
  }
  pcVar2 = "width";
  puVar5 = &DAT_d000000000000013;
  if (cVar3 != '\0') {
    pcVar2 = pcVar1;
    puVar5 = puVar4;
  }
  __sSS4hash4intoys6HasherVz_tF(auStack_68,puVar5,(ulong)pcVar2 | 0x8000000000000000);
  _swift_bridgeObjectRelease((ulong)pcVar2 | 0x8000000000000000);
  __ss6HasherV9_finalizeSiyF();
  return;
}

