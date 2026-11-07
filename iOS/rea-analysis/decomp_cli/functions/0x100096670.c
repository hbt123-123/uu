// rea decompile_all
// name: FUN_100096670
// address: 0x100096670
// body: available
// range: 0x100096670-0x100096707 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100096670(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  lVar4 = unaff_x20[2];
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar2);
  __ss6HasherV8_combineyySuF(*(undefined8 *)(lVar4 + 0x10));
  lVar3 = *(long *)(lVar4 + 0x10);
  if (lVar3 != 0) {
    puVar5 = (undefined8 *)(lVar4 + 0x28);
    do {
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      _swift_bridgeObjectRetain(uVar2);
      __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar2);
      _swift_bridgeObjectRelease(uVar2);
      puVar5 = puVar5 + 2;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  __ss6HasherV9_finalizeSiyF();
  return;
}

