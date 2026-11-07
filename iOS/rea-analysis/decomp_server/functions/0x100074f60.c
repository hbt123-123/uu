// rea decompile_all
// name: FUN_100074f60
// address: 0x100074f60
// body: available
// range: 0x100074f60-0x100074fcf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100074f60(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  undefined1 auStack_40 [8];
  long local_38;
  
  lVar2 = *(long *)(param_1 + 0x10);
  lVar1 = lVar2;
  __sSh15minimumCapacityShyxGSi_tcfC(lVar2,PTR___sSiN_100995968,PTR___sSiSHsWP_100995978);
  if (lVar2 != 0) {
    puVar3 = (undefined8 *)(param_1 + 0x20);
    local_38 = lVar1;
    do {
      FUN_10006dbc4(auStack_40,*puVar3);
      lVar2 = lVar2 + -1;
      puVar3 = puVar3 + 1;
    } while (lVar2 != 0);
  }
  return;
}

