// rea decompile_all
// name: FUN_1000d4784
// address: 0x1000d4784
// body: available
// range: 0x1000d4784-0x1000d47e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1000d4784(ulong param_1)

{
  ulong uVar1;
  
  FUN_1000d4814();
  if (param_1 == 0) {
    uVar1 = param_1;
    __s6Darwin5errnos5Int32Vvg();
    uVar1 = uVar1 & 0xffffffff;
  }
  else {
    _closedir(param_1);
    uVar1 = 0;
  }
  return uVar1 | (ulong)(param_1 != 0) << 0x20;
}

