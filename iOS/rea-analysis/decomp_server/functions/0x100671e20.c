// rea decompile_all
// name: FUN_100671e20
// address: 0x100671e20
// body: available
// range: 0x100671e20-0x100671e77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100671e20(ulong param_1)

{
  uint uVar1;
  code *pcVar2;
  long lVar3;
  long unaff_x20;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100671e70);
    (*pcVar2)();
  }
  if (param_1 < *(ulong *)(*(long *)(unaff_x20 + 0x20) + 0x10)) {
    if (param_1 < *(ulong *)(*(long *)(unaff_x20 + 0x28) + 0x10)) {
      uVar1 = *(int *)(*(long *)(unaff_x20 + 0x28) + param_1 * 4 + 0x20) +
              *(int *)(*(long *)(unaff_x20 + 0x20) + param_1 * 4 + 0x20);
      lVar3 = (ulong)uVar1 * (ulong)uVar1;
      return (uint)((ulong)lVar3 >> 0x20) ^ (uint)lVar3;
    }
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100671e78);
    (*pcVar2)();
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x100671e74);
  (*pcVar2)();
}

