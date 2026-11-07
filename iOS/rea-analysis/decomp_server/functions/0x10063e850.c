// rea decompile_all
// name: FUN_10063e850
// address: 0x10063e850
// body: available
// range: 0x10063e850-0x10063e8eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


byte FUN_10063e850(long param_1)

{
  byte bVar1;
  code *pcVar2;
  byte bVar3;
  size_t sVar4;
  long lVar5;
  size_t sVar6;
  
  sVar6 = *(size_t *)(param_1 + 0x10);
  if (sVar6 == 0) {
    bVar3 = 0;
  }
  else {
    sVar4 = sVar6;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (sVar6,PTR___ss5UInt8VN_100995d40);
    *(size_t *)(sVar4 + 0x10) = sVar6;
    _bzero((void *)(sVar4 + 0x20),sVar6);
    bVar3 = 0;
    lVar5 = sVar6 + 0x1f;
    do {
      if (*(long *)(sVar4 + 0x10) <= lVar5 + -0x20) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10063e8ec);
        (*pcVar2)();
      }
      bVar1 = *(byte *)(param_1 + lVar5);
      *(byte *)(sVar4 + lVar5) = bVar3 | bVar1 << 1;
      bVar3 = bVar1 >> 7;
      lVar5 = lVar5 + -1;
    } while (lVar5 != 0x1f);
  }
  return bVar3;
}

