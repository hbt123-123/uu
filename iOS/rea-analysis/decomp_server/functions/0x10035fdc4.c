// rea decompile_all
// name: FUN_10035fdc4
// address: 0x10035fdc4
// body: available
// range: 0x10035fdc4-0x10035fe9b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10035fdc4(long param_1,ulong param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined *local_b0;
  undefined *puStack_a8;
  undefined *local_a0;
  undefined *puStack_98;
  undefined *local_90;
  undefined *puStack_88;
  undefined *local_80;
  undefined *puStack_78;
  undefined *local_70;
  long local_68;
  undefined *puStack_60;
  undefined *local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  
  local_b0 = &DAT_10081cbc8;
  puStack_a8 = &DAT_10081cbe0;
  puVar1 = PTR___sBOWV_100995720 + 0x40;
  local_a0 = &DAT_10081cbf8;
  puStack_88 = PTR___sBi64_WV_100995738 + 0x40;
  local_90 = &DAT_10081cc10;
  puStack_78 = &DAT_10081cc28;
  local_70 = &DAT_10081cc28;
  lVar2 = 0x13f;
  puStack_98 = puVar1;
  local_80 = puStack_88;
  FUN_10035fe9c();
  if (param_2 < 0x40) {
    local_68 = *(long *)(lVar2 + -8) + 0x40;
    local_58 = &DAT_10081cc40;
    puStack_50 = &DAT_10081cbf8;
    puStack_40 = &DAT_10081cc28;
    local_38 = &DAT_10081cbf8;
    puStack_60 = puVar1;
    local_48 = puVar1;
    _swift_updateClassMetadata2(param_1,0x100,0x10,&local_b0,param_1 + 0x50);
  }
  return;
}

