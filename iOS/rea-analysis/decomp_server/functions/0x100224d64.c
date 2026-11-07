// rea decompile_all
// name: FUN_100224d64
// address: 0x100224d64
// body: available
// range: 0x100224d64-0x100225007 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x100225004 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_opt_self replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Removing unreachable block (ram,0x000100224f68) */

void FUN_100224d64(undefined8 param_1,undefined8 param_2)

{
  ID IVar1;
  undefined *puVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  long lStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  long local_48;
  long local_38;
  
  local_38 = *(long *)PTR____stack_chk_guard_1009954a0;
  IVar1 = NSUserDefaults::standardUserDefaults
                    ((ID)&_OBJC_CLASS___NSUserDefaults,"standardUserDefaults");
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(param_1,param_2);
  IVar1 = NSUserDefaults::objectForKey_(IVar1,"objectForKey:",param_1);
  if (IVar1 == 0) {
    uStack_78 = 0;
    local_80 = 0;
    lStack_68 = 0;
    uStack_70 = 0;
  }
  else {
    __ss018_bridgeAnyObjectToB0yypyXlSgF(&local_80,IVar1);
    _swift_unknownObjectRelease(IVar1);
  }
  uStack_58 = uStack_78;
  local_60 = local_80;
  local_48 = lStack_68;
  uStack_50 = uStack_70;
  if (lStack_68 == 0) {
    FUN_100224220(&local_60);
  }
  else {
    puVar2 = &DAT_100a7e7c8;
    FUN_100004bb4(&DAT_100a7e7c8,&DAT_100813f00);
    puVar3 = &local_88;
    _swift_dynamicCast(puVar3,&local_60,PTR___sypN_100995e88 + 8,puVar2,6);
    if (((ulong)puVar3 & 1) != 0) {
      uVar4 = local_88;
      __sSD10FoundationE19_bridgeToObjectiveCSo12NSDictionaryCyF
                (local_88,PTR___sSSN_1009957f8,PTR___syXlN_100995e80 + 8,PTR___sSSSHsWP_100995808);
      _swift_bridgeObjectRelease(local_88);
      local_60 = 0;
      pcVar6 = "dataWithJSONObject:options:error:";
      IVar1 = NSJSONSerialization::dataWithJSONObject_options_error_
                        ((ID)&_OBJC_CLASS___NSJSONSerialization,"dataWithJSONObject:options:error:",
                         uVar4,0,&local_60);
      if (IVar1 != 0) {
        __s10Foundation4DataV36_unconditionallyBridgeFromObjectiveCyACSo6NSDataCSgFZ(IVar1);
        uVar4 = 0;
        __s10Foundation11JSONDecoderCMa();
        _swift_allocObject();
        __s10Foundation11JSONDecoderCACycfc();
        uVar5 = 0;
        FUN_10022b35c(0);
        puVar2 = &DAT_100a7e7c0;
        FUN_100005c90(&DAT_100a7e7c0,FUN_10022b35c,&TargetProtocolConformanceDescriptor_100813938);
        __s10Foundation11JSONDecoderC6decode_4fromxxm_AA4DataVtKSeRzlFTj
                  (&local_60,uVar5,IVar1,pcVar6,uVar5,puVar2);
        FUN_100006cdc(IVar1,pcVar6);
        _swift_release(uVar4);
        uVar4 = local_60;
        goto LAB_100224fbc;
      }
      uVar4 = local_60;
      __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_60);
      _swift_willThrow(0);
      _swift_errorRelease(uVar4);
    }
  }
  uVar4 = 0;
LAB_100224fbc:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(uVar4);
  }
  return;
}

