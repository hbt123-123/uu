// rea decompile_all
// name: FUN_1006722f0
// address: 0x1006722f0
// body: available
// range: 0x1006722f0-0x1006723b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1006722f0(undefined *param_1,undefined8 param_2,code *param_3)

{
  code *pcVar1;
  undefined *puVar2;
  long unaff_x21;
  undefined *local_48;
  undefined *local_40;
  long local_38;
  
  if ((long)param_1 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x1006723ac);
    (*pcVar1)();
  }
  puVar2 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (param_1 != (undefined *)0x0) {
    puVar2 = param_1;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (param_1,PTR___ss6UInt32VN_100995dc0);
    *(undefined **)(puVar2 + 0x10) = param_1;
  }
  local_48 = puVar2 + 0x20;
  local_38 = 0;
  local_40 = param_1;
  (*param_3)(&local_48,&local_38,param_2);
  if (unaff_x21 == 0) {
    if ((long)param_1 < local_38) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006723b4);
      (*pcVar1)();
    }
    *(long *)(puVar2 + 0x10) = local_38;
  }
  else {
    if ((long)param_1 < local_38) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1006723b0);
      (*pcVar1)();
    }
    *(long *)(puVar2 + 0x10) = local_38;
    _swift_bridgeObjectRelease(puVar2);
  }
  return puVar2;
}

