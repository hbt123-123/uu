// rea decompile_all
// name: FUN_1006b7bdc
// address: 0x1006b7bdc
// body: available
// range: 0x1006b7bdc-0x1006b7c67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006b7bdc(long param_1)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  uint local_3c [7];
  
  if (0 < *(int *)(param_1 + 0x4c)) {
    return -1;
  }
  FUN_1006b7620(local_3c,param_1,0,0);
  FUN_1006b7908(param_1);
  uVar2 = 1L << ((ulong)local_3c[0] & 0x3f);
  uVar1 = uVar2;
  if (0x1ffff < uVar2) {
    uVar1 = 0x20000;
  }
  uVar3 = 0x20000 - uVar1 >> 0xb;
  if (0x10 < local_3c[0]) {
    uVar3 = 0;
  }
  return param_1 + uVar2 + (uVar1 >> 8) + uVar1 * 2 + uVar3 + 1;
}

