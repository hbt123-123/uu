// rea decompile_all
// name: FUN_1006376cc
// address: 0x1006376cc
// body: available
// range: 0x1006376cc-0x1006377bb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006376cc(long param_1,size_t param_2)

{
  long lVar1;
  code *pcVar2;
  size_t sVar3;
  size_t sVar4;
  long lVar5;
  
  lVar5 = *(long *)(param_1 + 0x10);
  if (lVar5 == 0) {
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006377bc);
      (*pcVar2)();
    }
    if (param_2 != 0) {
      sVar4 = param_2;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                (param_2,PTR___ss5UInt8VN_100995d40);
      *(size_t *)(sVar4 + 0x10) = param_2;
      _bzero((void *)(sVar4 + 0x20),param_2);
    }
  }
  else {
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006377b4);
      (*pcVar2)();
    }
    lVar1 = 0;
    if (param_2 != 0) {
      lVar1 = lVar5 / (long)param_2;
    }
    lVar5 = lVar5 - lVar1 * param_2;
    if (lVar5 != 0) {
      sVar4 = param_2 - lVar5;
      if (SBORROW8(param_2,lVar5)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1006377b8);
        (*pcVar2)();
      }
      if (0 < (long)sVar4) {
        sVar3 = sVar4;
        __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                  (sVar4,PTR___ss5UInt8VN_100995d40);
        *(size_t *)(sVar3 + 0x10) = sVar4;
        _bzero((void *)(sVar3 + 0x20),sVar4);
        _swift_bridgeObjectRetain(param_1);
        FUN_100628ae0(sVar3);
        return;
      }
    }
    _swift_bridgeObjectRetain();
  }
  return;
}

