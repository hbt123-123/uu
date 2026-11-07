// rea decompile_all
// name: FUN_1001de4e8
// address: 0x1001de4e8
// body: available
// range: 0x1001de4e8-0x1001de5eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001de4e8(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  undefined *local_50;
  undefined *puStack_48;
  undefined1 auStack_38 [8];
  
  lVar6 = *(long *)(param_1 + 8);
  lVar2 = lVar6;
  __ss22_minimumMergeRunLengthyS2iF();
  if (lVar2 < lVar6) {
    if (lVar6 < -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001de5e8);
      (*pcVar1)();
    }
    puVar5 = (undefined *)(lVar6 / 2);
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (1 < lVar6) {
      puVar3 = &DAT_100a759d8;
      FUN_100004bb4(&DAT_100a759d8,&DAT_10080c0a0);
      puVar4 = puVar5;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ(puVar5,puVar3);
      *(undefined **)(puVar4 + 0x10) = puVar5;
    }
    local_50 = puVar4 + 0x20;
    puStack_48 = puVar5;
    FUN_1001de5ec(&local_50,auStack_38,param_1,lVar2);
    *(undefined8 *)(puVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(puVar4);
  }
  else {
    if (lVar6 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1001de5ec);
      (*pcVar1)();
    }
    if (lVar6 != 0) {
      FUN_1001decd0(0,lVar6,1,param_1);
    }
  }
  return;
}

