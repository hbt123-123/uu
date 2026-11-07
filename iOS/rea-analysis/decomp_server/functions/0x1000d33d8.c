// rea decompile_all
// name: FUN_1000d33d8
// address: 0x1000d33d8
// body: available
// range: 0x1000d33d8-0x1000d350f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000d33d8(long param_1,undefined8 param_2)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  undefined *puVar5;
  undefined *local_58;
  undefined *puStack_50;
  undefined1 auStack_48 [8];
  
  lVar4 = *(long *)(param_1 + 8);
  _swift_retain_n(param_2,2);
  lVar2 = lVar4;
  __ss22_minimumMergeRunLengthyS2iF();
  if (lVar2 < lVar4) {
    if (lVar4 < -1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d350c);
      (*pcVar1)();
    }
    puVar5 = (undefined *)(lVar4 / 2);
    puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (1 < lVar4) {
      puVar3 = puVar5;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                (puVar5,&DAT_10099b910);
      *(undefined **)(puVar3 + 0x10) = puVar5;
    }
    local_58 = puVar3 + 0x20;
    puStack_50 = puVar5;
    _swift_retain(param_2);
    FUN_1000d2d8c(&local_58,auStack_48,param_1,lVar2,param_2);
    _swift_release(param_2);
    *(undefined8 *)(puVar3 + 0x10) = 0;
    _swift_release_n(param_2,2);
    _swift_bridgeObjectRelease(puVar3);
  }
  else {
    if (lVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1000d3510);
      (*pcVar1)();
    }
    if (lVar4 != 0) {
      _swift_retain(param_2);
      FUN_1000d2144(0,lVar4,1,param_1,param_2);
    }
    _swift_release_n(param_2,2);
  }
  return;
}

