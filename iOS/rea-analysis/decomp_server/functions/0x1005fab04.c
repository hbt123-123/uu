// rea decompile_all
// name: FUN_1005fab04
// address: 0x1005fab04
// body: available
// range: 0x1005fab04-0x1005fabc3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005fab04(long param_1,ulong param_2)

{
  long lVar1;
  undefined *local_a8;
  undefined *puStack_a0;
  undefined *local_98;
  undefined *puStack_90;
  undefined *local_88;
  undefined *puStack_80;
  long local_78;
  undefined *puStack_70;
  undefined *local_68;
  undefined *puStack_60;
  undefined *local_58;
  long lStack_50;
  long local_48;
  undefined *puStack_40;
  undefined *local_38;
  undefined *puStack_30;
  undefined *local_28;
  
  local_a8 = &DAT_100845838;
  puStack_a0 = &DAT_100845850;
  local_98 = PTR___sBi32_WV_100995730 + 0x40;
  local_88 = &DAT_100845838;
  puStack_80 = &DAT_100845850;
  lVar1 = 0x13f;
  puStack_90 = local_98;
  FUN_1005fabc4();
  if (param_2 < 0x40) {
    local_78 = *(long *)(lVar1 + -8) + 0x40;
    puStack_70 = PTR___sBi64_WV_100995738 + 0x40;
    puStack_60 = &DAT_100845868;
    local_58 = &DAT_100845868;
    local_38 = &DAT_100845838;
    puStack_30 = &DAT_100845838;
    local_28 = &DAT_100845880;
    local_68 = puStack_70;
    lStack_50 = local_78;
    local_48 = local_78;
    puStack_40 = puStack_70;
    _swift_updateClassMetadata2(param_1,0x100,0x11,&local_a8,param_1 + 0x50);
  }
  return;
}

