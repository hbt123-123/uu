// rea decompile_all
// name: FUN_10004afbc
// address: 0x10004afbc
// body: available
// range: 0x10004afbc-0x10004b07b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10004b00c to 0x100003ed4 FUN_100003ed4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10004afbc(undefined8 param_1,undefined8 param_2,int param_3)

{
  undefined8 uVar1;
  
  if (((((int)param_1 == 0x5a) || ((int)param_1 == 0)) && (param_3 != 0)) &&
     (uVar1 = param_2, FUN_100003d20(), (int)uVar1 == param_3)) {
    FUN_100003ed4(param_2,param_1);
    return param_2;
  }
  FUN_100401b14(0);
  FUN_1003fb4ec(FUN_10004ad8c,0,0xd0000000000000a5,0x800000010087d1a0,&DAT_d000000000000013,
                0x800000010087d570,0xbd,0);
  return 0x3e9;
}

