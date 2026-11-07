// rea decompile_all
// name: FUN_1006ab40c
// address: 0x1006ab40c
// body: available
// range: 0x1006ab40c-0x1006ab457 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006ab40c(long param_1,byte *param_2,long param_3)

{
  uint uVar1;
  long lVar2;
  
  uVar1 = (uint)*(char *)(param_3 + 1);
  if ('\0' < *(char *)(param_3 + 1)) {
    lVar2 = 0;
    do {
      param_2[lVar2 + 1] = *(byte *)(param_1 + lVar2);
      lVar2 = lVar2 + 1;
    } while (lVar2 < (char)*(byte *)(param_3 + 1));
    uVar1 = (uint)*(byte *)(param_3 + 1);
  }
  *param_2 = *(byte *)(param_1 + (int)(-(uVar1 >> 7 & 1) & 0xfffffe00 | (uVar1 & 0xff) << 1) + -1) &
             1 | 2;
  return;
}

