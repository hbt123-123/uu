// rea decompile_all
// name: FUN_10066abd0
// address: 0x10066abd0
// body: available
// range: 0x10066abd0-0x10066acef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_10066abd0(long param_1,long param_2)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined *puVar5;
  long lVar6;
  
  lVar6 = *(long *)(param_1 + 0x10) + 3;
  if (SCARRY8(*(long *)(param_1 + 0x10),3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10066acdc);
    (*pcVar2)();
  }
  if (param_2 == 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10066ace0);
    (*pcVar2)();
  }
  if (lVar6 == -0x8000000000000000 && param_2 == -1) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10066acec);
    (*pcVar2)();
  }
  lVar1 = 0;
  if (param_2 != 0) {
    lVar1 = lVar6 / param_2;
  }
  lVar6 = lVar6 - lVar1 * param_2;
  puVar4 = (undefined *)(param_2 - lVar6);
  if (SBORROW8(param_2,lVar6)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x10066ace4);
    (*pcVar2)();
  }
  if ((long)puVar4 < 1) {
    puVar4 = (undefined *)(param_2 + -3);
    if (SBORROW8(param_2,3)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10066acf0);
      (*pcVar2)();
    }
    if ((long)puVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10066ace8);
      (*pcVar2)();
    }
    puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
    if (puVar4 == (undefined *)0x0) goto LAB_10066ac58;
  }
  puVar3 = puVar4;
  __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
            (puVar4,PTR___ss5UInt8VN_100995d40);
  *(undefined **)(puVar3 + 0x10) = puVar4;
  _memset(puVar3 + 0x20,0xff,(size_t)puVar4);
LAB_10066ac58:
  puVar4 = &DAT_100ab7e50;
  FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
  puVar5 = puVar4;
  _swift_initStaticObject();
  FUN_100628ae0(puVar3);
  _swift_initStaticObject(puVar4,&DAT_100ab0938);
  FUN_100628ae0();
  _swift_bridgeObjectRetain(param_1);
  FUN_100628ae0();
  return puVar5;
}

