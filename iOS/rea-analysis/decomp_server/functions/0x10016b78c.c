// rea decompile_all
// name: FUN_10016b78c
// address: 0x10016b78c
// body: available
// range: 0x10016b78c-0x10016b857 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10016b78c(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined *local_c0;
  undefined *puStack_b8;
  long local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  undefined *puStack_48;
  undefined *local_40;
  undefined *puStack_38;
  
  puVar1 = PTR___sBoWV_100995740 + 0x40;
  local_d0 = &DAT_10080ed48;
  local_c0 = PTR___sBi64_WV_100995738 + 0x40;
  puStack_b8 = &DAT_10080ed60;
  lVar2 = 0x13f;
  puStack_c8 = puVar1;
  FUN_100127240();
  if (param_2 < 0x40) {
    local_b0 = *(long *)(lVar2 + -8) + 0x40;
    puStack_a8 = &DAT_10080ed60;
    puStack_98 = &DAT_10080ed78;
    local_90 = &DAT_10080ed90;
    puStack_88 = &DAT_10080ed60;
    local_80 = &DAT_10080ed60;
    puStack_78 = &DAT_10080ed60;
    local_70 = &DAT_10080ed60;
    puStack_68 = &DAT_10080ed60;
    local_60 = &DAT_10080ed60;
    puStack_58 = &DAT_10080ed60;
    local_50 = &DAT_10080ed60;
    puStack_48 = &DAT_10080ed60;
    local_40 = &DAT_10080ed60;
    puStack_38 = &DAT_10080ed60;
    local_a0 = puVar1;
    _swift_updateClassMetadata2(param_1,0x100,0x14,&local_d0,param_1 + 0x50);
  }
  return;
}

