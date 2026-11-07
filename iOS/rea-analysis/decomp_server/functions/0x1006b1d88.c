// rea decompile_all
// name: FUN_1006b1d88
// address: 0x1006b1d88
// body: available
// range: 0x1006b1d88-0x1006b1def inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1006b1d88(uint param_1,int param_2,undefined4 param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = (uint)LZCOUNT(param_2) ^ 0x1f;
  uVar1 = ((uint)LZCOUNT(param_3) ^ 0x1f) + 2;
  if (uVar2 + 1 < uVar1) {
    uVar1 = uVar2 + 1;
  }
  uVar2 = 0xb;
  if (param_1 != 0) {
    uVar2 = param_1;
  }
  uVar3 = ((uint)LZCOUNT(param_2 + -1) ^ 0x1f) - param_4;
  if (uVar2 <= uVar3) {
    uVar3 = uVar2;
  }
  if (uVar1 <= uVar3) {
    uVar1 = uVar3;
  }
  if (uVar1 < 6) {
    uVar1 = 5;
  }
  if (0xb < uVar1) {
    uVar1 = 0xc;
  }
  return uVar1;
}

