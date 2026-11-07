// rea decompile_all
// name: thunk_FUN_10037d650
// address: 0x10037d6a8
// body: available
// range: 0x10037d6a8-0x10037d6ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void thunk_FUN_10037d650(undefined8 param_1,ulong param_2)

{
  bool bVar1;
  ulong uVar2;
  
  uVar2 = param_2;
  if (0x7f < param_2) {
    do {
      FUN_10037d71c(param_1,(uint)uVar2 & 0xff | 0x80);
      param_2 = uVar2 >> 7;
      bVar1 = 0x3fff < uVar2;
      uVar2 = param_2;
    } while (bVar1);
  }
  FUN_10037d71c(param_1,(uint)param_2 & 0xff);
  return;
}

