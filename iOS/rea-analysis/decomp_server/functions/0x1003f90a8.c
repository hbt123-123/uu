// rea decompile_all
// name: FUN_1003f90a8
// address: 0x1003f90a8
// body: available
// range: 0x1003f90a8-0x1003f917f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_1003f90a8(void)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined *puVar4;
  byte bVar5;
  long extraout_x8;
  undefined1 *puVar6;
  long *unaff_x20;
  
  puVar1 = &DAT_100a8c198;
  puVar4 = &DAT_100822510;
  FUN_100004bb4(&DAT_100a8c198,&DAT_100822510);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar6 = &stack0xffffffffffffffd0 + -extraout_x8;
  FUN_1003d8888();
  (**(code **)(*unaff_x20 + 0x128))(puVar6);
  FUN_100006cc8(puVar1,puVar4);
  lVar2 = 0;
  FUN_1003f84d4();
  puVar3 = puVar6;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(puVar6,1,lVar2);
  if ((int)puVar3 == 0) {
    bVar5 = (&stack0xffffffffffffffd2)[-extraout_x8];
    FUN_1003f850c(puVar6);
    bVar5 = bVar5 == 2 | bVar5;
  }
  else {
    FUN_1003f850c(puVar6);
    bVar5 = 1;
  }
  return bVar5 & 1;
}

