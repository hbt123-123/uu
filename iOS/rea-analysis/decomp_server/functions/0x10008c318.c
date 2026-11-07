// rea decompile_all
// name: FUN_10008c318
// address: 0x10008c318
// body: available
// range: 0x10008c318-0x10008c377 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10008c318(long param_1)

{
  int iVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  long lVar5;
  int *piVar6;
  int iVar7;
  
  lVar3 = *(long *)(param_1 + 0x10);
  if (lVar3 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x20);
    lVar5 = lVar3 + -1;
    if (lVar5 != 0) {
      piVar6 = (int *)(param_1 + 0x24);
      iVar7 = iVar4;
      do {
        iVar1 = *piVar6;
        iVar2 = iVar1;
        if (iVar7 <= iVar1) {
          iVar1 = iVar7;
          iVar2 = iVar4;
        }
        iVar4 = iVar2;
        lVar5 = lVar5 + -1;
        piVar6 = piVar6 + 1;
        iVar7 = iVar1;
      } while (lVar5 != 0);
    }
  }
  return (ulong)CONCAT14(lVar3 == 0,iVar4);
}

