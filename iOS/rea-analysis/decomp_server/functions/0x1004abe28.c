// rea decompile_all
// name: FUN_1004abe28
// address: 0x1004abe28
// body: available
// range: 0x1004abe28-0x1004abf37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004abe28(undefined8 param_1,undefined8 param_2,long param_3)

{
  char *pcVar1;
  long lVar2;
  char *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  long local_50;
  char local_48;
  
  pcVar1 = unaff_x20;
  FUN_1004adf30();
  if (unaff_x21 == 0) {
    if (*unaff_x20 == '\x01') {
      pcVar1 = (char *)0x1;
      (**(code **)(param_3 + 0x68))(1,2,param_2,param_3);
    }
    if (*(long *)(unaff_x20 + 8) == 0) {
      lVar2 = *(long *)(unaff_x20 + 0x18);
    }
    else {
      local_48 = unaff_x20[0x10];
      pcVar3 = *(code **)(param_3 + 0x80);
      local_50 = *(long *)(unaff_x20 + 8);
      FUN_1004b90f0();
      (*pcVar3)(&local_50,3,&DAT_1009c07d0,pcVar1,param_2,param_3);
      lVar2 = *(long *)(unaff_x20 + 0x18);
    }
    if (lVar2 != 0) {
      (**(code **)(param_3 + 0x30))(lVar2,4,param_2,param_3);
    }
    FUN_10056301c(param_1,*(undefined8 *)(unaff_x20 + 0x20),*(undefined8 *)(unaff_x20 + 0x28),
                  param_2,param_3);
  }
  return;
}

