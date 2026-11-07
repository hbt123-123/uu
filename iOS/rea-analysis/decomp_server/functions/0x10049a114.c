// rea decompile_all
// name: FUN_10049a114
// address: 0x10049a114
// body: available
// range: 0x10049a114-0x10049a20b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10049a114(undefined8 param_1,ulong param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,long param_6)

{
  long unaff_x21;
  uint uVar1;
  
  uVar1 = (uint)param_2;
  if (((((((param_2 & 1) == 0) ||
         ((**(code **)(param_6 + 0x68))(1,1,param_5,param_6), unaff_x21 == 0)) &&
        (((uVar1 >> 8 & 1) == 0 ||
         ((**(code **)(param_6 + 0x68))(1,2,param_5,param_6), unaff_x21 == 0)))) &&
       (((uVar1 >> 0x10 & 1) == 0 ||
        ((**(code **)(param_6 + 0x68))(1,3,param_5,param_6), unaff_x21 == 0)))) &&
      (((uVar1 >> 0x18 & 1) == 0 ||
       ((**(code **)(param_6 + 0x68))(1,4,param_5,param_6), unaff_x21 == 0)))) &&
     (((param_2 >> 0x20 & 1) == 0 ||
      ((**(code **)(param_6 + 0x68))(1,5,param_5,param_6), unaff_x21 == 0)))) {
    FUN_10056301c(param_1,param_3,param_4,param_5,param_6);
  }
  return;
}

