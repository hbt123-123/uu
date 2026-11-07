// rea decompile_all
// name: FUN_1001e5e8c
// address: 0x1001e5e8c
// body: available
// range: 0x1001e5e8c-0x1001e5f13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1001e5e8c(uint param_1)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  ulong uVar4;
  ulong local_28;
  
  if (param_1 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1001e5f14);
    (*pcVar2)();
  }
  local_28 = 0;
  _swift_stdlib_random(&local_28,8);
  uVar4 = (local_28 & 0xffffffff) * (ulong)param_1;
  uVar3 = (uint)uVar4;
  if (uVar3 < param_1) {
    uVar1 = 0;
    if (param_1 != 0) {
      uVar1 = -param_1 / param_1;
    }
    while (uVar3 < -param_1 - uVar1 * param_1) {
      local_28 = 0;
      _swift_stdlib_random(&local_28,8);
      uVar4 = (local_28 & 0xffffffff) * (ulong)param_1;
      uVar3 = (uint)uVar4;
    }
  }
  return uVar4 >> 0x20;
}

