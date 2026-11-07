// rea decompile_all
// name: FUN_1000d7fe4
// address: 0x1000d7fe4
// body: available
// range: 0x1000d7fe4-0x1000d808f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d7fe4(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_70;
  undefined *puStack_68;
  undefined *local_60;
  long local_58;
  long lStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  puVar1 = PTR___sBi64_WV_100995738 + 0x40;
  local_70 = &DAT_10080c8a8;
  lVar2 = 0x13f;
  puStack_68 = puVar1;
  local_60 = puVar1;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    local_58 = *(long *)(lVar2 + -8) + 0x40;
    puStack_40 = &DAT_10080c8c0;
    local_38 = &DAT_10080c8d8;
    puStack_30 = &DAT_10080c8d8;
    local_28 = &DAT_10080c8f0;
    lStack_50 = local_58;
    local_48 = puVar1;
    _swift_updateClassMetadata2(param_1,0x100,10,&local_70,param_1 + 0x50);
  }
  return;
}

