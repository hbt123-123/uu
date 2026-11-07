// rea decompile_all
// name: FUN_10040c84c
// address: 0x10040c84c
// body: available
// range: 0x10040c84c-0x10040c8bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10040c84c(uint param_1,int param_2,ulong param_3,code *param_4,undefined8 param_5,
                  code *param_6)

{
  uint uVar1;
  ulong uVar2;
  
  if (((param_1 & 1) != 0) && ((param_3 & 0x100000000) == 0)) {
    if ((int)param_3 != param_2) {
      uVar2 = param_3;
      (*param_4)();
      if ((uVar2 & 1) == 0) {
        uVar1 = 1;
      }
      else {
        (*param_6)(param_3);
        uVar1 = (uint)param_3 ^ 1;
      }
      return uVar1 & 1;
    }
    param_1 = 0;
  }
  return param_1 & 1;
}

