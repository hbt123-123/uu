// rea decompile_all
// name: FUN_100252c10
// address: 0x100252c10
// body: available
// range: 0x100252c10-0x100252cdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100252c10(long param_1)

{
  long lVar1;
  int iVar2;
  long lVar3;
  
  if (*(long *)(param_1 + 0x101c8) != 0) {
    iVar2 = (int)*(undefined8 *)(param_1 + 66000);
    lVar3 = (long)iVar2 + 2;
    do {
      iVar2 = iVar2 + 1;
      lVar1 = param_1;
      FUN_10025388c(param_1,iVar2,*(int *)(param_1 + 0x8c) == 2);
      if (((int)lVar1 == -1) &&
         ((*(int *)(param_1 + 0x8c) != 2 ||
          (lVar1 = param_1, FUN_10025388c(param_1,iVar2,0), (int)lVar1 != 0)))) {
        return 0xffffffff;
      }
      FUN_10024e8ac(param_1,*(undefined8 *)(param_1 + 0x68),0,2);
      lVar1 = param_1;
      FUN_10024e8c0(param_1,*(undefined8 *)(param_1 + 0x68));
      *(long *)(param_1 + 66000) = lVar3 + -1;
      *(long *)(param_1 + 0x101d8) = lVar3;
      lVar3 = lVar3 + 1;
    } while (*(long *)(param_1 + 0x101c8) == lVar1);
  }
  return 0;
}

