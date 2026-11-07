// rea decompile_all
// name: FUN_100391d0c
// address: 0x100391d0c
// body: available
// range: 0x100391d0c-0x100391d73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100391d0c(undefined8 param_1,undefined8 *param_2,undefined8 *param_3,undefined8 *param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  puVar1 = param_2;
  if (param_2 != param_3) {
    do {
      *param_4 = *puVar1;
      *(undefined4 *)(param_4 + 1) = *(undefined4 *)(puVar1 + 1);
      param_4[2] = puVar1[2];
      puVar2 = puVar1 + 3;
      *(undefined4 *)puVar1 = 0;
      param_4 = param_4 + 3;
      puVar1 = puVar2;
    } while (puVar2 != param_3);
    for (; param_2 != param_3; param_2 = param_2 + 3) {
      FUN_100391ae0();
    }
  }
  return;
}

