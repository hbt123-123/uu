// rea decompile_all
// name: FUN_1005d129c
// address: 0x1005d129c
// body: available
// range: 0x1005d129c-0x1005d146f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1005d146c to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005d129c(long param_1,undefined8 param_2)

{
  ulong uVar1;
  void *pvVar2;
  long unaff_x21;
  ulong uVar3;
  void *pvVar4;
  undefined1 auStack_60 [8];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar3 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  pvVar4 = (void *)(uVar3 * 8);
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    _swift_bridgeObjectRetain_n(param_2,2);
  }
  else {
    uVar1 = 0;
    __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xc,3,0,0xf,4,0);
    _swift_bridgeObjectRetain_n(param_2,2);
    if (((uVar1 & 1) == 0) ||
       (pvVar2 = pvVar4, _swift_stdlib_isStackAllocationSafe(pvVar4,8), ((ulong)pvVar2 & 1) == 0)) {
      pvVar2 = pvVar4;
      _swift_slowAlloc(pvVar4,0xffffffffffffffff);
      _bzero(pvVar2,(size_t)pvVar4);
      _swift_bridgeObjectRetain(param_2);
      FUN_1005d1190(pvVar2,uVar3,param_1,param_2);
      _swift_bridgeObjectRelease(param_2);
      _swift_slowDealloc(pvVar2,0xffffffffffffffff,0xffffffffffffffff);
      _swift_bridgeObjectRelease_n(param_2,2);
      goto LAB_1005d1388;
    }
  }
  (*(code *)PTR____chkstk_darwin_100995498)();
  _bzero(auStack_60 + -((long)pvVar4 + 0xfU & 0x3ffffffffffffff0),(size_t)pvVar4);
  FUN_1005d1190(auStack_60 + -((long)pvVar4 + 0xfU & 0x3ffffffffffffff0),uVar3,param_1,param_2);
  if (unaff_x21 == 0) {
    _swift_bridgeObjectRelease_n(param_2,2);
  }
  else {
    _swift_willThrow();
    _swift_bridgeObjectRelease_n(param_2,2);
  }
LAB_1005d1388:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

