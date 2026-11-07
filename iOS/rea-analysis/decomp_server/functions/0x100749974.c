// rea decompile_all
// name: SentryCrashWrapper::isBeingTraced
// address: 0x100749974
// body: available
// range: 0x100749974-0x100749977 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* Function Stack Size: 0x10 bytes */

bool SentryCrashWrapper::isBeingTraced(ID param_1,SEL param_2)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  size_t sStack_2c8;
  int aiStack_2c0 [3];
  pid_t pStack_2b4;
  undefined1 auStack_2b0 [32];
  uint uStack_290;
  long lStack_28;
  
  lStack_28 = *(long *)PTR____stack_chk_guard_1009954a0;
  uStack_290 = 0;
  sStack_2c8 = 0x288;
  aiStack_2c0[0] = 1;
  aiStack_2c0[1] = 0xe;
  aiStack_2c0[2] = 1;
  pStack_2b4 = _getpid();
  iVar1 = _sysctl(aiStack_2c0,4,auStack_2b0,&sStack_2c8,(void *)0x0,0);
  if (iVar1 == 0) {
    uVar2 = uStack_290 >> 0xb & 1;
  }
  else {
    piVar3 = ___error();
    _strerror(*piVar3);
    FUN_1007b02e4("ERROR",
                  "/Users/runner/work/sentry-cocoa/sentry-cocoa/Sources/SentryCrash/Recording/Tools/SentryCrashDebug.c"
                  ,0x37,"sysctl: %s");
    uVar2 = 0;
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 == lStack_28) {
    return uVar2;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

