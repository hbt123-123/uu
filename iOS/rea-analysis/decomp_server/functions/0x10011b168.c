// rea decompile_all
// name: FUN_10011b168
// address: 0x10011b168
// body: available
// range: 0x10011b168-0x10011b21b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10011b168(long param_1,ulong param_2)

{
  long lVar1;
  long local_a0;
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
  undefined *local_30;
  undefined *puStack_28;
  
  lVar1 = 0x13f;
  FUN_1000d46d0();
  if (param_2 < 0x40) {
    local_a0 = *(long *)(lVar1 + -8) + 0x40;
    puStack_98 = &DAT_10080dc58;
    local_90 = &DAT_10080dc58;
    puStack_88 = &DAT_10080dc70;
    local_80 = &DAT_10080dc58;
    puStack_78 = &DAT_10080dc88;
    local_70 = PTR___sBi32_WV_100995730 + 0x40;
    puStack_68 = PTR___sBi64_WV_100995738 + 0x40;
    local_60 = puStack_68;
    puStack_58 = puStack_68;
    local_50 = puStack_68;
    puStack_48 = local_70;
    local_40 = local_70;
    puStack_38 = local_70;
    local_30 = local_70;
    puStack_28 = local_70;
    _swift_updateClassMetadata2(param_1,0x100,0x10,&local_a0,param_1 + 0x50);
  }
  return;
}

