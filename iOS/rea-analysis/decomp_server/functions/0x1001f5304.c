// rea decompile_all
// name: FUN_1001f5304
// address: 0x1001f5304
// body: available
// range: 0x1001f5304-0x1001f5417 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1001f5410 to 0x1007df118 _swift_bridgeObjectRelease (external=false, thunk=true, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Ghidra Listing reports a terminal call at 0x1001f5414 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1001f5304(void)

{
  ulong uVar1;
  undefined8 uVar2;
  long unaff_x20;
  int local_3c;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (*(char *)(unaff_x20 + 0x14) == '\0') {
    uVar2 = 0xe700000000000000;
    uVar1 = 0x676e696e6e7572;
  }
  else {
    if (*(char *)(unaff_x20 + 0x14) != '\x01') {
      if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
        _swift_bridgeObjectRelease(0xe600000000000000);
        return;
      }
      goto LAB_1001f5414;
    }
    uVar2 = 0xe800000000000000;
    uVar1 = 0x6465686361746564;
  }
  __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
            (uVar1,uVar2,0x646574697865,0xe600000000000000,0);
  _swift_bridgeObjectRelease(uVar2);
  if (((uVar1 & 1) == 0) && (0 < *(pid_t *)(unaff_x20 + 0x1c))) {
    _kill(*(pid_t *)(unaff_x20 + 0x1c),9);
    local_3c = 0;
    _waitpid(*(pid_t *)(unaff_x20 + 0x1c),&local_3c,0);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == local_38) {
    return;
  }
LAB_1001f5414:
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

