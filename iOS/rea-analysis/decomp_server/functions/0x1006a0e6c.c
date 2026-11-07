// rea decompile_all
// name: FUN_1006a0e6c
// address: 0x1006a0e6c
// body: available
// range: 0x1006a0e6c-0x1006a0f37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006a0e6c(int *param_1)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined1 auStack_58 [40];
  int *local_30;
  char local_28;
  
  if (*param_1 != 1) {
    local_30 = param_1 + 0x3c;
    local_28 = '\0';
    FUN_100696f64(&local_30);
    if (*(long *)(param_1 + 0x1e) != 0) {
      FUN_1006919e4(auStack_58,0x80);
      (**(code **)(**(long **)(param_1 + 0x1e) + 0x18))(*(long **)(param_1 + 0x1e),auStack_58);
      FUN_1006972a0(&local_30);
      puVar1 = auStack_58;
      FUN_100691fa4(puVar1,0);
      if (puVar1 != (undefined1 *)0x0) {
        puVar1 = auStack_58;
        FUN_100691fa4(puVar1,0);
        puVar2 = auStack_58;
        FUN_100691e98(puVar2);
        FUN_1006a0f38(param_1,puVar1,puVar2,0);
      }
      FUN_1006919f4(auStack_58);
    }
    if (local_28 == '\x01') {
      FUN_1006972a0(&local_30);
    }
  }
  return;
}

