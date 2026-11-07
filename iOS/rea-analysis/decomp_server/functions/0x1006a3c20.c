// rea decompile_all
// name: FUN_1006a3c20
// address: 0x1006a3c20
// body: available
// range: 0x1006a3c20-0x1006a3d1b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1006a3c20(long param_1,int param_2)

{
  long lVar1;
  long lVar2;
  void *local_68 [2];
  char local_51;
  timeval local_50;
  
  lVar2 = (long)*(char *)(param_1 + 0x1f);
  if (lVar2 < 0) {
    lVar2 = *(long *)(param_1 + 0x10);
  }
  if (lVar2 != 0) {
    _gettimeofday(&local_50,(void *)0x0);
    local_50.tv_sec = local_50.tv_sec - param_2 * 0x15180;
    FUN_1006928dc(local_68,"xlog");
    FUN_1006a2044();
    if (local_51 < '\0') {
      operator_delete(local_68[0]);
    }
    lVar1 = (long)*(char *)(param_1 + 0x6f);
    if (lVar1 < 0) {
      lVar1 = *(long *)(param_1 + 0x60);
    }
    if (lVar1 != 0) {
      FUN_1006928dc(local_68,"xlog");
      FUN_1006a2044();
      if (local_51 < '\0') {
        operator_delete(local_68[0]);
      }
    }
  }
  return lVar2 != 0;
}

