// rea decompile_all
// name: FUN_1002782d8
// address: 0x1002782d8
// body: available
// range: 0x1002782d8-0x100278367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1002782d8(void)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 *puVar5;
  
  lVar3 = 0;
  FUN_100277ad0();
  puVar5 = &stack0xffffffffffffffd0 +
           -(*(long *)(*(long *)(lVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100082394();
  puVar4 = puVar5;
  _swift_getEnumCaseMultiPayload(puVar5,lVar3);
  bVar2 = (int)puVar4 == 10;
  pcVar1 = FUN_100278368;
  if (!bVar2) {
    pcVar1 = FUN_100277ad0;
  }
  FUN_1000d27dc(puVar5,pcVar1);
  return bVar2;
}

