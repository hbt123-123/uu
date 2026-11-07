// rea decompile_all
// name: FUN_1004992ac
// address: 0x1004992ac
// body: available
// range: 0x1004992ac-0x1004993cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004992ac(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *unaff_x20;
  long unaff_x21;
  
  if ((((((*unaff_x20 != '\x01') ||
         ((**(code **)(param_3 + 0x68))(1,1,param_2,param_3), unaff_x21 == 0)) &&
        ((unaff_x20[1] != '\x01' ||
         ((**(code **)(param_3 + 0x68))(1,2,param_2,param_3), unaff_x21 == 0)))) &&
       ((*(int *)(unaff_x20 + 4) == 0 ||
        ((**(code **)(param_3 + 0x18))(*(int *)(unaff_x20 + 4),3,param_2,param_3), unaff_x21 == 0)))
       ) && ((*(int *)(unaff_x20 + 8) == 0 ||
             ((**(code **)(param_3 + 0x18))(*(int *)(unaff_x20 + 8),4,param_2,param_3),
             unaff_x21 == 0)))) &&
     ((unaff_x20[0xc] != '\x01' ||
      ((**(code **)(param_3 + 0x68))(1,5,param_2,param_3), unaff_x21 == 0)))) {
    if (unaff_x20[0x20] != 2) {
      (**(code **)(param_3 + 0x68))(unaff_x20[0x20] & 1,6,param_2,param_3);
    }
    if (unaff_x21 == 0) {
      FUN_10056301c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x18),
                    param_2,param_3);
    }
  }
  return;
}

