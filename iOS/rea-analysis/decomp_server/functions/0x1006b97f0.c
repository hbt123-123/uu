// rea decompile_all
// name: FUN_1006b97f0
// address: 0x1006b97f0
// body: available
// range: 0x1006b97f0-0x1006b983f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006b97f0(long param_1,long param_2,int param_3)

{
  long lVar1;
  long lVar2;
  
  if (*(int *)(param_2 + 0x18) == 1) {
    lVar2 = 0;
  }
  else {
    lVar2 = 4L << ((ulong)*(uint *)(param_2 + 4) & 0x3f);
  }
  lVar1 = 0x2b40;
  if (param_3 != 1) {
    lVar1 = (param_1 + 7U & 0xfffffffffffffff8) + 0x2b40;
  }
  return lVar1 + lVar2 + (4L << ((ulong)*(uint *)(param_2 + 8) & 0x3f));
}

