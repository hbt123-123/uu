// rea decompile_all
// name: FUN_100008488
// address: 0x100008488
// body: available
// range: 0x100008488-0x10000852b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100008488(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined1 uVar5;
  undefined8 *unaff_x20;
  undefined8 uVar6;
  undefined1 auStack_98 [72];
  
  uVar1 = *unaff_x20;
  uVar3 = unaff_x20[1];
  uVar2 = unaff_x20[2];
  uVar4 = unaff_x20[3];
  uVar6 = unaff_x20[4];
  uVar5 = *(undefined1 *)(unaff_x20 + 5);
  __ss6HasherV5_seedABSi_tcfC(auStack_98,0);
  __ss6HasherV8_combineyys6UInt64VF(uVar1);
  __ss6HasherV8_combineyySuF(uVar3);
  __ss6HasherV8_combineyySuF(uVar2);
  __ss6HasherV8_combineyySuF(uVar4);
  __ss6HasherV8_combineyySuF(uVar6);
  __ss6HasherV8_combineyys5UInt8VF(uVar5);
  __ss6HasherV9_finalizeSiyF();
  return;
}

