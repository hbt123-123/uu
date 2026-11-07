// rea decompile_all
// name: FUN_1003c5948
// address: 0x1003c5948
// body: available
// range: 0x1003c5948-0x1003c5a3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003c5948(long param_1,ulong param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  long lVar3;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined *local_a8;
  undefined *puStack_a0;
  long local_98;
  undefined *puStack_90;
  long local_88;
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
  
  puVar2 = PTR___sBOWV_100995720;
  local_b8 = PTR___sBOWV_100995720 + 0x40;
  puStack_b0 = &DAT_100822358;
  local_a8 = &DAT_100822370;
  puStack_a0 = &DAT_100822370;
  lVar3 = 0x13f;
  __s10Foundation4DateVMa();
  if (param_2 < 0x40) {
    local_98 = *(long *)(lVar3 + -8) + 0x40;
    puVar1 = PTR___sBbWV_100995728 + 0x40;
    lVar3 = 0x13f;
    puStack_90 = puVar1;
    FUN_1003c5a40();
    if (param_2 < 0x40) {
      local_88 = *(long *)(lVar3 + -8) + 0x40;
      puStack_80 = &DAT_100822388;
      puStack_70 = puVar2 + 0x40;
      local_78 = &DAT_1008223a0;
      puStack_60 = PTR___sBi64_WV_100995738 + 0x40;
      local_68 = &DAT_1008223a0;
      local_58 = &DAT_1008223b8;
      local_48 = &DAT_1008223a0;
      puStack_40 = &DAT_100822370;
      puStack_50 = puVar1;
      local_38 = puVar1;
      _swift_updateClassMetadata2(param_1,0x100,0x11,&local_b8,param_1 + 0x50);
    }
  }
  return;
}

