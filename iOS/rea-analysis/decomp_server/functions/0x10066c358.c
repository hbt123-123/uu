// rea decompile_all
// name: FUN_10066c358
// address: 0x10066c358
// body: available
// range: 0x10066c358-0x10066c47b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10066c358(undefined1 *param_1,long param_2,char param_3)

{
  size_t sVar1;
  code *pcVar2;
  size_t sVar3;
  long lVar4;
  
  if (param_3 == '\0') {
    _swift_bridgeObjectRetain();
  }
  else {
    if (param_3 == '\x01') {
      lVar4 = *(long *)(param_1 + 0x10);
      if (SCARRY8(lVar4,0xb)) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10066c474);
        (*pcVar2)();
      }
      if (lVar4 + 0xb <= param_2) {
        sVar1 = param_2 - lVar4;
        if (-1 < (long)sVar1) {
          if (param_2 != lVar4) {
            sVar3 = sVar1;
            __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                      (sVar1,PTR___ss5UInt8VN_100995d40);
            *(size_t *)(sVar3 + 0x10) = sVar1;
            _bzero((void *)(sVar3 + 0x20),sVar1);
          }
          _swift_bridgeObjectRetain(param_1);
          FUN_100628ae0();
          return;
        }
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10066c47c);
        (*pcVar2)();
      }
    }
    else {
      lVar4 = *(long *)(param_1 + 0x10);
      if (lVar4 != 0) {
        if (SCARRY8(lVar4,0xb)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x10066c478);
          (*pcVar2)();
        }
        if (lVar4 + 0xb <= param_2) {
          FUN_10066a9e8();
          return;
        }
      }
    }
    FUN_10066cb9c();
    _swift_allocError(&DAT_1009e5530,param_1,0,0);
    *param_1 = 8;
    _swift_willThrow();
  }
  return;
}

