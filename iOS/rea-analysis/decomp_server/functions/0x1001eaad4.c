// rea decompile_all
// name: FUN_1001eaad4
// address: 0x1001eaad4
// body: available
// range: 0x1001eaad4-0x1001eabb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001eaad4(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_c8;
  undefined *puStack_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  long local_a8;
  long lStack_a0;
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
  undefined *puStack_30;
  undefined *local_28;
  
  local_c8 = PTR___sBi32_WV_100995730 + 0x40;
  puStack_c0 = &DAT_100812940;
  lVar1 = 0x13f;
  local_b8 = local_c8;
  puStack_b0 = local_c8;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    local_a8 = *(long *)(lVar1 + -8) + 0x40;
    local_98 = PTR___sBi64_WV_100995738 + 0x40;
    local_88 = &DAT_100812958;
    puStack_80 = &DAT_100812958;
    local_78 = &DAT_100812970;
    puStack_70 = &DAT_100812970;
    local_68 = &DAT_100812988;
    puStack_60 = &DAT_100812988;
    local_58 = PTR___sBOWV_100995720 + 0x40;
    puStack_50 = &DAT_1008129a0;
    local_48 = &DAT_1008129a0;
    puStack_40 = &DAT_1008129b8;
    local_38 = &DAT_100812988;
    puStack_30 = &DAT_100812970;
    local_28 = &DAT_1008129a0;
    lStack_a0 = local_a8;
    puStack_90 = local_98;
    _swift_updateClassMetadata2(param_1,0x100,0x15,&local_c8,param_1 + 0x50);
  }
  return;
}

