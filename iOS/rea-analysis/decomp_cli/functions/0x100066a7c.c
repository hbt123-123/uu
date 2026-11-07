// rea decompile_all
// name: FUN_100066a7c
// address: 0x100066a7c
// body: available
// range: 0x100066a7c-0x100066b7f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_100066a7c(ulong param_1,long param_2,uint param_3,ulong param_4,long param_5,uint param_6)

{
  uint uVar1;
  
  uVar1 = param_3 >> 6 & 3;
  if (uVar1 == 0) {
    if (0x3f < (param_6 & 0xff)) {
      return 0;
    }
    if ((param_1 == param_4) && (param_2 == param_5)) goto joined_r0x000100066ae8;
  }
  else {
    if (uVar1 != 1) {
      if ((param_2 == 0 && param_1 == 0) && ((param_3 & 0xff) == 0x80)) {
        if ((param_6 & 0xc0) != 0x80) {
          return 0;
        }
        if (param_5 != 0 || param_4 != 0) {
          return 0;
        }
      }
      else {
        if ((param_6 & 0xc0) != 0x80) {
          return 0;
        }
        if (param_4 != 1) {
          return 0;
        }
        if (param_5 != 0) {
          return 0;
        }
      }
      if ((param_6 & 0xff) != 0x80) {
        return 0;
      }
      return 1;
    }
    if ((param_6 & 0xc0) != 0x40) {
      return 0;
    }
    if ((param_1 == param_4) && (param_2 == param_5)) {
      if ((param_3 & 1) == (param_6 & 1)) {
        return 1;
      }
      return 0;
    }
  }
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (param_1,param_2,param_4,param_5,0);
  if ((param_1 & 1) == 0) {
    return 0;
  }
joined_r0x000100066ae8:
  if (((param_3 ^ param_6) & 1) != 0) {
    return 0;
  }
  return 1;
}

