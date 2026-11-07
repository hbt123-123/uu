// rea decompile_all
// name: FUN_10027dc34
// address: 0x10027dc34
// body: available
// range: 0x10027dc34-0x10027dd63 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10027dc34(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined1 auStack_c8 [32];
  undefined *local_a8;
  undefined *puStack_a0;
  undefined1 *local_98;
  undefined *puStack_90;
  long local_88;
  undefined *puStack_80;
  undefined *local_78;
  undefined *puStack_70;
  undefined *local_68;
  long local_60;
  long local_58;
  undefined *puStack_50;
  undefined *local_48;
  undefined *puStack_40;
  undefined *local_38;
  
  local_a8 = &DAT_100816d28;
  puStack_a0 = &DAT_100816d28;
  lVar1 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    puVar2 = &DAT_100816d28;
    _swift_getTupleTypeLayout3
              (auStack_c8,&DAT_100816d28,*(long *)(lVar1 + -8) + 0x40,*(long *)(lVar1 + -8) + 0x40);
    puStack_90 = &DAT_100816d40;
    lVar1 = 0x13f;
    local_98 = auStack_c8;
    FUN_100278198();
    if (puVar2 < (undefined *)0x40) {
      local_88 = *(long *)(lVar1 + -8) + 0x40;
      puStack_80 = &DAT_100816d58;
      local_78 = &DAT_100816d70;
      puStack_70 = &DAT_100816d28;
      local_68 = &DAT_100816d88;
      lVar1 = 0x13f;
      FUN_1002782c4();
      if (puVar2 < (undefined *)0x40) {
        local_60 = *(long *)(lVar1 + -8) + 0x40;
        lVar1 = 0x13f;
        FUN_100278368();
        if (puVar2 < (undefined *)0x40) {
          local_58 = *(long *)(lVar1 + -8) + 0x40;
          puStack_50 = &DAT_100816da0;
          local_48 = &DAT_100816db8;
          puStack_40 = &DAT_100816d28;
          local_38 = &DAT_100816dd0;
          _swift_initEnumMetadataMultiPayload(param_1,0x100,0xf,&local_a8);
        }
      }
    }
  }
  return;
}

