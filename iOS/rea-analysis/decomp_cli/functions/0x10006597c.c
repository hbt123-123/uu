// rea decompile_all
// name: FUN_10006597c
// address: 0x10006597c
// body: available
// range: 0x10006597c-0x100065a1f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006597c(undefined8 param_1,long param_2,long param_3,uint param_4)

{
  uint uVar1;
  undefined8 uVar2;
  
  uVar1 = param_4 >> 6 & 3;
  if (uVar1 == 0) {
    __ss6HasherV8_combineyySuF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,param_2,param_3);
  }
  else {
    if (uVar1 != 1) {
      if ((param_3 == 0 && param_2 == 0) && ((param_4 & 0xff) == 0x80)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 2;
      }
      __ss6HasherV8_combineyySuF(uVar2);
      return;
    }
    __ss6HasherV8_combineyySuF(3);
    __sSJ4hash4intoys6HasherVz_tF(param_1,param_2,param_3);
  }
  __ss6HasherV8_combineyys5UInt8VF(param_4 & 1);
  return;
}

