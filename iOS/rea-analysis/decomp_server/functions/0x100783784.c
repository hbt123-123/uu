// rea decompile_all
// name: SentryMigrateSessionInit::setInitFlagIfContainsSameSessionId:envelope:envelopeFilePath:
// address: 0x100783784
// body: available
// range: 0x100783784-0x1007839d7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1007839d4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* Function Stack Size: 0x28 bytes */

bool SentryMigrateSessionInit::setInitFlagIfContainsSameSessionId_envelope_envelopeFilePath_
               (ID param_1,SEL param_2,ID param_3,ID param_4,ID param_5)

{
  ID self;
  ID IVar1;
  ID IVar2;
  ID IVar3;
  long lVar4;
  bool bVar5;
  ID IVar6;
  undefined8 local_130;
  long lStack_128;
  long *local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined1 auStack_f0 [128];
  long local_70;
  
  local_70 = *(long *)PTR____stack_chk_guard_1009954a0;
  lStack_128 = 0;
  local_130 = 0;
  uStack_118 = 0;
  local_120 = (long *)0x0;
  uStack_108 = 0;
  local_110 = 0;
  uStack_f8 = 0;
  uStack_100 = 0;
  self = objc_stub::items(param_4);
  IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_f0,0x10);
  if (IVar1 == 0) {
    bVar5 = 0;
  }
  else {
    lVar4 = *local_120;
    do {
      IVar3 = 0;
      do {
        if (*local_120 != lVar4) {
          _objc_enumerationMutation(self);
        }
        IVar6 = *(ID *)(lStack_128 + IVar3 * 8);
        IVar2 = objc_stub::header(IVar6);
        IVar2 = objc_stub::type(IVar2);
        IVar2 = objc_stub::isEqualToString_(IVar2,&cf_session);
        if ((int)IVar2 != 0) {
          IVar2 = objc_stub::data(IVar6);
          IVar2 = objc_stub::FUN_1007f19a0((ID)&objc::class_t::SentrySerialization,IVar2);
          if (IVar2 != 0) {
            IVar6 = objc_stub::FUN_1007f1880(IVar2);
            IVar6 = objc_stub::isEqual_(IVar6,param_3);
            if ((int)IVar6 != 0) {
              objc_stub::FUN_1007f2fc0(IVar2);
              objc_stub::FUN_1007f6440(param_1,param_4,IVar2,param_5);
              bVar5 = 1;
              goto LAB_100783978;
            }
          }
        }
        IVar3 = IVar3 + 1;
      } while (IVar1 != IVar3);
      IVar1 = objc_stub::countByEnumeratingWithState_objects_count_(self,&local_130,auStack_f0,0x10)
      ;
    } while (IVar1 != 0);
    bVar5 = 0;
  }
LAB_100783978:
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_70) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail(0);
  }
  return bVar5;
}

