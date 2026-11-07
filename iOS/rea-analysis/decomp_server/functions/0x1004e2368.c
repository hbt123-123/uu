// rea decompile_all
// name: FUN_1004e2368
// address: 0x1004e2368
// body: available
// range: 0x1004e2368-0x1004e2387 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1004e2368(long param_1)

{
  uint uVar1;
  
  uVar1 = ((uint)((ulong)*(undefined8 *)(param_1 + 0x60) >> 0x3c) & 3 |
          (uint)*(byte *)(param_1 + 0x80) << 2) ^ 0x3ff;
  if (0x3f2 < uVar1) {
    uVar1 = 0;
  }
  return uVar1;
}

