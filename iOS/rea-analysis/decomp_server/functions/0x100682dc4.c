// rea decompile_all
// name: FUN_100682dc4
// address: 0x100682dc4
// body: available
// range: 0x100682dc4-0x100682e67 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_100682dc4(long param_1,undefined8 param_2,uint param_3,long param_4,long param_5,
                  byte param_6,undefined8 param_7)

{
  uint uVar1;
  
  uVar1 = param_3 >> 6 & 3;
  if (uVar1 == 0) {
    if (param_6 < 0x40) {
      return (uint)(param_1 == param_4);
    }
  }
  else if (uVar1 == 1) {
    if ((param_6 & 0xc0) == 0x40) {
      __sSD5IndexV2eeoiySbAByxq__G_ADtFZ
                (param_1,param_2,param_3 & 1,param_4,param_5,param_6 & 1,PTR___sSSN_1009957f8,
                 param_7,PTR___sSSSHsWP_100995808);
      return (uint)param_1 & 1;
    }
  }
  else if ((((param_6 & 0xc0) == 0x80) && (param_5 == 0 && param_4 == 0)) && (param_6 == 0x80)) {
    return 1;
  }
  return 0;
}

