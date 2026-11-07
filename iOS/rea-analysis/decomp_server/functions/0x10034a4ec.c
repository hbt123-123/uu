// rea decompile_all
// name: FUN_10034a4ec
// address: 0x10034a4ec
// body: available
// range: 0x10034a4ec-0x10034a63b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10034a638 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10034a4ec(ulong param_1,code *param_2,undefined8 param_3,ulong param_4)

{
  ulong uVar1;
  undefined8 uVar2;
  ulong *puVar3;
  int local_4c;
  long local_48;
  
  local_48 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar1 = param_4;
  _SecTrustSetPolicies(param_4,param_1);
  if ((int)uVar1 == 0) {
    local_4c = 0;
    _SecTrustEvaluate(param_4,&local_4c);
    if (((int)param_4 != 0) || ((local_4c != 1 && (local_4c != 4)))) {
      (*param_2)();
      _swift_willThrow();
    }
  }
  else {
    uVar2 = 0;
    FUN_100277ad0(0);
    puVar3 = &DAT_100a824a8;
    FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
    _swift_allocError(uVar2,puVar3,0,0);
    *puVar3 = param_4;
    puVar3[1] = param_1;
    puVar3[3] = 0;
    puVar3[4] = 0;
    puVar3[2] = uVar1 & 0xffffffff;
    *(undefined1 *)(puVar3 + 5) = 1;
    _swift_storeEnumTagMultiPayload(puVar3,uVar2,0xb);
    _swift_willThrow();
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_48) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

