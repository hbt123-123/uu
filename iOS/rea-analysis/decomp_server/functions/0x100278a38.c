// rea decompile_all
// name: FUN_100278a38
// address: 0x100278a38
// body: available
// range: 0x100278a38-0x100278b2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100278a38(void)

{
  long lVar1;
  undefined1 *puVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  
  lVar1 = 0;
  FUN_100278368();
  lVar3 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar1 = 0;
  FUN_1002782c4();
  lVar4 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar1 = 0;
  FUN_100278198();
  lVar5 = *(long *)(*(long *)(lVar1 + -8) + 0x40);
  lVar1 = 0;
  FUN_100277ad0();
  puVar2 = &stack0xffffffffffffffb0 +
           (((-(lVar4 + 0xfU & 0xfffffffffffffff0) - (lVar3 + 0xfU & 0xfffffffffffffff0)) -
            (lVar5 + 0xfU & 0xfffffffffffffff0)) -
           (*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0));
  FUN_100082394();
  _swift_getEnumCaseMultiPayload(puVar2,lVar1);
                    /* WARNING: Could not recover jumptable at 0x000100278b2c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100278b30 + (ulong)(byte)(&DAT_100816ad0)[(ulong)puVar2 & 0xffffffff] * 4))(0);
  return;
}

