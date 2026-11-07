// rea decompile_all
// name: thunk_FUN_1002718ec
// address: 0x10025d034
// body: available
// range: 0x10025d034-0x10025d037 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_1002718ec(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined8 *puVar6;
  
  puVar3 = PTR___sSSN_1009957f8;
  lVar5 = *(long *)(param_2 + 0x10);
  if (lVar5 != 0) {
    puVar6 = (undefined8 *)(param_2 + 0x28);
    do {
      uVar1 = puVar6[-1];
      uVar2 = *puVar6;
      puVar4 = &DAT_100a817c8;
      FUN_100004bb4(&DAT_100a817c8,&DAT_100815c18);
      _swift_allocObject();
      *(undefined8 *)(puVar4 + 0x18) = 2;
      *(undefined8 *)(puVar4 + 0x10) = 1;
      *(undefined **)(puVar4 + 0x38) = puVar3;
      *(undefined8 *)(puVar4 + 0x20) = uVar1;
      *(undefined8 *)(puVar4 + 0x28) = uVar2;
      _swift_bridgeObjectRetain(uVar2);
      __ss5print_9separator10terminatoryypd_S2StF
                (puVar4,0x2c,0xe100000000000000,10,0xe100000000000000);
      _swift_bridgeObjectRelease(puVar4);
      puVar6 = puVar6 + 2;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0);
  }
  return;
}

