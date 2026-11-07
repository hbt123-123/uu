// rea decompile_all
// name: FUN_100497148
// address: 0x100497148
// body: available
// range: 0x100497148-0x1004971af inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_100497148(int *param_1,uint param_2)

{
  uint uVar1;
  
  if (param_2 == 0) {
    return 0;
  }
  if ((10 < param_2) && ((char)param_1[0x14] != '\0')) {
    return *param_1 + 0xb;
  }
  uVar1 = (uint)((ulong)*(undefined8 *)(param_1 + 8) >> 0x3c);
  uVar1 = (((uint)((ulong)*(undefined8 *)(param_1 + 0xc) >> 0x3a) & 0xc | uVar1 & 2) >> 1 |
          (uVar1 & 1) << 3) ^ 0xf;
  if (9 < uVar1) {
    uVar1 = 0xffffffff;
  }
  return uVar1 + 1;
}

