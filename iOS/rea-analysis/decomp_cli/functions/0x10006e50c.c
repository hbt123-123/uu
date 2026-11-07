// rea decompile_all
// name: FUN_10006e50c
// address: 0x10006e50c
// body: available
// range: 0x10006e50c-0x10006e60f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10006e50c(long param_1)

{
  code *pcVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  
  lVar5 = *(long *)(param_1 + 0x10);
  lVar4 = *unaff_x20;
  lVar6 = *(long *)(lVar4 + 0x10);
  if (SCARRY8(lVar6,lVar5)) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)SoftwareBreakpoint(1,0x10006e604);
    (*pcVar1)();
  }
  lVar2 = lVar4;
  _swift_isUniquelyReferenced_nonNull_native();
  if (((int)lVar2 == 0) || ((long)(*(ulong *)(lVar4 + 0x18) >> 1) < lVar6 + lVar5)) {
    FUN_10006fd30();
    lVar6 = *(long *)(param_1 + 0x10);
    lVar4 = lVar2;
  }
  else {
    lVar6 = *(long *)(param_1 + 0x10);
  }
  if (lVar6 == 0) {
    _swift_bridgeObjectRelease(param_1);
    if (lVar5 != 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10006e608);
      (*pcVar1)();
    }
  }
  else {
    lVar6 = *(long *)(lVar4 + 0x10);
    if ((long)((*(ulong *)(lVar4 + 0x18) >> 1) - lVar6) < lVar5) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10006e60c);
      (*pcVar1)();
    }
    puVar3 = &DAT_100104438;
    FUN_10000eb08(&DAT_100104438,&DAT_1000d48c8);
    _swift_arrayInitWithCopy(lVar4 + lVar6 * 0x28 + 0x20,param_1 + 0x20,lVar5,puVar3);
    _swift_bridgeObjectRelease(param_1);
    if (lVar5 != 0) {
      if (SCARRY8(*(long *)(lVar4 + 0x10),lVar5)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10006e610);
        (*pcVar1)();
      }
      *(long *)(lVar4 + 0x10) = *(long *)(lVar4 + 0x10) + lVar5;
    }
  }
  *unaff_x20 = lVar4;
  return;
}

