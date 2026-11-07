// rea decompile_all
// name: FUN_10004d804
// address: 0x10004d804
// body: available
// range: 0x10004d804-0x10004d8c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10004d804(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  long local_30;
  undefined *puStack_28;
  
  local_b8 = &DAT_10080a820;
  puStack_b0 = &DAT_10080a820;
  local_a8 = &DAT_10080a820;
  puStack_a0 = &DAT_10080a820;
  puStack_90 = PTR___sBi64_WV_100995738 + 0x40;
  local_98 = &DAT_10080a820;
  puStack_80 = PTR___sBbWV_100995728 + 0x40;
  local_78 = &DAT_10080a838;
  local_68 = &DAT_10080a850;
  puStack_60 = &DAT_10080a838;
  local_58 = &DAT_10080a838;
  local_48 = &DAT_10080a838;
  puStack_40 = &DAT_10080a868;
  local_38 = &DAT_10080a868;
  lVar1 = 0x13f;
  local_88 = puStack_90;
  puStack_70 = puStack_80;
  puStack_50 = puStack_90;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    local_30 = *(long *)(lVar1 + -8) + 0x40;
    puStack_28 = &DAT_10080a850;
    _swift_updateClassMetadata2(param_1,0x100,0x13,&local_b8,param_1 + 0x50);
  }
  return;
}

