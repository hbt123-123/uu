// rea decompile_all
// name: FUN_10015b16c
// address: 0x10015b16c
// body: available
// range: 0x10015b16c-0x10015b2df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10015b228 to 0x10015a2a0 FUN_10015a2a0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10015b2dc to 0x100006cc8 FUN_100006cc8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10015b16c(undefined8 param_1,ulong param_2,long param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6)

{
  if (0xe < param_2 >> 0x3c || param_3 == 0) {
    FUN_100401b14(0);
    FUN_1003fb45c(FUN_10015b2e0,0,0xd0000000000000a4,0x800000010088d870,0xd00000000000002e,
                  0x8000000100895070,0x17e,7);
    FUN_10015a2a0(param_3,param_4,param_5,param_6);
    return;
  }
  FUN_100401b14(0);
  FUN_10010bd10(param_1,param_2);
  _swift_retain(param_3);
  FUN_1003fb45c(FUN_10016c3a0,param_3,0xd0000000000000a4,0x800000010088d870,0xd00000000000002e,
                0x8000000100895070,0x182,7);
  FUN_10015a68c(param_3,param_1,param_2,param_4,param_5,param_6);
  _swift_release(param_3);
  FUN_100006cc8(param_1,param_2);
  return;
}

