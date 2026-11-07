// rea decompile_all
// name: FUN_10045a5a4
// address: 0x10045a5a4
// body: available
// range: 0x10045a5a4-0x10045a697 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10045a5a4(undefined8 param_1,undefined8 param_2,long param_3)

{
  int iVar1;
  undefined8 uVar2;
  char *unaff_x20;
  long unaff_x21;
  code *pcVar3;
  long local_50;
  char local_48;
  
  uVar2 = param_1;
  if (*unaff_x20 == '\x01') {
    uVar2 = 1;
    (**(code **)(param_3 + 0x68))(1,1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (*(long *)(unaff_x20 + 8) == 0) {
    iVar1 = *(int *)(unaff_x20 + 0x14);
  }
  else {
    local_48 = unaff_x20[0x10];
    pcVar3 = *(code **)(param_3 + 0x80);
    local_50 = *(long *)(unaff_x20 + 8);
    FUN_10045f2f8();
    (*pcVar3)(&local_50,2,&DAT_1009c0aa0,uVar2,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
    iVar1 = *(int *)(unaff_x20 + 0x14);
  }
  if ((iVar1 == 0) || ((**(code **)(param_3 + 0x18))(iVar1,3,param_2,param_3), unaff_x21 == 0)) {
    FUN_10056301c(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                  param_2,param_3);
  }
  return;
}

