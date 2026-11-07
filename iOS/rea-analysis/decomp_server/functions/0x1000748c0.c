// rea decompile_all
// name: FUN_1000748c0
// address: 0x1000748c0
// body: available
// range: 0x1000748c0-0x10007498b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_1000748c0(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

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
    pcVar3 = (code *)SoftwareBreakpoint(1,0x10007498c);
    (*pcVar3)();
  }
  puVar4 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar2 != 0) {
    if (0 < lVar2) {
      puVar4 = &DAT_100a75938;
      FUN_100004bb4(&DAT_100a75938,&DAT_10080a930);
      _swift_allocObject();
      puVar5 = puVar4;
      _malloc_size();
      puVar1 = puVar5 + -0x1d;
      if (0x1f < (long)puVar5) {
        puVar1 = puVar5 + -0x20;
      }
      *(long *)(puVar4 + 0x10) = lVar2;
      *(long *)(puVar4 + 0x18) = ((long)puVar1 >> 2) << 1;
    }
    if (param_4 == param_3) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x100074988);
      (*pcVar3)();
    }
    _memcpy(puVar4 + 0x20,(void *)(param_2 + param_3 * 4),lVar2 * 4);
  }
  return puVar4;
}

