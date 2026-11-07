// rea decompile_all
// name: FUN_10035787c
// address: 0x10035787c
// body: available
// range: 0x10035787c-0x10035792f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10035787c(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  undefined *local_30;
  long local_28;
  
  local_70 = &DAT_10081bde8;
  puStack_68 = &DAT_10081be00;
  local_60 = &DAT_10081bde8;
  puStack_58 = &DAT_10081be18;
  local_50 = &DAT_10081be30;
  puStack_48 = &DAT_10081be48;
  local_40 = PTR___syycWV_100995e98 + 0x40;
  local_30 = &DAT_10081bde8;
  lVar1 = 0x13f;
  puStack_38 = local_40;
  __s10Foundation12CharacterSetVMa();
  if (param_2 < 0x40) {
    local_28 = *(long *)(lVar1 + -8) + 0x40;
    _swift_updateClassMetadata2(param_1,0x100,10,&local_70,param_1 + 0x50);
  }
  return;
}

