// rea decompile_all
// name: thunk_FUN_100629d98
// address: 0x100629d94
// body: available
// range: 0x100629d94-0x100629d97 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * thunk_FUN_100629d98(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  size_t sVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  param_4 = param_4 >> 1;
  sVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100629e54);
    (*pcVar2)();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (sVar1 != 0) {
    if (0 < (long)sVar1) {
      puVar3 = &DAT_100ab7e50;
      FUN_100004bb4(&DAT_100ab7e50,&DAT_100848d10);
      _swift_allocObject();
      puVar4 = puVar3;
      _malloc_size();
      *(size_t *)(puVar3 + 0x10) = sVar1;
      *(long *)(puVar3 + 0x18) = (long)puVar4 * 2 + -0x40;
    }
    if (param_4 == param_3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x100629e50);
      (*pcVar2)();
    }
    _memcpy(puVar3 + 0x20,(void *)(param_2 + param_3),sVar1);
  }
  return puVar3;
}

