// rea decompile_all
// name: FUN_100453b80
// address: 0x100453b80
// body: available
// range: 0x100453b80-0x100453c83 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100453b80(undefined8 param_1,undefined8 param_2,long param_3)

{
  int *unaff_x20;
  long unaff_x21;
  
  if ((((*unaff_x20 == 0) ||
       ((**(code **)(param_3 + 0x18))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) &&
      ((unaff_x20[1] == 0 ||
       ((**(code **)(param_3 + 0x18))(unaff_x20[1],2,param_2,param_3), unaff_x21 == 0)))) &&
     ((((unaff_x20[2] == 0 ||
        ((**(code **)(param_3 + 0x18))(unaff_x20[2],3,param_2,param_3), unaff_x21 == 0)) &&
       ((unaff_x20[3] == 0 ||
        ((**(code **)(param_3 + 0x18))(unaff_x20[3],4,param_2,param_3), unaff_x21 == 0)))) &&
      (((unaff_x20[4] == 0 ||
        ((**(code **)(param_3 + 0x18))(unaff_x20[4],5,param_2,param_3), unaff_x21 == 0)) &&
       ((unaff_x20[5] == 0 ||
        ((**(code **)(param_3 + 0x18))(unaff_x20[5],6,param_2,param_3), unaff_x21 == 0)))))))) {
    FUN_10056301c(param_1,*(undefined8 *)(unaff_x20 + 6),*(undefined8 *)(unaff_x20 + 8),param_2,
                  param_3);
  }
  return;
}

