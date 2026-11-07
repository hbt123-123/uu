// rea decompile_all
// name: FUN_1004ed848
// address: 0x1004ed848
// body: available
// range: 0x1004ed848-0x1004ed963 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004ed848(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  int *unaff_x20;
  long unaff_x21;
  
  if ((*unaff_x20 != 0) &&
     ((**(code **)(param_3 + 0x18))(*unaff_x20,1,param_2,param_3), unaff_x21 != 0)) {
    return;
  }
  uVar2 = *(ulong *)(unaff_x20 + 4);
  uVar3 = *(ulong *)(unaff_x20 + 2) & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar3 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar3 != 0) &&
     ((**(code **)(param_3 + 0x70))(*(ulong *)(unaff_x20 + 2),uVar2,2,param_2,param_3),
     unaff_x21 != 0)) {
    return;
  }
  uVar2 = *(ulong *)(unaff_x20 + 8);
  uVar3 = *(ulong *)(unaff_x20 + 6) & 0xffffffffffff;
  if ((uVar2 & 0x2000000000000000) != 0) {
    uVar3 = uVar2 >> 0x38 & 0xf;
  }
  if ((uVar3 != 0) &&
     ((**(code **)(param_3 + 0x70))(*(ulong *)(unaff_x20 + 6),uVar2,3,param_2,param_3),
     unaff_x21 != 0)) {
    return;
  }
  lVar1 = *(long *)(unaff_x20 + 10);
  uVar3 = *(ulong *)(unaff_x20 + 0xc);
  uVar4 = (uint)(uVar3 >> 0x20);
  uVar5 = uVar4 >> 0x1e;
  if (uVar4 >> 0x1e < 2) {
    if (uVar5 != 0) {
      lVar6 = (long)(int)lVar1;
      lVar7 = lVar1 >> 0x20;
      goto LAB_1004ed920;
    }
    if ((uVar3 & 0xff000000000000) == 0) goto LAB_1004ed940;
  }
  else {
    if (uVar5 != 2) goto LAB_1004ed940;
    lVar6 = *(long *)(lVar1 + 0x10);
    lVar7 = *(long *)(lVar1 + 0x18);
LAB_1004ed920:
    if (lVar6 == lVar7) goto LAB_1004ed940;
  }
  (**(code **)(param_3 + 0x78))(lVar1,uVar3,4,param_2,param_3);
  if (unaff_x21 != 0) {
    return;
  }
LAB_1004ed940:
  FUN_10056301c(param_1,*(undefined8 *)(unaff_x20 + 0xe),*(undefined8 *)(unaff_x20 + 0x10),param_2,
                param_3);
  return;
}

