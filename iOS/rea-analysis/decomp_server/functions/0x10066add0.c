// rea decompile_all
// name: FUN_10066add0
// address: 0x10066add0
// body: available
// range: 0x10066add0-0x10066af03 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10066ae84 to 0x10066a9e8 FUN_10066a9e8 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10066ae9c to 0x10066ad14 FUN_10066ad14 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10066aeb8 to 0x100668ba0 FUN_100668ba0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10066aee4 to 0x10066abd0 FUN_10066abd0 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x10066aef8 to 0x100668a40 FUN_100668a40 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10066add0(long param_1,long param_2,byte param_3)

{
  size_t sVar1;
  code *pcVar2;
  size_t sVar3;
  long lVar4;
  
  if (3 < param_3) {
    if (5 < param_3) {
      if (param_3 != 6) {
        FUN_100668a40();
        return;
      }
      FUN_100668ba0();
      return;
    }
    if (param_3 != 4) {
      FUN_10066abd0();
      return;
    }
    FUN_10066a9e8();
    return;
  }
  if (1 < param_3) {
    FUN_10066ad14();
    return;
  }
  if (param_3 != 0) {
    if (param_2 == 0) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10066af00);
      (*pcVar2)();
    }
    lVar4 = 0;
    if (param_2 != 0) {
      lVar4 = *(long *)(param_1 + 0x10) / param_2;
    }
    lVar4 = *(long *)(param_1 + 0x10) - lVar4 * param_2;
    sVar1 = param_2 - lVar4;
    if (SBORROW8(param_2,lVar4)) {
                    /* WARNING: Does not return */
      pcVar2 = (code *)SoftwareBreakpoint(1,0x10066af04);
      (*pcVar2)();
    }
    if (0 < (long)sVar1) {
      sVar3 = sVar1;
      __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
                (sVar1,PTR___ss5UInt8VN_100995d40);
      *(size_t *)(sVar3 + 0x10) = sVar1;
      _bzero((void *)(sVar3 + 0x20),sVar1);
      _swift_bridgeObjectRetain(param_1);
      FUN_100628ae0(sVar3);
      return;
    }
  }
  _swift_bridgeObjectRetain();
  return;
}

