// rea decompile_all
// name: FUN_10002a194
// address: 0x10002a194
// body: available
// range: 0x10002a194-0x10002a2f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10002a194(long param_1,long param_2)

{
  long lVar1;
  undefined1 auStack_80 [16];
  long local_70;
  long lStack_68;
  undefined1 auStack_58 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_58,0,0);
  param_1 = param_1 + 0x10;
  _swift_weakLoadStrong();
  if (param_1 != 0) {
    lVar1 = *(long *)(param_1 + 0xa0);
    FUN_100401b14(0);
    local_70 = param_2;
    if (lVar1 == param_2) {
      (*(code *)PTR____chkstk_darwin_100995498)();
      FUN_1003fb48c(FUN_10003ffb4,auStack_80,0xd0000000000000a9,0x8000000100877660,
                    0xd000000000000034,0x800000010087afc0,0x654,0);
      FUN_100013420();
      _swift_release(param_1);
    }
    else {
      (*(code *)PTR____chkstk_darwin_100995498)();
      lStack_68 = param_1;
      FUN_1003fb48c(FUN_10003ffac,auStack_80,0xd0000000000000a9,0x8000000100877660,
                    0xd000000000000034,0x800000010087afc0,0x651,0);
      _swift_release(param_1);
    }
  }
  return;
}

