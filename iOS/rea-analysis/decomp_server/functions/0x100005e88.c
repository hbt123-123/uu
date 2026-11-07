// rea decompile_all
// name: FUN_100005e88
// address: 0x100005e88
// body: available
// range: 0x100005e88-0x100005ebf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100005e88(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong *puVar3;
  long lVar4;
  
  lVar4 = *(long *)(param_1 + 0x10);
  if (lVar4 != 0) {
    uVar2 = 0;
    puVar3 = (ulong *)(param_1 + 0x20);
    do {
      uVar1 = 0;
      if ((*puVar3 & (uVar2 ^ 0xffffffffffffffff)) != 0) {
        uVar1 = *puVar3;
      }
      uVar2 = uVar1 | uVar2;
      lVar4 = lVar4 + -1;
      puVar3 = puVar3 + 1;
    } while (lVar4 != 0);
    return uVar2;
  }
  return 0;
}

