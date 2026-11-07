// rea decompile_all
// name: FUN_10035fba4
// address: 0x10035fba4
// body: available
// range: 0x10035fba4-0x10035fc6b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10035fba4(void)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  long lVar6;
  
  puVar2 = &DAT_100a889a0;
  FUN_100004bb4(&DAT_100a889a0,&DAT_10081cc58);
  _swift_allocObject();
  puVar3 = puVar2;
  _malloc_size();
  lVar4 = 0;
  puVar1 = puVar3 + -0x19;
  if (0x1f < (long)puVar3) {
    puVar1 = puVar3 + -0x20;
  }
  *(undefined8 *)(puVar2 + 0x10) = 100;
  *(long *)(puVar2 + 0x18) = ((long)puVar1 >> 3) << 1;
  *(undefined8 *)(puVar2 + 0x20) = 200;
  lVar6 = 0xc9;
  lVar5 = 200;
  do {
    *(long *)(puVar2 + lVar4 + 0x30) = lVar6 + 1;
    *(long *)(puVar2 + lVar4 + 0x28) = lVar5 + 1;
    *(long *)(puVar2 + lVar4 + 0x40) = lVar6 + 3;
    *(long *)(puVar2 + lVar4 + 0x38) = lVar5 + 3;
    lVar5 = lVar5 + 4;
    lVar6 = lVar6 + 4;
    lVar4 = lVar4 + 0x20;
  } while (lVar4 != 0x300);
  *(undefined8 *)(puVar2 + 0x328) = 0x129;
  *(undefined8 *)(puVar2 + 0x330) = 0x12a;
  *(undefined8 *)(puVar2 + 0x338) = 299;
  return puVar2;
}

