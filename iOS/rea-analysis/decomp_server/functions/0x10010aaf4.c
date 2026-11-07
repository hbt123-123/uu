// rea decompile_all
// name: FUN_10010aaf4
// address: 0x10010aaf4
// body: available
// range: 0x10010aaf4-0x10010abcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10010aaf4(byte param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined1 auStack_40 [16];
  undefined4 local_30;
  byte local_2c;
  
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  FUN_1001c1be4();
  uVar1 = 0;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)(uVar1);
  local_2c = param_1 & 1;
  local_30 = param_2;
  FUN_1003fb45c(FUN_10010bd50,auStack_40,0xd0000000000000a0,0x800000010088b690,0xd000000000000021,
                0x800000010088b790,0x7f,0);
  return;
}

