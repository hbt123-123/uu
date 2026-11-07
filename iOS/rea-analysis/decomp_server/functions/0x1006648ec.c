// rea decompile_all
// name: FUN_1006648ec
// address: 0x1006648ec
// body: available
// range: 0x1006648ec-0x1006649df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1006648ec(undefined *param_1,code *param_2,undefined8 param_3,undefined8 param_4)

{
  undefined *puVar1;
  code *pcVar2;
  undefined *puVar3;
  long unaff_x21;
  undefined *local_50;
  undefined *puStack_48;
  long local_38;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1006649c8);
    (*pcVar2)();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (param_1 != (undefined *)0x0) {
    puVar3 = param_1;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ(param_1,param_4);
    *(undefined **)(puVar3 + 0x10) = param_1;
  }
  puVar1 = puVar3 + 0x20;
  local_38 = 0;
  local_50 = puVar1;
  puStack_48 = param_1;
  (*param_2)(&local_50,&local_38);
  if (unaff_x21 == 0) {
    if ((long)param_1 < local_38) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006649d4);
      (*pcVar2)();
    }
    if (local_50 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006649e0);
      (*pcVar2)();
    }
    if (puVar1 != local_50) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006649d8);
      (*pcVar2)();
    }
    *(long *)(puVar3 + 0x10) = local_38;
  }
  else {
    if ((long)param_1 < local_38) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006649cc);
      (*pcVar2)();
    }
    if (local_50 == (undefined *)0x0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006649dc);
      (*pcVar2)();
    }
    if (puVar1 != local_50) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x1006649d0);
      (*pcVar2)();
    }
    *(long *)(puVar3 + 0x10) = local_38;
    _swift_bridgeObjectRelease(puVar3);
  }
  return puVar3;
}

