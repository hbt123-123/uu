// rea decompile_all
// name: FUN_100349a18
// address: 0x100349a18
// body: available
// range: 0x100349a18-0x100349c43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100349c40 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100349a18(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  undefined8 uVar5;
  ulong *puVar6;
  undefined8 *puVar7;
  uint local_5c;
  long local_58;
  
  local_58 = *(long *)PTR____stack_chk_guard_1009954a0;
  uVar2 = 0;
  __ss26_stdlib_isOSVersionAtLeastyBi1_Bw_BwBwtF(10,0xe,0);
  uVar5 = param_1;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  uVar3 = 1;
  _SecPolicyCreateSSL(1,uVar5);
  uVar4 = param_3;
  _SecTrustSetPolicies(param_3,uVar3);
  if ((uVar2 & 1) == 0) {
    if ((int)uVar4 == 0) {
      local_5c = 0;
      uVar2 = param_3;
      _SecTrustEvaluate(param_3,&local_5c);
      uVar1 = local_5c;
      if (((int)uVar2 != 0) || ((local_5c != 4 && (local_5c != 1)))) {
        uVar5 = 0;
        FUN_100277ad0(0);
        puVar7 = &DAT_100a824a8;
        FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
        _swift_allocError(uVar5,puVar7,0,0);
        *puVar7 = param_1;
        puVar7[1] = param_2;
        puVar7[2] = param_3;
        puVar7[3] = uVar2 & 0xffffffff | (ulong)uVar1 << 0x20;
        puVar7[4] = 0;
        *(undefined1 *)(puVar7 + 5) = 5;
        _swift_storeEnumTagMultiPayload(puVar7,uVar5,0xb);
        _swift_willThrow();
        _swift_bridgeObjectRetain(param_2);
      }
      goto LAB_100349c08;
    }
  }
  else if ((int)uVar4 == 0) {
    FUN_10034c78c(param_3);
    goto LAB_100349c08;
  }
  uVar5 = 0;
  FUN_100277ad0(0);
  puVar6 = &DAT_100a824a8;
  FUN_100005c90(&DAT_100a824a8,FUN_100277ad0,&TargetProtocolConformanceDescriptor_100816c70);
  _swift_allocError(uVar5,puVar6,0,0);
  *puVar6 = param_3;
  puVar6[1] = uVar3;
  puVar6[3] = 0;
  puVar6[4] = 0;
  puVar6[2] = uVar4 & 0xffffffff;
  *(undefined1 *)(puVar6 + 5) = 1;
  _swift_storeEnumTagMultiPayload(puVar6,uVar5,0xb);
  _swift_willThrow();
LAB_100349c08:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_58) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

