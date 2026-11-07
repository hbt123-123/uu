// rea decompile_all
// name: FUN_100097700
// address: 0x100097700
// body: available
// range: 0x100097700-0x10009777f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100097700(long param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  undefined1 *puVar4;
  undefined1 auStack_50 [24];
  long local_38;
  
  lVar3 = *(long *)(param_1 + 0x10);
  lVar1 = param_1;
  FUN_10008f0c8();
  lVar2 = lVar3;
  __sSh15minimumCapacityShyxGSi_tcfC(lVar3,&DAT_1000fa530,lVar1);
  if (lVar3 != 0) {
    puVar4 = (undefined1 *)(param_1 + 0x31);
    local_38 = lVar2;
    do {
      FUN_1000818b8(auStack_50,*(undefined8 *)(puVar4 + -0x11),*(undefined8 *)(puVar4 + -9),
                    CONCAT11(*puVar4,puVar4[-1]));
      lVar3 = lVar3 + -1;
      puVar4 = puVar4 + 0x18;
    } while (lVar3 != 0);
  }
  return;
}

