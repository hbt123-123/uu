// rea decompile_all
// name: FUN_1007ae030
// address: 0x1007ae030
// body: available
// range: 0x1007ae030-0x1007ae0c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007ae030(long param_1)

{
  long lVar1;
  long lVar2;
  undefined8 *puVar3;
  long lVar4;
  
  puVar3 = DAT_100b2e348;
  if (0 < *(int *)(DAT_100b2e348 + 1)) {
    lVar4 = 0;
    do {
      lVar1 = *(long *)puVar3[lVar4 + 2];
      if ((lVar1 != 0) && (lVar2 = ((long *)puVar3[lVar4 + 2])[1], lVar2 != 0)) {
        (**(code **)(param_1 + 0x68))(param_1,lVar1,lVar2,1);
        puVar3 = DAT_100b2e348;
      }
      lVar4 = lVar4 + 1;
    } while (lVar4 < *(int *)(puVar3 + 1));
  }
  if ((code *)*puVar3 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x0001007ae0b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)*puVar3)(param_1);
    return;
  }
  return;
}

