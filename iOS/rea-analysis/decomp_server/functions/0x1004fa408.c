// rea decompile_all
// name: FUN_1004fa408
// address: 0x1004fa408
// body: available
// range: 0x1004fa408-0x1004fa517 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1004fa408(undefined8 param_1,long param_2,ulong param_3,ulong param_4)

{
  size_t sVar1;
  code *pcVar2;
  long lVar3;
  ulong uVar4;
  long *unaff_x20;
  long lVar5;
  long lVar6;
  
  param_4 = param_4 >> 1;
  sVar1 = param_4 - param_3;
  if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)SoftwareBreakpoint(1,0x1004fa50c);
    (*pcVar2)();
  }
  lVar5 = *unaff_x20;
  lVar6 = *(long *)(lVar5 + 0x10);
  if (!SCARRY8(lVar6,sVar1)) {
    lVar3 = lVar5;
    _swift_isUniquelyReferenced_nonNull_native();
    if (((int)lVar3 == 0) ||
       (uVar4 = *(ulong *)(lVar5 + 0x18) >> 1, (long)uVar4 < (long)(lVar6 + sVar1))) {
      FUN_100506f84();
      uVar4 = *(ulong *)(lVar3 + 0x18) >> 1;
      lVar5 = lVar3;
    }
    if (param_4 == param_3) {
      if (0 < (long)sVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1004fa47c);
        (*pcVar2)();
      }
    }
    else {
      if ((long)(uVar4 - *(long *)(lVar5 + 0x10)) < (long)sVar1) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x1004fa514);
        (*pcVar2)();
      }
      _memcpy((void *)(lVar5 + *(long *)(lVar5 + 0x10) + 0x20),(void *)(param_2 + param_3),sVar1);
      if (0 < (long)sVar1) {
        if (SCARRY8(*(long *)(lVar5 + 0x10),sVar1)) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x1004fa518);
          (*pcVar2)();
        }
        *(size_t *)(lVar5 + 0x10) = *(long *)(lVar5 + 0x10) + sVar1;
      }
    }
    _swift_unknownObjectRelease(param_1);
    *unaff_x20 = lVar5;
    return;
  }
                    /* WARNING: Does not return */
  pcVar2 = (code *)SoftwareBreakpoint(1,0x1004fa510);
  (*pcVar2)();
}

