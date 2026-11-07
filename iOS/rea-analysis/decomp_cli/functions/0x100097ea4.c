// rea decompile_all
// name: FUN_100097ea4
// address: 0x100097ea4
// body: available
// range: 0x100097ea4-0x100097f3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100097ea4(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  undefined8 uVar5;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  bVar3 = *(byte *)(unaff_x20 + 2);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  bVar4 = bVar3 >> 6;
  if (bVar4 == 0) {
    uVar5 = 0;
  }
  else {
    if (bVar4 == 1) {
      __ss6HasherV8_combineyySuF(1);
      __sSJ4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar2);
      __ss6HasherV8_combineyys5UInt8VF(bVar3 & 1);
      goto LAB_100097f24;
    }
    uVar5 = 2;
  }
  __ss6HasherV8_combineyySuF(uVar5);
  __sSS4hash4intoys6HasherVz_tF(auStack_78,uVar1,uVar2);
LAB_100097f24:
  __ss6HasherV9_finalizeSiyF();
  return;
}

