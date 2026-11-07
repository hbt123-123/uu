// rea decompile_all
// name: FUN_10001b214
// address: 0x10001b214
// body: available
// range: 0x10001b214-0x10001b297 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10001b214(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                  ulong param_5,undefined8 param_6)

{
  long lVar1;
  undefined *local_50;
  undefined *puStack_48;
  undefined8 local_40;
  undefined *puStack_38;
  undefined *local_30;
  long local_28;
  
  local_50 = &DAT_1000cc7a0;
  puStack_48 = &DAT_1000cc7a0;
  puStack_38 = &DAT_1000cc7a0;
  local_30 = &DAT_1000cc7a0;
  lVar1 = 0x13f;
  local_40 = param_4;
  FUN_10001799c(0x13f,param_5,param_6);
  if (param_5 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_initStructMetadata(param_1,0x100,6,&local_50,param_1 + 0x10);
  }
  return;
}

