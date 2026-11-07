// rea decompile_all
// name: FUN_10010c284
// address: 0x10010c284
// body: available
// range: 0x10010c284-0x10010c3bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10010c360 to 0x10010c710 FUN_10010c710 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10010c284(undefined8 param_1,undefined8 param_2,undefined8 param_3,ulong param_4,
                  undefined8 param_5,undefined8 param_6,ulong param_7)

{
  if (param_7 >> 0x3e < 3) {
    FUN_100401b14(0);
    FUN_1003fb4bc(thunk_FUN_10010cd20,0,0xd0000000000000ac,0x800000010088b950,&DAT_d000000000000030,
                  0x800000010088ba00,0x36,0);
  }
  else {
    FUN_10011237c(param_5,param_6);
  }
  if (param_4 >> 0x3e == 2) {
    FUN_10010c710(param_1,param_2,param_3,param_4 & 0x3fffffffffffffff);
    return;
  }
  FUN_100401b14(0);
  FUN_1003fb4bc(thunk_FUN_10010cd20,0,0xd0000000000000ac,0x800000010088b950,&DAT_d000000000000030,
                0x800000010088ba00,0x3e,0);
  return;
}

