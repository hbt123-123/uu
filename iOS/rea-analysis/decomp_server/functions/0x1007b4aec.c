// rea decompile_all
// name: FUN_1007b4aec
// address: 0x1007b4aec
// body: available
// range: 0x1007b4aec-0x1007b4bdf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007b4aec(long param_1)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  undefined *puVar4;
  long lVar5;
  undefined *puVar6;
  undefined *local_50;
  undefined *puStack_48;
  undefined1 auStack_38 [8];
  
  lVar5 = *(long *)(param_1 + 8);
  lVar3 = lVar5;
  __ss22_minimumMergeRunLengthyS2iF();
  if (lVar3 < lVar5) {
    lVar1 = lVar5;
    if (lVar5 < 0) {
      lVar1 = lVar5 + 1;
    }
    if (lVar5 < -1) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b4bdc);
      (*pcVar2)();
    }
    puVar6 = (undefined *)(lVar1 >> 1);
    puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (1 < lVar5) {
      puVar4 = puVar6;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                (puVar6,PTR___sSSN_1009957f8);
      *(undefined **)(puVar4 + 0x10) = puVar6;
    }
    local_50 = puVar4 + 0x20;
    puStack_48 = puVar6;
    FUN_1007b4be0(&local_50,auStack_38,param_1,lVar3);
    *(undefined8 *)(puVar4 + 0x10) = 0;
    _swift_bridgeObjectRelease(puVar4);
  }
  else {
    if (lVar5 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1007b4be0);
      (*pcVar2)();
    }
    if (lVar5 != 0) {
      FUN_1007b4f60(0,lVar5,1,param_1);
    }
  }
  return;
}

