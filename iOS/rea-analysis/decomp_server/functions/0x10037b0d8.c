// rea decompile_all
// name: FUN_10037b0d8
// address: 0x10037b0d8
// body: available
// range: 0x10037b0d8-0x10037b183 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037b0d8(long param_1,ID param_2,ID param_3)

{
  bool bVar1;
  ID IVar2;
  long lVar3;
  
  IVar2 = NSString::class((ID)&_OBJC_CLASS___NSString);
  IVar2 = objc_stub::isKindOfClass_(param_2,IVar2);
  if ((int)IVar2 == 0) {
    FUN_100386734(2,"libMMKV.mm",
                  "-[MMKV migrateFromUserDefaultsDictionaryRepresentation:]_block_invoke",0x425,
                  "unknown type of key:%@");
  }
  else {
    bVar1 = MMKV::tranlateData_key_kv_
                      ((ID)&objc::class_t::MMKV,param_3,param_2,*(ID *)(param_1 + 0x20));
    if (bVar1 != 0) {
      lVar3 = *(long *)(*(long *)(param_1 + 0x28) + 8);
      *(long *)(lVar3 + 0x18) = *(long *)(lVar3 + 0x18) + 1;
    }
  }
  return;
}

