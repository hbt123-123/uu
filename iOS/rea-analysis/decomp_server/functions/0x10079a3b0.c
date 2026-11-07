// rea decompile_all
// name: FUN_10079a3b0
// address: 0x10079a3b0
// body: available
// range: 0x10079a3b0-0x10079a473 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10079a3b0(int *param_1)

{
  int iVar1;
  int *piVar2;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  FUN_10079a33c();
  if ((int)param_1 == -1) {
    return;
  }
  __dyld_get_image_header();
  if (param_1 == (int *)0x0) {
    return;
  }
  iVar1 = *param_1;
  if (iVar1 < -0x1120532) {
    if (iVar1 != -0x31051202) {
      if (iVar1 != -0x30051202) {
        return;
      }
LAB_10079a438:
      piVar2 = param_1 + 8;
      goto LAB_10079a43c;
    }
  }
  else {
    if (iVar1 == -0x1120531) goto LAB_10079a438;
    if (iVar1 != -0x1120532) {
      return;
    }
  }
  piVar2 = param_1 + 7;
LAB_10079a43c:
  iVar1 = param_1[4];
  for (; (iVar1 != 0 && (*piVar2 != 0x1b)); piVar2 = (int *)((long)piVar2 + (ulong)(uint)piVar2[1]))
  {
    iVar1 = iVar1 + -1;
  }
  return;
}

