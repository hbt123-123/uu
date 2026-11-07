// rea decompile_all
// name: FUN_100692dd4
// address: 0x100692dd4
// body: available
// range: 0x100692dd4-0x100692e9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100692dd4(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  
  if ((long)param_2 < 0) {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/ptrbuffer.cc",0x6d,
                  "Length","0 <= _nPos");
  }
  if (param_3 < param_2) {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/ptrbuffer.cc",0x6e,
                  "Length","(size_t)_nPos <= _nLenght");
  }
  uVar1 = *(ulong *)(param_1 + 0x18);
  if (uVar1 < param_3) {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/ptrbuffer.cc",0x6f,
                  "Length","_nLenght <= MaxLength()");
    uVar1 = *(ulong *)(param_1 + 0x18);
  }
  if (param_3 <= uVar1) {
    uVar1 = param_3;
  }
  *(ulong *)(param_1 + 8) = param_2;
  *(ulong *)(param_1 + 0x10) = uVar1;
  if ((long)param_2 < 0) {
    uVar1 = 0;
  }
  else if ((param_2 & 0xffffffff) <= uVar1) {
    return;
  }
  *(ulong *)(param_1 + 8) = uVar1;
  return;
}

