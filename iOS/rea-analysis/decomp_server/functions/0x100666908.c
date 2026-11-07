// rea decompile_all
// name: thunk_FUN_10066690c
// address: 0x100666908
// body: available
// range: 0x100666908-0x10066690b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * thunk_FUN_10066690c(undefined8 param_1,undefined *param_2)

{
  undefined *puVar1;
  code *pcVar2;
  undefined8 *puVar3;
  undefined *puVar4;
  
  puVar3 = (undefined8 *)0x8;
  _swift_slowAlloc(8,0xffffffffffffffff);
  *puVar3 = param_1;
  if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100666a98);
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
LAB_100666a90:
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100666a94);
      (*pcVar2)();
    }
    puVar1[(long)(param_2 + -1)] = *(undefined1 *)puVar3;
    if (param_2 != (undefined *)0x1) {
      if (*(undefined **)(puVar4 + 0x10) <= param_2 + -2) goto LAB_100666a90;
      puVar1[(long)(param_2 + -2)] = *(undefined1 *)((long)puVar3 + 1);
      if (param_2 != (undefined *)0x2) {
        if (*(undefined **)(puVar4 + 0x10) <= param_2 + -3) goto LAB_100666a90;
        puVar1[(long)(param_2 + -3)] = *(undefined1 *)((long)puVar3 + 2);
        if (param_2 != (undefined *)0x3) {
          if (*(undefined **)(puVar4 + 0x10) <= param_2 + -4) goto LAB_100666a90;
          puVar1[(long)(param_2 + -4)] = *(undefined1 *)((long)puVar3 + 3);
          if (param_2 != (undefined *)0x4) {
            if (*(undefined **)(puVar4 + 0x10) <= param_2 + -5) goto LAB_100666a90;
            puVar1[(long)(param_2 + -5)] = *(undefined1 *)((long)puVar3 + 4);
            if (param_2 != (undefined *)0x5) {
              if (*(undefined **)(puVar4 + 0x10) <= param_2 + -6) goto LAB_100666a90;
              puVar1[(long)(param_2 + -6)] = *(undefined1 *)((long)puVar3 + 5);
              if (param_2 != (undefined *)0x6) {
                if (*(undefined **)(puVar4 + 0x10) <= param_2 + -7) goto LAB_100666a90;
                puVar1[(long)(param_2 + -7)] = *(undefined1 *)((long)puVar3 + 6);
                if (param_2 != (undefined *)0x7) {
                  if (*(undefined **)(puVar4 + 0x10) <= param_2 + -8) goto LAB_100666a90;
                  puVar1[(long)(param_2 + -8)] = *(undefined1 *)((long)puVar3 + 7);
                }
              }
            }
          }
        }
      }
    }
  }
  _swift_slowDealloc();
  return puVar4;
}

