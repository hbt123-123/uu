// rea decompile_all
// name: FUN_100022244
// address: 0x100022244
// body: available
// range: 0x100022244-0x100022317 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100022244(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  undefined *puVar1;
  long lVar2;
  code *pcVar3;
  undefined *puVar4;
  undefined *puVar5;
  
  param_4 = param_4 >> 1;
  lVar2 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x100022318);
    (*pcVar3)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_1000f0740;
  if (lVar2 != 0) {
    if (0 < lVar2) {
      puVar4 = &DAT_100102c30;
      FUN_10000eb08(&DAT_100102c30,&DAT_1000d0700);
      _swift_allocObject();
      puVar5 = puVar4;
      _malloc_size();
      puVar1 = puVar5 + -0x11;
      if (0x1f < (long)puVar5) {
        puVar1 = puVar5 + -0x20;
      }
      *(long *)(puVar4 + 0x10) = lVar2;
      *(long *)(puVar4 + 0x18) = ((long)puVar1 >> 4) << 1;
    }
    if (param_4 == param_3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100022314);
      (*pcVar3)();
    }
    _swift_arrayInitWithCopy(puVar4 + 0x20,param_2 + param_3 * 0x10,lVar2,PTR___sSSN_1000f02f8);
  }
  return puVar4;
}

