// rea decompile_all
// name: FUN_1002cd214
// address: 0x1002cd214
// body: available
// range: 0x1002cd214-0x1002cd283 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002cd214(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  
  FUN_1002c7c74();
  if (param_2 == 0) {
    pcVar2 = (code *)0x0;
    param_4 = 0;
    puVar1 = (undefined *)0x0;
  }
  else {
    puVar1 = &DAT_1009ae008;
    _swift_allocObject(&DAT_1009ae008,0x20,7);
    *(long *)(puVar1 + 0x10) = param_2;
    *(undefined8 *)(puVar1 + 0x18) = param_3;
    pcVar2 = thunk_FUN_1002cd444;
  }
  *param_1 = pcVar2;
  param_1[1] = puVar1;
  param_1[2] = param_4;
  return;
}

