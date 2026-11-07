// rea decompile_all
// name: FUN_10018aa18
// address: 0x10018aa18
// body: available
// range: 0x10018aa18-0x10018aae7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10018aa18(long param_1,code *param_2)

{
  undefined1 auStack_48 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_48,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_10018aae8,0,0xd0000000000000a2,0x8000000100893bb0,0xd000000000000015,
                  0x8000000100893c60,0x82,7);
    _objc_msgSend(*(ID *)(param_1 + 0x20),"clearContents");
    (*param_2)();
    _swift_release(param_1);
  }
  return;
}

