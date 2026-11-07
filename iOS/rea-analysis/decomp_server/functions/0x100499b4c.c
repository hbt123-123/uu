// rea decompile_all
// name: FUN_100499b4c
// address: 0x100499b4c
// body: available
// range: 0x100499b4c-0x100499cef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100499b4c(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int *unaff_x20;
  long unaff_x21;
  
  if ((*unaff_x20 != 0) &&
     ((**(code **)(param_3 + 0x18))(*unaff_x20,1,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  if ((unaff_x20[1] != 0) &&
     ((**(code **)(param_3 + 0x18))(unaff_x20[1],2,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  if ((unaff_x20[2] != 0) &&
     ((**(code **)(param_3 + 0x18))(unaff_x20[2],3,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  if ((unaff_x20[3] != 0) &&
     ((**(code **)(param_3 + 0x18))(unaff_x20[3],4,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 4);
  uVar2 = *(ulong *)(unaff_x20 + 6);
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar1;
      lVar6 = lVar1 >> 0x20;
      goto LAB_100499c24;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_100499c44;
  }
  else {
    if (uVar4 != 2) goto LAB_100499c44;
    lVar5 = *(long *)(lVar1 + 0x10);
    lVar6 = *(long *)(lVar1 + 0x18);
LAB_100499c24:
    if (lVar5 == lVar6) goto LAB_100499c44;
  }
  (**(code **)(param_3 + 0x78))(lVar1,uVar2,5,param_2,param_3);
  if (unaff_x21 != 0) {
    return;
  }
LAB_100499c44:
  if (((((unaff_x20[8] == 0) ||
        ((**(code **)(param_3 + 0x18))(unaff_x20[8],6,param_2,param_3), unaff_x21 == 0)) &&
       ((*(long *)(unaff_x20 + 10) == 0 ||
        ((**(code **)(param_3 + 0x10))(7,param_2,param_3), unaff_x21 == 0)))) &&
      ((*(long *)(unaff_x20 + 0xc) == 0 ||
       ((**(code **)(param_3 + 0x10))(8,param_2,param_3), unaff_x21 == 0)))) &&
     ((unaff_x20[0xe] == 0 ||
      ((**(code **)(param_3 + 0x18))(unaff_x20[0xe],9,param_2,param_3), unaff_x21 == 0)))) {
    FUN_10056301c(param_1,*(undefined8 *)(unaff_x20 + 0x10),*(undefined8 *)(unaff_x20 + 0x12),
                  param_2,param_3);
  }
  return;
}

