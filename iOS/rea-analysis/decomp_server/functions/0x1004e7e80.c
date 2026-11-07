// rea decompile_all
// name: FUN_1004e7e80
// address: 0x1004e7e80
// body: available
// range: 0x1004e7e80-0x1004e7f7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004e7e80(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  undefined8 uVar3;
  char *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long local_50;
  char local_48;
  
  uVar3 = param_1;
  if (*unaff_x20 == '\x01') {
    uVar3 = 1;
    (**(code **)(param_3 + 0x68))(1,1,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  if (*(long *)(unaff_x20 + 8) != 0) {
    local_48 = unaff_x20[0x10];
    pcVar4 = *(code **)(param_3 + 0x80);
    local_50 = *(long *)(unaff_x20 + 8);
    FUN_10045f378();
    (*pcVar4)(&local_50,2,&DAT_1009c08f0,uVar3,param_2,param_3);
    if (unaff_x21 != 0) {
      return;
    }
  }
  uVar2 = *(ulong *)(unaff_x20 + 0x20);
  uVar1 = *(ulong *)(unaff_x20 + 0x18) & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 == 0) ||
     ((**(code **)(param_3 + 0x70))(*(ulong *)(unaff_x20 + 0x18),uVar2,3,param_2,param_3),
     unaff_x21 == 0)) {
    FUN_10056301c(param_1,*(undefined8 *)(unaff_x20 + 0x28),*(undefined8 *)(unaff_x20 + 0x30),
                  param_2,param_3);
  }
  return;
}

