// rea decompile_all
// name: FUN_10027a628
// address: 0x10027a628
// body: available
// range: 0x10027a628-0x10027a6cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10027a628(void)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  undefined1 auStack_60 [32];
  
  lVar1 = 0;
  __s10Foundation3URLVMa();
  lVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar1 = 0;
  FUN_100278198();
  puVar2 = auStack_60 +
           (-(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0) -
           (lVar3 + 0xfU & 0xfffffffffffffff0));
  FUN_100082394();
  _swift_getEnumCaseMultiPayload(puVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x00010027a6cc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_10027a6d0 +
            (ulong)*(ushort *)(&DAT_100816b10 + ((ulong)puVar2 & 0xffffffff) * 2) * 4))();
  return;
}

