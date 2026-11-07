// rea decompile_all
// name: FUN_1006a8cf4
// address: 0x1006a8cf4
// body: available
// range: 0x1006a8cf4-0x1006a8d5f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a8cf4(long param_1)

{
  long *plVar1;
  long lVar2;
  long *plVar3;
  mutex *unaff_x20;
  
  std::condition_variable::~condition_variable((condition_variable *)unaff_x20);
  std::mutex::~mutex(unaff_x20);
  if (*(long *)(param_1 + 0x28) != 0) {
    plVar3 = *(long **)(param_1 + 0x20);
    plVar1 = *(long **)(*(long *)(param_1 + 0x18) + 8);
    lVar2 = *plVar3;
    *(long **)(lVar2 + 8) = plVar1;
    *plVar1 = lVar2;
    *(undefined8 *)(param_1 + 0x28) = 0;
    while (plVar3 != (long *)(param_1 + 0x18)) {
      plVar3 = (long *)plVar3[1];
      FUN_1006a8d64();
    }
  }
  return;
}

