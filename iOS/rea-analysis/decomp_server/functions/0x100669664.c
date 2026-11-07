// rea decompile_all
// name: FUN_100669664
// address: 0x100669664
// body: available
// range: 0x100669664-0x10066976b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_100669664(long param_1,ulong param_2)

{
  code *pcVar1;
  long lVar2;
  ulong uVar3;
  size_t sVar4;
  
  uVar3 = *(ulong *)(param_1 + 0x10);
  if ((long)uVar3 < (long)param_2) {
    _swift_bridgeObjectRetain(param_1);
    do {
      lVar2 = param_1;
      _swift_isUniquelyReferenced_nonNull_native();
      if (((int)lVar2 == 0) || (*(ulong *)(param_1 + 0x18) >> 1 <= uVar3)) {
        FUN_1006295a0();
        param_1 = lVar2;
      }
      sVar4 = *(size_t *)(param_1 + 0x10);
      _memmove((void *)(param_1 + 0x21),(void *)(param_1 + 0x20),sVar4);
      uVar3 = sVar4 + 1;
      *(ulong *)(param_1 + 0x10) = uVar3;
      *(undefined1 *)(param_1 + 0x20) = 0;
    } while (uVar3 < param_2);
  }
  else {
    _swift_bridgeObjectRetain(param_1);
    if (uVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10066976c);
      (*pcVar1)();
    }
  }
  if (*(char *)(param_1 + 0x20) < '\0') {
    lVar2 = param_1;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)lVar2 == 0) || (*(ulong *)(param_1 + 0x18) >> 1 <= uVar3)) {
      FUN_1006295a0();
      param_1 = lVar2;
    }
    FUN_100650430(0,0,1,0);
  }
  return param_1;
}

