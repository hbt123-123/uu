// rea decompile_all
// name: FUN_1001a3664
// address: 0x1001a3664
// body: available
// range: 0x1001a3664-0x1001a36db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a3664(long param_1,long param_2,ulong param_3)

{
  long *plVar1;
  ulong uVar2;
  long unaff_x20;
  
  uVar2 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_3 = param_3 & (uVar2 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 3 & 0xffffffffffffff8)) >> (param_3 & 0x3f) & 1) ==
      0) {
    return;
  }
  do {
    plVar1 = (long *)(*(long *)(unaff_x20 + 0x30) + param_3 * 0x10);
    if (*plVar1 == param_1 && plVar1[1] == param_2) {
      return;
    }
    param_3 = param_3 + 1 & ~uVar2;
  } while ((*(ulong *)(unaff_x20 + 0x40 + (param_3 >> 3 & 0xffffffffffffff8)) >> (param_3 & 0x3f) &
           1) != 0);
  return;
}

