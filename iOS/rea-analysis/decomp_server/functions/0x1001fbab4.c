// rea decompile_all
// name: FUN_1001fbab4
// address: 0x1001fbab4
// body: available
// range: 0x1001fbab4-0x1001fbb87 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001fbb6c to 0x100201d7c FUN_100201d7c (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001fbab4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1001ff388,0,0xd0000000000000a0,0x800000010088d990,0xd000000000000034,
                0x800000010088da40,0x1de,0);
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  uVar1 = *(undefined8 *)(DAT_100b360a8 + 0x98);
  _swift_retain(uVar1);
  FUN_1000bba58();
  _swift_release(uVar1);
  FUN_100201d7c(param_1,param_2,0);
  return;
}

