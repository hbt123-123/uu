// rea decompile_all
// name: FUN_1005a2b48
// address: 0x1005a2b48
// body: available
// range: 0x1005a2b48-0x1005a2c43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005a2b48(undefined8 param_1,undefined8 param_2,long param_3)

{
  long *unaff_x20;
  long unaff_x21;
  
  if (((*(long *)(*unaff_x20 + 0x10) == 0) ||
      ((**(code **)(param_3 + 0x138))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
     ((*(long *)(unaff_x20[1] + 0x10) == 0 ||
      ((**(code **)(param_3 + 0x138))(unaff_x20[1],2,param_2,param_3), unaff_x21 == 0)))) {
    if (unaff_x20[6] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[5],unaff_x20[6],3,param_2,param_3);
    }
    if (unaff_x21 == 0) {
      if (unaff_x20[8] != 0) {
        (**(code **)(param_3 + 0x70))(unaff_x20[7],unaff_x20[8],4,param_2,param_3);
      }
      if (*(long *)(unaff_x20[2] + 0x10) != 0) {
        (**(code **)(param_3 + 0x100))(unaff_x20[2],6,param_2,param_3);
      }
      FUN_10056301c(param_1,unaff_x20[3],unaff_x20[4],param_2,param_3);
    }
  }
  return;
}

