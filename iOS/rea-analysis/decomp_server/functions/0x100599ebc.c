// rea decompile_all
// name: FUN_100599ebc
// address: 0x100599ebc
// body: available
// range: 0x100599ebc-0x10059a003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100599ebc(char *param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  char *pcVar2;
  undefined8 *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  char local_43;
  char local_42;
  char local_41;
  
  pcVar1 = param_1;
  if (*(char *)(unaff_x20 + 2) != '\f') {
    pcVar3 = *(code **)(param_3 + 0x80);
    pcVar2 = param_1;
    local_43 = *(char *)(unaff_x20 + 2);
    FUN_1005b26f8();
    pcVar1 = &local_43;
    (*pcVar3)(pcVar1,1,&DAT_1009d4480,pcVar2,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    pcVar2 = pcVar1;
    if (*(char *)((long)unaff_x20 + 0x11) != '\f') {
      pcVar3 = *(code **)(param_3 + 0x80);
      local_42 = *(char *)((long)unaff_x20 + 0x11);
      FUN_1005b26f8();
      pcVar2 = &local_42;
      (*pcVar3)(pcVar2,2,&DAT_1009d4480,pcVar1,param_2,param_3);
    }
    if (unaff_x20[4] != 0) {
      pcVar2 = (char *)unaff_x20[3];
      (**(code **)(param_3 + 0x70))(pcVar2,unaff_x20[4],3,param_2,param_3);
    }
    if (*(char *)(unaff_x20 + 5) != '\f') {
      pcVar3 = *(code **)(param_3 + 0x80);
      local_41 = *(char *)(unaff_x20 + 5);
      FUN_1005b26f8();
      (*pcVar3)(&local_41,4,&DAT_1009d4480,pcVar2,param_2,param_3);
    }
    FUN_10056301c(param_1,*unaff_x20,unaff_x20[1],param_2,param_3);
  }
  return;
}

