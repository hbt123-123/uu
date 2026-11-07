// rea decompile_all
// name: FUN_100328bcc
// address: 0x100328bcc
// body: available
// range: 0x100328bcc-0x100328c2f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100328bcc(long param_1,undefined8 param_2)

{
  long lVar1;
  code *pcVar2;
  
  lVar1 = 0;
  FUN_10032b6a8();
  __sScS12ContinuationVMa(0,param_2);
  __sScS12ContinuationV6finishyyF();
  pcVar2 = *(code **)(param_1 + *(int *)(lVar1 + 0x1c));
  if (pcVar2 != (code *)0x0) {
    (*pcVar2)();
  }
  return;
}

