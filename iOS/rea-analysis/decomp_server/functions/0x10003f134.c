// rea decompile_all
// name: FUN_10003f134
// address: 0x10003f134
// body: available
// range: 0x10003f134-0x10003f24b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10003f134(ulong param_1,int param_2)

{
  undefined1 auStack_50 [16];
  int local_40;
  int iStack_3c;
  
  if ((param_1 >> 0x20 & 1) == 0) {
    if ((int)param_1 != param_2) {
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)();
      local_40 = (int)param_1;
      iStack_3c = param_2;
      FUN_1003fb48c(FUN_100040b78,auStack_50,0xd0000000000000a9,0x8000000100877660,
                    0xd000000000000036,0x800000010087c450,0x37e,0);
      return 1;
    }
  }
  else {
    FUN_100401b14(0);
    FUN_1003fb48c(FUN_1000215f8,0,0xd0000000000000a9,0x8000000100877660,0xd000000000000036,
                  0x800000010087c450,0x379,0);
  }
  return 0;
}

