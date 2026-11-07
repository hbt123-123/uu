// rea decompile_all
// name: FUN_100666868
// address: 0x100666868
// body: available
// range: 0x100666868-0x100666907 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100666868(undefined1 param_1,undefined *param_2)

{
  code *pcVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  
  puVar2 = (undefined1 *)0x1;
  _swift_slowAlloc(1,0xffffffffffffffff);
  *puVar2 = param_1;
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x100666908);
    (*pcVar1)();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (param_2 != (undefined *)0x0) {
    puVar3 = param_2;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (param_2,PTR___ss5UInt8VN_100995d40);
    *(undefined **)(puVar3 + 0x10) = param_2;
    _bzero(puVar3 + 0x20,(size_t)param_2);
    (puVar3 + 0x20 + (long)param_2)[-1] = param_1;
  }
  _swift_slowDealloc();
  return puVar3;
}

