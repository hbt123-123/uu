// rea decompile_all
// name: FUN_1007cc540
// address: 0x1007cc540
// body: available
// range: 0x1007cc540-0x1007cc7c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007cc7c0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_1007cc540(long param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 *puVar6;
  long unaff_x21;
  ulong uVar7;
  ulong uVar8;
  long alStack_50 [2];
  
  alStack_50[1] = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar7 = (1L << ((ulong)*(byte *)(param_1 + 0x20) & 0x3f)) + 0x3fU >> 6;
  uVar8 = uVar7 * 8;
  if ((*(byte *)(param_1 + 0x20) & 0x3f) < 0xe) {
    _swift_bridgeObjectRetain_n(param_2,2);
  }
  else {
    uVar4 = 0;
    __ss26_stdlib_isOSVersionAtLeastyBi1_Bw_BwBwtF(0xc,3,0);
    _swift_bridgeObjectRetain_n(param_2,2);
    if (((uVar4 & 1) == 0) ||
       (uVar4 = uVar8, _swift_stdlib_isStackAllocationSafe(uVar8,8), (uVar4 & 1) == 0)) {
      _swift_slowAlloc(uVar8,0xffffffffffffffff);
      uVar4 = uVar7;
      if (uVar7 - 1 <= uVar7) {
        uVar4 = uVar7 - 1;
      }
      if (uVar4 < 4) {
        uVar5 = 0;
      }
      else {
        uVar1 = uVar4 + 1 & 3;
        uVar5 = 4;
        if (uVar1 != 0) {
          uVar5 = uVar1;
        }
        uVar5 = (uVar4 + 1) - uVar5;
        puVar6 = (undefined8 *)(uVar8 + 0x10);
        uVar4 = uVar5;
        do {
          puVar6[-1] = 0;
          puVar6[-2] = 0;
          puVar6[1] = 0;
          *puVar6 = 0;
          puVar6 = puVar6 + 4;
          uVar4 = uVar4 - 4;
        } while (uVar4 != 0);
      }
      do {
        if (uVar7 == uVar5) {
                    /* WARNING: Does not return */
          pcVar3 = (code *)SoftwareBreakpoint(1,0x1007cc7c0);
          (*pcVar3)();
        }
        *(undefined8 *)(uVar8 + uVar5 * 8) = 0;
        uVar5 = uVar5 + 1;
      } while (uVar7 != uVar5);
      _swift_bridgeObjectRetain(param_2);
      uVar4 = uVar8;
      FUN_1007cc360(uVar8,uVar7,param_1,param_2);
      _swift_bridgeObjectRelease(param_2);
      _swift_slowDealloc(uVar8,0xffffffffffffffff,0xffffffffffffffff);
      _swift_bridgeObjectRelease_n(param_2,2);
      goto LAB_1007cc780;
    }
  }
  lVar2 = -(uVar8 + 0xf & 0x3ffffffffffffff0);
  uVar4 = (long)alStack_50 + lVar2;
  uVar8 = uVar7;
  if (uVar7 - 1 <= uVar7) {
    uVar8 = uVar7 - 1;
  }
  if (uVar8 < 4) {
    uVar5 = 0;
  }
  else {
    uVar1 = uVar8 + 1 & 3;
    uVar5 = 4;
    if (uVar1 != 0) {
      uVar5 = uVar1;
    }
    uVar5 = (uVar8 + 1) - uVar5;
    puVar6 = (undefined8 *)(&stack0xffffffffffffffc0 + lVar2);
    uVar8 = uVar5;
    do {
      puVar6[-1] = 0;
      puVar6[-2] = 0;
      puVar6[1] = 0;
      *puVar6 = 0;
      puVar6 = puVar6 + 4;
      uVar8 = uVar8 - 4;
    } while (uVar8 != 0);
  }
  do {
    if (uVar7 == uVar5) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x1007cc7bc);
      (*pcVar3)();
    }
    *(undefined8 *)(uVar4 + uVar5 * 8) = 0;
    uVar5 = uVar5 + 1;
  } while (uVar7 != uVar5);
  _swift_bridgeObjectRetain(param_2);
  FUN_1007cc360(uVar4,uVar7,param_1,param_2);
  _swift_bridgeObjectRelease(param_2);
  if (unaff_x21 == 0) {
    _swift_bridgeObjectRelease_n(param_2,2);
  }
  else {
    _swift_willThrow();
    _swift_bridgeObjectRelease_n(param_2,2);
  }
LAB_1007cc780:
  if (*(long *)PTR____stack_chk_guard_1009954a0 == alStack_50[1]) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}

