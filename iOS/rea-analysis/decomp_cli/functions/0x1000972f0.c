// rea decompile_all
// name: FUN_1000972f0
// address: 0x1000972f0
// body: available
// range: 0x1000972f0-0x100097373 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000972f0(void)

{
  undefined8 uVar1;
  byte bVar2;
  byte bVar3;
  undefined8 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_78 [72];
  
  uVar1 = *unaff_x20;
  uVar4 = unaff_x20[1];
  bVar2 = *(byte *)(unaff_x20 + 2);
  bVar3 = *(byte *)((long)unaff_x20 + 0x11);
  __ss6HasherV5_seedABSi_tcfC(auStack_78);
  if ((bVar3 & 1) == 0) {
    __ss6HasherV8_combineyySuF(1);
    __ss6HasherV8_combineyySuF(uVar1);
    if ((bVar2 & 1) == 0) {
      __ss6HasherV8_combineyySuF(1);
      goto LAB_10009734c;
    }
  }
  uVar4 = 0;
LAB_10009734c:
  __ss6HasherV8_combineyySuF(uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}

