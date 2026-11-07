// rea decompile_all
// name: FUN_1004ac368
// address: 0x1004ac368
// body: available
// range: 0x1004ac368-0x1004ac43b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004ac368(undefined8 param_1,undefined8 param_2,long param_3)

{
  long lVar1;
  ulong uVar2;
  uint uVar3;
  uint uVar4;
  long lVar5;
  long lVar6;
  int *unaff_x20;
  long unaff_x21;
  
  FUN_1004af658();
  if (unaff_x21 != 0) {
    return;
  }
  if (*unaff_x20 != 0) {
    (**(code **)(param_3 + 0x18))(*unaff_x20,2,param_2,param_3);
  }
  lVar1 = *(long *)(unaff_x20 + 2);
  uVar2 = *(ulong *)(unaff_x20 + 4);
  uVar3 = (uint)(uVar2 >> 0x20);
  uVar4 = uVar3 >> 0x1e;
  if (uVar3 >> 0x1e < 2) {
    if (uVar4 != 0) {
      lVar5 = (long)(int)lVar1;
      lVar6 = lVar1 >> 0x20;
      goto LAB_1004ac3f8;
    }
    if ((uVar2 & 0xff000000000000) == 0) goto LAB_1004ac418;
  }
  else {
    if (uVar4 != 2) goto LAB_1004ac418;
    lVar5 = *(long *)(lVar1 + 0x10);
    lVar6 = *(long *)(lVar1 + 0x18);
LAB_1004ac3f8:
    if (lVar5 == lVar6) goto LAB_1004ac418;
  }
  (**(code **)(param_3 + 0x78))(lVar1,uVar2,3,param_2,param_3);
LAB_1004ac418:
  FUN_10056301c(param_1,*(undefined8 *)(unaff_x20 + 6),*(undefined8 *)(unaff_x20 + 8),param_2,
                param_3);
  return;
}

