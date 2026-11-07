// rea decompile_all
// name: FUN_100358018
// address: 0x100358018
// body: available
// range: 0x100358018-0x10035810f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined * FUN_100358018(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  long lVar1;
  code *pcVar2;
  undefined *puVar3;
  undefined *puVar4;
  
  param_4 = param_4 >> 1;
  lVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x100358110);
    (*pcVar2)();
  }
  puVar3 = PTR___swiftEmptyArrayStorage_100995ea0;
  if (lVar1 != 0) {
    if (0 < lVar1) {
      puVar3 = &DAT_100a832d0;
      FUN_100004bb4(&DAT_100a832d0,&DAT_1008177d8);
      _swift_allocObject();
      puVar4 = puVar3;
      _malloc_size();
      *(long *)(puVar3 + 0x10) = lVar1;
      *(long *)(puVar3 + 0x18) = ((long)(puVar4 + -0x20) / 0x28) * 2;
    }
    if (param_4 == param_3) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10035810c);
      (*pcVar2)();
    }
    puVar4 = &DAT_100a832d8;
    FUN_100004bb4(&DAT_100a832d8,&DAT_1008177e0);
    _swift_arrayInitWithCopy(puVar3 + 0x20,param_2 + param_3 * 0x28,lVar1,puVar4);
  }
  return puVar3;
}

