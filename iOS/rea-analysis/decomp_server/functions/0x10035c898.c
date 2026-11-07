// rea decompile_all
// name: FUN_10035c898
// address: 0x10035c898
// body: available
// range: 0x10035c898-0x10035c943 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10035c898(undefined8 param_1,ulong param_2)

{
  long lVar1;
  undefined *puVar2;
  long lVar3;
  undefined1 auStack_80 [32];
  undefined1 auStack_60 [32];
  undefined1 *local_40;
  undefined1 *local_38;
  
  lVar1 = 0x13f;
  __s10Foundation10URLRequestVMa();
  if (param_2 < 0x40) {
    lVar3 = *(long *)(lVar1 + -8);
    puVar2 = &DAT_10081c980;
    _swift_getTupleTypeLayout2(auStack_60,&DAT_10081c980,lVar3 + 0x40);
    lVar1 = 0x13f;
    local_40 = auStack_60;
    __s10Foundation3URLVMa();
    if (puVar2 < (undefined *)0x40) {
      _swift_getTupleTypeLayout2(auStack_80,*(long *)(lVar1 + -8) + 0x40,lVar3 + 0x40);
      local_38 = auStack_80;
      _swift_initEnumMetadataMultiPayload(param_1,0x100,2,&local_40);
    }
  }
  return;
}

