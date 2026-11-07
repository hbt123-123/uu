// rea decompile_all
// name: FUN_10036bc8c
// address: 0x10036bc8c
// body: available
// range: 0x10036bc8c-0x10036bdd7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036bc8c(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 auStack_1b0 [32];
  undefined1 auStack_190 [32];
  undefined1 auStack_170 [32];
  undefined1 auStack_150 [32];
  undefined1 auStack_130 [32];
  undefined1 auStack_110 [32];
  undefined1 auStack_f0 [32];
  undefined1 auStack_d0 [32];
  undefined1 auStack_b0 [32];
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined *puStack_48;
  
  lVar1 = 0x13f;
  __s10Foundation10URLRequestVMa();
  if (param_2 < 0x40) {
    lVar1 = *(long *)(lVar1 + -8);
    _swift_getTupleTypeLayout2(auStack_b0,lVar1 + 0x40,&DAT_10081cee8);
    local_90 = auStack_b0;
    _swift_getTupleTypeLayout2(auStack_d0,lVar1 + 0x40,&DAT_10081cee8);
    local_88 = auStack_d0;
    _swift_getTupleTypeLayout2(auStack_f0,lVar1 + 0x40,&DAT_10081cee8);
    local_80 = auStack_f0;
    _swift_getTupleTypeLayout2(auStack_110,lVar1 + 0x40,&DAT_10081cee8);
    local_78 = auStack_110;
    _swift_getTupleTypeLayout2(auStack_130,lVar1 + 0x40,&DAT_10081cee8);
    local_70 = auStack_130;
    _swift_getTupleTypeLayout2(auStack_150,lVar1 + 0x40,&DAT_10081cee8);
    local_68 = auStack_150;
    _swift_getTupleTypeLayout2(auStack_170,lVar1 + 0x40,&DAT_10081cee8);
    local_60 = auStack_170;
    _swift_getTupleTypeLayout2(auStack_190,lVar1 + 0x40,&DAT_10081cee8);
    local_58 = auStack_190;
    _swift_getTupleTypeLayout2(auStack_1b0,lVar1 + 0x40,&DAT_10081cee8);
    puStack_48 = &DAT_10081cee8;
    local_50 = auStack_1b0;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,10,&local_90);
  }
  return;
}

