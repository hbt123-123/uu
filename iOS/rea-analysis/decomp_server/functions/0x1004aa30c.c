// rea decompile_all
// name: FUN_1004aa30c
// address: 0x1004aa30c
// body: available
// range: 0x1004aa30c-0x1004aa49f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004aa30c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  ulong *unaff_x20;
  long unaff_x21;
  ulong uVar7;
  code *pcVar8;
  ulong local_60;
  undefined1 local_58;
  
  FUN_1004ae5dc();
  if (unaff_x21 != 0) {
    return;
  }
  uVar3 = *unaff_x20;
  uVar1 = unaff_x20[1];
  uVar7 = uVar3 & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar7 = uVar1 >> 0x38 & 0xf;
  }
  if (uVar7 != 0) {
    (**(code **)(param_3 + 0x70))(uVar3,uVar1,2,param_2,param_3);
  }
  uVar7 = unaff_x20[2];
  if (*(long *)(uVar7 + 0x10) != 0) {
    pcVar8 = *(code **)(param_3 + 0x118);
    FUN_1004b9370();
    (*pcVar8)(uVar7,3,&DAT_1009c8ea0,uVar3,param_2,param_3);
    uVar3 = uVar7;
  }
  if (unaff_x20[3] != 0) {
    local_58 = (undefined1)unaff_x20[4];
    pcVar8 = *(code **)(param_3 + 0x80);
    local_60 = unaff_x20[3];
    FUN_1004b90f0();
    (*pcVar8)(&local_60,4,&DAT_1009c07d0,uVar3,param_2,param_3);
  }
  uVar7 = unaff_x20[5];
  uVar3 = unaff_x20[6];
  uVar2 = (uint)(uVar3 >> 0x20);
  uVar4 = uVar2 >> 0x1e;
  if (uVar2 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)uVar7;
      lVar6 = (long)uVar7 >> 0x20;
      goto LAB_1004aa468;
    }
    if ((uVar3 & 0xff000000000000) == 0) goto LAB_1004aa488;
  }
  else {
    if (uVar4 != 2) goto LAB_1004aa488;
    lVar5 = *(long *)(uVar7 + 0x10);
    lVar6 = *(long *)(uVar7 + 0x18);
LAB_1004aa468:
    if (lVar5 == lVar6) goto LAB_1004aa488;
  }
  (**(code **)(param_3 + 0x78))(uVar7,uVar3,5,param_2,param_3);
LAB_1004aa488:
  FUN_10056301c(param_1,unaff_x20[7],unaff_x20[8],param_2,param_3);
  return;
}

