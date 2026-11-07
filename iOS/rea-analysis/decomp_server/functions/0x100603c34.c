// rea decompile_all
// name: FUN_100603c34
// address: 0x100603c34
// body: available
// range: 0x100603c34-0x100603da3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100603da0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100603c34(long param_1,undefined8 param_2)

{
  ulong uVar1;
  void *pvVar2;
  void *pvVar3;
  long unaff_x21;
  ulong uVar4;
  undefined1 auStack_50 [8];
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar4 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  pvVar3 = (void *)(uVar4 * 8);
  if (0xd < (*(byte *)(param_1 + 0x20) & 0x3f)) {
    uVar1 = 0;
    __ss042_stdlib_isOSVersionAtLeastOrVariantVersiondE0yBi1_Bw_BwBwBwBwBwtF(0xc,3,0,0xf,4,0);
    if (((uVar1 & 1) == 0) ||
       (pvVar2 = pvVar3, _swift_stdlib_isStackAllocationSafe(pvVar3,8), ((ulong)pvVar2 & 1) == 0)) {
      pvVar2 = pvVar3;
      _swift_slowAlloc(pvVar3,0xffffffffffffffff);
      _bzero(pvVar2,(size_t)pvVar3);
      FUN_100603da4(pvVar2,uVar4,param_1,param_2);
      _swift_slowDealloc(pvVar2,0xffffffffffffffff,0xffffffffffffffff);
      goto LAB_100603cd8;
    }
  }
  _bzero(auStack_50 + -((long)pvVar3 + 0xfU & 0x3ffffffffffffff0),(size_t)pvVar3);
  FUN_100603da4(auStack_50 + -((long)pvVar3 + 0xfU & 0x3ffffffffffffff0),uVar4,param_1,param_2);
  if (unaff_x21 != 0) {
    _swift_willThrow();
  }
LAB_100603cd8:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

