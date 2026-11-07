// rea decompile_all
// name: FUN_100432c90
// address: 0x100432c90
// body: available
// range: 0x100432c90-0x100432cff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100432c90(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((0x38 < param_2) && ((char)param_1[0x12] != '\0')) {
    return *param_1 + 0x39;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x3a);
  uVar1 = ((*(byte *)((long)param_1 + 0x47) & 0x30 | uVar1 & 0xc) >> 3 |
          (uVar1 & 4 | (uint)((ulong)*(undefined8 *)(param_1 + 8) >> 0x3c) & 3) << 3) ^ 0x3f;
  if (0x37 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}

