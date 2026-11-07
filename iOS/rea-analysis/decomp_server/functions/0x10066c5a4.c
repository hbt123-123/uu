// rea decompile_all
// name: FUN_10066c5a4
// address: 0x10066c5a4
// body: available
// range: 0x10066c5a4-0x10066c64b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10066c5a4(undefined *param_1,long param_2,char param_3)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  
  if (param_3 == '\0') {
    _swift_bridgeObjectRetain(param_1);
  }
  else {
    puVar1 = (undefined *)(param_2 - *(long *)(param_1 + 0x10));
    if (SBORROW8(param_2,*(long *)(param_1 + 0x10))) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10066c648);
      (*pcVar2)();
    }
    if ((long)puVar1 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10066c64c);
      (*pcVar2)();
    }
    puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (puVar1 != (undefined *)0x0) {
      puVar3 = puVar1;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                (puVar1,PTR___ss5UInt8VN_100995d40);
      *(undefined **)(puVar3 + 0x10) = puVar1;
      _bzero(puVar3 + 0x20,(size_t)puVar1);
    }
    _swift_bridgeObjectRetain(param_1);
    FUN_100628ae0();
    param_1 = puVar3;
  }
  return param_1;
}

