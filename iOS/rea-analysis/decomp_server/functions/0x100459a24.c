// rea decompile_all
// name: FUN_100459a24
// address: 0x100459a24
// body: available
// range: 0x100459a24-0x100459b3f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100459a24(undefined8 param_1,undefined8 param_2,long param_3)

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
  uVar2 = unaff_x20[3];
  uVar1 = unaff_x20[2] & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar1 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar1 != 0) &&
     ((**(code **)(param_3 + 0x70))(unaff_x20[2],uVar2,2,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  if (((int)unaff_x20[4] != 0) &&
     ((**(code **)(param_3 + 0x18))((int)unaff_x20[4],3,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  uVar1 = unaff_x20[5];
  uVar2 = unaff_x20[6];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)uVar1;
      lVar6 = (long)uVar1 >> 0x20;
      goto LAB_100459afc;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_100459b1c;
  }
  else {
    if (uVar4 != 2) goto LAB_100459b1c;
    lVar5 = *(long *)(uVar1 + 0x10);
    lVar6 = *(long *)(uVar1 + 0x18);
LAB_100459afc:
    if (lVar5 == lVar6) goto LAB_100459b1c;
  }
  (**(code **)(param_3 + 0x78))(uVar1,uVar2,4,param_2,param_3);
  if (unaff_x21 != 0) {
    return;
  }
LAB_100459b1c:
  FUN_10056301c(param_1,unaff_x20[7],unaff_x20[8],param_2,param_3);
  return;
}

