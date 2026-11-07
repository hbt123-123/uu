// rea decompile_all
// name: FUN_10041e740
// address: 0x10041e740
// body: available
// range: 0x10041e740-0x10041e82b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10041e740(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong *unaff_x20;
  long unaff_x21;
  
  uVar2 = unaff_x20[1];
  uVar1 = *unaff_x20 & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 != 0) &&
     ((**(code **)(param_3 + 0x70))(*unaff_x20,uVar2,1,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  if (((int)unaff_x20[2] != 0) &&
     ((**(code **)(param_3 + 0x18))((int)unaff_x20[2],2,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  uVar1 = unaff_x20[3];
  uVar2 = unaff_x20[4];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)uVar1;
      lVar6 = (long)uVar1 >> 0x20;
      goto LAB_10041e7e8;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_10041e808;
  }
  else {
    if (uVar4 != 2) goto LAB_10041e808;
    lVar5 = *(long *)(uVar1 + 0x10);
    lVar6 = *(long *)(uVar1 + 0x18);
LAB_10041e7e8:
    if (lVar5 == lVar6) goto LAB_10041e808;
  }
  (**(code **)(param_3 + 0x78))(uVar1,uVar2,3,param_2,param_3);
  if (unaff_x21 != 0) {
    return;
  }
LAB_10041e808:
  FUN_10056301c(param_1,unaff_x20[5],unaff_x20[6],param_2,param_3);
  return;
}

