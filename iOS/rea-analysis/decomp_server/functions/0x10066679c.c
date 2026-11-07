// rea decompile_all
// name: FUN_10066679c
// address: 0x10066679c
// body: available
// range: 0x10066679c-0x100666867 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10066679c(undefined2 param_1,undefined *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined2 *puVar3;
  undefined *puVar4;
  
  puVar3 = (undefined2 *)0x2;
  _swift_slowAlloc(2,0xffffffffffffffff);
  *puVar3 = param_1;
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100666864);
    (*pcVar2)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (param_2 != (undefined *)0x0) {
    puVar4 = param_2;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (param_2,PTR___ss5UInt8VN_100995d40);
    *(undefined **)(puVar4 + 0x10) = param_2;
    puVar1 = puVar4 + 0x20;
    _bzero(puVar1,(size_t)param_2);
    if (*(undefined **)(puVar4 + 0x10) <= param_2 + -1) {
LAB_100666864:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100666868);
      (*pcVar2)();
    }
    puVar1[(long)(param_2 + -1)] = *(undefined1 *)puVar3;
    if (param_2 != (undefined *)0x1) {
      if (*(undefined **)(puVar4 + 0x10) <= param_2 + -2) goto LAB_100666864;
      puVar1[(long)(param_2 + -2)] = *(undefined1 *)((long)puVar3 + 1);
    }
  }
  _swift_slowDealloc();
  return puVar4;
}

