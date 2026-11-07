// rea decompile_all
// name: FUN_1002d81b4
// address: 0x1002d81b4
// body: available
// range: 0x1002d81b4-0x1002d82a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1002d81b4(long param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined *local_a0;
  undefined8 uStack_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined *puStack_68;
  undefined *local_60;
  undefined *puStack_58;
  undefined *local_50;
  long local_48;
  undefined8 uStack_40;
  undefined *local_38;
  
  local_e0 = 0x100818ac0;
  uStack_d8 = 0x100818ad8;
  local_d0 = 0x100818ad8;
  uStack_c8 = 0x100818af0;
  local_c0 = 0x100818af0;
  uStack_b8 = 0x100818ad8;
  local_b0 = 0x100818ad8;
  uStack_a8 = 0x100818ad8;
  puVar1 = PTR___sBbWV_100995728 + 0x40;
  uStack_98 = 0x100818b08;
  uStack_88 = 0x100818b08;
  local_80 = 0x100818af0;
  uStack_78 = 0x100818af0;
  local_70 = 0x100818b20;
  local_50 = PTR___sBi64_WV_100995738 + 0x40;
  puVar3 = &DAT_100a83208;
  lVar2 = 0x13f;
  local_a0 = puVar1;
  local_90 = puVar1;
  puStack_68 = puVar1;
  local_60 = puVar1;
  puStack_58 = puVar1;
  FUN_1002763e4(0x13f,&DAT_100a83208,FUN_100277ad0,PTR___sSqMa_100995a18);
  if (puVar3 < (undefined8 *)0x40) {
    local_48 = *(long *)(lVar2 + -8) + 0x40;
    uStack_40 = 0x100818b08;
    local_38 = puVar1;
    _swift_initStructMetadata(param_1,0x100,0x16,&local_e0,param_1 + 0x10);
  }
  return;
}

