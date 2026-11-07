// rea decompile_all
// name: FUN_100065808
// address: 0x100065808
// body: available
// range: 0x100065808-0x1000658cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100065808(void)

{
  long lVar1;
  long lVar2;
  byte bVar3;
  undefined8 uVar4;
  long *unaff_x20;
  undefined1 auStack_78 [72];
  
  lVar1 = *unaff_x20;
  lVar2 = unaff_x20[1];
  bVar3 = *(byte *)(unaff_x20 + 2);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  if (bVar3 >> 6 == 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(auStack_78,lVar1,lVar2);
  }
  else {
    if (bVar3 >> 6 != 1) {
      if ((lVar2 == 0 && lVar1 == 0) && (bVar3 == 0x80)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 2;
      }
      __ss6HasherV8_combineyySuF(uVar4);
      goto LAB_1000658b0;
    }
    __ss6HasherV8_combineyySuF(3);
    __sSJ4hash4intoys6HasherVz_tF(auStack_78,lVar1,lVar2);
  }
  __ss6HasherV8_combineyys5UInt8VF(bVar3 & 1);
LAB_1000658b0:
  __ss6HasherV9_finalizeSiyF();
  return;
}

