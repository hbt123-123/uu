// rea decompile_all
// name: FUN_100278080
// address: 0x100278080
// body: available
// range: 0x100278080-0x100278107 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100278080(void)

{
  long lVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  
  lVar1 = 0;
  FUN_100277ad0();
  puVar3 = &stack0xffffffffffffffd0 +
           -(*(long *)(*(long *)(lVar1 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_100082394();
  puVar2 = puVar3;
  _swift_getEnumCaseMultiPayload(puVar3,lVar1);
  FUN_1000d27dc(puVar3,FUN_100277ad0);
  return (int)puVar2 == 6;
}

