// rea decompile_all
// name: FUN_100561c9c
// address: 0x100561c9c
// body: available
// range: 0x100561c9c-0x100561d77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100561c9c(void)

{
  char *pcVar1;
  char cVar2;
  undefined *puVar3;
  undefined *puVar4;
  ulong uVar5;
  byte bVar6;
  long unaff_x20;
  
  pcVar1 = *(char **)(unaff_x20 + 0x28);
  if (pcVar1 != *(char **)(unaff_x20 + 0x30)) {
    cVar2 = *pcVar1;
    if (cVar2 == '-') {
      *(char **)(unaff_x20 + 0x28) = pcVar1 + 1;
    }
    puVar3 = &DAT_100aaa100;
    FUN_100004bb4(&DAT_100aaa100,&DAT_1008386b0);
    puVar4 = puVar3;
    _swift_initStaticObject();
    _swift_initStaticObject(puVar3,&DAT_100aa8b20);
    FUN_100561bf0();
    if ((((ulong)puVar4 & 1) != 0) || (FUN_100561bf0(), ((ulong)puVar3 & 1) != 0)) {
      bVar6 = 0;
      uVar5 = 0xff800000;
      if (cVar2 != '-') {
        uVar5 = 0x7f800000;
      }
      goto LAB_100561d54;
    }
    *(char **)(unaff_x20 + 0x28) = pcVar1;
  }
  uVar5 = 0;
  bVar6 = 1;
LAB_100561d54:
  return uVar5 | (ulong)bVar6 << 0x20;
}

