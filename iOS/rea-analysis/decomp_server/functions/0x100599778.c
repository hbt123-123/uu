// rea decompile_all
// name: FUN_100599778
// address: 0x100599778
// body: available
// range: 0x100599778-0x100599833 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100599778(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  undefined8 *unaff_x20;
  long unaff_x21;
  code *pcVar2;
  char local_41;
  
  uVar1 = param_1;
  if (unaff_x20[4] != 0) {
    uVar1 = unaff_x20[3];
    (**(code **)(param_3 + 0x70))(uVar1,unaff_x20[4],2,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if (*(char *)(unaff_x20 + 2) != '\f') {
      pcVar2 = *(code **)(param_3 + 0x80);
      local_41 = *(char *)(unaff_x20 + 2);
      FUN_1005b26f8();
      (*pcVar2)(&local_41,3,&DAT_1009d4480,uVar1,param_2,param_3);
    }
    FUN_10056301c(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}

