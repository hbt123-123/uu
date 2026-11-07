// rea decompile_all
// name: FUN_10004adfc
// address: 0x10004adfc
// body: available
// range: 0x10004adfc-0x10004af43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10004adfc(int param_1)

{
  int iVar1;
  undefined1 auStack_60 [16];
  int local_50;
  
  if (param_1 == 0) {
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_10004a9f4,0,0xd0000000000000a5,0x800000010087d1a0,0xd000000000000012,
                  0x800000010087d250,0xa9,0);
  }
  else {
    iVar1 = param_1;
    FUN_100003a88();
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)();
    local_50 = param_1;
    if (iVar1 != 0) {
      FUN_1003fb48c(FUN_10004af4c,auStack_60,0xd0000000000000a5,0x800000010087d1a0,
                    0xd000000000000012,0x800000010087d250,0xae,0);
      return 1;
    }
    FUN_1003fb4bc(FUN_10004af44,auStack_60,0xd0000000000000a5,0x800000010087d1a0,0xd000000000000012,
                  0x800000010087d250,0xb0,0);
  }
  return 0;
}

