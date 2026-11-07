// rea decompile_all
// name: FUN_100392844
// address: 0x100392844
// body: available
// range: 0x100392844-0x1003928d3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_100392844(ulong param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if (param_1 < 0x80) {
    return 1;
  }
  if (param_1 < 0x4000) {
    return 2;
  }
  if (param_1 < 0x200000) {
    return 3;
  }
  if (param_1 >> 0x1c == 0) {
    return 4;
  }
  if (param_1 >> 0x23 == 0) {
    return 5;
  }
  if (param_1 >> 0x2a == 0) {
    return 6;
  }
  if (param_1 >> 0x31 == 0) {
    return 7;
  }
  uVar2 = 9;
  if ((long)param_1 < 0) {
    uVar2 = 10;
  }
  uVar1 = 8;
  if (param_1 >> 0x38 != 0) {
    uVar1 = uVar2;
  }
  return uVar1;
}

