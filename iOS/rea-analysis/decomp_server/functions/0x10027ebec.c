// rea decompile_all
// name: FUN_10027ebec
// address: 0x10027ebec
// body: available
// range: 0x10027ebec-0x10027eca3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10027ebec(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 auStack_d8 [32];
  undefined1 auStack_b8 [32];
  long local_98;
  long lStack_90;
  long local_88;
  undefined1 *local_80;
  long lStack_78;
  long local_70;
  undefined1 *local_68;
  long lStack_60;
  long local_58;
  long lStack_50;
  long local_48;
  undefined *puStack_40;
  undefined *local_38;
  
  lVar1 = 0x13f;
  __s10Foundation3URLVMa();
  if (param_2 < 0x40) {
    lVar1 = *(long *)(lVar1 + -8) + 0x40;
    local_98 = lVar1;
    lStack_90 = lVar1;
    local_88 = lVar1;
    _swift_getTupleTypeLayout2(auStack_b8,lVar1,&DAT_100816d28);
    local_80 = auStack_b8;
    lStack_78 = lVar1;
    local_70 = lVar1;
    _swift_getTupleTypeLayout2(auStack_d8,lVar1,&DAT_100816d28);
    puStack_40 = &DAT_100816d28;
    local_38 = &DAT_100816d28;
    local_68 = auStack_d8;
    lStack_60 = lVar1;
    local_58 = lVar1;
    lStack_50 = lVar1;
    local_48 = lVar1;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,0xd,&local_98);
  }
  return;
}

