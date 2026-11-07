// rea decompile_all
// name: FUN_100053d64
// address: 0x100053d64
// body: available
// range: 0x100053d64-0x100053e43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100053d64(ulong param_1,ulong param_2,ulong param_3,ulong param_4,ulong param_5)

{
  ulong uVar1;
  ulong uVar2;
  
  uVar2 = param_1 & 0xffffffffffff;
  if ((param_2 & 0x2000000000000000) != 0) {
    uVar2 = param_2 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    uVar2 = param_1;
    __sSS5countSivg();
    uVar1 = param_4;
    __sSS5countSivg(param_4,param_5);
    if ((long)uVar2 <= (long)uVar1) {
      uVar2 = param_4 & 0xffffffffffff;
      if ((param_5 & 0x2000000000000000) != 0) {
        uVar2 = param_5 >> 0x38 & 0xf;
      }
      uVar2 = uVar2 * 4;
      if (param_3 >> 0xe <= uVar2 && uVar2 - (param_3 >> 0xe) != 0) {
        do {
          uVar1 = param_2;
          FUN_100053e44(param_1,param_2,param_3,param_4,param_5);
          if ((uVar1 & 1) == 0) {
            return param_3;
          }
          __sSS5index5afterSS5IndexVAD_tF(param_3,param_4,param_5);
        } while (param_3 >> 0xe <= uVar2 && uVar2 - (param_3 >> 0xe) != 0);
      }
    }
  }
  return 0;
}

