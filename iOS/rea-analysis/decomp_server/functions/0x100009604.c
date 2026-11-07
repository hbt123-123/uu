// rea decompile_all
// name: FUN_100009604
// address: 0x100009604
// body: available
// range: 0x100009604-0x10000974f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100009604(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined1 auStack_70 [16];
  char local_31;
  
  if ((*(byte *)(param_3 + 0x28) & 1) == 0) {
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_1000097e8,0,0xd000000000000094,0x8000000100876ae0,0x5f28747265736e69,
                  0xee00293a726f663a,0x28,0);
  }
  else {
    (*(code *)PTR____chkstk_darwin_100995498)();
    FUN_100407cdc(&local_31,FUN_100009ad8,auStack_70,PTR___sSbN_1009958c8);
    if (local_31 == '\x01') {
      FUN_100401b14(0);
      FUN_1003fb4bc(FUN_100009af4);
    }
  }
  return;
}

