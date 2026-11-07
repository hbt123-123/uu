// rea decompile_all
// name: FUN_10058f44c
// address: 0x10058f44c
// body: available
// range: 0x10058f44c-0x10058f4c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10058f44c(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  uint5 uVar3;
  uint5 uVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_88 [72];
  
  uVar1 = *unaff_x20;
  uVar2 = unaff_x20[1];
  uVar3 = *(uint5 *)(unaff_x20 + 2);
  uVar4 = *(uint5 *)(unaff_x20 + 3);
  __ss6HasherV5_seedABSi_tcfC(auStack_88);
  FUN_100574034(auStack_88,uVar1,uVar2,(ulong)uVar3,(ulong)uVar4);
  __ss6HasherV9_finalizeSiyF();
  return;
}

