// rea decompile_all
// name: FUN_10034c78c
// address: 0x10034c78c
// body: available
// range: 0x10034c78c-0x10034c8df inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10034c8dc to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10034c78c(ulong param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long local_50;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  local_50 = 0;
  _SecTrustEvaluateWithError(param_1,&local_50);
  if ((param_1 & 1) == 0) {
    uVar2 = 0;
    FUN_100277ad0(0);
    puVar3 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(uVar2,puVar3,0,0);
    lVar1 = local_50;
    if (local_50 == 0) {
      uVar4 = 0;
    }
    else {
      uVar4 = 0;
      FUN_1002772a4();
      plVar5 = (long *)&DAT_100a877a0;
      FUN_100005c90(&DAT_100a877a0,FUN_1002772a4,
                    PTR___sSo10CFErrorRefas5Error10FoundationMc_100996330);
      _swift_allocError(uVar4,plVar5,0,0);
      *plVar5 = lVar1;
    }
    *puVar3 = uVar4;
    puVar3[2] = 0;
    puVar3[1] = 0;
    puVar3[4] = 0;
    puVar3[3] = 0;
    *(undefined1 *)(puVar3 + 5) = 3;
    _swift_storeEnumTagMultiPayload(puVar3,uVar2,0xb);
    _swift_willThrow();
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return;
}

