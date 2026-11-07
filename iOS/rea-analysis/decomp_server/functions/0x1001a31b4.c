// rea decompile_all
// name: FUN_1001a31b4
// address: 0x1001a31b4
// body: available
// range: 0x1001a31b4-0x1001a3283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001a31b4(long *param_1,ulong param_2)

{
  ulong uVar1;
  long *plVar2;
  long unaff_x20;
  
  uVar1 = -1L << ((ulong)*(byte *)(unaff_x20 + 0x20) & 0x3f);
  param_2 = param_2 & (uVar1 ^ 0xffffffffffffffff);
  if ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 3 & 0xffffffffffffff8)) >> (param_2 & 0x3f) & 1) !=
      0) {
    do {
      plVar2 = (long *)(*(long *)(unaff_x20 + 0x30) + param_2 * 0x30);
      if ((((*plVar2 == *param_1) && (plVar2[1] == param_1[1])) && (plVar2[2] == param_1[2])) &&
         (((plVar2[3] == param_1[3] && (plVar2[4] == param_1[4])) &&
          (*(byte *)(plVar2 + 5) == (*(byte *)(param_1 + 5) & 1))))) {
        return;
      }
      param_2 = param_2 + 1 & ~uVar1;
    } while ((*(ulong *)(unaff_x20 + 0x40 + (param_2 >> 3 & 0xffffffffffffff8)) >> (param_2 & 0x3f)
             & 1) != 0);
  }
  return;
}

