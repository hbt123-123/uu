// rea decompile_all
// name: FUN_100404f74
// address: 0x100404f74
// body: available
// range: 0x100404f74-0x1004050b7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1004050b4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


size_t FUN_100404f74(long param_1,undefined8 param_2)

{
  size_t sVar1;
  int iVar2;
  long lVar3;
  size_t sVar4;
  size_t sVar5;
  size_t local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  sVar5 = 0x6e776f6e6b6e75;
  local_50 = 0;
  lVar3 = param_1;
  __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg();
  iVar2 = _sysctlbyname((char *)(lVar3 + 0x20),(void *)0x0,&local_50,(void *)0x0,0);
  _swift_release(lVar3);
  sVar1 = local_50;
  if ((iVar2 == 0) && (0 < (long)local_50)) {
    sVar4 = local_50;
    __sSa28_allocateBufferUninitialized15minimumCapacitys06_ArrayB0VyxGSi_tFZ
              (local_50,PTR___ss4Int8VN_100995c20);
    *(size_t *)(sVar4 + 0x10) = sVar1;
    _bzero((void *)(sVar4 + 0x20),sVar1);
    __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(param_1,param_2);
    iVar2 = _sysctlbyname((char *)(param_1 + 0x20),(void *)(sVar4 + 0x20),&local_50,(void *)0x0,0);
    _swift_release(param_1);
    if (iVar2 == 0) {
      sVar5 = sVar4;
      FUN_100108560(sVar4);
      _swift_bridgeObjectRelease(sVar4);
    }
    else {
      _swift_bridgeObjectRelease(sVar4);
    }
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return sVar5;
}

