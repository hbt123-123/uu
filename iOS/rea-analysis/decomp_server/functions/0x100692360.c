// rea decompile_all
// name: FUN_100692360
// address: 0x100692360
// body: available
// range: 0x100692360-0x100692417 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100692360(long param_1,ulong param_2,ulong param_3)

{
  ulong uVar1;
  ulong uVar2;
  
  if ((long)param_2 < 0) {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/autobuffer.cc",0xcb,
                  "Length","0 <= _pos");
  }
  if (param_3 < param_2) {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/autobuffer.cc",0xcc,
                  "Length","(size_t)_pos <= _lenght");
  }
  if (*(ulong *)(param_1 + 0x18) < param_3) {
    FUN_1006952c4("/tmp/nrd-secure-log-xlog-xcframework.z9m4rK/mars/mars/comm/autobuffer.cc",0xcd,
                  "Length","_lenght <= Capacity()");
  }
  uVar1 = param_2;
  if (param_3 <= param_2) {
    uVar1 = param_3;
  }
  uVar2 = 0;
  if (-1 < (long)param_2) {
    uVar2 = uVar1;
  }
  *(ulong *)(param_1 + 8) = uVar2;
  *(ulong *)(param_1 + 0x10) = param_3;
  return;
}

