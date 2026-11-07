// rea decompile_all
// name: FUN_1005c31c8
// address: 0x1005c31c8
// body: available
// range: 0x1005c31c8-0x1005c32ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005c31c8(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar2;
  code *pcVar3;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if (((uVar1 == 0) ||
      ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) &&
     ((uVar1 = (ulong)(uint)unaff_x20[2], (uint)unaff_x20[2] == 0 ||
      ((**(code **)(param_3 + 0x18))(uVar1,2,param_2,param_3), unaff_x21 == 0)))) {
    uVar2 = unaff_x20[3];
    if (*(long *)(uVar2 + 0x10) != 0) {
      pcVar3 = *(code **)(param_3 + 0x118);
      FUN_100569038();
      (*pcVar3)(uVar2,3,&DAT_1009d7958,uVar1,param_2,param_3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    FUN_10056301c(param_1,unaff_x20[4],unaff_x20[5],param_2,param_3);
  }
  return;
}

