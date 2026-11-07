// rea decompile_all
// name: FUN_100345b50
// address: 0x100345b50
// body: available
// range: 0x100345b50-0x100345c0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100345b50(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long unaff_x20;
  undefined1 auStack_58 [24];
  undefined *local_40;
  undefined **ppuStack_38;
  
  local_40 = &DAT_1009b38b0;
  ppuStack_38 = &PTR_PTR_1009b3790;
  puVar1 = &DAT_100a87200;
  FUN_100004bb4(&DAT_100a87200,&DAT_10081b200);
  _swift_initStaticObject();
  FUN_1003478d4();
  puVar2 = &DAT_100a83a48;
  FUN_100004bb4(&DAT_100a83a48,&DAT_100818350);
  _swift_initStaticObject();
  puVar3 = puVar2;
  FUN_1003479e8();
  FUN_100347b4c(puVar2 + 0x20);
  _swift_allocObject();
  FUN_1000a0074(auStack_58,unaff_x20 + 0x10);
  *(undefined **)(unaff_x20 + 0x38) = puVar1;
  *(undefined **)(unaff_x20 + 0x40) = puVar3;
  return unaff_x20;
}

