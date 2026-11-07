// rea decompile_all
// name: FUN_100489eb0
// address: 0x100489eb0
// body: available
// range: 0x100489eb0-0x100489fa3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100489eb0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar3;
  code *pcVar4;
  
  uVar2 = unaff_x20[1];
  uVar3 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar3 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar3 == 0) ||
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 == 0)) {
    uVar2 = unaff_x20[2];
    uVar1 = unaff_x20[3];
    uVar3 = uVar2 & 0xffffffffffff;
    if ((uVar1 & 0x2000000000000000) != 0) {
      uVar3 = uVar1 >> 0x38 & 0xf;
    }
    if ((uVar3 == 0) ||
       ((**(code **)(param_3 + 0x70))(uVar2,uVar1,2,param_2,param_3), unaff_x21 == 0)) {
      uVar3 = unaff_x20[4];
      if (*(long *)(uVar3 + 0x10) != 0) {
        pcVar4 = *(code **)(param_3 + 0x118);
        FUN_1004932b8();
        (*pcVar4)(uVar3,3,&DAT_1009c6120,uVar2,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      FUN_10056301c(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
    }
  }
  return;
}

