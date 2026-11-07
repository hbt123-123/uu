// rea decompile_all
// name: FUN_1004884c0
// address: 0x1004884c0
// body: available
// range: 0x1004884c0-0x1004885ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004884c0(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int *unaff_x20;
  long unaff_x21;
  code *pcVar4;
  long local_50;
  undefined1 local_48;
  
  if ((*unaff_x20 == 0) ||
     ((**(code **)(param_3 + 0x18))(*unaff_x20,1,param_2,param_3), unaff_x21 == 0)) {
    uVar3 = *(ulong *)(unaff_x20 + 2);
    uVar2 = *(ulong *)(unaff_x20 + 4);
    uVar1 = uVar3 & 0xffffffffffff;
    if ((uVar2 & 0x2000000000000000) != 0) {
      uVar1 = uVar2 >> 0x38 & 0xf;
    }
    if ((uVar1 == 0) ||
       ((**(code **)(param_3 + 0x70))(uVar3,uVar2,2,param_2,param_3), unaff_x21 == 0)) {
      if (*(long *)(unaff_x20 + 6) != 0) {
        local_48 = (undefined1)unaff_x20[8];
        pcVar4 = *(code **)(param_3 + 0x80);
        local_50 = *(long *)(unaff_x20 + 6);
        FUN_1004930f8();
        (*pcVar4)(&local_50,3,&DAT_1009c5f98,uVar3,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      FUN_10056301c(param_1,*(undefined8 *)(unaff_x20 + 10),*(undefined8 *)(unaff_x20 + 0xc),param_2
                    ,param_3);
    }
  }
  return;
}

