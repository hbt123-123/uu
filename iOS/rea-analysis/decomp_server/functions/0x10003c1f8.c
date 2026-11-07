// rea decompile_all
// name: FUN_10003c1f8
// address: 0x10003c1f8
// body: available
// range: 0x10003c1f8-0x10003c3eb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10003c3e8 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1 * FUN_10003c1f8(long param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  long unaff_x21;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 auStack_60 [8];
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar4 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  puVar5 = (undefined1 *)(uVar4 * 8);
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    _swift_retain_n(param_2,2);
  }
  else {
    uVar1 = 0;
    __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xc,3,0,0xf,4,0);
    _swift_retain_n(param_2,2);
    if (((uVar1 & 1) == 0) ||
       (puVar2 = puVar5, _swift_stdlib_isStackAllocationSafe(puVar5,8), ((ulong)puVar2 & 1) == 0)) {
      puVar2 = puVar5;
      _swift_slowAlloc(puVar5,0xffffffffffffffff);
      _bzero(puVar2,(size_t)puVar5);
      _swift_retain(param_2);
      puVar3 = puVar2;
      FUN_10003c088(puVar2,uVar4,param_1,param_2);
      _swift_release(param_2);
      _swift_release(param_1);
      _swift_slowDealloc(puVar2,0xffffffffffffffff,0xffffffffffffffff);
      _swift_release_n(param_2,2);
      goto LAB_10003c2f8;
    }
  }
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar3 = auStack_60 + -((ulong)(puVar5 + 0xf) & 0x3ffffffffffffff0);
  _bzero(puVar3,(size_t)puVar5);
  _swift_retain(param_2);
  FUN_10003c088(puVar3,uVar4,param_1,param_2);
  _swift_release(param_1);
  _swift_release(param_2);
  if (unaff_x21 == 0) {
    _swift_release_n(param_2,2);
  }
  else {
    _swift_willThrow();
    _swift_release_n(param_2,2);
  }
LAB_10003c2f8:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return puVar3;
}

