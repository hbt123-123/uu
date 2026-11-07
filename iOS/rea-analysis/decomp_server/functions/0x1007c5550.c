// rea decompile_all
// name: FUN_1007c5550
// address: 0x1007c5550
// body: available
// range: 0x1007c5550-0x1007c560f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007c5550(undefined8 *param_1,undefined8 param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  undefined1 auStack_40 [16];
  
  puVar1 = &DAT_100abce00;
  FUN_1007b4550();
  puVar4 = auStack_40 + -(*(long *)(*(long *)(puVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_1007c5c70(param_2,puVar4);
  lVar2 = 0;
  FUN_1007c5008();
  puVar3 = puVar4;
  (**(code **)(*(long *)(lVar2 + -8) + 0x30))(puVar4,1,lVar2);
  if ((int)puVar3 == 1) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    return;
  }
  _swift_getEnumCaseMultiPayload(puVar4,lVar2);
                    /* WARNING: Could not recover jumptable at 0x0001007c560c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_1007c5610 + (ulong)(byte)(&DAT_100852758)[(ulong)puVar4 & 0xffffffff] * 4))();
  return;
}

