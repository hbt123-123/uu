// rea decompile_all
// name: FUN_10036c304
// address: 0x10036c304
// body: available
// range: 0x10036c304-0x10036c3b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10036c304(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined1 auStack_a8 [32];
  undefined1 auStack_88 [32];
  undefined1 auStack_68 [32];
  undefined1 *local_48;
  undefined1 *local_40;
  undefined1 *local_38;
  
  lVar1 = 0x13f;
  __s10Foundation10URLRequestVMa();
  if (param_2 < 0x40) {
    lVar1 = *(long *)(lVar1 + -8);
    _swift_getTupleTypeLayout2(auStack_68,lVar1 + 0x40,&DAT_10081cee8);
    local_48 = auStack_68;
    _swift_getTupleTypeLayout2(auStack_88,lVar1 + 0x40,&DAT_10081cee8);
    local_40 = auStack_88;
    _swift_getTupleTypeLayout2(auStack_a8,lVar1 + 0x40,&DAT_10081cee8);
    local_38 = auStack_a8;
    _swift_initEnumMetadataMultiPayload(param_1,0x100,3,&local_48);
  }
  return;
}

