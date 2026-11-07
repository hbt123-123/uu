// rea decompile_all
// name: FUN_1004ae44c
// address: 0x1004ae44c
// body: available
// range: 0x1004ae44c-0x1004ae5db inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004ae44c(undefined8 param_1,undefined8 param_2,long param_3)

{
  ulong uVar1;
  ulong uVar2;
  uint uVar3;
  long *plVar4;
  long *plVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  long *unaff_x20;
  long unaff_x21;
  code *pcVar9;
  long lVar10;
  long local_60;
  undefined1 local_58;
  
  plVar5 = &local_60;
  plVar4 = unaff_x20;
  FUN_1004ae5dc();
  if (unaff_x21 != 0) {
    return;
  }
  if (*unaff_x20 != 0) {
    local_58 = (undefined1)unaff_x20[1];
    pcVar9 = *(code **)(param_3 + 0x80);
    local_60 = *unaff_x20;
    FUN_1004b90f0();
    (*pcVar9)(&local_60,2,&DAT_1009c07d0,plVar4,param_2,param_3);
    plVar4 = plVar5;
  }
  lVar10 = unaff_x20[2];
  if (*(long *)(lVar10 + 0x10) != 0) {
    pcVar9 = *(code **)(param_3 + 0x118);
    FUN_1004b9630();
    (*pcVar9)(lVar10,3,&DAT_1009c9520,plVar4,param_2,param_3);
  }
  uVar1 = unaff_x20[4];
  uVar2 = unaff_x20[3] & 0xffffffffffff;
  if ((uVar1 & 0x2000000000000000) != 0) {
    uVar2 = uVar1 >> 0x38 & 0xf;
  }
  if (uVar2 != 0) {
    (**(code **)(param_3 + 0x70))(unaff_x20[3],uVar1,4,param_2,param_3);
  }
  lVar10 = unaff_x20[5];
  uVar2 = unaff_x20[6];
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar6 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar6 != 0) {
      lVar7 = (long)(int)lVar10;
      lVar8 = lVar10 >> 0x20;
      goto LAB_1004ae5a4;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_1004ae5c4;
  }
  else {
    if (uVar6 != 2) goto LAB_1004ae5c4;
    lVar7 = *(long *)(lVar10 + 0x10);
    lVar8 = *(long *)(lVar10 + 0x18);
LAB_1004ae5a4:
    if (lVar7 == lVar8) goto LAB_1004ae5c4;
  }
  (**(code **)(param_3 + 0x78))(lVar10,uVar2,5,param_2,param_3);
LAB_1004ae5c4:
  FUN_10056301c(param_1,unaff_x20[7],unaff_x20[8],param_2,param_3);
  return;
}

