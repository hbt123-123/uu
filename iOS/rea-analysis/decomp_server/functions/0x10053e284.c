// rea decompile_all
// name: FUN_10053e284
// address: 0x10053e284
// body: available
// range: 0x10053e284-0x10053e393 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10053e378 to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_10053e284(undefined8 param_1,undefined8 param_2,undefined8 param_3,uint param_4,ulong param_5,
             undefined8 param_6,undefined8 param_7,uint param_8)

{
  FUN_10057019c(param_5,param_1);
  if ((param_5 & 1) != 0) {
    if ((param_8 & 0xff) == 0xc) {
      if ((param_4 & 0xff) != 0xc) {
        return 0;
      }
    }
    else {
      if ((param_4 & 0xff) == 0xc) {
        return 0;
      }
      if (*(long *)(&DAT_100837c98 + (long)(char)param_8 * 8) !=
          *(long *)(&DAT_100837c98 + (long)(char)param_4 * 8)) {
        return 0;
      }
    }
    if ((param_8 >> 8 & 0xff) == 0xc) {
      if ((param_4 >> 8 & 0xff) == 0xc) {
LAB_10053e358:
        FUN_1000094a4(param_6,param_7,param_2,param_3);
        return param_6;
      }
    }
    else if (((param_4 >> 8 & 0xff) != 0xc) &&
            (*(long *)(&DAT_100837c98 + (long)(char)(param_8 >> 8) * 8) ==
             *(long *)(&DAT_100837c98 + (long)(char)(param_4 >> 8) * 8))) goto LAB_10053e358;
  }
  return 0;
}

