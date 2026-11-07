// rea decompile_all
// name: FUN_1004ecfdc
// address: 0x1004ecfdc
// body: available
// range: 0x1004ecfdc-0x1004ed0bf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004ecfdc(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  int *unaff_x20;
  long unaff_x21;
  long lVar4;
  code *pcVar5;
  
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
      lVar4 = *(long *)(unaff_x20 + 6);
      if (*(long *)(lVar4 + 0x10) != 0) {
        pcVar5 = *(code **)(param_3 + 0x118);
        FUN_1004f0ca8();
        (*pcVar5)(lVar4,3,&DAT_1009cd0f0,uVar3,param_2,param_3);
        if (unaff_x21 != 0) {
          return;
        }
      }
      FUN_10056301c(param_1,*(undefined8 *)(unaff_x20 + 8),*(undefined8 *)(unaff_x20 + 10),param_2,
                    param_3);
    }
  }
  return;
}

