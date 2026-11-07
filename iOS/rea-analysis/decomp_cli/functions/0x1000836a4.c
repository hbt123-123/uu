// rea decompile_all
// name: FUN_1000836a4
// address: 0x1000836a4
// body: available
// range: 0x1000836a4-0x10008370f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1000836a4(ulong param_1,int param_2,undefined8 param_3,long param_4)

{
  code *pcVar1;
  
  if (((long)param_1 < 0) || (1L << ((ulong)*(byte *)(param_4 + 0x20) & 0x3f) <= (long)param_1)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100083708);
    (*pcVar1)();
  }
  if ((*(ulong *)(param_4 + (param_1 >> 6) * 8 + 0x38) >> (param_1 & 0x3f) & 1) == 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10008370c);
    (*pcVar1)();
  }
  if (*(int *)(param_4 + 0x24) == param_2) {
    return *(undefined8 *)(*(long *)(param_4 + 0x30) + param_1 * 0x18);
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x100083710);
  (*pcVar1)();
}

