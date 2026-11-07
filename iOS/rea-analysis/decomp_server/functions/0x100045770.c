// rea decompile_all
// name: FUN_100045770
// address: 0x100045770
// body: available
// range: 0x100045770-0x1000457df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_100045770(double param_1,int *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  bool bVar6;
  
  iVar1 = param_2[3];
  iVar3 = param_2[4];
  iVar2 = param_3[3];
  iVar4 = param_3[4];
  bVar5 = *param_2 < *param_3;
  if (ABS(*(double *)(param_2 + 6) - param_1) != ABS(*(double *)(param_3 + 6) - param_1)) {
    bVar5 = ABS(*(double *)(param_2 + 6) - param_1) < ABS(*(double *)(param_3 + 6) - param_1);
  }
  if (iVar3 != iVar4) {
    bVar5 = iVar4 < iVar3;
  }
  if (iVar1 != iVar2) {
    bVar5 = iVar2 < iVar1;
  }
  bVar6 = (long)iVar4 * (long)iVar2 < (long)iVar3 * (long)iVar1;
  if ((long)iVar3 * (long)iVar1 - (long)iVar4 * (long)iVar2 == 0) {
    bVar6 = bVar5;
  }
  return bVar6;
}

