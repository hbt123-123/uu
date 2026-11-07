// rea decompile_all
// name: FUN_1000916e0
// address: 0x1000916e0
// body: available
// range: 0x1000916e0-0x100091733 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000916e0(long param_1)

{
  long lVar1;
  int *piVar2;
  int iVar3;
  long unaff_x20;
  
  lVar1 = *(long *)(param_1 + 0x10) + 1;
  piVar2 = (int *)(param_1 + 0x20);
  do {
    lVar1 = lVar1 + -1;
    if (lVar1 == 0) {
      iVar3 = 0;
      break;
    }
    iVar3 = *piVar2;
    piVar2 = piVar2 + 0xe;
  } while (iVar3 == 0);
  if (*(int *)(unaff_x20 + 0x20) != 0) {
    iVar3 = *(int *)(unaff_x20 + 0x20);
  }
  (**(code **)(unaff_x20 + 0x10))(iVar3);
  return;
}

