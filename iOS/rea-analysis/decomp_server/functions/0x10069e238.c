// rea decompile_all
// name: FUN_10069e238
// address: 0x10069e238
// body: available
// range: 0x10069e238-0x10069e277 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_10069e238(undefined8 param_1,uint param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  uVar2 = 4;
  if (param_2 >> 0x1a != 0) {
    uVar2 = 5;
  }
  uVar1 = 3;
  if (0x1fffff < param_2) {
    uVar1 = uVar2;
  }
  uVar2 = 2;
  if (0xffff < param_2) {
    uVar2 = uVar1;
  }
  uVar1 = 1;
  if (0x7ff < param_2) {
    uVar1 = uVar2;
  }
  uVar2 = 0;
  if (0x7f < (int)param_2) {
    uVar2 = uVar1;
  }
  return uVar2;
}

