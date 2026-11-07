// rea decompile_all
// name: FUN_10036c000
// address: 0x10036c000
// body: available
// range: 0x10036c000-0x10036c193 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036c000(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 auStack_220 [32];
  undefined1 auStack_200 [32];
  undefined1 auStack_1e0 [32];
  undefined1 auStack_1c0 [32];
  undefined1 auStack_1a0 [32];
  undefined1 auStack_180 [32];
  undefined1 auStack_160 [32];
  undefined1 auStack_140 [32];
  undefined1 auStack_120 [32];
  undefined1 auStack_100 [32];
  undefined1 auStack_e0 [32];
  undefined1 auStack_c0 [32];
  undefined1 *local_a0;
  undefined1 *local_98;
  undefined1 *local_90;
  undefined1 *local_88;
  undefined1 *local_80;
  undefined1 *local_78;
  undefined1 *local_70;
  undefined1 *local_68;
  undefined1 *local_60;
  undefined1 *local_58;
  undefined1 *local_50;
  undefined1 *local_48;
  
  lVar1 = 0x13f;
  __s10Foundation10URLRequestVMa();
  if (param_2 < 0x40) {
    lVar1 = *(long *)(lVar1 + -8);
    _swift_getTupleTypeLayout2(auStack_c0,lVar1 + 0x40,&DAT_10081cee8);
    local_a0 = auStack_c0;
    _swift_getTupleTypeLayout2(auStack_e0,lVar1 + 0x40,&DAT_10081cee8);
    local_98 = auStack_e0;
    _swift_getTupleTypeLayout2(auStack_100,lVar1 + 0x40,&DAT_10081cee8);
    local_90 = auStack_100;
    _swift_getTupleTypeLayout2(auStack_120,lVar1 + 0x40,&DAT_10081cee8);
    local_88 = auStack_120;
    _swift_getTupleTypeLayout2(auStack_140,lVar1 + 0x40,&DAT_10081cee8);
    local_80 = auStack_140;
    _swift_getTupleTypeLayout2(auStack_160,lVar1 + 0x40,&DAT_10081cee8);
    local_78 = auStack_160;
    _swift_getTupleTypeLayout2(auStack_180,lVar1 + 0x40,&DAT_10081cee8);
    local_70 = auStack_180;
    _swift_getTupleTypeLayout2(auStack_1a0,lVar1 + 0x40,&DAT_10081cee8);
    local_68 = auStack_1a0;
    _swift_getTupleTypeLayout2(auStack_1c0,lVar1 + 0x40,&DAT_10081cee8);
    local_60 = auStack_1c0;
    _swift_getTupleTypeLayout2(auStack_1e0,lVar1 + 0x40,&DAT_10081cee8);
    local_58 = auStack_1e0;
    _swift_getTupleTypeLayout2(auStack_200,lVar1 + 0x40,&DAT_10081cee8);
    local_50 = auStack_200;
    _swift_getTupleTypeLayout2(auStack_220,lVar1 + 0x40,&DAT_10081cee8);
    local_48 = auStack_220;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,0xc,&local_a0);
  }
  return;
}

