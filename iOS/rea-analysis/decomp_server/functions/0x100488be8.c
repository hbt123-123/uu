// rea decompile_all
// name: FUN_100488be8
// address: 0x100488be8
// body: available
// range: 0x100488be8-0x100488ccf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100488be8(undefined8 param_1,undefined8 param_2,long param_3)

{
  undefined8 uVar1;
  char *unaff_x20;
  long unaff_x21;
  long lVar2;
  code *pcVar3;
  
  uVar1 = param_1;
  if (*unaff_x20 == '\x01') {
    uVar1 = 1;
    (**(code **)(param_3 + 0x68))(1,1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  lVar2 = *(long *)(unaff_x20 + 8);
  if (*(long *)(lVar2 + 0x10) != 0) {
    pcVar3 = *(code **)(param_3 + 0x118);
    FUN_100493178();
    (*pcVar3)(lVar2,2,&DAT_1009c5ef8,uVar1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if ((*(long *)(*(long *)(unaff_x20 + 0x10) + 0x10) == 0) ||
     ((**(code **)(param_3 + 0x138))(*(long *)(unaff_x20 + 0x10),3,param_2,param_3), unaff_x21 == 0)
     ) {
    FUN_10056301c(param_1,*(undefined8 *)(unaff_x20 + 0x18),*(undefined8 *)(unaff_x20 + 0x20),
                  param_2,param_3);
  }
  return;
}

