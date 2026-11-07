// rea decompile_all
// name: FUN_10034c39c
// address: 0x10034c39c
// body: available
// range: 0x10034c39c-0x10034c633 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10034c630 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10034c39c(ulong param_1)

{
  code *pcVar1;
  ulong uVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long local_70;
  long local_68;
  
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar10 = param_1 & 0xffffffffffffff8;
  if (param_1 >> 0x3e == 0) {
    uVar8 = *(ulong *)(uVar10 + 0x10);
    puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  else {
    uVar8 = uVar10;
    if ((long)param_1 < 0) {
      uVar8 = param_1;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    puVar7 = PTR___swiftEmptyArrayStorage_100995ea0;
  }
  PTR___swiftEmptyArrayStorage_100995ea0 = puVar7;
  if (uVar8 != 0) {
    uVar9 = 0;
LAB_10034c434:
    do {
      if ((param_1 & 0xc000000000000001) == 0) {
        if (*(ulong *)(uVar10 + 0x10) <= uVar9) {
                    /* WARNING: Does not return */
          pcVar1 = (code *)SoftwareBreakpoint(1,0x10034c5dc);
          (*pcVar1)();
        }
        uVar2 = *(ulong *)(param_1 + uVar9 * 8 + 0x20);
      }
      else {
        uVar2 = uVar9;
        FUN_1002d3940(uVar9,param_1);
      }
      if (SCARRY8(uVar9,1)) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10034c5d8);
        (*pcVar1)();
      }
      uVar11 = uVar9 + 1;
      uVar3 = uVar2;
      _SecPolicyCreateBasicX509();
      local_70 = 0;
      _SecTrustCreateWithCertificates(uVar2,uVar3,&local_70);
      lVar4 = local_70;
      if ((local_70 != 0) && ((int)uVar2 == 0)) {
        uVar2 = 0xb;
        __ss26_stdlib_isOSVersionAtLeastyBi1_Bw_BwBwtF(0xb,0,0);
        if ((uVar2 & 1) == 0) {
          _SecTrustCopyPublicKey();
        }
        else {
          _SecTrustCopyKey();
        }
        if (lVar4 != 0) {
          puVar5 = puVar7;
          _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
          if ((((int)puVar5 == 0) || ((long)puVar7 < 0)) || (((ulong)puVar7 >> 0x3e & 1) != 0)) {
            if ((ulong)puVar7 >> 0x3e == 0) {
              puVar5 = *(undefined **)(((ulong)puVar7 & 0xffffffffffffff8) + 0x10);
            }
            else {
              puVar5 = (undefined *)((ulong)puVar7 & 0xffffffffffffff8);
              if ((long)puVar7 < 0) {
                puVar5 = puVar7;
              }
              __ss18_CocoaArrayWrapperV8endIndexSivg(puVar5);
            }
            puVar6 = (undefined *)0x0;
            FUN_100297038(0,puVar5 + 1,1,puVar7);
            puVar7 = puVar6;
          }
          uVar2 = (ulong)puVar7 & 0xffffffffffffff8;
          uVar9 = *(ulong *)(uVar2 + 0x10);
          if (*(ulong *)(uVar2 + 0x18) >> 1 <= uVar9) {
            puVar7 = (undefined *)(ulong)(1 < *(ulong *)(uVar2 + 0x18));
            FUN_100297038(puVar7,uVar9 + 1,1);
            uVar2 = (ulong)puVar7 & 0xffffffffffffff8;
          }
          *(ulong *)(uVar2 + 0x10) = uVar9 + 1;
          *(long *)(uVar2 + uVar9 * 8 + 0x20) = lVar4;
          uVar9 = uVar11;
          if (uVar11 == uVar8) break;
          goto LAB_10034c434;
        }
      }
      uVar9 = uVar9 + 1;
    } while (uVar11 != uVar8);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(puVar7);
  }
  return;
}

