// rea decompile_all
// name: FUN_100385d74
// address: 0x100385d74
// body: available
// range: 0x100385d74-0x100385dd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100385d74(long *param_1)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  void *pvVar4;
  
  if (param_1[3] != 0) {
    puVar1 = (void *)param_1[2];
    while (puVar1 != (void *)0x0) {
      pvVar4 = (void *)*puVar1;
      operator_delete(puVar1);
      puVar1 = pvVar4;
    }
    param_1[2] = 0;
    lVar2 = param_1[1];
    if (lVar2 != 0) {
      lVar3 = 0;
      do {
        *(undefined8 *)(*param_1 + lVar3 * 8) = 0;
        lVar3 = lVar3 + 1;
      } while (lVar2 != lVar3);
    }
    param_1[3] = 0;
  }
  return;
}

