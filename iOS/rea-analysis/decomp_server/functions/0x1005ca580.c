// rea decompile_all
// name: FUN_1005ca580
// address: 0x1005ca580
// body: available
// range: 0x1005ca580-0x1005ca62f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005ca580(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_70;
  long local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  long local_40;
  undefined *puStack_38;
  undefined *local_30;
  undefined *puStack_28;
  
  local_70 = &DAT_10083ec20;
  lVar2 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    local_68 = *(long *)(lVar2 + -8) + 0x40;
    puStack_60 = &DAT_10083ec38;
    local_58 = &DAT_10083ec38;
    puStack_50 = &DAT_10083ec20;
    puVar1 = PTR___sBi64_WV_100995738 + 0x40;
    lVar2 = 0x13f;
    local_48 = puVar1;
    FUN_1005ca630();
    if (param_2 < 0x40) {
      local_40 = *(long *)(lVar2 + -8) + 0x40;
      puStack_38 = puVar1;
      local_30 = puVar1;
      puStack_28 = puVar1;
      _swift_initStructMetadata(param_1,0x100,10,&local_70,param_1 + 0x10);
    }
  }
  return;
}

