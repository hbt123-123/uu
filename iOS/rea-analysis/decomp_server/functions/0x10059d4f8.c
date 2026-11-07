// rea decompile_all
// name: FUN_10059d4f8
// address: 0x10059d4f8
// body: available
// range: 0x10059d4f8-0x10059d65b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10059d4f8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  long *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  lVar2 = *unaff_x20;
  if (*(long *)(lVar2 + 0x10) != 0) {
    pcVar3 = *(code **)(param_3 + 0x118);
    uVar1 = param_1;
    FUN_1005a8754();
    (*pcVar3)(lVar2,2,&DAT_1009d5898,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (unaff_x20[4] != 0) {
    (**(code **)(param_3 + 0x70))(unaff_x20[3],unaff_x20[4],3,param_2,param_3);
  }
  if (unaff_x21 == 0) {
    if ((*(byte *)(unaff_x20 + 6) & 1) == 0) {
      (**(code **)(param_3 + 0x30))(unaff_x20[5],4,param_2,param_3);
    }
    if ((*(byte *)(unaff_x20 + 8) & 1) == 0) {
      (**(code **)(param_3 + 0x20))(unaff_x20[7],5,param_2,param_3);
    }
    if ((*(byte *)(unaff_x20 + 10) & 1) == 0) {
      (**(code **)(param_3 + 0x10))(unaff_x20[9],6,param_2,param_3);
    }
    FUN_10059d65c();
    if (unaff_x20[0xe] != 0) {
      (**(code **)(param_3 + 0x70))(unaff_x20[0xd],unaff_x20[0xe],8,param_2,param_3);
    }
    FUN_10056301c(param_1,unaff_x20[1],unaff_x20[2],param_2,param_3);
  }
  return;
}

