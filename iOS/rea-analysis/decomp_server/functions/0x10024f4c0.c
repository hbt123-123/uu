// rea decompile_all
// name: FUN_10024f4c0
// address: 0x10024f4c0
// body: available
// range: 0x10024f4c0-0x10024f537 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10024f4c0(void *param_1)

{
  if (param_1 != (void *)0x0) {
    if (*(long *)((long)param_1 + 0x178) != 0) {
      FUN_10024f538(param_1);
    }
    if ((*(long *)((long)param_1 + 0x68) != 0) &&
       (*(long *)((long)param_1 + 0x68) != *(long *)((long)param_1 + 0x70))) {
      (**(code **)((long)param_1 + 0x30))(*(undefined8 *)((long)param_1 + 0x40));
    }
    if (*(long *)((long)param_1 + 0x70) != 0) {
      (**(code **)((long)param_1 + 0x30))(*(undefined8 *)((long)param_1 + 0x40));
    }
    _free(param_1);
    return 0;
  }
  return 0xffffff9a;
}

