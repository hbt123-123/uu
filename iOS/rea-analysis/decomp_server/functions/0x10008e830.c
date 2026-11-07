// rea decompile_all
// name: FUN_10008e830
// address: 0x10008e830
// body: available
// range: 0x10008e830-0x10008e92f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008e830(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_c0;
  undefined *puStack_b8;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  long local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  
  puStack_b8 = PTR___sBi32_WV_100995730 + 0x40;
  local_c0 = &DAT_10080b048;
  local_b0 = &DAT_10080b060;
  puStack_a8 = &DAT_10080b078;
  local_a0 = &DAT_10080b078;
  puStack_98 = &DAT_10080b090;
  local_90 = PTR___sBbWV_100995728 + 0x40;
  puStack_88 = &DAT_10080b078;
  local_80 = &DAT_10080b0a8;
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    local_78 = *(long *)(lVar1 + -8) + 0x40;
    puStack_70 = PTR___sBi64_WV_100995738 + 0x40;
    local_68 = &DAT_10080b048;
    puStack_60 = &DAT_10080b090;
    local_58 = &DAT_10080b0c0;
    local_48 = &DAT_10080b0d8;
    puStack_40 = &DAT_10080b0f0;
    local_38 = &DAT_10080b108;
    puStack_50 = puStack_70;
    _swift_updateClassMetadata2(param_1,0x100,0x12,&local_c0,param_1 + 0x50);
  }
  return;
}

