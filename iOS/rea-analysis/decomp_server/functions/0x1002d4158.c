// rea decompile_all
// name: FUN_1002d4158
// address: 0x1002d4158
// body: available
// range: 0x1002d4158-0x1002d41fb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d4158(long param_1,ulong param_2)

{
  long lVar1;
  long local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  lVar1 = 0x13f;
  __s10Foundation4UUIDVMa();
  if (param_2 < 0x40) {
    local_68 = *(long *)(lVar1 + -8) + 0x40;
    puStack_60 = PTR___sBOWV_100995720 + 0x40;
    uStack_50 = 0x100818a38;
    puStack_40 = PTR___sBoWV_100995740 + 0x40;
    local_48 = 0x100818a50;
    local_58 = puStack_60;
    local_38 = puStack_60;
    puStack_30 = puStack_60;
    local_28 = puStack_40;
    _swift_updateClassMetadata2(param_1,0x100,9,&local_68,param_1 + 0x50);
  }
  return;
}

