// rea decompile_all
// name: FUN_10034fbb0
// address: 0x10034fbb0
// body: available
// range: 0x10034fbb0-0x10034fc43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10034fbb0(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined1 auStack_58 [8];
  undefined8 local_50;
  long local_48;
  
  lVar4 = *(long *)(param_1 + 0x10);
  lVar3 = lVar4;
  __sSh15minimumCapacityShyxGSi_tcfC(lVar4,PTR___sSSN_1009957f8,PTR___sSSSHsWP_100995808);
  if (lVar4 != 0) {
    puVar5 = (undefined8 *)(param_1 + 0x28);
    local_48 = lVar3;
    do {
      uVar1 = puVar5[-1];
      uVar2 = *puVar5;
      _swift_bridgeObjectRetain(uVar2);
      FUN_10034db08(auStack_58,uVar1,uVar2);
      _swift_bridgeObjectRelease(local_50);
      puVar5 = puVar5 + 2;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
  }
  return;
}

